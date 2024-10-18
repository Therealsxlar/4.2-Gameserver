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

// 0x80 (0x20E0 - 0x2060)
// BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C
class AHuskPawn_Mimic_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2060(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Quad;                                           // 0x2068(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Mimic_Trail_Right;                               // 0x2070(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Mimic_Trail_Left;                                // 0x2078(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Troll_Fleeing_Loop;                                // 0x2080(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 FortMiniMap1;                                      // 0x2088(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ChestTop;                                          // 0x2090(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x2098(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ChestBottom;                                       // 0x20A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBecomingChest;                                   // 0x20A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       ActivatingPlayerPawn;                              // 0x20B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeInSecondsBeforeReturningToSpawn;               // 0x20B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ShouldBecomeChestBBKey;                            // 0x20C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SpawnRotationKey;                                  // 0x20C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SpawnLocationKey;                                  // 0x20D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGen_Interact_UnregisterFocus_C*       UnregisterFocusParams_Kill;                        // 0x20D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HuskPawn_Mimic_C");
		return Clss;
	}

	void KillPawnOnceTransformedToChest(const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, class AFortMission* CallFunc_GetMissionFromGuid_ReturnValue, class UGen_Interact_UnregisterFocus_C* CallFunc_SetParams_ThisObject, class AMimic_Mission_C* K2Node_DynamicCast_AsMimic_Mission, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue1);
	void BecomeChest(class AController* CallFunc_GetController_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void BecomeChestIfConditionsSatisfied(bool CallFunc_Not_PreBool_ReturnValue);
	void InitMimic(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript(class UGen_Interact_UnregisterFocus_C* CallFunc_SpawnObject_ReturnValue);
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void TryToBecomeChest();
	void Event_LastTimeDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReturnToSpawnAndBecomeChest();
	void ResetTimerForBecomingChest();
	void ReceivePossessed(class AController* NewController);
	void DisableRibbons();
	void EnableRibbons();
	void ExecuteUbergraph_HuskPawn_Mimic(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AController* K2Node_Event_NewController, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_GetSpawnLocation_ReturnValue, const struct FRotator& CallFunc_GetSpawnRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetGoalActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
