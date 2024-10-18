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


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GC_Abilities_Activation_Ninja_ShadowStance_C", "OnWhileActiveParticleSystemDeactivate");

	Params::AGC_Abilities_Activation_Ninja_ShadowStance_C_OnWhileActiveParticleSystemDeactivate_Params Parms;
	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Abilities_Activation_Ninja_ShadowStance_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GC_Abilities_Activation_Ninja_ShadowStance_C", "UserConstructionScript");

	Params::AGC_Abilities_Activation_Ninja_ShadowStance_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
