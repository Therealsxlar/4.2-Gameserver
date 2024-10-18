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
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement
struct AAbilityDecoTool_SupplyDrop_C_HideMeshAndPlacement_Params
{
public:
	bool                                         bInHide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
struct AAbilityDecoTool_SupplyDrop_C_UserConstructionScript_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview
struct AAbilityDecoTool_SupplyDrop_C_BPOnSetDecoObjectPreview_Params
{
public:
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show
struct AAbilityDecoTool_SupplyDrop_C_Show_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor
struct AAbilityDecoTool_SupplyDrop_C_HideFor_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
struct AAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_CustomEvent_InTime;                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
