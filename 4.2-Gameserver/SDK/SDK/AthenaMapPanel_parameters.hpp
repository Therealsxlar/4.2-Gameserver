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
// Function AthenaMapPanel.AthenaMapPanel_C.ClearTouches
struct UAthenaMapPanel_C_ClearTouches_Params
{
public:
};

// 0x570 (0x570 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.SetTriggerImages
struct UAthenaMapPanel_C_SetTriggerImages_Params
{
public:
	bool                                         IsPS4;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Temp_struct_Variable;                              // 0x8(0x88)()
	struct FSlateBrush                           Temp_struct_Variable1;                             // 0x90(0x88)()
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Temp_struct_Variable2;                             // 0x120(0x88)()
	struct FSlateBrush                           Temp_struct_Variable3;                             // 0x1A8(0x88)()
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable1;                               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                CallFunc_GetCurrentGamepadType_ReturnValue;        // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x240(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x2C8(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush2;                     // 0x350(0x88)()
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x3D8(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush3;                     // 0x460(0x88)()
	struct FSlateBrush                           K2Node_Select1_Default;                            // 0x4E8(0x88)()
};

// 0x268 (0x268 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchEnded
struct UAthenaMapPanel_C_OnTouchEnded_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
	struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x218(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x228(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0x260(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
struct UAthenaMapPanel_C_OnTouchStarted_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B23[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x178(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.Construct
struct UAthenaMapPanel_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
struct UAthenaMapPanel_C_FlashPlayerIcon_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
struct UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
