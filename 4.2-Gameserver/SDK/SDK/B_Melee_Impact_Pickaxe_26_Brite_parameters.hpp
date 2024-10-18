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

// 0x8 (0x8 - 0x0)
// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UserConstructionScript
struct AB_Melee_Impact_Pickaxe_26_Brite_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.K2_OnProgressiveCosmeticWatchedStatChanged
struct AB_Melee_Impact_Pickaxe_26_Brite_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params
{
public:
	class FName                                  StatName;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewValue;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UpdateBasedOnKills
struct AB_Melee_Impact_Pickaxe_26_Brite_C_UpdateBasedOnKills_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite
struct AB_Melee_Impact_Pickaxe_26_Brite_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UANimBP_UnicornHorn_C*                 K2Node_DynamicCast_AsANim_BP_Unicorn_Horn;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_StatName;                             // 0x20(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_NewValue;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue1;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
