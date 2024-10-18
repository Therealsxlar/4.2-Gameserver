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


// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBTService_ForceNormalAILOD_C::ReceiveActivation(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("FortBTService_ForceNormalAILOD_C", "ReceiveActivation");

	Params::UFortBTService_ForceNormalAILOD_C_ReceiveActivation_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBTService_ForceNormalAILOD_C::ReceiveDeactivation(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("FortBTService_ForceNormalAILOD_C", "ReceiveDeactivation");

	Params::UFortBTService_ForceNormalAILOD_C_ReceiveDeactivation_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ExecuteUbergraph_FortBTService_ForceNormalAILOD
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OwnerActor1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortBTService_ForceNormalAILOD_C::ExecuteUbergraph_FortBTService_ForceNormalAILOD(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OwnerActor1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("FortBTService_ForceNormalAILOD_C", "ExecuteUbergraph_FortBTService_ForceNormalAILOD");

	Params::UFortBTService_ForceNormalAILOD_C_ExecuteUbergraph_FortBTService_ForceNormalAILOD_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_OwnerActor1 = K2Node_Event_OwnerActor1;
	Parms.K2Node_DynamicCast_AsFort_AIController1 = K2Node_DynamicCast_AsFort_AIController1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
