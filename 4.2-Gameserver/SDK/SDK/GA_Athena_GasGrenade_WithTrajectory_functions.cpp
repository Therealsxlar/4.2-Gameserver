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


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
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

void UGA_Athena_GasGrenade_WithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "CalcGrenadeSpeedFromPitch");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params Parms;
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


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
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

void UGA_Athena_GasGrenade_WithTrajectory_C::UpdateTrajectorySpline(float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "UpdateTrajectorySpline");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params Parms;
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

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileTrajectory_C*  K2Node_DynamicCast_AsBP_Projectile_Trajectory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_GasGrenade_WithTrajectory_C::SetupDummyProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "SetupDummyProjectile");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_SetupDummyProjectile_Params Parms;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleSize_OutRadius = CallFunc_GetScaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory = K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutLoc                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRot                                                           (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void UGA_Athena_GasGrenade_WithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "SpawnLocationAndRotation");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params Parms;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLoc != nullptr)
		*OutLoc = Parms.OutLoc;

	if (OutRot != nullptr)
		*OutRot = Parms.OutRot;

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupGrenade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AimPitch                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Base_Grenade                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Projectile_Speed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecExplosion_Gameplay_Spec                                          (Parm, OutParm)
// float                              Projectile_Gravity_Scale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()

void UGA_Athena_GasGrenade_WithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "SetupGrenade");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_SetupGrenade_Params Parms;
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


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Destroyed_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Destroyed_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Destroyed_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Destroyed_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Exploded_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Exploded_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Exploded_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Exploded_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Stopped_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Stopped_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Stopped_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Stopped_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Bounced_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Bounced_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Bounced_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Bounced_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Touched_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Touched_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Touched_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Touched_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Created_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Athena_GasGrenade_WithTrajectory_C::Created_0ABD0A2949396977EDE0E0A3A923210A(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Created_0ABD0A2949396977EDE0E0A3A923210A");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Created_0ABD0A2949396977EDE0E0A3A923210A_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Completed_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_GasGrenade_WithTrajectory_C::Completed_2A6F61E14EAA329CE4DDE59F6D3984BB(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Completed_2A6F61E14EAA329CE4DDE59F6D3984BB");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Completed_2A6F61E14EAA329CE4DDE59F6D3984BB_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_GasGrenade_WithTrajectory_C::Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_GasGrenade_WithTrajectory_C::Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_B638634A4C406D60FB73F0A0F89C4172
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_B638634A4C406D60FB73F0A0F89C4172()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnFinish_B638634A4C406D60FB73F0A0F89C4172");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_B638634A4C406D60FB73F0A0F89C4172_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_C93035F048A7F05615196098CE2551EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_C93035F048A7F05615196098CE2551EB()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnFinish_C93035F048A7F05615196098CE2551EB");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_C93035F048A7F05615196098CE2551EB_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCancelled_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnCancelled_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnCancelled_BC60A2D44E56ED883DEE30B8A0207898");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnCancelled_BC60A2D44E56ED883DEE30B8A0207898_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCompleted_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnCompleted_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnCompleted_BC60A2D44E56ED883DEE30B8A0207898");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnCompleted_BC60A2D44E56ED883DEE30B8A0207898_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_F1120C8E4A077A38FB26EF90055BE75E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_F1120C8E4A077A38FB26EF90055BE75E()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnFinish_F1120C8E4A077A38FB26EF90055BE75E");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_F1120C8E4A077A38FB26EF90055BE75E_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_EB9D493748A5D5BAD2487FB3E67C618F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_EB9D493748A5D5BAD2487FB3E67C618F()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnFinish_EB9D493748A5D5BAD2487FB3E67C618F");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_EB9D493748A5D5BAD2487FB3E67C618F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "K2_ActivateAbility");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UGA_Athena_GasGrenade_WithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "Server_SpawnProjectile");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_Server_SpawnProjectile_Params Parms;
	Parms.Location = Location;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::OnAbilityInputReleased()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "OnAbilityInputReleased");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_OnAbilityInputReleased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_GasGrenade_WithTrajectory_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "K2_OnEndAbility");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "CleanupTrajectoryDisplay");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_GasGrenade_WithTrajectory_C::TossGrenade()
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "TossGrenade");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_TossGrenade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData3                               (ConstParm, ContainsInstancedReference)
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
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_SpawnProjectileAndWait*CallFunc_SpawnProjectileAndWait_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData4                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_GasGrenade_WithTrajectory_C::ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory(int32 EntryPoint, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, bool CallFunc_IsStandalone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_K2_CommitAbility_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue3, bool CallFunc_IsValid_ReturnValue6)
{
	static auto Func = Class->GetFunction("GA_Athena_GasGrenade_WithTrajectory_C", "ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory");

	Params::UGA_Athena_GasGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory_Params Parms;
	Parms.EntryPoint = EntryPoint;
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
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CustomEvent_ProjectileData3 = K2Node_CustomEvent_ProjectileData3;
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
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SpawnProjectileAndWait_ReturnValue = CallFunc_SpawnProjectileAndWait_ReturnValue;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_K2_CommitAbility_ReturnValue1 = CallFunc_K2_CommitAbility_ReturnValue1;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CustomEvent_ProjectileData4 = K2Node_CustomEvent_ProjectileData4;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_WaitDelay_ReturnValue2 = CallFunc_WaitDelay_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_WaitDelay_ReturnValue3 = CallFunc_WaitDelay_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
