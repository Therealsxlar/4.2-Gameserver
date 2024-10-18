#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Refresh Tab Button Bangs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ItemTransform_TabButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyScreen_C::Refresh_Tab_Button_Bangs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_ItemTransform_TabButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "Refresh Tab Button Bangs");

	Params::UItemTransformKeyScreen_C_Refresh_Tab_Button_Bangs_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyScreen_C::Determine_Tab_List_Title(class FName TabNameID, class FText* Text, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "Determine Tab List Title");

	Params::UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EConversionControlKeyRequestRequestType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyScreen_C::Determine_Key_Types_to_See(class FName TabNameID, enum class EConversionControlKeyRequest* RequestType, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "Determine Key Types to See");

	Params::UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (RequestType != nullptr)
		*RequestType = Parms.RequestType;

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::NavigateToFirstItem()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "NavigateToFirstItem");

	Params::UItemTransformKeyScreen_C_NavigateToFirstItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   InItem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::NavigateToSelectedItem(class UFortItem* InItem)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "NavigateToSelectedItem");

	Params::UItemTransformKeyScreen_C_NavigateToSelectedItem_Params Parms;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedKey                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedKey_SelectedKey                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::Get_Selected_Item(class UFortItem** SelectedKey, class UFortItem* CallFunc_GetSelectedKey_SelectedKey)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "Get Selected Item");

	Params::UItemTransformKeyScreen_C_Get_Selected_Item_Params Parms;
	Parms.CallFunc_GetSelectedKey_SelectedKey = CallFunc_GetSelectedKey_SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = Parms.SelectedKey;

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::ResetScreen()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "ResetScreen");

	Params::UItemTransformKeyScreen_C_ResetScreen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::HandleItemSelected(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "HandleItemSelected");

	Params::UItemTransformKeyScreen_C_HandleItemSelected_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UItemTransformKeyScreen_C::SetupKeyList(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "SetupKeyList");

	Params::UItemTransformKeyScreen_C_SetupKeyList_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EConversionControlKeyRequestRequestType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastSelectedKeyIndex                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Determine_Tab_List_Title_Text                           ()
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetSelectedItem_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndexForItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetTransformKeys_TransformKeys                          (ZeroConstructor, ReferenceParm)

void UItemTransformKeyScreen_C::RebuildKeyList(enum class EConversionControlKeyRequest RequestType, int32 LastSelectedKeyIndex, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, class FText CallFunc_Determine_Tab_List_Title_Text, int32 CallFunc_Array_LastIndex_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "RebuildKeyList");

	Params::UItemTransformKeyScreen_C_RebuildKeyList_Params Parms;
	Parms.RequestType = RequestType;
	Parms.LastSelectedKeyIndex = LastSelectedKeyIndex;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_Determine_Tab_List_Title_Text = CallFunc_Determine_Tab_List_Title_Text;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue1 = CallFunc_GetSelectedItem_ReturnValue1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetIndexForItem_ReturnValue = CallFunc_GetIndexForItem_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTransformKeys_TransformKeys = CallFunc_GetTransformKeys_TransformKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "Construct");

	Params::UItemTransformKeyScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature");

	Params::UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature");

	Params::UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::HandleHomebaseInventoryChanged()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "HandleHomebaseInventoryChanged");

	Params::UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature");

	Params::UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature");

	Params::UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature");

	Params::UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HACK
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::HACK()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "HACK");

	Params::UItemTransformKeyScreen_C_HACK_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EConversionControlKeyRequestCallFunc_Determine_Key_Types_to_See_RequestType                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ItemTransform_TabButton_C*K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EConversionControlKeyRequestCallFunc_Determine_Key_Types_to_See_RequestType1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::ExecuteUbergraph_ItemTransformKeyScreen(int32 EntryPoint, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem2, class FName K2Node_ComponentBoundEvent_TabId1, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UBP_ItemTransform_TabButton_C* K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem1, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType1)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "ExecuteUbergraph_ItemTransformKeyScreen");

	Params::UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SelectedItem2 = K2Node_ComponentBoundEvent_SelectedItem2;
	Parms.K2Node_ComponentBoundEvent_TabId1 = K2Node_ComponentBoundEvent_TabId1;
	Parms.CallFunc_Determine_Key_Types_to_See_RequestType = CallFunc_Determine_Key_Types_to_See_RequestType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button = K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem1 = K2Node_ComponentBoundEvent_SelectedItem1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.CallFunc_Determine_Key_Types_to_See_RequestType1 = CallFunc_Determine_Key_Types_to_See_RequestType1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformKeyScreen_C::OnKeyConfirmed__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "OnKeyConfirmed__DelegateSignature");

	Params::UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyScreen_C::OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto Func = Class->GetFunction("ItemTransformKeyScreen_C", "OnKeySelected__DelegateSignature");

	Params::UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
