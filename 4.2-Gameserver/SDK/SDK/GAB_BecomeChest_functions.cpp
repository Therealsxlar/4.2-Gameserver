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


// Function GAB_BecomeChest.GAB_BecomeChest_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_BecomeChest_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_BecomeChest_C", "K2_ActivateAbility");

	Params::UGAB_BecomeChest_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_BecomeChest.GAB_BecomeChest_C.ExecuteUbergraph_GAB_BecomeChest
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHuskPawn_Mimic_C*           K2Node_DynamicCast_AsHusk_Pawn_Mimic                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_BecomeChest_C::ExecuteUbergraph_GAB_BecomeChest(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GAB_BecomeChest_C", "ExecuteUbergraph_GAB_BecomeChest");

	Params::UGAB_BecomeChest_C_ExecuteUbergraph_GAB_BecomeChest_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn_Mimic = K2Node_DynamicCast_AsHusk_Pawn_Mimic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
