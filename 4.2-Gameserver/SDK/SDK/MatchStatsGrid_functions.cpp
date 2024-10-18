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


// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatView*        AthenaMatchStats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchStatsGrid_C::SetStats(class UAthenaMatchStatView* AthenaMatchStats)
{
	static auto Func = Class->GetFunction("MatchStatsGrid_C", "SetStats");

	Params::UMatchStatsGrid_C_SetStats_Params Parms;
	Parms.AthenaMatchStats = AthenaMatchStats;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
