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


// Function BTTask_StopMovement.BTTask_StopMovement_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_StopMovement_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("BTTask_StopMovement_C", "ReceiveExecute");

	Params::UBTTask_StopMovement_C_ReceiveExecute_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_StopMovement.BTTask_StopMovement_C.ExecuteUbergraph_BTTask_StopMovement
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_StopMovement_C::ExecuteUbergraph_BTTask_StopMovement(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BTTask_StopMovement_C", "ExecuteUbergraph_BTTask_StopMovement");

	Params::UBTTask_StopMovement_C_ExecuteUbergraph_BTTask_StopMovement_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
