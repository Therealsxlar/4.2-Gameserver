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

// 0x268 (0xB70 - 0x908)
// BlueprintGeneratedClass GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C
class UGA_Athena_ProjWithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0x910(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Grenade;                                       // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMin;                                   // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMax;                                   // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5276[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            GrenadeSound;                                      // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_DefaultExplosion;                               // 0x940(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_ReturnedEffect;                                 // 0x948(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExplosionRadius;                                   // 0x9C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalThrowAngle;                              // 0x9CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0x9D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         GrenadeAmmo;                                       // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlasmaGrenades;                                    // 0x9E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Flashbang;                                         // 0x9EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5277[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0x9EC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0xA00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyBounciness;                                   // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrajectoryUpdateInterval;                          // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5279[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xA38(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xA98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeedPitch;                                     // 0xA9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeedPitch;                                     // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    Event_Data;                                        // 0xAA8(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xB5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowCancelDelay;                              // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   GrenadeReference;                                  // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ProjWithTrajectory_C");
		return Clss;
	}

	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents);
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents);
	void SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue);
	void Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData);
	void Completed_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_74A6C2A243F8F5710A8F04AD536F05F9();
	void OnFinish_096929144FF7E14AFEB2B388A786D6BD();
	void OnCancelled_FEC68BA94D83D96FDD282EB15935D61B();
	void OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B();
	void OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B();
	void OnCompleted_FEC68BA94D83D96FDD282EB15935D61B();
	void OnFinish_D9A850F94B9C369C67CCD89C7B5492BD();
	void OnFinish_8B217C0E49D2D455A906EA8EEC307D0B();
	void K2_ActivateAbility();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void AthenaGrenadeSpawned(class AFortProjectileBase* GrenadeReference);
	void InitTrajectoryVariables();
	void ExecuteUbergraph_GA_Athena_ProjWithTrajectory(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue2, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class AFortProjectileBase* K2Node_CustomEvent_GrenadeReference, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn1, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn2, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn3, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn4, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue6, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
