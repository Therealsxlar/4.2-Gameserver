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


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_26_Brite_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_26_Brite_C", "UserConstructionScript");

	Params::AB_Melee_Impact_Pickaxe_26_Brite_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_26_Brite_C::K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_26_Brite_C", "K2_OnProgressiveCosmeticWatchedStatChanged");

	Params::AB_Melee_Impact_Pickaxe_26_Brite_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params Parms;
	Parms.StatName = StatName;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Melee_Impact_Pickaxe_26_Brite_C::UpdateBasedOnKills()
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_26_Brite_C", "UpdateBasedOnKills");

	Params::AB_Melee_Impact_Pickaxe_26_Brite_C_UpdateBasedOnKills_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UANimBP_UnicornHorn_C*       K2Node_DynamicCast_AsANim_BP_Unicorn_Horn                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_StatName                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_26_Brite_C::ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite(int32 EntryPoint, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UANimBP_UnicornHorn_C* K2Node_DynamicCast_AsANim_BP_Unicorn_Horn, bool K2Node_DynamicCast_bSuccess, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_26_Brite_C", "ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite");

	Params::AB_Melee_Impact_Pickaxe_26_Brite_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsANim_BP_Unicorn_Horn = K2Node_DynamicCast_AsANim_BP_Unicorn_Horn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_StatName = K2Node_Event_StatName;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
