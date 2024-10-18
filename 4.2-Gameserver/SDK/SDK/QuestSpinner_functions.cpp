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


// Function QuestSpinner.QuestSpinner_C.IncrementPoolIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestSpinner_C::IncrementPoolIndex(int32* NewValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "IncrementPoolIndex");

	Params::UQuestSpinner_C_IncrementPoolIndex_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function QuestSpinner.QuestSpinner_C.OnSpinDelayTimerComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_IncrementPoolIndex_NewValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestSpinner_C::OnSpinDelayTimerComplete(int32 CallFunc_IncrementPoolIndex_NewValue, class UFortQuestItem* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "OnSpinDelayTimerComplete");

	Params::UQuestSpinner_C_OnSpinDelayTimerComplete_Params Parms;
	Parms.CallFunc_IncrementPoolIndex_NewValue = CallFunc_IncrementPoolIndex_NewValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestSpinner.QuestSpinner_C.BeginSpinDelayTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void UQuestSpinner_C::BeginSpinDelayTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "BeginSpinDelayTimer");

	Params::UQuestSpinner_C_BeginSpinDelayTimer_Params Parms;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestSpinner.QuestSpinner_C.SetQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                              SpinPeriod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestSpinner_C::SetQuests(TArray<class UFortQuestItem*>& Quests, float SpinPeriod, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortQuestItem* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "SetQuests");

	Params::UQuestSpinner_C_SetQuests_Params Parms;
	Parms.Quests = Quests;
	Parms.SpinPeriod = SpinPeriod;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestSpinner.QuestSpinner_C.OnSpinComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestSpinner_C::OnSpinComplete()
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "OnSpinComplete");

	Params::UQuestSpinner_C_OnSpinComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestSpinner.QuestSpinner_C.ExecuteUbergraph_QuestSpinner
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UQuestSpinner_C::ExecuteUbergraph_QuestSpinner(int32 EntryPoint, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("QuestSpinner_C", "ExecuteUbergraph_QuestSpinner");

	Params::UQuestSpinner_C_ExecuteUbergraph_QuestSpinner_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
