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


// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorToUnregisterRegister                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_Interact_UnregisterFocus_C::BreakParams(class AActor** ActorToUnregisterRegister)
{
	static auto Func = Class->GetFunction("Gen_Interact_UnregisterFocus_C", "BreakParams");

	Params::UGen_Interact_UnregisterFocus_C_BreakParams_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (ActorToUnregisterRegister != nullptr)
		*ActorToUnregisterRegister = Parms.ActorToUnregisterRegister;

}


// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToUnregister                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGen_Interact_UnregisterFocus_C*ThisObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_Interact_UnregisterFocus_C::SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject)
{
	static auto Func = Class->GetFunction("Gen_Interact_UnregisterFocus_C", "SetParams");

	Params::UGen_Interact_UnregisterFocus_C_SetParams_Params Parms;
	Parms.ActorToUnregister = ActorToUnregister;

	UObject::ProcessEvent(Func, &Parms);

	if (ThisObject != nullptr)
		*ThisObject = Parms.ThisObject;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
