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


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_HuskFrustration_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_HuskFrustration_C", "K2_ActivateAbility");

	Params::UGAB_HuskFrustration_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskFrustration_C::ExecuteUbergraph_GAB_HuskFrustration(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_HuskFrustration_C", "ExecuteUbergraph_GAB_HuskFrustration");

	Params::UGAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
