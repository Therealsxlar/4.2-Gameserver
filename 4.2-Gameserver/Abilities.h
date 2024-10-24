#pragma once

static FGameplayAbilitySpecHandle* (__fastcall* GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbility)(__int64(Client::BaseAddress() + 0x5267e0));
inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(Client::BaseAddress() + 0x527f20);

FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* Component, const FGameplayAbilitySpecHandle& Handle)
{
    for (int i = 0; i < Component->ActivatableAbilities.Items.Num(); ++i)
    {
        if (Component->ActivatableAbilities.Items[i].Handle.Handle == Handle.Handle)
            return &Component->ActivatableAbilities.Items[i];
    }
    return nullptr;
}

void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle SpecHandle, bool bInputPressed, const FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData)
{
    FGameplayAbilitySpec* bAbilitySpec = FindAbilitySpecFromHandle(AbilitySystem, SpecHandle);

    if (!bAbilitySpec)
    {
        AbilitySystem->ClientActivateAbilityFailed(SpecHandle, PredictionKey.Current);
        LOG("activation failed.");
        return;
    }

    bAbilitySpec->InputPressed = true;

    UGameplayAbility* InstancedAbility = nullptr;
    bool bActivated = InternalTryActivateAbility(AbilitySystem, SpecHandle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData);

    if (bActivated)
    {
        LOG("abilities activated.");
    }
    else
    {
        AbilitySystem->ClientActivateAbilityFailed(SpecHandle, PredictionKey.Current);
        bAbilitySpec->InputPressed = false;
        AbilitySystem->ActivatableAbilities.MarkItemDirty(*bAbilitySpec);
    }
}

static void GrantAbility(UAbilitySystemComponent* ASC, UGameplayAbility* Ability)
{
    FGameplayAbilitySpec Spec = FGameplayAbilitySpec{};
    Spec.Handle.Handle = rand();
    Spec.Ability = Ability;
    Spec.Level = 1;
    Spec.MostRecentArrayReplicationKey = Spec.ReplicationID = Spec.ReplicationKey = Spec.InputID = -1;

    GiveAbility(ASC, &Spec.Handle, Spec);
}

static void GrantAbilities(UAbilitySystemComponent* ASC)
{
    static auto AbilitySet = StaticFindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

    for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); ++i)
    {
        UGameplayAbility* AbilityToUse = (UGameplayAbility*)AbilitySet->GameplayAbilities[i].Get()->DefaultObject;
        GrantAbility(ASC, AbilityToUse);
    }

    UGameplayAbility* CommitExecute = (UGameplayAbility*)StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C")->DefaultObject;
    GrantAbility(ASC, CommitExecute);
}

UGameplayAbility* EmoteAbility(UFortMontageItemDefinitionBase* EmoteAsset)
{
    if (auto SprayEmoteAsset = Cast<UAthenaSprayItemDefinition>(EmoteAsset))
    {
        return StaticFindObject<UGameplayAbility>("/Game/Abilities/Sprays/GAB_Spray_Generic.Default__GAB_Spray_Generic_C");
    }

    return StaticFindObject<UGameplayAbility>("/Game/Abilities/Emotes/GAB_Emote_Generic.Default__GAB_Emote_Generic_C");
}

namespace Abilities
{
    void InitializeAbilities()
    {
        auto FortAbilitySystemComponentAthena = UFortAbilitySystemComponentAthena::StaticClass()->DefaultObject;

        VirtualHook(FortAbilitySystemComponentAthena->Vft, 0xcb, InternalServerTryActivateAbilityHook);
    }
}