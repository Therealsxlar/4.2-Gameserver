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


// Function RC_Rocket_BP.RC_Rocket_BP_C.ExecuteUbergraph_RC_Rocket_BP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URC_Rocket_BP_C::ExecuteUbergraph_RC_Rocket_BP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("RC_Rocket_BP_C", "ExecuteUbergraph_RC_Rocket_BP");

	Params::URC_Rocket_BP_C_ExecuteUbergraph_RC_Rocket_BP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
