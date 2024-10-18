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


// Function FortReplayTimeline.FortReplayTimeline_C.AddMarkerToTimeline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortReplayEventType    EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RelativeTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EventIdx                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CanvasPanelSlot                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   AnchorVec                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimelineMarker_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTimeline_C::AddMarkerToTimeline(enum class EFortReplayEventType EventType, float RelativeTime, int32 EventIdx, class UCanvasPanelSlot* CanvasPanelSlot, const struct FVector2D& AnchorVec, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTimelineMarker_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "AddMarkerToTimeline");

	Params::UFortReplayTimeline_C_AddMarkerToTimeline_Params Parms;
	Parms.EventType = EventType;
	Parms.RelativeTime = RelativeTime;
	Parms.EventIdx = EventIdx;
	Parms.CanvasPanelSlot = CanvasPanelSlot;
	Parms.AnchorVec = AnchorVec;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.OnHUDVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHudVisibilityState     VisibilityState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTimeline_C::OnHUDVisibilityChanged(enum class EHudVisibilityState VisibilityState, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "OnHUDVisibilityChanged");

	Params::UFortReplayTimeline_C_OnHUDVisibilityChanged_Params Parms;
	Parms.VisibilityState = VisibilityState;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.OnPressCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHandled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::OnPressCancel(bool* bHandled, class UFortReplayContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "OnPressCancel");

	Params::UFortReplayTimeline_C_OnPressCancel_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHandled != nullptr)
		*bHandled = Parms.bHandled;

}


// Function FortReplayTimeline.FortReplayTimeline_C.OnPressConfirm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHandled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnPressCancel_bHandled                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::OnPressConfirm(bool* bHandled, bool CallFunc_OnPressCancel_bHandled, class UFortReplayContext* CallFunc_GetContext_ReturnValue, float CallFunc_GetValue_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "OnPressConfirm");

	Params::UFortReplayTimeline_C_OnPressConfirm_Params Parms;
	Parms.CallFunc_OnPressCancel_bHandled = CallFunc_OnPressCancel_bHandled;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHandled != nullptr)
		*bHandled = Parms.bHandled;

}


// Function FortReplayTimeline.FortReplayTimeline_C.OnTimelineInputFocusChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasInputFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CancelAction                                                     (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         ConfirmAction                                                    (Edit, BlueprintVisible, NoDestructor)
// bool                               HasFocus                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::OnTimelineInputFocusChanged(bool bHasInputFocus, const struct FDataTableRowHandle& CancelAction, const struct FDataTableRowHandle& ConfirmAction, bool HasFocus, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "OnTimelineInputFocusChanged");

	Params::UFortReplayTimeline_C_OnTimelineInputFocusChanged_Params Parms;
	Parms.bHasInputFocus = bHasInputFocus;
	Parms.CancelAction = CancelAction;
	Parms.ConfirmAction = ConfirmAction;
	Parms.HasFocus = HasFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.GetProgressBarWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UFortReplayTimeline_C::GetProgressBarWidget()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "GetProgressBarWidget");

	Params::UFortReplayTimeline_C_GetProgressBarWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortReplayTimeline.FortReplayTimeline_C.SetReplayContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortReplayContext*          InReplayContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UFortReplayTimeline_C::SetReplayContext(class UFortReplayContext* InReplayContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "SetReplayContext");

	Params::UFortReplayTimeline_C_SetReplayContext_Params Parms;
	Parms.InReplayContext = InReplayContext;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.UpdateFillBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::UpdateFillBar(float InPercent, float Temp_float_Variable, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "UpdateFillBar");

	Params::UFortReplayTimeline_C_UpdateFillBar_Params Parms;
	Parms.InPercent = InPercent;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.InitializeBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::InitializeBar(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "InitializeBar");

	Params::UFortReplayTimeline_C_InitializeBar_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.CurrentTimeChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeNow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::CurrentTimeChangedFromNative(float TimeNow)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "CurrentTimeChangedFromNative");

	Params::UFortReplayTimeline_C_CurrentTimeChangedFromNative_Params Parms;
	Parms.TimeNow = TimeNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFortReplayTimeline_C::BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature");

	Params::UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFortReplayTimeline_C::BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature");

	Params::UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayTimeline_C::Construct()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "Construct");

	Params::UFortReplayTimeline_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayTimeline_C::Destruct()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "Destruct");

	Params::UFortReplayTimeline_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTimeline_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "PreConstruct");

	Params::UFortReplayTimeline_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.ClearTimelineMarkers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayTimeline_C::ClearTimelineMarkers()
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "ClearTimelineMarkers");

	Params::UFortReplayTimeline_C_ClearTimelineMarkers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTimeline.FortReplayTimeline_C.ExecuteUbergraph_FortReplayTimeline
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_TimeNow                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTimeline_C::ExecuteUbergraph_FortReplayTimeline(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_TimeNow, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortReplayContext* CallFunc_GetContext_ReturnValue2, float CallFunc_GetValue_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortReplayContext* CallFunc_GetContext_ReturnValue4, class UFortReplayContext* CallFunc_GetContext_ReturnValue5, bool K2Node_Event_IsDesignTime, class UFortReplayContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTimeline_C", "ExecuteUbergraph_FortReplayTimeline");

	Params::UFortReplayTimeline_C_ExecuteUbergraph_FortReplayTimeline_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TimeNow = K2Node_CustomEvent_TimeNow;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
