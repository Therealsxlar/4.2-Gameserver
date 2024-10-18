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


// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysSuccess_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTTask_AlwaysSuccess_C", "ReceiveExecute");

	Params::UBTTask_AlwaysSuccess_C_ReceiveExecute_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysSuccess_C::ExecuteUbergraph_BTTask_AlwaysSuccess(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static auto Func = Class->GetFunction("BTTask_AlwaysSuccess_C", "ExecuteUbergraph_BTTask_AlwaysSuccess");

	Params::UBTTask_AlwaysSuccess_C_ExecuteUbergraph_BTTask_AlwaysSuccess_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
