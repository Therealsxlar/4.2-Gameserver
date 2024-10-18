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


// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_SetBlackboardBoolValues_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("Task_SetBlackboardBoolValues_C", "ReceiveExecute");

	Params::UTask_SetBlackboardBoolValues_C_ReceiveExecute_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_SetBlackboardBoolValues_C::ExecuteUbergraph_Task_SetBlackboardBoolValues(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static auto Func = Class->GetFunction("Task_SetBlackboardBoolValues_C", "ExecuteUbergraph_Task_SetBlackboardBoolValues");

	Params::UTask_SetBlackboardBoolValues_C_ExecuteUbergraph_Task_SetBlackboardBoolValues_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
