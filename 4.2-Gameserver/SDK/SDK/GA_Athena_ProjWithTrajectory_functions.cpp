#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class AFortProjectileTrajectory>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class AFortProjectileTrajectory> UGA_Athena_ProjWithTrajectory_C::GetProjectileTrajectoryActor()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "GetProjectileTrajectoryActor");

	Params::UGA_Athena_ProjWithTrajectory_C_GetProjectileTrajectoryActor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutSplinePoints                                                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>             OutSplineTangents                                                (Parm, OutParm, ZeroConstructor)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SpawnLocationAndRotation_OutLoc                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SpawnLocationAndRotation_OutRot                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints     (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents   (ZeroConstructor, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "GetProjectileTrajectoryPoints");

	Params::UGA_Athena_ProjWithTrajectory_C_GetProjectileTrajectoryPoints_Params Parms;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SpawnLocationAndRotation_OutLoc = CallFunc_SpawnLocationAndRotation_OutLoc;
	Parms.CallFunc_SpawnLocationAndRotation_OutRot = CallFunc_SpawnLocationAndRotation_OutRot;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed = CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = Parms.OutSplinePoints;

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = Parms.OutSplineTangents;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetOwningPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*             Player_Pawn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "GetOwningPlayer");

	Params::UGA_Athena_ProjWithTrajectory_C_GetOwningPlayer_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Pawn != nullptr)
		*Player_Pawn = Parms.Player_Pawn;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              AimPitch                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GrenadeSpeed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ProjWithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "CalcGrenadeSpeedFromPitch");

	Params::UGA_Athena_ProjWithTrajectory_C_CalcGrenadeSpeedFromPitch_Params Parms;
	Parms.AimPitch = AimPitch;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = Parms.GrenadeSpeed;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints           (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents         (ZeroConstructor, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "UpdateTrajectorySpline");

	Params::UGA_Athena_ProjWithTrajectory_C_UpdateTrajectorySpline_Params Parms;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints = CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents = CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileTrajectory*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileTrajectory_C*  K2Node_DynamicCast_AsBP_Projectile_Trajectory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "SetupDummyProjectile");

	Params::UGA_Athena_ProjWithTrajectory_C_SetupDummyProjectile_Params Parms;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory = K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutLoc                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRot                                                           (Parm, OutParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "SpawnLocationAndRotation");

	Params::UGA_Athena_ProjWithTrajectory_C_SpawnLocationAndRotation_Params Parms;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLoc != nullptr)
		*OutLoc = Parms.OutLoc;

	if (OutRot != nullptr)
		*OutRot = Parms.OutRot;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupGrenade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AimPitch                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Base_Grenade                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Projectile_Speed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecExplosion_Gameplay_Spec                                          (Parm, OutParm)
// float                              Projectile_Gravity_Scale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()

