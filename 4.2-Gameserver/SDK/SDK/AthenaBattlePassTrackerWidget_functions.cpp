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


// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.UpdateUpsellInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBattlePassTrackerWidget_C::UpdateUpsellInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaBattlePassTrackerWidget_C", "UpdateUpsellInfo");

	Params::UAthenaBattlePassTrackerWidget_C_UpdateUpsellInfo_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaBattlePassTrackerWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo& Result)
{
	static auto Func = Class->GetFunction("AthenaBattlePassTrackerWidget_C", "OnAccountInfoChanged");

	Params::UAthenaBattlePassTrackerWidget_C_OnAccountInfoChanged_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.ExecuteUbergraph_AthenaBattlePassTrackerWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAthenaBattlePassTrackerWidget_C::ExecuteUbergraph_AthenaBattlePassTrackerWidget(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBattlePassTrackerWidget_C", "ExecuteUbergraph_AthenaBattlePassTrackerWidget");

	Params::UAthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
