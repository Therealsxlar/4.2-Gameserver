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


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_ActivateAbility");

	Params::UGAB_FlingerRanged_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::SpawnFX()
{
	static auto Func = Class->GetFunction("GAB_FlingerRanged_C", "SpawnFX");

	Params::UGAB_FlingerRanged_C_SpawnFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::StopFX()
{
	static auto Func = Class->GetFunction("GAB_FlingerRanged_C", "StopFX");

	Params::UGAB_FlingerRanged_C_StopFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRanged_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_OnEndAbility");

	Params::UGAB_FlingerRanged_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRanged_C::ExecuteUbergraph_GAB_FlingerRanged(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, bool K2Node_Event_bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_FlingerRanged_C", "ExecuteUbergraph_GAB_FlingerRanged");

	Params::UGAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
