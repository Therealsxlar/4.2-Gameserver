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


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.HealthCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Check_Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::HealthCheck(bool* Check_Return, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "HealthCheck");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_HealthCheck_Params Parms;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Check_Return != nullptr)
		*Check_Return = Parms.Check_Return;

}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "UserConstructionScript");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep__FinishedFunc()
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "Health_Sweep__FinishedFunc");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep__UpdateFunc()
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "Health_Sweep__UpdateFunc");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "K2_HandleGameplayCue");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_K2_HandleGameplayCue_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HealthCheck_Check_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool CallFunc_IsPlaying_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HealthCheck_Check_Return, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("GC_Generic_AdrenalineRush_PeriodicHeal_C", "ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal");

	Params::AGC_Generic_AdrenalineRush_PeriodicHeal_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HealthCheck_Check_Return = CallFunc_HealthCheck_Check_Return;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
