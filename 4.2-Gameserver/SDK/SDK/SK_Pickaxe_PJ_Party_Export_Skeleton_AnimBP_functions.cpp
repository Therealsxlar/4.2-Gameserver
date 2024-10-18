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


// Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98
// (BlueprintEvent)
// Parameters:

void USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98()
{
	static auto Func = Class->GetFunction("SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98");

	Params::USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP");

	Params::USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
