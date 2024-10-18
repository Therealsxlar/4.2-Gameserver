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


// Function TabInputOptions.TabInputOptions_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::NewFunction_0()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "NewFunction_0");

	Params::UTabInputOptions_C_NewFunction_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::Set_Input_Enabled(bool Enabled, int32 Temp_int_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Set Input Enabled");

	Params::UTabInputOptions_C_Set_Input_Enabled_Params Parms;
	Parms.Enabled = Enabled;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input = K2Node_DynamicCast_AsOptions_Menu_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Overlay_Key_Pressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Overlay Key Pressed");

	Params::UTabInputOptions_C_Overlay_Key_Pressed_Params Parms;
	Parms.NewKey = NewKey;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "CenterOnTab");

	Params::UTabInputOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::HandleUsingGamepadChanged(enum class ECommonInputType bNewInputType)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "HandleUsingGamepadChanged");

	Params::UTabInputOptions_C_HandleUsingGamepadChanged_Params Parms;
	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.UnbindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInput_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::UnbindClicked(int32 Number_in_List, class UOptionsMenuInput_C* Widget)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "UnbindClicked");

	Params::UTabInputOptions_C_UnbindClicked_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.ClearAndConstructKeybindList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::ClearAndConstructKeybindList()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "ClearAndConstructKeybindList");

	Params::UTabInputOptions_C_ClearAndConstructKeybindList_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Input Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Primary_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Input_Clicked(int32 Number_in_List, bool Is_Primary_Button)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Input Clicked");

	Params::UTabInputOptions_C_Input_Clicked_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Construct");

	Params::UTabInputOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "UpdateOptionsTab");

	Params::UTabInputOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_Event_bNewInputType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_in_List1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInput_C*         K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_In_List                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Primary_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::ExecuteUbergraph_TabInputOptions(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UObject* CallFunc_GetItemAt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input1, bool K2Node_DynamicCast_bSuccess1, enum class ECommonInputType K2Node_Event_bNewInputType, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility Temp_byte_Variable1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 K2Node_CustomEvent_Number_in_List1, class UOptionsMenuInput_C* K2Node_CustomEvent_Widget, const struct FKey& K2Node_MakeStruct_Key, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, int32 K2Node_CustomEvent_Number_In_List, bool K2Node_CustomEvent_Is_Primary_Button, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_Not_PreBool_ReturnValue2)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "ExecuteUbergraph_TabInputOptions");

	Params::UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input = K2Node_DynamicCast_AsOptions_Menu_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input1 = K2Node_DynamicCast_AsOptions_Menu_Input1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_bNewInputType = K2Node_Event_bNewInputType;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CustomEvent_Number_in_List1 = K2Node_CustomEvent_Number_in_List1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CustomEvent_Number_In_List = K2Node_CustomEvent_Number_In_List;
	Parms.K2Node_CustomEvent_Is_Primary_Button = K2Node_CustomEvent_Is_Primary_Button;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Gamepad_Enabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Gamepad Changed__DelegateSignature");

	Params::UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params Parms;
	Parms.Gamepad_Enabled = Gamepad_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Disable Overlay__DelegateSignature");

	Params::UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Overlay_Text                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabInputOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input, class FText Overlay_Text)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Enable Overlay__DelegateSignature");

	Params::UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params Parms;
	Parms.Accept_Input = Accept_Input;
	Parms.Overlay_Text = Overlay_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
