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

// 0x25 (0x25 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal_Params
{
public:
	enum class EConversionControlKeyRequest      CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetUnseenTransformKeys_TransformKeys;     // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
struct UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params
{
public:
	enum class EConversionControlKeyRequest      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
struct UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
struct UBP_ItemTransform_TabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
struct UBP_ItemTransform_TabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
struct UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
struct UBP_ItemTransform_TabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
struct UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
struct UBP_ItemTransform_TabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnSelected
struct UBP_ItemTransform_TabButton_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnDeselected
struct UBP_ItemTransform_TabButton_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnHovered
struct UBP_ItemTransform_TabButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnUnhovered
struct UBP_ItemTransform_TabButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
struct UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xA0)(ConstParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue1;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C06[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xD8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x100(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x128(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor3;                     // 0x150(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor4;                     // 0x178(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor5;                     // 0x1A0(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor6;                     // 0x1C8(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
