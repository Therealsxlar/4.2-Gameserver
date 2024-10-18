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


// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static auto Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "PickFullBodyHitMontageSection");

	Params::UGAB_FlingerApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.ExecuteUbergraph_GAB_FlingerApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerApplyFullBodyHit_C::ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult)
{
	static auto Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "ExecuteUbergraph_GAB_FlingerApplyFullBodyHit");

	Params::UGAB_FlingerApplyFullBodyHit_C_ExecuteUbergraph_GAB_FlingerApplyFullBodyHit_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
