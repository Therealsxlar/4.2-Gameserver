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


// Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDailyQuestWidget_C::Entrance_Anim()
{
	static auto Func = Class->GetFunction("DailyQuestWidget_C", "Entrance Anim");

	Params::UDailyQuestWidget_C_Entrance_Anim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDailyQuestWidget_C::Collect_Anim()
{
	static auto Func = Class->GetFunction("DailyQuestWidget_C", "Collect Anim");

	Params::UDailyQuestWidget_C_Collect_Anim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestWidget.DailyQuestWidget_C.Completed State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDailyQuestWidget_C::Completed_State()
{
	static auto Func = Class->GetFunction("DailyQuestWidget_C", "Completed State");

	Params::UDailyQuestWidget_C_Completed_State_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestWidget_C::UpdateProgress(int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount)
{
	static auto Func = Class->GetFunction("DailyQuestWidget_C", "UpdateProgress");

	Params::UDailyQuestWidget_C_UpdateProgress_Params Parms;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("DailyQuestWidget_C", "SetQuestItem");

	Params::UDailyQuestWidget_C_SetQuestItem_Params Parms;
	Parms.Quest = Quest;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
