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

// 0x28 (0x940 - 0x918)
// BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C
class UGAB_HuskMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(Transient, DuplicateTransient)
	class UFortAbilityTask_MoveAI*               HuskMove;                                          // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HitActors;                                         // 0x928(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                GE_AIBaseMeleeFrustration_Reset;                   // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_HuskMelee_C");
		return Clss;
	}

	void Completed_39FC57D848D381E3A3C7E798E995ED9A(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_39FC57D848D381E3A3C7E798E995ED9A(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_39FC57D848D381E3A3C7E798E995ED9A(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_3012237E40D07AA69417C79DC2677F69(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_3012237E40D07AA69417C79DC2677F69();
	void OnCancelled_3012237E40D07AA69417C79DC2677F69();
	void OnInterrupted_3012237E40D07AA69417C79DC2677F69();
	void OnComplete_3012237E40D07AA69417C79DC2677F69();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ContinuousMoveTowardsTarget();
	void GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data);
	void ExecuteUbergraph_GAB_HuskMelee(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn1, bool K2Node_DynamicCast_bSuccess1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Target_Data, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue4, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue3, bool CallFunc_Array_Contains_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
