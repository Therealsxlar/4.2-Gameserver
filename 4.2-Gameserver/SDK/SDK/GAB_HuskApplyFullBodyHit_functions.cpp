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


// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_HuskApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static auto Func = Class->GetFunction("GAB_HuskApplyFullBodyHit_C", "PickFullBodyHitMontageSection");

	Params::UGAB_HuskApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHuskPawn_C*                 K2Node_DynamicCast_AsHusk_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger1_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskApplyFullBodyHit_C::ExecuteUbergraph_GAB_HuskApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue1, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger1_CmpSuccess, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult)
{
	static auto Func = Class->GetFunction("GAB_HuskApplyFullBodyHit_C", "ExecuteUbergraph_GAB_HuskApplyFullBodyHit");

	Params::UGAB_HuskApplyFullBodyHit_C_ExecuteUbergraph_GAB_HuskApplyFullBodyHit_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn = K2Node_DynamicCast_AsHusk_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue1 = CallFunc_Percent_IntInt_ReturnValue1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger1_CmpSuccess = K2Node_SwitchInteger1_CmpSuccess;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
