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


// Function AthenaMapPanel.AthenaMapPanel_C.ClearTouches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::ClearTouches()
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "ClearTouches");

	Params::UAthenaMapPanel_C_ClearTouches_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapPanel.AthenaMapPanel_C.SetTriggerImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPS4                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 Temp_struct_Variable                                             ()
// struct FSlateBrush                 Temp_struct_Variable1                                            ()
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Temp_struct_Variable2                                            ()
// struct FSlateBrush                 Temp_struct_Variable3                                            ()
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      CallFunc_GetCurrentGamepadType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    ()
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush3                                    ()
// struct FSlateBrush                 K2Node_Select1_Default                                           ()

void UAthenaMapPanel_C::SetTriggerImages(bool IsPS4, const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable1, enum class ECommonGamepadType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable2, const struct FSlateBrush& Temp_struct_Variable3, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable1, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, const struct FSlateBrush& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "SetTriggerImages");

	Params::UAthenaMapPanel_C_SetTriggerImages_Params Parms;
	Parms.IsPS4 = IsPS4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetCurrentGamepadType_ReturnValue = CallFunc_GetCurrentGamepadType_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush3 = K2Node_MakeStruct_SlateBrush3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UAthenaMapPanel_C::OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "OnTouchEnded");

	Params::UAthenaMapPanel_C_OnTouchEnded_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaMapPanel_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool CallFunc_IsBROnly_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "OnTouchStarted");

	Params::UAthenaMapPanel_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMapPanel.AthenaMapPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "Construct");

	Params::UAthenaMapPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::FlashPlayerIcon()
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "FlashPlayerIcon");

	Params::UAthenaMapPanel_C_FlashPlayerIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapPanel_C::ExecuteUbergraph_AthenaMapPanel(int32 EntryPoint, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, bool CallFunc_IsBROnly_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMapPanel_C", "ExecuteUbergraph_AthenaMapPanel");

	Params::UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
