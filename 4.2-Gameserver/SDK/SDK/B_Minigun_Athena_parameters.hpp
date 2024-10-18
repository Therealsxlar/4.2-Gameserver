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

// 0x10 (0x10 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
struct AB_Minigun_Athena_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_543C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc
struct AB_Minigun_Athena_C_BarrelGlow__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc
struct AB_Minigun_Athena_C_BarrelGlow__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__FinishedFunc
struct AB_Minigun_Athena_C_SpinAudioVolumeTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__UpdateFunc
struct AB_Minigun_Athena_C_SpinAudioVolumeTimeline__UpdateFunc_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
struct AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
struct AB_Minigun_Athena_C_OnChargeUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
struct AB_Minigun_Athena_C_OnChargeDown_Params
{
public:
};

// 0xB28 (0xB28 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
struct AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0xB20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0xB20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow
struct AB_Minigun_Athena_C_MakeBarrelGlow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow
struct AB_Minigun_Athena_C_StopBarrelGlow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnAmmoCountChanged
struct AB_Minigun_Athena_C_OnAmmoCountChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
struct AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
struct AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnWeaponAttached
struct AB_Minigun_Athena_C_OnWeaponAttached_Params
{
public:
};

// 0xB39 (0xB39 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
struct AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_543D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x8(0xB20)()
	class UMaterialInstanceDynamic*              K2Node_Event_DynamicMaterialInstance;              // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue1;           // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_543E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0xB34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
