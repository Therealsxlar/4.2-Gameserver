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

// 0x19 (0x19 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Refresh Tab Button Bangs
struct UItemTransformKeyScreen_C_Refresh_Tab_Button_Bangs_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemTransform_TabButton_C*         CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
struct UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
struct UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      RequestType;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue2;         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
struct UItemTransformKeyScreen_C_NavigateToFirstItem_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
struct UItemTransformKeyScreen_C_NavigateToSelectedItem_Params
{
public:
	class UFortItem*                             InItem;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
struct UItemTransformKeyScreen_C_Get_Selected_Item_Params
{
public:
	class UFortItem*                             SelectedKey;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedKey_SelectedKey;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
struct UItemTransformKeyScreen_C_ResetScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
struct UItemTransformKeyScreen_C_HandleItemSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
struct UItemTransformKeyScreen_C_SetupKeyList_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
struct UItemTransformKeyScreen_C_RebuildKeyList_Params
{
public:
	enum class EConversionControlKeyRequest      RequestType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3503[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastSelectedKeyIndex;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Determine_Tab_List_Title_Text;            // 0x18(0x18)()
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue1;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIndexForItem_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedIndex_ReturnValue;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetTransformKeys_TransformKeys;           // 0x58(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
struct UItemTransformKeyScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
struct UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HACK
struct UItemTransformKeyScreen_C_HACK_Params
{
public:
};

// 0x81 (0x81 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
struct UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3506[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem2;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      CallFunc_Determine_Key_Types_to_See_RequestType;   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3507[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemTransform_TabButton_C*         K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3508[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x60(0x8)(NoDestructor)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem1;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      CallFunc_Determine_Key_Types_to_See_RequestType1;  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Key;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
