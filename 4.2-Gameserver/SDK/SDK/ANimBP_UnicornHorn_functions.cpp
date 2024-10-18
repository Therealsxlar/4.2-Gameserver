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


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E
// (BlueprintEvent)
// Parameters:

void UANimBP_UnicornHorn_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E()
{
	static auto Func = Class->GetFunction("ANimBP_UnicornHorn_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E");

	Params::UANimBP_UnicornHorn_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANimBP_UnicornHorn_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("ANimBP_UnicornHorn_C", "BlueprintUpdateAnimation");

	Params::UANimBP_UnicornHorn_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANimBP_UnicornHorn_C::ExecuteUbergraph_ANimBP_UnicornHorn(int32 EntryPoint, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static auto Func = Class->GetFunction("ANimBP_UnicornHorn_C", "ExecuteUbergraph_ANimBP_UnicornHorn");

	Params::UANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
