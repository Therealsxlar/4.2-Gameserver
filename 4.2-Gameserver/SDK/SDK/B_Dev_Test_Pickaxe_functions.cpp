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


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dev_Test_Pickaxe_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "UserConstructionScript");

	Params::AB_Dev_Test_Pickaxe_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dev_Test_Pickaxe_C::K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue)
{
	static auto Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "K2_OnProgressiveCosmeticWatchedStatChanged");

	Params::AB_Dev_Test_Pickaxe_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params Parms;
	Parms.StatName = StatName;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.ExecuteUbergraph_B_Dev_Test_Pickaxe
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StatName                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dev_Test_Pickaxe_C::ExecuteUbergraph_B_Dev_Test_Pickaxe(int32 EntryPoint, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue)
{
	static auto Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "ExecuteUbergraph_B_Dev_Test_Pickaxe");

	Params::AB_Dev_Test_Pickaxe_C_ExecuteUbergraph_B_Dev_Test_Pickaxe_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_StatName = K2Node_Event_StatName;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