void UGA_Athena_ProjWithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "SetupGrenade");

	Params::UGA_Athena_ProjWithTrajectory_C_SetupGrenade_Params Parms;
	Parms.AimPitch = AimPitch;
	Parms.CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed = CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Base_Grenade != nullptr)
		*Base_Grenade = Parms.Base_Grenade;

	if (Projectile_Speed != nullptr)
		*Projectile_Speed = Parms.Projectile_Speed;

	if (Explosion_Gameplay_Spec != nullptr)
		*Explosion_Gameplay_Spec = Parms.Explosion_Gameplay_Spec;

	if (Projectile_Gravity_Scale != nullptr)
		*Projectile_Gravity_Scale = Parms.Projectile_Gravity_Scale;

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_ProjWithTrajectory_C::Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	Params::UGA_Athena_ProjWithTrajectory_C_Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Completed_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ProjWithTrajectory_C::Completed_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Completed_1EDA62904AD9995FD9ABFE99B3E783C8");

	Params::UGA_Athena_ProjWithTrajectory_C_Completed_1EDA62904AD9995FD9ABFE99B3E783C8_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ProjWithTrajectory_C::Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8");

	Params::UGA_Athena_ProjWithTrajectory_C_Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Triggered_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ProjWithTrajectory_C::Triggered_1EDA62904AD9995FD9ABFE99B3E783C8(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Triggered_1EDA62904AD9995FD9ABFE99B3E783C8");

	Params::UGA_Athena_ProjWithTrajectory_C_Triggered_1EDA62904AD9995FD9ABFE99B3E783C8_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_74A6C2A243F8F5710A8F04AD536F05F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnFinish_74A6C2A243F8F5710A8F04AD536F05F9()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnFinish_74A6C2A243F8F5710A8F04AD536F05F9");

	Params::UGA_Athena_ProjWithTrajectory_C_OnFinish_74A6C2A243F8F5710A8F04AD536F05F9_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_096929144FF7E14AFEB2B388A786D6BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnFinish_096929144FF7E14AFEB2B388A786D6BD()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnFinish_096929144FF7E14AFEB2B388A786D6BD");

	Params::UGA_Athena_ProjWithTrajectory_C_OnFinish_096929144FF7E14AFEB2B388A786D6BD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCancelled_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnCancelled_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnCancelled_FEC68BA94D83D96FDD282EB15935D61B");

	Params::UGA_Athena_ProjWithTrajectory_C_OnCancelled_FEC68BA94D83D96FDD282EB15935D61B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B");

	Params::UGA_Athena_ProjWithTrajectory_C_OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B");

	Params::UGA_Athena_ProjWithTrajectory_C_OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCompleted_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnCompleted_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnCompleted_FEC68BA94D83D96FDD282EB15935D61B");

	Params::UGA_Athena_ProjWithTrajectory_C_OnCompleted_FEC68BA94D83D96FDD282EB15935D61B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_D9A850F94B9C369C67CCD89C7B5492BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnFinish_D9A850F94B9C369C67CCD89C7B5492BD()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnFinish_D9A850F94B9C369C67CCD89C7B5492BD");

	Params::UGA_Athena_ProjWithTrajectory_C_OnFinish_D9A850F94B9C369C67CCD89C7B5492BD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_8B217C0E49D2D455A906EA8EEC307D0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnFinish_8B217C0E49D2D455A906EA8EEC307D0B()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnFinish_8B217C0E49D2D455A906EA8EEC307D0B");

	Params::UGA_Athena_ProjWithTrajectory_C_OnFinish_8B217C0E49D2D455A906EA8EEC307D0B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "K2_ActivateAbility");

	Params::UGA_Athena_ProjWithTrajectory_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "Server_SpawnProjectile");

	Params::UGA_Athena_ProjWithTrajectory_C_Server_SpawnProjectile_Params Parms;
	Parms.Location = Location;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::OnAbilityInputReleased()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "OnAbilityInputReleased");

	Params::UGA_Athena_ProjWithTrajectory_C_OnAbilityInputReleased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "K2_OnEndAbility");

	Params::UGA_Athena_ProjWithTrajectory_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "CleanupTrajectoryDisplay");

	Params::UGA_Athena_ProjWithTrajectory_C_CleanupTrajectoryDisplay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::TossGrenade()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "TossGrenade");

	Params::UGA_Athena_ProjWithTrajectory_C_TossGrenade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.AthenaGrenadeSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         GrenadeReference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ProjWithTrajectory_C::AthenaGrenadeSpawned(class AFortProjectileBase* GrenadeReference)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "AthenaGrenadeSpawned");

	Params::UGA_Athena_ProjWithTrajectory_C_AthenaGrenadeSpawned_Params Parms;
	Parms.GrenadeReference = GrenadeReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ProjWithTrajectory_C::InitTrajectoryVariables()
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "InitTrajectoryVariables");

	Params::UGA_Athena_ProjWithTrajectory_C_InitTrajectoryVariables_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.ExecuteUbergraph_GA_Athena_ProjWithTrajectory
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData2                               (ConstParm, ContainsInstancedReference)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData1                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData                                (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        Temp_struct_Variable                                             (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable1                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData5                               (ConstParm, ContainsInstancedReference)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Direction                                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SpawnLocationAndRotation_OutLoc                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SpawnLocationAndRotation_OutRot                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SetupGrenade_Base_Grenade                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetupGrenade_Projectile_Speed                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_SetupGrenade_Explosion_Gameplay_Spec                    ()
// float                              CallFunc_SetupGrenade_Projectile_Gravity_Scale                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData3                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData4                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_CustomEvent_GrenadeReference                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_SpawnProjectileAndWait*CallFunc_SpawnProjectileAndWait_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ProjWithTrajectory_C::ExecuteUbergraph_GA_Athena_ProjWithTrajectory(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue2, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class AFortProjectileBase* K2Node_CustomEvent_GrenadeReference, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn1, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn2, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn3, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn4, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue6, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ProjWithTrajectory_C", "ExecuteUbergraph_GA_Athena_ProjWithTrajectory");

	Params::UGA_Athena_ProjWithTrajectory_C_ExecuteUbergraph_GA_Athena_ProjWithTrajectory_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.K2Node_CustomEvent_ProjectileData2 = K2Node_CustomEvent_ProjectileData2;
	Parms.K2Node_CustomEvent_ProjectileData1 = K2Node_CustomEvent_ProjectileData1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ProjectileData = K2Node_CustomEvent_ProjectileData;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_WaitDelay_ReturnValue1 = CallFunc_WaitDelay_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetScaledCapsuleSize_OutRadius = CallFunc_GetScaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CustomEvent_ProjectileData5 = K2Node_CustomEvent_ProjectileData5;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.CallFunc_SpawnLocationAndRotation_OutLoc = CallFunc_SpawnLocationAndRotation_OutLoc;
	Parms.CallFunc_SpawnLocationAndRotation_OutRot = CallFunc_SpawnLocationAndRotation_OutRot;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_SetupGrenade_Base_Grenade = CallFunc_SetupGrenade_Base_Grenade;
	Parms.CallFunc_SetupGrenade_Projectile_Speed = CallFunc_SetupGrenade_Projectile_Speed;
	Parms.CallFunc_SetupGrenade_Explosion_Gameplay_Spec = CallFunc_SetupGrenade_Explosion_Gameplay_Spec;
	Parms.CallFunc_SetupGrenade_Projectile_Gravity_Scale = CallFunc_SetupGrenade_Projectile_Gravity_Scale;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed = CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;
	Parms.K2Node_CustomEvent_ProjectileData3 = K2Node_CustomEvent_ProjectileData3;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue1 = CallFunc_K2_CommitAbility_ReturnValue1;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CustomEvent_ProjectileData4 = K2Node_CustomEvent_ProjectileData4;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_WaitDelay_ReturnValue2 = CallFunc_WaitDelay_ReturnValue2;
	Parms.CallFunc_WaitDelay_ReturnValue3 = CallFunc_WaitDelay_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_CustomEvent_GrenadeReference = K2Node_CustomEvent_GrenadeReference;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn1 = CallFunc_GetOwningPlayer_Player_Pawn1;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn2 = CallFunc_GetOwningPlayer_Player_Pawn2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn3 = CallFunc_GetOwningPlayer_Player_Pawn3;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn4 = CallFunc_GetOwningPlayer_Player_Pawn4;
	Parms.CallFunc_SpawnProjectileAndWait_ReturnValue = CallFunc_SpawnProjectileAndWait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
