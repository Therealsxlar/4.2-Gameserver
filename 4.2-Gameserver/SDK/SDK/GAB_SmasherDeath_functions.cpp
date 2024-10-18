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


// Function GAB_SmasherDeath.GAB_SmasherDeath_C.ExecuteUbergraph_GAB_SmasherDeath
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SmasherDeath_C::ExecuteUbergraph_GAB_SmasherDeath(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAB_SmasherDeath_C", "ExecuteUbergraph_GAB_SmasherDeath");

	Params::UGAB_SmasherDeath_C_ExecuteUbergraph_GAB_SmasherDeath_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
