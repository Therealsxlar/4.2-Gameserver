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

// 0x1B0 (0x1B0 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnFocusReceived
struct URotatorSelectorReplaySettings_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0xF8(0xB8)()
};

// 0x10 (0x10 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Options
struct URotatorSelectorReplaySettings_C_Update_Options_Params
{
public:
	TArray<class FText>                          NewParam;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Center on Widget
struct URotatorSelectorReplaySettings_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Initialize
struct URotatorSelectorReplaySettings_C_Initialize_Params
{
public:
	class FText                                  Display_Text;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Options;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Hover_Text;                                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                      Tab_Tooltip;                                       // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Row Selector
struct URotatorSelectorReplaySettings_C_Update_Row_Selector_Params
{
public:
	int32                                        Currently_Selected;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Construct
struct URotatorSelectorReplaySettings_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseLeave
struct URotatorSelectorReplaySettings_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseEnter
struct URotatorSelectorReplaySettings_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.ExecuteUbergraph_RotatorSelectorReplaySettings
struct URotatorSelectorReplaySettings_C_ExecuteUbergraph_RotatorSelectorReplaySettings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent1;                          // 0x8(0x70)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x78(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB0(0x70)(ConstParm)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Selection Changed__DelegateSignature
struct URotatorSelectorReplaySettings_C_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
