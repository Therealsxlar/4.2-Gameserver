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


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "K2_ActivateAbility");

	Params::UGA_DefaultPlayer_Stunned_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ExecuteUbergraph_GA_DefaultPlayer_Stunned
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Stunned_C::ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "ExecuteUbergraph_GA_DefaultPlayer_Stunned");

	Params::UGA_DefaultPlayer_Stunned_C_ExecuteUbergraph_GA_DefaultPlayer_Stunned_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
