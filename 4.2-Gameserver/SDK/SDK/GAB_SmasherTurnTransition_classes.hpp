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
// BlueprintGeneratedClass GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C
class UGAB_SmasherTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x950(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_SmasherMeleeFailure;                            // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherTurnTransition_C");
		return Clss;
	}

	void OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SmasherTurnTransition(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_K2_CommitAbility_ReturnValue, class FName CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName, float CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
