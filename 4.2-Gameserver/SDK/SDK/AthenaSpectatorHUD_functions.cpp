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


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TogglePlayerListVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::TogglePlayerListVisibility(bool Temp_bool_Variable, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "TogglePlayerListVisibility");

	Params::UAthenaSpectatorHUD_C_TogglePlayerListVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowCameraControls
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpectatorCameraType    CameraType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAthenaSpectatorHUD_C::ShowCameraControls(enum class ESpectatorCameraType CameraType, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UCommonInputContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESpectatorCameraType Temp_byte_Variable2, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, int32 Temp_int_Variable10, int32 Temp_int_Variable11, int32 Temp_int_Variable12, int32 Temp_int_Variable13, enum class ESpectatorCameraType Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable13, enum class ECommonInputType Temp_byte_Variable14, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ShowCameraControls");

	Params::UAthenaSpectatorHUD_C_ShowCameraControls_Params Parms;
	Parms.CameraType = CameraType;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HideCameraControlsOnTimeout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::HideCameraControlsOnTimeout()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HideCameraControlsOnTimeout");

	Params::UAthenaSpectatorHUD_C_HideCameraControlsOnTimeout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::HandleInputModeChanged(bool Passthrough)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleInputModeChanged");

	Params::UAthenaSpectatorHUD_C_HandleInputModeChanged_Params Parms;
	Parms.Passthrough = Passthrough;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCameraChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    CameraType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::HandleCameraChange(class AFortPlayerControllerSpectating* PlayerController, enum class ESpectatorCameraType CameraType)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleCameraChange");

	Params::UAthenaSpectatorHUD_C_HandleCameraChange_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.CameraType = CameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleViewSettingsVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::ToggleViewSettingsVisibility(bool Temp_bool_Variable, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ToggleViewSettingsVisibility");

	Params::UAthenaSpectatorHUD_C_ToggleViewSettingsVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnLevelStreamingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bStreaming                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::OnLevelStreamingChanged(bool bStreaming, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnLevelStreamingChanged");

	Params::UAthenaSpectatorHUD_C_OnLevelStreamingChanged_Params Parms;
	Parms.bStreaming = bStreaming;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Get Display Time in Minutes And Seconds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeInSeconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_LeftChop_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaSpectatorHUD_C::Get_Display_Time_in_Minutes_And_Seconds(float TimeInSeconds, class FText* OutText, const class FString& CallFunc_TimeSecondsToString_ReturnValue, const class FString& CallFunc_LeftChop_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "Get Display Time in Minutes And Seconds");

	Params::UAthenaSpectatorHUD_C_Get_Display_Time_in_Minutes_And_Seconds_Params Parms;
	Parms.TimeInSeconds = TimeInSeconds;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_LeftChop_ReturnValue = CallFunc_LeftChop_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Bind Replay UI Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortReplaySpectator*        K2Node_DynamicCast_AsFort_Replay_Spectator                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)

void UAthenaSpectatorHUD_C::Bind_Replay_UI_Events(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess, class UFortReplayContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "Bind Replay UI Events");

	Params::UAthenaSpectatorHUD_C_Bind_Replay_UI_Events_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator = K2Node_DynamicCast_AsFort_Replay_Spectator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HudVisibilityChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHudVisibilityState     NewVisibilty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        ReplayHUDVisibility                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetVisibilityText_Text                                  ()
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPanelOnStack_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::HudVisibilityChangedFromNative(enum class EHudVisibilityState NewVisibilty, enum class ESlateVisibility ReplayHUDVisibility, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetVisibilityText_Text, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsPanelOnStack_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HudVisibilityChangedFromNative");

	Params::UAthenaSpectatorHUD_C_HudVisibilityChangedFromNative_Params Parms;
	Parms.NewVisibilty = NewVisibilty;
	Parms.ReplayHUDVisibility = ReplayHUDVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetVisibilityText_Text = CallFunc_GetVisibilityText_Text;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_IsPanelOnStack_ReturnValue = CallFunc_IsPanelOnStack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TimelineRangeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndTime                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText         ()

void UAthenaSpectatorHUD_C::TimelineRangeChangedFromNative(float StartTime, float EndTime, class FText CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "TimelineRangeChangedFromNative");

	Params::UAthenaSpectatorHUD_C_TimelineRangeChangedFromNative_Params Parms;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;
	Parms.CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText = CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CurrentTimeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NowTime                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText         ()

void UAthenaSpectatorHUD_C::CurrentTimeChangedFromNative(float NowTime, class FText CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "CurrentTimeChangedFromNative");

	Params::UAthenaSpectatorHUD_C_CurrentTimeChangedFromNative_Params Parms;
	Parms.NowTime = NowTime;
	Parms.CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText = CallFunc_Get_Display_Time_in_Minutes_And_Seconds_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::SetupCameraMode(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "SetupCameraMode");

	Params::UAthenaSpectatorHUD_C_SetupCameraMode_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenHUDElementTags                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                HUDElementTagToCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     HUDElement                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "CheckHUDElementVisibility");

	Params::UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params Parms;
	Parms.HiddenHUDElementTags = HiddenHUDElementTags;
	Parms.HUDElementTagToCheck = HUDElementTagToCheck;
	Parms.HUDElement = HUDElement;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopMenuContent_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaSpectatorHUD_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopMenuContent_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "PopContentWidgetInternal");

	Params::UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopMenuContent_ReturnValue = CallFunc_PopMenuContent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPickerMode         Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreFirstAccept                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ShowPicker");

	Params::UAthenaSpectatorHUD_C_ShowPicker_Params Parms;
	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.IgnoreFirstAccept = IgnoreFirstAccept;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::HandleFocusChat()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleFocusChat");

	Params::UAthenaSpectatorHUD_C_HandleFocusChat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ToggleTopLevelMenu");

	Params::UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params Parms;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::ToggleChat(bool Show)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ToggleChat");

	Params::UAthenaSpectatorHUD_C_ToggleChat_Params Parms;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::SetPersistentHUDContentVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "SetPersistentHUDContentVisibility");

	Params::UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InidicatorsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleIndicatorModeChanged");

	Params::UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params Parms;
	Parms.InidicatorsEnabled = InidicatorsEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::OnPlayerTargetingChanged(bool IsTargeting, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnPlayerTargetingChanged");

	Params::UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params Parms;
	Parms.IsTargeting = IsTargeting;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleKeybindsChanged");

	Params::UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHandleAction
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 Result                                                           (Parm, OutParm)
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HandleAction                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldCloseMenuOnEscape_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 K2Node_Select_Default                                            ()

void UAthenaSpectatorHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough, bool HandleAction, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldCloseMenuOnEscape_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnHandleAction");

	Params::UAthenaSpectatorHUD_C_OnHandleAction_Params Parms;
	Parms.HandleAction = HandleAction;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_ShouldCloseMenuOnEscape_ReturnValue = CallFunc_ShouldCloseMenuOnEscape_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentCustomWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortHUDContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleCursorModeChanged");

	Params::UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnDeclined_96D6B69B40224C661B08D9B34525EE86
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::OnDeclined_96D6B69B40224C661B08D9B34525EE86()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnDeclined_96D6B69B40224C661B08D9B34525EE86");

	Params::UAthenaSpectatorHUD_C_OnDeclined_96D6B69B40224C661B08D9B34525EE86_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnConfirmed_96D6B69B40224C661B08D9B34525EE86
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::OnConfirmed_96D6B69B40224C661B08D9B34525EE86()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnConfirmed_96D6B69B40224C661B08D9B34525EE86");

	Params::UAthenaSpectatorHUD_C_OnConfirmed_96D6B69B40224C661B08D9B34525EE86_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "Construct");

	Params::UAthenaSpectatorHUD_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnEnterState");

	Params::UAthenaSpectatorHUD_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.QuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaSpectatorHUD_C::QuestsCompleted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "QuestsCompleted");

	Params::UAthenaSpectatorHUD_C_QuestsCompleted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "Destruct");

	Params::UAthenaSpectatorHUD_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	Params::UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	Params::UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        FailureText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnUnableToPerformAction");

	Params::UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params Parms;
	Parms.FailedReason = FailedReason;
	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::Prepare_Game_Over()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "Prepare Game Over");

	Params::UAthenaSpectatorHUD_C_Prepare_Game_Over_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorHUD_C::On_Player_Died(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "On Player Died");

	Params::UAthenaSpectatorHUD_C_On_Player_Died_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::PrepareToShowEndGameUI()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "PrepareToShowEndGameUI");

	Params::UAthenaSpectatorHUD_C_PrepareToShowEndGameUI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::On_Player_Won()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "On Player Won");

	Params::UAthenaSpectatorHUD_C_On_Player_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::OnRevived()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "OnRevived");

	Params::UAthenaSpectatorHUD_C_OnRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::HandleRevived()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HandleRevived");

	Params::UAthenaSpectatorHUD_C_HandleRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHUD_C::On_Team_Won()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "On Team Won");

	Params::UAthenaSpectatorHUD_C_On_Team_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaSpectatorHUD_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "PushContentWidgetInternal");

	Params::UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*      ViewModel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::ViewModelChanged(class UAthenaPlayerViewModel* ViewModel)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ViewModelChanged");

	Params::UAthenaSpectatorHUD_C_ViewModelChanged_Params Parms;
	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetFullScreenMapVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHUD_C::SetFullScreenMapVisibility(bool bIsVisible)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "SetFullScreenMapVisibility");

	Params::UAthenaSpectatorHUD_C_SetFullScreenMapVisibility_Params Parms;
	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSpectatorHUD_C_BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HUDVisibilitySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHudVisibilityState     HUDVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::HUDVisibilitySound(enum class EHudVisibilityState HUDVisibility)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "HUDVisibilitySound");

	Params::UAthenaSpectatorHUD_C_HUDVisibilitySound_Params Parms;
	Parms.HUDVisibility = HUDVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHudVisibilityState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests                                        (ConstParm, ZeroConstructor, ReferenceParm)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDialogDescription      K2Node_MakeStruct_FortDialogDescription                          (ContainsInstancedReference)
