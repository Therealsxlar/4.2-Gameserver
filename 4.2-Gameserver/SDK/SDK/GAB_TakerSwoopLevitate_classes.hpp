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

// 0x50 (0x958 - 0x908)
// BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C
class UGAB_TakerSwoopLevitate_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	struct FVector                               Pawn_Destination;                                  // 0x910(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pawn_Location;                                     // 0x91C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATakerPawn_C*                          Taker;                                             // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FarAngleForTakerToLevitateTo;                      // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FarDistance;                                       // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CloseAngleForTakerToLevitateTo;                    // 0x940(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CloseDistance;                                     // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TakerCollisionProfileWhenSwooping;                 // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LevitateAnimationTranslationDistance;              // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugLevitateStartTime;                            // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_TakerSwoopLevitate_C");
		return Clss;
	}

	void EventReceived_9815869441DE62BDFB6A3794B3593B2E(const struct FGameplayEventData& Payload);
	void OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerSwoopLevitate(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, bool K2Node_Event_bWasCancelled, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_VSize_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_DegTan_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, const struct FGameplayEventData& K2Node_CustomEvent_Payload, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_Subtract_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
