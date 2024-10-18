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


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSupportReplayFolder_IsSupported                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::RefreshReplayFolderState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_DoesSupportReplayFolder_IsSupported, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "RefreshReplayFolderState");

	Params::UAthenaReplayBrowserTab_C_RefreshReplayFolderState_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_DoesSupportReplayFolder_IsSupported = CallFunc_DoesSupportReplayFolder_IsSupported;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSupported                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesReplayFolderExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::DoesSupportReplayFolder(bool* IsSupported, bool CallFunc_DoesReplayFolderExist_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue1, bool CallFunc_EqualEqual_StriStri_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DoesSupportReplayFolder");

	Params::UAthenaReplayBrowserTab_C_DoesSupportReplayFolder_Params Parms;
	Parms.CallFunc_DoesReplayFolderExist_ReturnValue = CallFunc_DoesReplayFolderExist_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue1 = CallFunc_EqualEqual_StriStri_ReturnValue1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue2 = CallFunc_EqualEqual_StriStri_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSupported != nullptr)
		*IsSupported = Parms.IsSupported;

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::OnShowLoadingThrobber()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnShowLoadingThrobber");

	Params::UAthenaReplayBrowserTab_C_OnShowLoadingThrobber_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnEnumerationStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnumerationInProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAthenaReplayBrowserTab_C::OnEnumerationStateChanged(bool EnumerationInProgress, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnEnumerationStateChanged");

	Params::UAthenaReplayBrowserTab_C_OnEnumerationStateChanged_Params Parms;
	Parms.EnumerationInProgress = EnumerationInProgress;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputBack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::OnInputBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnInputBack");

	Params::UAthenaReplayBrowserTab_C_OnInputBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::SetupInputActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "SetupInputActionHandlers");

	Params::UAthenaReplayBrowserTab_C_SetupInputActionHandlers_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::CloseRenameDialog(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "CloseRenameDialog");

	Params::UAthenaReplayBrowserTab_C_CloseRenameDialog_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::OnConfirmRename(class FText NewName, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnConfirmRename");

	Params::UAthenaReplayBrowserTab_C_OnConfirmRename_Params Parms;
	Parms.NewName = NewName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputPlay
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::OnInputPlay(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnInputPlay");

	Params::UAthenaReplayBrowserTab_C_OnInputPlay_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.InitializeInput
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UAthenaReplayBrowserTab_C::InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "InitializeInput");

	Params::UAthenaReplayBrowserTab_C_InitializeInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::FocusList(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "FocusList");

	Params::UAthenaReplayBrowserTab_C_FocusList_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ReplayInfoObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaReplayBrowserRowProxyInstance*K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::SelectReplay(class UObject* ReplayInfoObject, class UAthenaReplayBrowserRowProxyInstance* K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "SelectReplay");

	Params::UAthenaReplayBrowserTab_C_SelectReplay_Params Parms;
	Parms.ReplayInfoObject = ReplayInfoObject;
	Parms.K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance = K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputRename
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::OnInputRename(bool* bPassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnInputRename");

	Params::UAthenaReplayBrowserTab_C_OnInputRename_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputDelete
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::OnInputDelete(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnInputDelete");

	Params::UAthenaReplayBrowserTab_C_OnInputDelete_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalTotalViews                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalTotalLength                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalNumReplayRows                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalNumPlayers                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalRank                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalKills                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalTotalSize                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromSeconds_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue1                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue1                           ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue2                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          ()
// class UAthenaReplayBrowserRowProxyInstance*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::Refresh(int32 LocalTotalViews, float LocalTotalLength, int32 LocalNumReplayRows, int32 LocalTotalNumPlayers, int32 LocalTotalRank, int32 LocalTotalKills, float LocalTotalSize, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue7, float CallFunc_Divide_FloatFloat_ReturnValue3, int32 CallFunc_Round_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue5, class FText CallFunc_Conv_FloatToText_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class FText CallFunc_Conv_StringToText_ReturnValue2, class UAthenaReplayBrowserRowProxyInstance* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "Refresh");

	Params::UAthenaReplayBrowserTab_C_Refresh_Params Parms;
	Parms.LocalTotalViews = LocalTotalViews;
	Parms.LocalTotalLength = LocalTotalLength;
	Parms.LocalNumReplayRows = LocalNumReplayRows;
	Parms.LocalTotalNumPlayers = LocalTotalNumPlayers;
	Parms.LocalTotalRank = LocalTotalRank;
	Parms.LocalTotalKills = LocalTotalKills;
	Parms.LocalTotalSize = LocalTotalSize;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue1 = CallFunc_Conv_TextToString_ReturnValue1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_Conv_TextToString_ReturnValue2 = CallFunc_Conv_TextToString_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue5 = CallFunc_Conv_IntToFloat_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue6 = CallFunc_Conv_IntToFloat_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue7 = CallFunc_Conv_IntToFloat_ReturnValue7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_Round_ReturnValue1 = CallFunc_Round_ReturnValue1;
	Parms.CallFunc_Conv_IntToString_ReturnValue1 = CallFunc_Conv_IntToString_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue8 = CallFunc_Conv_IntToFloat_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_Conv_FloatToText_ReturnValue1 = CallFunc_Conv_FloatToText_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue2 = CallFunc_Conv_FloatToText_ReturnValue2;
	Parms.CallFunc_Conv_TextToString_ReturnValue3 = CallFunc_Conv_TextToString_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77");

	Params::UAthenaReplayBrowserTab_C_DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_12ECDF8D47346477E6D96B927F5223CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_12ECDF8D47346477E6D96B927F5223CE(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_12ECDF8D47346477E6D96B927F5223CE");

	Params::UAthenaReplayBrowserTab_C_DialogResult_12ECDF8D47346477E6D96B927F5223CE_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_E89869AF460753E34CA097BC86722E95(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_E89869AF460753E34CA097BC86722E95");

	Params::UAthenaReplayBrowserTab_C_DialogResult_E89869AF460753E34CA097BC86722E95_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_00986FB1494FF7EA41F1769EAFB70E83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_00986FB1494FF7EA41F1769EAFB70E83(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_00986FB1494FF7EA41F1769EAFB70E83");

	Params::UAthenaReplayBrowserTab_C_DialogResult_00986FB1494FF7EA41F1769EAFB70E83_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_961693C14B8B2A8E26E2AFB69251D5F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_961693C14B8B2A8E26E2AFB69251D5F8");

	Params::UAthenaReplayBrowserTab_C_DialogResult_961693C14B8B2A8E26E2AFB69251D5F8_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_C4C0E9C14BA061EBBA451D839890A4A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_C4C0E9C14BA061EBBA451D839890A4A7(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_C4C0E9C14BA061EBBA451D839890A4A7");

	Params::UAthenaReplayBrowserTab_C_DialogResult_C4C0E9C14BA061EBBA451D839890A4A7_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_79A680104EAA90FF10D265808FD512BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_79A680104EAA90FF10D265808FD512BC(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_79A680104EAA90FF10D265808FD512BC");

	Params::UAthenaReplayBrowserTab_C_DialogResult_79A680104EAA90FF10D265808FD512BC_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_F681A46A43F230E95DCC3F994D03E83C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DialogResult_F681A46A43F230E95DCC3F994D03E83C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DialogResult_F681A46A43F230E95DCC3F994D03E83C");

	Params::UAthenaReplayBrowserTab_C_DialogResult_F681A46A43F230E95DCC3F994D03E83C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature");

	Params::UAthenaReplayBrowserTab_C_BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "Construct");

	Params::UAthenaReplayBrowserTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance*RowProxy                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "PlayReplay");

	Params::UAthenaReplayBrowserTab_C_PlayReplay_Params Parms;
	Parms.RowProxy = RowProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnInputModeChanged");

	Params::UAthenaReplayBrowserTab_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature");

	Params::UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance*RowProxy                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "DeleteReplay");

	Params::UAthenaReplayBrowserTab_C_DeleteReplay_Params Parms;
	Parms.RowProxy = RowProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnActivated");

	Params::UAthenaReplayBrowserTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnDeleteFailed(class FText& Reason)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnDeleteFailed");

	Params::UAthenaReplayBrowserTab_C_OnDeleteFailed_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnRenameFailed(class FText& Reason)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnRenameFailed");

	Params::UAthenaReplayBrowserTab_C_OnRenameFailed_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnSaveFailed(class FText& Reason)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnSaveFailed");

	Params::UAthenaReplayBrowserTab_C_OnSaveFailed_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::OnRowsUpdated()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnRowsUpdated");

	Params::UAthenaReplayBrowserTab_C_OnRowsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnCorruptReplayFound
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Info                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnCorruptReplayFound(class FText& Info)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnCorruptReplayFound");

	Params::UAthenaReplayBrowserTab_C_OnCorruptReplayFound_Params Parms;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserTab_C::BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature");

	Params::UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::OnPlayFailed(class FText& Reason)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnPlayFailed");

	Params::UAthenaReplayBrowserTab_C_OnPlayFailed_Params Parms;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::OnReplayEnumerationStart()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnReplayEnumerationStart");

	Params::UAthenaReplayBrowserTab_C_OnReplayEnumerationStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnReplayEnumerationFinish
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserTab_C::OnReplayEnumerationFinish()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "OnReplayEnumerationFinish");

	Params::UAthenaReplayBrowserTab_C_OnReplayEnumerationFinish_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	Params::UAthenaReplayBrowserTab_C_BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ShowErrorDialog
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        MESSAGE                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserTab_C::ShowErrorDialog(class FText& Title, class FText& MESSAGE)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "ShowErrorDialog");

	Params::UAthenaReplayBrowserTab_C_ShowErrorDialog_Params Parms;
	Parms.Title = Title;
	Parms.MESSAGE = MESSAGE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Message                                             (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaReplayBrowserRowProxyInstance*K2Node_Event_RowProxy1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaReplayBrowserOldReplayDisclaimer_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class UObject*                     K2Node_ComponentBoundEvent_Item1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaReplayBrowserRowProxyInstance*K2Node_Event_RowProxy                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Reason3                                             (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Reason2                                             (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Reason1                                             (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Event_Info                                                (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Event_Reason                                              (ConstParm)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserTab_C::ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Message, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result6, class FName K2Node_CustomEvent_ResultName6, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result5, class FName K2Node_CustomEvent_ResultName5, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName Temp_name_Variable4, enum class EFortDialogResult Temp_byte_Variable4, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName Temp_name_Variable5, enum class EFortDialogResult Temp_byte_Variable5, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable6, enum class EFortDialogResult Temp_byte_Variable6, class UObject* K2Node_ComponentBoundEvent_Item2, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaReplayBrowserOldReplayDisclaimer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool K2Node_Event_bUsingGamepad, bool CallFunc_BooleanNOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item1, bool CallFunc_IsValid_ReturnValue2, enum class EFortDialogResult Temp_byte_Variable7, class FName Temp_name_Variable7, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy, bool CallFunc_IsValid_ReturnValue3, class UWidget* Temp_object_Variable, class FText CallFunc_Conv_StringToText_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result7, class FName K2Node_CustomEvent_ResultName7, bool CallFunc_IsValid_ReturnValue4, class FText K2Node_Event_Reason3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue5, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3, bool CallFunc_IsValid_ReturnValue6, class FText K2Node_Event_Reason2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4, class FText K2Node_Event_Reason1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class FText K2Node_Event_Info, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, bool CallFunc_IsValid_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FText K2Node_Event_Reason, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7, bool CallFunc_IsValid_ReturnValue11, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserTab_C", "ExecuteUbergraph_AthenaReplayBrowserTab");

	Params::UAthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Message = K2Node_Event_Message;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Result6 = K2Node_CustomEvent_Result6;
	Parms.K2Node_CustomEvent_ResultName6 = K2Node_CustomEvent_ResultName6;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_Result5 = K2Node_CustomEvent_Result5;
	Parms.K2Node_CustomEvent_ResultName5 = K2Node_CustomEvent_ResultName5;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CustomEvent_Result4 = K2Node_CustomEvent_Result4;
	Parms.K2Node_CustomEvent_ResultName4 = K2Node_CustomEvent_ResultName4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_CustomEvent_Result3 = K2Node_CustomEvent_Result3;
	Parms.K2Node_CustomEvent_ResultName3 = K2Node_CustomEvent_ResultName3;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.Temp_name_Variable5 = Temp_name_Variable5;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable6 = Temp_name_Variable6;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_ComponentBoundEvent_Item2 = K2Node_ComponentBoundEvent_Item2;
	Parms.K2Node_Event_RowProxy1 = K2Node_Event_RowProxy1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item1 = K2Node_ComponentBoundEvent_Item1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_name_Variable7 = Temp_name_Variable7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_Event_RowProxy = K2Node_Event_RowProxy;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1;
	Parms.K2Node_CustomEvent_Result7 = K2Node_CustomEvent_Result7;
	Parms.K2Node_CustomEvent_ResultName7 = K2Node_CustomEvent_ResultName7;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_Event_Reason3 = K2Node_Event_Reason3;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.K2Node_Event_Reason2 = K2Node_Event_Reason2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4;
	Parms.K2Node_Event_Reason1 = K2Node_Event_Reason1;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_Event_Info = K2Node_Event_Info;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
