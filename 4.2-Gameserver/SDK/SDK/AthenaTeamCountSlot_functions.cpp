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


// Function AthenaTeamCountSlot.AthenaTeamCountSlot_C.SetTeamSlotData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaTeamCountSlotData    TeamSlotData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              DrawOpacity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamCountSlot_C::SetTeamSlotData(const struct FAthenaTeamCountSlotData& TeamSlotData, float DrawOpacity)
{
	static auto Func = Class->GetFunction("AthenaTeamCountSlot_C", "SetTeamSlotData");

	Params::UAthenaTeamCountSlot_C_SetTeamSlotData_Params Parms;
	Parms.TeamSlotData = TeamSlotData;
	Parms.DrawOpacity = DrawOpacity;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
