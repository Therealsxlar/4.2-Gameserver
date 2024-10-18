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


// Function SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C.ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_PickAxe_Jaws_Skeleton_AnimBP_C::ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SK_PickAxe_Jaws_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP");

	Params::USK_PickAxe_Jaws_Skeleton_AnimBP_C_ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
