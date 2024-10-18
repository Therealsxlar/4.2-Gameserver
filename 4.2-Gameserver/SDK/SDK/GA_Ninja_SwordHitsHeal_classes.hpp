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
// BlueprintGeneratedClass GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
class UGA_Ninja_SwordHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_RequiredTags;                                   // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Ninja_SwordHitsHeal_C");
		return Clss;
	}

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
