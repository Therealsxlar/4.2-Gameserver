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
// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
struct UHUDLayoutToolButtonLayer_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.On Tool Opened
struct UHUDLayoutToolButtonLayer_C_On_Tool_Opened_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode
struct UHUDLayoutToolButtonLayer_C_OnBuildMode_Params
{
public:
	bool                                         bBuildMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
struct UHUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bBuildMode;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)()
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasSavedLayout_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSavedLayout_ReturnValue1;              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
