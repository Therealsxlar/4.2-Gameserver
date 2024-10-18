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


// Function TransportIndicator.TransportIndicator_C.StopTheAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::StopTheAnimation()
{
	static auto Func = Class->GetFunction("TransportIndicator_C", "StopTheAnimation");

	Params::UTransportIndicator_C_StopTheAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransportIndicator.TransportIndicator_C.Animate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::Animate()
{
	static auto Func = Class->GetFunction("TransportIndicator_C", "Animate");

	Params::UTransportIndicator_C_Animate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransportIndicator.TransportIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("TransportIndicator_C", "Construct");

	Params::UTransportIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransportIndicator.TransportIndicator_C.HandleAniFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::HandleAniFinished()
{
	static auto Func = Class->GetFunction("TransportIndicator_C", "HandleAniFinished");

	Params::UTransportIndicator_C_HandleAniFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransportIndicator.TransportIndicator_C.ExecuteUbergraph_TransportIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UTransportIndicator_C::ExecuteUbergraph_TransportIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("TransportIndicator_C", "ExecuteUbergraph_TransportIndicator");

	Params::UTransportIndicator_C_ExecuteUbergraph_TransportIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
