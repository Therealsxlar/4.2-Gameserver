#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xA78 - 0xA50)
// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_RequiredTags;                                   // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Constructor_HammerHitsHeal_C");
		return Clss;
	}

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
