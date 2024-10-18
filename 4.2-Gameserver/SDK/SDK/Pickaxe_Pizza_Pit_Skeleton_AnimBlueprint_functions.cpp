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


// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");

	Params::UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint");

	Params::UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
