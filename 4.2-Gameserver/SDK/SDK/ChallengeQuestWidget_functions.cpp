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


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsInvalid()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsInvalid");

	Params::UChallengeQuestWidget_C_StyleAsInvalid_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeQuestWidget_C::UpdateName(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateName");

	Params::UChallengeQuestWidget_C_UpdateName_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OutTotalAchievedCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutTotalRequiredCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortMcpQuestObjectiveInfo>CallFunc_GetObjectives_BP_ReturnValue                            (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount, TArray<struct FFortMcpQuestObjectiveInfo>& CallFunc_GetObjectives_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "GetAchievedCount");

	Params::UChallengeQuestWidget_C_GetAchievedCount_Params Parms;
	Parms.CallFunc_GetObjectives_BP_ReturnValue = CallFunc_GetObjectives_BP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTotalAchievedCount != nullptr)
		*OutTotalAchievedCount = Parms.OutTotalAchievedCount;

	if (OutTotalRequiredCount != nullptr)
		*OutTotalRequiredCount = Parms.OutTotalRequiredCount;

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuestState         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EFortQuestState UChallengeQuestWidget_C::GetQuestState(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "GetQuestState");

	Params::UChallengeQuestWidget_C_GetQuestState_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestVisualStyle       CallFunc_GetVisualStyle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestVisualStyle       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::UpdateProgress(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, enum class EQuestVisualStyle CallFunc_GetVisualStyle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, enum class EQuestVisualStyle Temp_byte_Variable4, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateProgress");

	Params::UChallengeQuestWidget_C_UpdateProgress_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_GetVisualStyle_ReturnValue = CallFunc_GetVisualStyle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsIncomplete()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsIncomplete");

	Params::UChallengeQuestWidget_C_StyleAsIncomplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsComplete()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsComplete");

	Params::UChallengeQuestWidget_C_StyleAsComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    QuestDefinition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContainsReward_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ContainsReward_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "SetQuestItem");

	Params::UChallengeQuestWidget_C_SetQuestItem_Params Parms;
	Parms.Quest = Quest;
	Parms.QuestDefinition = QuestDefinition;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ContainsReward_ReturnValue = CallFunc_ContainsReward_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
