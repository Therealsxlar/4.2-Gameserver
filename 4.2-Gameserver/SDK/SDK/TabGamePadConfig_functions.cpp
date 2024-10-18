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


// Function TabGamePadConfig.TabGamePadConfig_C.GetCurrentPlatformIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Platform_Index                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetControllerPlatform_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::GetCurrentPlatformIndex(int32* Platform_Index, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable1, int32 Temp_int_Variable2, bool CallFunc_IsErebus_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "GetCurrentPlatformIndex");

	Params::UTabGamePadConfig_C_GetCurrentPlatformIndex_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_GetControllerPlatform_ReturnValue = CallFunc_GetControllerPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Platform_Index != nullptr)
		*Platform_Index = Parms.Platform_Index;

}


// Function TabGamePadConfig.TabGamePadConfig_C.IsCustomConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PresetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCustomGamepadConfig_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTabGamePadConfig_C::IsCustomConfig(int32 PresetIndex, bool CallFunc_IsCustomGamepadConfig_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "IsCustomConfig");

	Params::UTabGamePadConfig_C_IsCustomConfig_Params Parms;
	Parms.PresetIndex = PresetIndex;
	Parms.CallFunc_IsCustomGamepadConfig_ReturnValue = CallFunc_IsCustomGamepadConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabGamePadConfig.TabGamePadConfig_C.SetInputEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuInputOneKey_C*   K2Node_DynamicCast_AsOptions_Menu_Input_One_Key                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::SetInputEnabled(bool Enable, int32 Temp_int_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "SetInputEnabled");

	Params::UTabGamePadConfig_C_SetInputEnabled_Params Parms;
	Parms.Enable = Enable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input_One_Key = K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.OverlayKeyPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInputOneKey_C*   K2Node_DynamicCast_AsOptions_Menu_Input_One_Key                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_C::OverlayKeyPressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "OverlayKeyPressed");

	Params::UTabGamePadConfig_C_OverlayKeyPressed_Params Parms;
	Parms.NewKey = NewKey;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue1 = CallFunc_EqualEqual_KeyKey_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input_One_Key = K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCustomConfig_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::HandleGamepadMappingInfoChange(bool CallFunc_IsCustomConfig_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "HandleGamepadMappingInfoChange");

	Params::UTabGamePadConfig_C_HandleGamepadMappingInfoChange_Params Parms;
	Parms.CallFunc_IsCustomConfig_ReturnValue = CallFunc_IsCustomConfig_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_C::Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Handle Mode Toggled");

	Params::UTabGamePadConfig_C_Handle_Mode_Toggled_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPlatformIndex_Platform_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Update_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, int32 CallFunc_GetCurrentPlatformIndex_Platform_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Update Data");

	Params::UTabGamePadConfig_C_Update_Data_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentPlatformIndex_Platform_Index = CallFunc_GetCurrentPlatformIndex_Platform_Index;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue = CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue1 = CallFunc_Array_Find_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames (ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames(ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        K2Node_Select_Default                                            ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1(ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1(ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_C::Initialize_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Initialize Data");

	Params::UTabGamePadConfig_C_Initialize_Data_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetSubGame_ReturnValue1 = CallFunc_GetSubGame_ReturnValue1;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1 = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1 = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue1 = CallFunc_EqualEqual_StrStr_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "UpdateOptionsTab");

	Params::UTabGamePadConfig_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.GamepadPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::GamepadPlatformConfigChanged(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "GamepadPlatformConfigChanged");

	Params::UTabGamePadConfig_C_GamepadPlatformConfigChanged_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Gamepad_Config_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Gamepad Config Changed");

	Params::UTabGamePadConfig_C_Gamepad_Config_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.ClearAndConstructKeybindList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::ClearAndConstructKeybindList()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "ClearAndConstructKeybindList");

	Params::UTabGamePadConfig_C_ClearAndConstructKeybindList_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "CenterOnTab");

	Params::UTabGamePadConfig_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabGamePadConfig_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.InputClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Primary_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_C::InputClicked_Bind(int32 Number_in_List, bool Is_Primary_Button)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "InputClicked_Bind");

	Params::UTabGamePadConfig_C_InputClicked_Bind_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Configuration_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Configuration Changed");

	Params::UTabGamePadConfig_C_Configuration_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamePadToggleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::HandleGamePadToggleMode()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "HandleGamePadToggleMode");

	Params::UTabGamePadConfig_C_HandleGamePadToggleMode_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.UnbindClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInputOneKey_C*   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::UnbindClicked_Bind(int32 Number_in_List, class UOptionsMenuInputOneKey_C* Widget)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "UnbindClicked_Bind");

	Params::UTabGamePadConfig_C_UnbindClicked_Bind_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature");

	Params::UTabGamePadConfig_C_BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.DoResetToDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::DoResetToDefault()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "DoResetToDefault");

	Params::UTabGamePadConfig_C_DoResetToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.DoNotResetToDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::DoNotResetToDefault()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "DoNotResetToDefault");

	Params::UTabGamePadConfig_C_DoNotResetToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::Construct()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Construct");

	Params::UTabGamePadConfig_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.TrySetInputEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::TrySetInputEnabled()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "TrySetInputEnabled");

	Params::UTabGamePadConfig_C_TrySetInputEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_in_List1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Primary_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuInputOneKey_C*   K2Node_DynamicCast_AsOptions_Menu_Input_One_Key                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// int32                              K2Node_CustomEvent_Selected_Index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_In_List                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInputOneKey_C*   K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefreshPending_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCustomGamepadBindingChanges_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)

