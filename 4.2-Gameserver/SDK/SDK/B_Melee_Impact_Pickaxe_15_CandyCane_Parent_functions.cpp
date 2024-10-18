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


// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.TurnOnLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Kills                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C::TurnOnLights(float Kills)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C", "TurnOnLights");

	Params::AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_TurnOnLights_Params Parms;
	Parms.Kills = Kills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C", "UserConstructionScript");

	Params::AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C::UpdateBasedOnKills()
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C", "UpdateBasedOnKills");

	Params::AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_UpdateBasedOnKills_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C::K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C", "K2_OnProgressiveCosmeticWatchedStatChanged");

	Params::AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params Parms;
	Parms.StatName = StatName;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_StatName                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C::ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent(int32 EntryPoint, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C", "ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent");

	Params::AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;
	Parms.K2Node_Event_StatName = K2Node_Event_StatName;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
