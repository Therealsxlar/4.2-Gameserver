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

// 0x10 (0x960 - 0x950)
// BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C
class UGAB_NPCTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x950(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_AIBaseMeleeFrustration_Build;                   // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_NPCTurnTransition_C");
		return Clss;
	}

	void OnCancelled_940C59954AFE32346A40E49BFAFD2A0B();
	void OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B();
	void OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B();
	void OnCompleted_940C59954AFE32346A40E49BFAFD2A0B();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_NPCTurnTransition(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_K2_CommitAbility_ReturnValue, class FName CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName, float CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
