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

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetChargedParams
struct AB_Rifle_AMR_Athena_C_VFX_SetChargedParams_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetUnchargedParams
struct AB_Rifle_AMR_Athena_C_VFX_SetUnchargedParams_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.UserConstructionScript
struct AB_Rifle_AMR_Athena_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachTo_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__FinishedFunc
struct AB_Rifle_AMR_Athena_C_ScaleDownParticles__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__UpdateFunc
struct AB_Rifle_AMR_Athena_C_ScaleDownParticles__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__FinishedFunc
struct AB_Rifle_AMR_Athena_C_Reload_PItchChange__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__UpdateFunc
struct AB_Rifle_AMR_Athena_C_Reload_PItchChange__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__FinishedFunc
struct AB_Rifle_AMR_Athena_C_ScaleUpParticles__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__UpdateFunc
struct AB_Rifle_AMR_Athena_C_ScaleUpParticles__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__FinishedFunc
struct AB_Rifle_AMR_Athena_C_SpringVal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__UpdateFunc
struct AB_Rifle_AMR_Athena_C_SpringVal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__FinishedFunc
struct AB_Rifle_AMR_Athena_C_SlowdownTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__UpdateFunc
struct AB_Rifle_AMR_Athena_C_SlowdownTimeline__UpdateFunc_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayWeaponFireFX
struct AB_Rifle_AMR_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnStartCharge
struct AB_Rifle_AMR_Athena_C_OnStartCharge_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMinCharge
struct AB_Rifle_AMR_Athena_C_OnReachedMinCharge_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Muzzle Play Reload FX
struct AB_Rifle_AMR_Athena_C_Muzzle_Play_Reload_FX_Params
{
public:
	enum class EFortReloadFXState                Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayReloadFX
struct AB_Rifle_AMR_Athena_C_OnPlayReloadFX_Params
{
public:
	enum class EFortReloadFXState                ReloadStage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.EndOfCharge
struct AB_Rifle_AMR_Athena_C_EndOfCharge_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnWeaponAttached
struct AB_Rifle_AMR_Athena_C_OnWeaponAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveBeginPlay
struct AB_Rifle_AMR_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.K2_OnUnEquip
struct AB_Rifle_AMR_Athena_C_K2_OnUnEquip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnAmmoCountChanged
struct AB_Rifle_AMR_Athena_C_OnAmmoCountChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.CameraShakeLoop
struct AB_Rifle_AMR_Athena_C_CameraShakeLoop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnChargeDown
struct AB_Rifle_AMR_Athena_C_OnChargeDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMaxCharge
struct AB_Rifle_AMR_Athena_C_OnReachedMaxCharge_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveTick
struct AB_Rifle_AMR_Athena_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x430 (0x430 - 0x0)
// Function B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ExecuteUbergraph_B_Rifle_AMR_Athena
struct AB_Rifle_AMR_Athena_C_ExecuteUbergraph_B_Rifle_AMR_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_542C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRangedWeaponStats                CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x268)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_542D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortReloadFXState                K2Node_Event_Selection;                            // 0x282(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x283(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x284(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_542E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USK_AMR_Skeleton_AnimBP_C*             K2Node_DynamicCast_AsSK_AMR_Skeleton_Anim_BP;      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_542F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetPlayRate_ReturnValue;                  // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5430[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue1;   // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue1;         // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x2CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5432[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue1;                        // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5433[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetChargePercent_ReturnValue;             // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x2E4(0xC)(IsPlainOldData, NoDestructor)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x2F0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue1;                 // 0x300(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_5434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x310(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Lerp_ReturnValue3;                        // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue4;                        // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue5;                        // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult1;      // 0x3A8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
