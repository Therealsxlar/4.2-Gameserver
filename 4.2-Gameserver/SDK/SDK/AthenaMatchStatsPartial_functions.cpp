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


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnTeamStatsAvailable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAthenaMatchStatsPartial_C::OnTeamStatsAvailable(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "OnTeamStatsAvailable");

	Params::UAthenaMatchStatsPartial_C_OnTeamStatsAvailable_Params Parms;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnStatsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaProfileStatContext*   CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchStatView*        CallFunc_CreateCurrentMatchStatView_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchStatsPartial_C::OnStatsAvailable(class UAthenaProfileStatContext* CallFunc_GetContext_ReturnValue, class UAthenaMatchStatView* CallFunc_CreateCurrentMatchStatView_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "OnStatsAvailable");

	Params::UAthenaMatchStatsPartial_C_OnStatsAvailable_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CreateCurrentMatchStatView_ReturnValue = CallFunc_CreateCurrentMatchStatView_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnRewardsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsPartial_C::OnRewardsAvailable()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "OnRewardsAvailable");

	Params::UAthenaMatchStatsPartial_C_OnRewardsAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.SetMatchReport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerMatchReport*    Report                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UAthenaMatchStatsPartial_C::SetMatchReport(class UAthenaPlayerMatchReport* Report, bool CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "SetMatchReport");

	Params::UAthenaMatchStatsPartial_C_SetMatchReport_Params Parms;
	Parms.Report = Report;
	Parms.CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue = CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Play Xp Rewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsPartial_C::Play_Xp_Rewards()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "Play Xp Rewards");

	Params::UAthenaMatchStatsPartial_C_Play_Xp_Rewards_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsPartial_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "Construct");

	Params::UAthenaMatchStatsPartial_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsPartial_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "Destruct");

	Params::UAthenaMatchStatsPartial_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.ExecuteUbergraph_AthenaMatchStatsPartial
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchStatsPartial_C::ExecuteUbergraph_AthenaMatchStatsPartial(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsPartial_C", "ExecuteUbergraph_AthenaMatchStatsPartial");

	Params::UAthenaMatchStatsPartial_C_ExecuteUbergraph_AthenaMatchStatsPartial_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue = CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
