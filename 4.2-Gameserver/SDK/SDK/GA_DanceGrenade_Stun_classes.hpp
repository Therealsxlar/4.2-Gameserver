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

// 0x18 (0x920 - 0x908)
// BlueprintGeneratedClass GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C
class UGA_DanceGrenade_Stun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle           EffectHandle;                                      // 0x910(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AnimMontage;                                       // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DanceGrenade_Stun_C");
		return Clss;
	}

	void InvalidHandle_93D7E1854196ECDA2F2306926AC3D608(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_93D7E1854196ECDA2F2306926AC3D608(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_DanceGrenade_Stun(int32 EntryPoint, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue1, float CallFunc_PlayAnimMontage_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
