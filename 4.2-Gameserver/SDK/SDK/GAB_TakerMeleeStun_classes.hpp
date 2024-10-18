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

// 0x38 (0x940 - 0x908)
// BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C
class UGAB_TakerMeleeStun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	float                                        MoveStopRadius;                                    // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationRateWhenAttacking;                         // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATakerPawn_C*                          TakerPawn;                                         // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementUrgency              DefaultMovementUrgency;                            // 0x920(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementUrgency              MovementUrgencyWhenAttacking;                      // 0x921(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnlyHitOnce;                                       // 0x922(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OnlyHitAbilityTarget;                              // 0x923(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HitActors;                                         // 0x928(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*               MoveWhileAttacking;                                // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_TakerMeleeStun_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADecoyActor* K2Node_DynamicCast_AsDecoy_Actor, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1();
	void OnCancelled_513D85AB446CCC17A8F8AAA9835468D1();
	void OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1();
	void OnComplete_513D85AB446CCC17A8F8AAA9835468D1();
	void Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void MoveTimerComplete();
	void ResetDoOnce();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerMeleeStun(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool K2Node_Event_bWasCancelled, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, bool Temp_bool_IsClosed_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
