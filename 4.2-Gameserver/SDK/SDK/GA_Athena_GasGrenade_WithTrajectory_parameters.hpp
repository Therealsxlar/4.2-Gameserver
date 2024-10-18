#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_GasGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeed;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_GasGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params
{
public:
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x10(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x38(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints; // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents; // 0x58(0x10)(ZeroConstructor, ReferenceParm)
};

// 0xB4 (0xB4 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_GasGrenade_WithTrajectory_C_SetupDummyProjectile_Params
{
public:
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x0(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetScaledCapsuleSize_OutRadius;           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleSize_OutHalfHeight;       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGravityZ_ReturnValue;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue1;                // 0x50(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*            K2Node_DynamicCast_AsBP_Projectile_Trajectory;     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_FinishSpawningActor_ReturnValue1;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_GasGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params
{
public:
	struct FVector                               OutLoc;                                            // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OutRot;                                            // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x18(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x48(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x54(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x74(0xC)(IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupGrenade
struct UGA_Athena_GasGrenade_WithTrajectory_C_SetupGrenade_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Base_Grenade;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Projectile_Speed;                                  // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      Explosion_Gameplay_Spec;                           // 0x18(0x80)(Parm, OutParm)
	float                                        Projectile_Gravity_Scale;                          // 0x98(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0xA0(0x80)()
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Destroyed_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Destroyed_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Exploded_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Exploded_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Stopped_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Stopped_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Bounced_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Bounced_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Touched_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Touched_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Created_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Created_0ABD0A2949396977EDE0E0A3A923210A_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Completed_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Completed_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_B638634A4C406D60FB73F0A0F89C4172
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_B638634A4C406D60FB73F0A0F89C4172_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_C93035F048A7F05615196098CE2551EB
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_C93035F048A7F05615196098CE2551EB_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCancelled_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnCancelled_BC60A2D44E56ED883DEE30B8A0207898_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCompleted_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnCompleted_BC60A2D44E56ED883DEE30B8A0207898_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_F1120C8E4A077A38FB26EF90055BE75E
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_F1120C8E4A077A38FB26EF90055BE75E_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_EB9D493748A5D5BAD2487FB3E67C618F
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_EB9D493748A5D5BAD2487FB3E67C618F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_GasGrenade_WithTrajectory_C_K2_ActivateAbility_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_GasGrenade_WithTrajectory_C_Server_SpawnProjectile_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Direction;                                         // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnAbilityInputReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_GasGrenade_WithTrajectory_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_GasGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.TossGrenade
struct UGA_Athena_GasGrenade_WithTrajectory_C_TossGrenade_Params
{
public:
};

// 0x561 (0x561 - 0x0)
// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory
struct UGA_Athena_GasGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData2;                // 0x8(0x28)(ConstParm, ContainsInstancedReference)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData1;                // 0x30(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0x68(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable;                              // 0xA0(0x28)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0xD8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0xF8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x100(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x128(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x138(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x158(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x160(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable1;                             // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x178(0x20)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x198(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x1E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x208(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue1;                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x220(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B72[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData3;                // 0x238(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x260(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData5;                // 0x270(0x28)(ConstParm, ContainsInstancedReference)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x2A4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Direction;                      // 0x2B0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x2BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x2C8(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_SetupGrenade_Base_Grenade;                // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetupGrenade_Projectile_Speed;            // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupGrenade_Explosion_Gameplay_Spec;     // 0x2F0(0x80)()
	float                                        CallFunc_SetupGrenade_Projectile_Gravity_Scale;    // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x388(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x398(0x8)(NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x3A8(0x40)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x3E8(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x408(0xA8)()
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x4B0(0x20)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x4D0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x4F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue1;            // 0x4FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B79[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData4;                // 0x510(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x538(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue2;                   // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue3;                   // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
