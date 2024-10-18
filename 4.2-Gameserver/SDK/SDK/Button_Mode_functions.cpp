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


// Function Button_Mode.Button_Mode_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UButton_Mode_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Mode_C", "OnTouchStarted");

	Params::UButton_Mode_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Button_Mode.Button_Mode_C.OnBuildModeChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEntering                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButton_Mode_C::OnBuildModeChanged_Event_0(bool bEntering)
{
	static auto Func = Class->GetFunction("Button_Mode_C", "OnBuildModeChanged_Event_0");

	Params::UButton_Mode_C_OnBuildModeChanged_Event_0_Params Parms;
	Parms.bEntering = bEntering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Mode.Button_Mode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UButton_Mode_C::Construct()
{
	static auto Func = Class->GetFunction("Button_Mode_C", "Construct");

	Params::UButton_Mode_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Mode.Button_Mode_C.ExecuteUbergraph_Button_Mode
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEntering                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPaperSprite*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_Mode_C::ExecuteUbergraph_Button_Mode(int32 EntryPoint, bool Temp_bool_Variable, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bEntering, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPaperSprite* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Button_Mode_C", "ExecuteUbergraph_Button_Mode");

	Params::UButton_Mode_C_ExecuteUbergraph_Button_Mode_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_bEntering = K2Node_CustomEvent_bEntering;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
