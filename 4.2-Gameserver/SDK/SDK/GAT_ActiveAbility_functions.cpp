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


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ImmunityOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              ()
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SetKnockbackImmunity");

	Params::UGAT_ActiveAbility_C_SetKnockbackImmunity_Params Parms;
	Parms.ImmunityOn = ImmunityOn;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CollisionOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCollisionProfileName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SetPawnCollision");

	Params::UGAT_ActiveAbility_C_SetPawnCollision_Params Parms;
	Parms.FortPawn = FortPawn;
	Parms.CollisionOn = CollisionOn;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ReturnValue = CallFunc_GetCollisionProfileName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");

	Params::UGAT_ActiveAbility_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
