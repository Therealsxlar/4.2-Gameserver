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

// 0x1 (0x1 - 0x0)
// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon
struct AB_RCRocket_Launcher_Athena_C_IsCachedIsProjectileWeapon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript
struct AB_RCRocket_Launcher_Athena_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX
struct AB_RCRocket_Launcher_Athena_C_SendMuzzleFlashFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ReceiveBeginPlay
struct AB_RCRocket_Launcher_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1B (0x1B - 0x0)
// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena
struct AB_RCRocket_Launcher_Athena_C_ExecuteUbergraph_B_RCRocket_Launcher_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5328[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
