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


// Function GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTarget_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_MimicMelee_C::GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data)
{
	static auto Func = Class->GetFunction("GAB_MimicMelee_C", "GameplayEffectContainerApplied");

	Params::UGAB_MimicMelee_C_GameplayEffectContainerApplied_Params Parms;
	Parms.Target_Data = Target_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_Target_Data                                         ()
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetActorsFromTargetData_ReturnValue                     (ZeroConstructor, ReferenceParm)
// class AHuskPawn_Mimic_C*           K2Node_DynamicCast_AsHusk_Pawn_Mimic                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_MimicMelee_C::ExecuteUbergraph_GAB_MimicMelee(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_Target_Data, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_MimicMelee_C", "ExecuteUbergraph_GAB_MimicMelee");

	Params::UGAB_MimicMelee_C_ExecuteUbergraph_GAB_MimicMelee_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target_Data = K2Node_Event_Target_Data;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActorsFromTargetData_ReturnValue = CallFunc_GetActorsFromTargetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn_Mimic = K2Node_DynamicCast_AsHusk_Pawn_Mimic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