void UTabGamePadConfig_C::ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue, bool Temp_bool_Variable, enum class ECommonGamepadType Temp_byte_Variable, enum class ECommonGamepadType Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_CustomEvent_Selected_Index2, bool CallFunc_BooleanOR_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 K2Node_CustomEvent_Selected_Index1, const class FString& CallFunc_Array_Get_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, int32 K2Node_CustomEvent_Number_in_List1, bool K2Node_CustomEvent_Is_Primary_Button, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputContext* CallFunc_GetContext_ReturnValue2, int32 K2Node_CustomEvent_Number_In_List, class UOptionsMenuInputOneKey_C* K2Node_CustomEvent_Widget, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, bool Temp_bool_Variable1, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const class FString& K2Node_Select_Default, enum class ECommonGamepadType K2Node_Select1_Default, const class FString& CallFunc_Array_Get_Item1, bool CallFunc_IsRefreshPending_ReturnValue, bool CallFunc_HasCustomGamepadBindingChanges_ReturnValue, const struct FKey& K2Node_MakeStruct_Key)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "ExecuteUbergraph_TabGamePadConfig");

	Params::UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index2 = K2Node_CustomEvent_Selected_Index2;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_Selected_Index1 = K2Node_CustomEvent_Selected_Index1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CustomEvent_Number_in_List1 = K2Node_CustomEvent_Number_in_List1;
	Parms.K2Node_CustomEvent_Is_Primary_Button = K2Node_CustomEvent_Is_Primary_Button;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input_One_Key = K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CustomEvent_Number_In_List = K2Node_CustomEvent_Number_In_List;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_IsRefreshPending_ReturnValue = CallFunc_IsRefreshPending_ReturnValue;
	Parms.CallFunc_HasCustomGamepadBindingChanges_ReturnValue = CallFunc_HasCustomGamepadBindingChanges_ReturnValue;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.ShowResetToDefaultMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::ShowResetToDefaultMessage__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "ShowResetToDefaultMessage__DelegateSignature");

	Params::UTabGamePadConfig_C_ShowResetToDefaultMessage__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.GamepadMappingInfoChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::GamepadMappingInfoChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "GamepadMappingInfoChanged__DelegateSignature");

	Params::UTabGamePadConfig_C_GamepadMappingInfoChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.EnableGamepadInputOverlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AcceptInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        OverlayText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabGamePadConfig_C::EnableGamepadInputOverlay__DelegateSignature(bool AcceptInput, class FText OverlayText)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "EnableGamepadInputOverlay__DelegateSignature");

	Params::UTabGamePadConfig_C_EnableGamepadInputOverlay__DelegateSignature_Params Parms;
	Parms.AcceptInput = AcceptInput;
	Parms.OverlayText = OverlayText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
