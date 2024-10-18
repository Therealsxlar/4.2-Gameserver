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


// Function Button_Crouch.Button_Crouch_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UButton_Crouch_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Crouch_C", "OnTouchStarted");

	Params::UButton_Crouch_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Button_Crouch.Button_Crouch_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDState               NewState                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UButton_Crouch_C::OnHUDStateUpdate(struct FFortHUDState& NewState)
{
	static auto Func = Class->GetFunction("Button_Crouch_C", "OnHUDStateUpdate");

	Params::UButton_Crouch_C_OnHUDStateUpdate_Params Parms;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Crouch.Button_Crouch_C.ExecuteUbergraph_Button_Crouch
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDState               K2Node_Event_NewState                                            (ConstParm, NoDestructor)

void UButton_Crouch_C::ExecuteUbergraph_Button_Crouch(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState)
{
	static auto Func = Class->GetFunction("Button_Crouch_C", "ExecuteUbergraph_Button_Crouch");

	Params::UButton_Crouch_C_ExecuteUbergraph_Button_Crouch_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