// class UFortAsyncAction_TriggerNotification*CallFunc_TriggerNotification_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FGameplayTagContainer       K2Node_CustomEvent_FailedReason                                  ()
// class FText                        K2Node_CustomEvent_FailureText                                   ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPickerContext*          CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// class UAthenaPlayerViewModel*      K2Node_Event_ViewModel                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisible                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// enum class EHudVisibilityState     K2Node_CustomEvent_HUDVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHUD_C::ExecuteUbergraph_AthenaSpectatorHUD(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortReplayContext* CallFunc_GetContext_ReturnValue3, class UCommonUIContext* CallFunc_GetContext_ReturnValue4, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, enum class EHudVisibilityState Temp_byte_Variable, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue1, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class UFortReplayContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortUIState K2Node_Event_PreviousUIState, class UFortHUDContext* CallFunc_GetContext_ReturnValue7, class UFortHUDContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortHUDContext* CallFunc_GetContext_ReturnValue9, int32 Temp_int_Array_Index_Variable, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue11, const struct FFortDialogDescription& K2Node_MakeStruct_FortDialogDescription, class UFortAsyncAction_TriggerNotification* CallFunc_TriggerNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, bool CallFunc_HasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue13, class UFortPickerContext* CallFunc_GetContext_ReturnValue14, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UAthenaPlayerViewModel* K2Node_Event_ViewModel, bool K2Node_Event_bIsVisible, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class EHudVisibilityState K2Node_CustomEvent_HUDVisibility, int32 Temp_int_Loop_Counter_Variable, class USoundBase* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue15, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHUD_C", "ExecuteUbergraph_AthenaSpectatorHUD");

	Params::UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetInputManager_ReturnValue1 = CallFunc_GetInputManager_ReturnValue1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Quests = K2Node_CustomEvent_Quests;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.K2Node_MakeStruct_FortDialogDescription = K2Node_MakeStruct_FortDialogDescription;
	Parms.CallFunc_TriggerNotification_ReturnValue = CallFunc_TriggerNotification_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CustomEvent_FailedReason = K2Node_CustomEvent_FailedReason;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_Event_ViewModel = K2Node_Event_ViewModel;
	Parms.K2Node_Event_bIsVisible = K2Node_Event_bIsVisible;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CustomEvent_HUDVisibility = K2Node_CustomEvent_HUDVisibility;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
