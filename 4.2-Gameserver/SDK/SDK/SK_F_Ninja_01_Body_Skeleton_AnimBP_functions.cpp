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


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C
// (BlueprintEvent)
// Parameters:

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C()
{
	static auto Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C");

	Params::USK_F_Ninja_01_Body_Skeleton_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	Params::USK_F_Ninja_01_Body_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP");

	Params::USK_F_Ninja_01_Body_Skeleton_AnimBP_C_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
