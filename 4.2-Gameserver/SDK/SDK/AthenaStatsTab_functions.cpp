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


// Function AthenaStatsTab.AthenaStatsTab_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "HandleBack");

	Params::UAthenaStatsTab_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaStatsTab.AthenaStatsTab_C.CanShowStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCanShowStats                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowStats_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsTab_C::CanShowStats(bool* bCanShowStats, bool CallFunc_IsMobileGame_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "CanShowStats");

	Params::UAthenaStatsTab_C_CanShowStats_Params Parms;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanShowStats_ReturnValue = CallFunc_CanShowStats_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanShowStats != nullptr)
		*bCanShowStats = Parms.bCanShowStats;

}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLastUpdateTime_ReturnValue                           ()

void UAthenaStatsTab_C::UpdateLastUpdatedTime(bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_GetLastUpdateTime_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "UpdateLastUpdatedTime");

	Params::UAthenaStatsTab_C_UpdateLastUpdatedTime_Params Parms;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetLastUpdateTime_ReturnValue = CallFunc_GetLastUpdateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatStatValueAsElapsedTime_ReturnValue                ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetStatValue_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// class FString                      CallFunc_GetThirdTierPlaceTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSecondTierPlaceTag_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// int32                              CallFunc_GetStatValue_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             ()
// class FString                      CallFunc_GetWinsTag_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue4                             ()

void UAthenaStatsTab_C::UpdateStats(int32 CallFunc_GetStatValue_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue1, class FText CallFunc_FormatStatValueAsElapsedTime_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue1, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue3, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, int32 CallFunc_GetStatValue_ReturnValue4, class FText CallFunc_Conv_IntToText_ReturnValue3, const class FString& CallFunc_GetWinsTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue5, class FText CallFunc_Conv_IntToText_ReturnValue4)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "UpdateStats");

	Params::UAthenaStatsTab_C_UpdateStats_Params Parms;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue1 = CallFunc_GetStatValue_ReturnValue1;
	Parms.CallFunc_FormatStatValueAsElapsedTime_ReturnValue = CallFunc_FormatStatValueAsElapsedTime_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue2 = CallFunc_GetStatValue_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_GetThirdTierPlaceTag_ReturnValue = CallFunc_GetThirdTierPlaceTag_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue3 = CallFunc_GetStatValue_ReturnValue3;
	Parms.CallFunc_GetSecondTierPlaceTag_ReturnValue = CallFunc_GetSecondTierPlaceTag_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_GetStatValue_ReturnValue4 = CallFunc_GetStatValue_ReturnValue4;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.CallFunc_GetWinsTag_ReturnValue = CallFunc_GetWinsTag_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue5 = CallFunc_GetStatValue_ReturnValue5;
	Parms.CallFunc_Conv_IntToText_ReturnValue4 = CallFunc_Conv_IntToText_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnActivated");

	Params::UAthenaStatsTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsTab_C::OnQueryFinished(bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnQueryFinished");

	Params::UAthenaStatsTab_C_OnQueryFinished_Params Parms;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnQueryStarted()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnQueryStarted");

	Params::UAthenaStatsTab_C_OnQueryStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnDeactivated");

	Params::UAthenaStatsTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "Construct");

	Params::UAthenaStatsTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	Params::UAthenaStatsTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaStatsTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	Params::UAthenaStatsTab_C_BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasSuccessful                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWinsTag_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSecondTierPlaceTag_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetThirdTierPlaceTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value1                                         ()
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value2                                         ()
// bool                               CallFunc_Map_Find_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowStats_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeasonMatchXpBoost_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanShowStats_bCanShowStats                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_CanShowStats_bCanShowStats1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentSeasonName_ReturnValue                        ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      CallFunc_GetCurrentlyViewedAccountInfo_Result                    (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_Event_bWasSuccessful, class FName K2Node_ComponentBoundEvent_TabId, const class FString& CallFunc_GetWinsTag_ReturnValue, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class FText CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, bool CallFunc_IsActivated_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, int32 CallFunc_GetSeasonMatchXpBoost_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_CanShowStats_bCanShowStats, class FText CallFunc_Format_ReturnValue, bool CallFunc_CanShowStats_bCanShowStats1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_HandleBack_Passthrough, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText CallFunc_Conv_IntToText_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "ExecuteUbergraph_AthenaStatsTab");

	Params::UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Event_bWasSuccessful = K2Node_Event_bWasSuccessful;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.CallFunc_GetWinsTag_ReturnValue = CallFunc_GetWinsTag_ReturnValue;
	Parms.CallFunc_GetSecondTierPlaceTag_ReturnValue = CallFunc_GetSecondTierPlaceTag_ReturnValue;
	Parms.CallFunc_GetThirdTierPlaceTag_ReturnValue = CallFunc_GetThirdTierPlaceTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_Map_Find_Value2 = CallFunc_Map_Find_Value2;
	Parms.CallFunc_Map_Find_ReturnValue2 = CallFunc_Map_Find_ReturnValue2;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanShowStats_ReturnValue = CallFunc_CanShowStats_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_GetSeasonMatchXpBoost_ReturnValue = CallFunc_GetSeasonMatchXpBoost_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CanShowStats_bCanShowStats = CallFunc_CanShowStats_bCanShowStats;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_CanShowStats_bCanShowStats1 = CallFunc_CanShowStats_bCanShowStats1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetAthenaProfile_ReturnValue1 = CallFunc_GetAthenaProfile_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue = CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue;
	Parms.CallFunc_GetCurrentSeasonName_ReturnValue = CallFunc_GetCurrentSeasonName_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue1 = CallFunc_IsMobileGame_ReturnValue1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetCurrentlyViewedAccountInfo_Result = CallFunc_GetCurrentlyViewedAccountInfo_Result;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
