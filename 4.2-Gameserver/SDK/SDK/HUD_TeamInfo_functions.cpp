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


// Function HUD_TeamInfo.HUD_TeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_TeamInfo_C::Construct()
{
	static auto Func = Class->GetFunction("HUD_TeamInfo_C", "Construct");

	Params::UHUD_TeamInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_TeamInfo.HUD_TeamInfo_C.ExecuteUbergraph_HUD_TeamInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamInfo_C::ExecuteUbergraph_HUD_TeamInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HUD_TeamInfo_C", "ExecuteUbergraph_HUD_TeamInfo");

	Params::UHUD_TeamInfo_C_ExecuteUbergraph_HUD_TeamInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
