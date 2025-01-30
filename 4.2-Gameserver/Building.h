#pragma once

static bool bInfiniteMats = false;

class Building
{
    static void ServerCreateBuildingActor(AFortPlayerControllerAthena* Controller, FBuildingClassData& BuildingClassData, FVector_NetQuantize10& BuildLoc, FRotator& BuildRot, bool bMirrored)
    {
        auto Class = BuildingClassData.BuildingClass.Get();
        TArray<AActor*> BuildingActorsToDestroy;
        char Result;

        if (!Helpers::CantBuild(Client::GetWorld(), Class, BuildLoc, BuildRot, bMirrored, &BuildingActorsToDestroy, &Result))
        {
            for (int i = 0; i < BuildingActorsToDestroy.Num(); i++)
            {
                BuildingActorsToDestroy[i]->K2_DestroyActor();
            }

            if (auto NewBuilding = Actors<ABuildingSMActor>(Class, BuildLoc, BuildRot))
            {
                NewBuilding->bPlayerPlaced = true;
                NewBuilding->Team = EFortTeam(((AFortPlayerStateAthena*)Controller->PlayerState)->TeamIndex);
                NewBuilding->OnRep_Team();
                NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, Controller);

                if (bInfiniteMats == false)
                {
                    Inventory::Remove(Controller, Client::GetFortKismet()->K2_GetResourceItemDefinition(NewBuilding->ResourceType), 10);
                }
            }
        }
    }

    static inline void (*OnDamageServerOG)(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, __int64 HitInfo, APlayerController* InstigatedBy, AActor* DamageCauser, __int64 EffectContext);
    static void OnDamageServer(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, __int64 HitInfo, APlayerController* InstigatedBy, AActor* DamageCauser, __int64 EffectContext)
    {
        auto BuildingSMActor = Cast<ABuildingSMActor>(BuildingActor);
        auto PlayerController = Cast<AFortPlayerControllerAthena>(InstigatedBy);
        auto Weapon = Cast<AFortWeapon>(DamageCauser);

        if (!BuildingSMActor || BuildingSMActor->bDestroyed || !PlayerController || !Weapon)
            return OnDamageServerOG(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

        auto WeaponData = Cast<UFortWeaponMeleeItemDefinition>(Weapon->WeaponData);
        auto ResourceItemDefinition = Client::GetDefaultObject<UFortKismetLibrary>()->K2_GetResourceItemDefinition(BuildingSMActor->ResourceType);

        if (!WeaponData || !ResourceItemDefinition)
            return OnDamageServerOG(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

        int ResourceCount = 0;

        if (BuildingSMActor->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0)
        {
            static UCurveTable* ResourceRatesTable = StaticFindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");
            if (ResourceRatesTable)
            {
                float ResourceMultiplier;
                Client::GetDefaultObject<UDataTableFunctionLibrary>()->EvaluateCurveTableRow(ResourceRatesTable, BuildingSMActor->BuildingResourceAmountOverride.RowName, 0.0f, nullptr, &ResourceMultiplier, FString());

                float ResourceCountUnrounded = (ResourceMultiplier / BuildingActor->GetMaxHealth()) * Damage;
                ResourceCount = static_cast<int>(std::round(ResourceCountUnrounded));
            }
        }

        if (ResourceCount <= 0)
            return OnDamageServerOG(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

        PlayerController->ClientReportDamagedResourceBuilding(BuildingSMActor, BuildingSMActor->ResourceType, ResourceCount, false, Damage == 100.0f);
        Inventory::AddItem(PlayerController, ResourceItemDefinition, ResourceCount);
        Inventory::Update(PlayerController);

        return OnDamageServerOG(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
    }

public:
    static void Hook()
    {
        auto FortPCAthena = AFortPlayerControllerAthena::StaticClass()->DefaultObject;

        VirtualHook(FortPCAthena->Vft, 514, ServerCreateBuildingActor);

        // harvesting
        CREATEHOOK(Client::BaseAddress() + 0x10a36d0, OnDamageServer, &OnDamageServerOG);
    }
};