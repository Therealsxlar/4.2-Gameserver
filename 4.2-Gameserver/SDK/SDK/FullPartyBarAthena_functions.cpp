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


// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Initialize()
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Initialize");

	Params::UFullPartyBarAthena_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Construct()
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Construct");

	Params::UFullPartyBarAthena_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "ExecuteUbergraph_FullPartyBarAthena");

	Params::UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
