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


// Function GamepadKeyButton.GamepadKeyButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    ContentAlignment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyButton_C::SetContentAlignment(enum class EHorizontalAlignment ContentAlignment)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "SetContentAlignment");

	Params::UGamepadKeyButton_C_SetContentAlignment_Params Parms;
	Parms.ContentAlignment = ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*                  CallFunc_GetContentSlot_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyButton_C::UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "UpdateContentAlignment");

	Params::UGamepadKeyButton_C_UpdateContentAlignment_Params Parms;
	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGamepadKeyButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "SetTabLabelInfo");

	Params::UGamepadKeyButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "PreConstruct");

	Params::UGamepadKeyButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGamepadKeyButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "OnTriggeredInputActionChanged");

	Params::UGamepadKeyButton_C_OnTriggeredInputActionChanged_Params Parms;
	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyButton_C::BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature");

	Params::UGamepadKeyButton_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyButton.GamepadKeyButton_C.ExecuteUbergraph_GamepadKeyButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_Event_NewTriggeredAction                                  (ConstParm, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyButton_C::ExecuteUbergraph_GamepadKeyButton(int32 EntryPoint, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_Event_IsDesignTime, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, bool K2Node_ComponentBoundEvent_bUsingGamepad)
{
	static auto Func = Class->GetFunction("GamepadKeyButton_C", "ExecuteUbergraph_GamepadKeyButton");

	Params::UGamepadKeyButton_C_ExecuteUbergraph_GamepadKeyButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewTriggeredAction = K2Node_Event_NewTriggeredAction;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
