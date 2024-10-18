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


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.UpdateBundle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortChallengeBundleInfo*    CallFunc_GetChallengeBundleInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleItemDefinition*CallFunc_GetBundleDefinition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EChallengeBundleVisualStyleCallFunc_GetVisualStyle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortChallengeBundleCategoryInfo*CallFunc_GetOwningBundleCategoryInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleScheduleDefinition*CallFunc_GetFirstScheduleDefinition_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCategoryName_ReturnValue                             ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeBundleCategoryHeader_C::UpdateBundle(class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, enum class EChallengeBundleVisualStyle CallFunc_GetVisualStyle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortChallengeBundleCategoryInfo* CallFunc_GetOwningBundleCategoryInfo_ReturnValue, class UFortChallengeBundleScheduleDefinition* CallFunc_GetFirstScheduleDefinition_ReturnValue, class FText CallFunc_GetCategoryName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChallengeBundleCategoryHeader_C", "UpdateBundle");

	Params::UChallengeBundleCategoryHeader_C_UpdateBundle_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.CallFunc_GetChallengeBundleInfo_ReturnValue = CallFunc_GetChallengeBundleInfo_ReturnValue;
	Parms.CallFunc_GetBundleDefinition_ReturnValue = CallFunc_GetBundleDefinition_ReturnValue;
	Parms.CallFunc_GetVisualStyle_ReturnValue = CallFunc_GetVisualStyle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningBundleCategoryInfo_ReturnValue = CallFunc_GetOwningBundleCategoryInfo_ReturnValue;
	Parms.CallFunc_GetFirstScheduleDefinition_ReturnValue = CallFunc_GetFirstScheduleDefinition_ReturnValue;
	Parms.CallFunc_GetCategoryName_ReturnValue = CallFunc_GetCategoryName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleCategoryHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ChallengeBundleCategoryHeader_C", "PreConstruct");

	Params::UChallengeBundleCategoryHeader_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.OnBundleUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeBundleCategoryHeader_C::OnBundleUpdated()
{
	static auto Func = Class->GetFunction("ChallengeBundleCategoryHeader_C", "OnBundleUpdated");

	Params::UChallengeBundleCategoryHeader_C_OnBundleUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ExecuteUbergraph_ChallengeBundleCategoryHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleCategoryHeader_C::ExecuteUbergraph_ChallengeBundleCategoryHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ChallengeBundleCategoryHeader_C", "ExecuteUbergraph_ChallengeBundleCategoryHeader");

	Params::UChallengeBundleCategoryHeader_C_ExecuteUbergraph_ChallengeBundleCategoryHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
