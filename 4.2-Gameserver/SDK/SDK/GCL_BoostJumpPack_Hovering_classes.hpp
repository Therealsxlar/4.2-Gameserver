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

// 0xB0 (0x4D0 - 0x420)
// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
class AGCL_BoostJumpPack_Hovering_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	float                                        Jetpack_Audio_Modulation_Fuel_4B6C9E744D4A38FAEE9F0F9F2E1AE53F; // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Jetpack_Audio_Modulation__Direction_4B6C9E744D4A38FAEE9F0F9F2E1AE53F; // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3402[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Jetpack_Audio_Modulation;                          // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnedParticleEmitter;                            // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJetpackAudioEnabled;                              // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3403[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnStart;                                      // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnStop;                                       // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnIdle;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnAccel;                                  // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnIdleAudio_Comp;                                  // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnAccelAudio_Comp;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentUpwardVelocity;                             // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3404[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundLoopOnOutOfFuel;                              // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnOutOfFuelAudio_Comp;                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetFuelVolumeMultiplier;                        // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFuelVolumeMultiplier;                       // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelWarning;                                // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnOutOfFuel;                                  // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnThrust;                                     // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedFuelWarning;                                // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFirstJump;                                      // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3405[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JetpackActivatedTime;                              // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GroundInteract;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedFuelPercent;                                 // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedRenderingDetailMode;                         // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_Hovering_C");
		return Clss;
	}

	void CacheRenderingDetailMode(int32 CallFunc_GetRenderingDetailMode_ReturnValue);
	void CalculateFuelPercentage(float CallFunc_GetFuelPercent_FuelPercent);
	void CalculateUpwardVelocity(float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FInterpTo_ReturnValue);
	float GetLateralThrust(const struct FGameplayAttribute& LateralThurstAttribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	float GetUpwardThrust(const struct FGameplayAttribute& UpwardThrustAttribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	float GetMaxFuel(const struct FGameplayAttribute& MaxFuelAttribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	float GetFuel(const struct FGameplayAttribute& FuelAttribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	void GetFuelPercent(float* FuelPercent, float CallFunc_GetMaxFuel_ReturnValue, float CallFunc_GetFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void CacheAttributes();
	void SetJetpackAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue3, bool Temp_bool_Variable1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue4, class USoundBase* K2Node_Select1_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void UserConstructionScript();
	void Jetpack_Audio_Modulation__FinishedFunc();
	void Jetpack_Audio_Modulation__UpdateFunc();
	void Jetpack_Audio_Modulation__FuelWarning__EventFunc();
	void ReceiveTick(float DeltaSeconds);
	void Audio_Tick();
	void On_Pawn_Landed(struct FHitResult& Hit);
	void ResetFX();
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FHitResult& K2Node_CustomEvent_Hit, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetUpwardThrust_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValid_ReturnValue4, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue6, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool Temp_bool_IsClosed_Variable1, bool CallFunc_IsValid_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
