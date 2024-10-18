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

// 0x88 (0x9A0 - 0x918)
// BlueprintGeneratedClass GAB_SmasherMelee.GAB_SmasherMelee_C
class UGAB_SmasherMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_SmasherMeleeSuccess;                            // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_SmasherMeleeFailure;                            // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        AllHitActors;                                      // 0x930(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;     // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPCBehaviorProhibitsAbilityAttackAny;           // 0x960(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        AllHitActorsAfterRemovingInvalidTargets;           // 0x980(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*               SmasherMove;                                       // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_ConstructorBullrushing;                         // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherMelee_C");
		return Clss;
	}

	void Completed_D4EB604A4AFDAD65E3461A86287A3EFE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_D4EB604A4AFDAD65E3461A86287A3EFE(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void K2_ActivateAbility();
	void MoveToLoop();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherMelee(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable1, bool CallFunc_TargetDataHasActor_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActorArray_ReturnValue, class AActor* CallFunc_Array_Get_Item1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue1, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
