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


// Function PhoneInfo.PhoneInfo_C.ClockTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLocalTime_Hours                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalTime_Minutes                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UPhoneInfo_C::ClockTimerUpdate(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetLocalTime_Hours, int32 CallFunc_GetLocalTime_Minutes, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("PhoneInfo_C", "ClockTimerUpdate");

	Params::UPhoneInfo_C_ClockTimerUpdate_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalTime_Hours = CallFunc_GetLocalTime_Hours;
	Parms.CallFunc_GetLocalTime_Minutes = CallFunc_GetLocalTime_Minutes;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhoneInfo.PhoneInfo_C.BatteryTimerUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Float                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBatteryLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhoneInfo_C::BatteryTimerUpdate(float Float, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput, float CallFunc_GetBatteryLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("PhoneInfo_C", "BatteryTimerUpdate");

	Params::UPhoneInfo_C_BatteryTimerUpdate_Params Parms;
	Parms.Float = Float;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput;
	Parms.CallFunc_GetBatteryLevel_ReturnValue = CallFunc_GetBatteryLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhoneInfo.PhoneInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPhoneInfo_C::Construct()
{
	static auto Func = Class->GetFunction("PhoneInfo_C", "Construct");

	Params::UPhoneInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhoneInfo.PhoneInfo_C.On Low Perf Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInLowPerformanceMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhoneInfo_C::On_Low_Perf_Mode(bool bInLowPerformanceMode)
{
	static auto Func = Class->GetFunction("PhoneInfo_C", "On Low Perf Mode");

	Params::UPhoneInfo_C_On_Low_Perf_Mode_Params Parms;
	Parms.bInLowPerformanceMode = bInLowPerformanceMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhoneInfo.PhoneInfo_C.ExecuteUbergraph_PhoneInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInLowPerformanceMode                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInLowPerformanceMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhoneInfo_C::ExecuteUbergraph_PhoneInfo(int32 EntryPoint, bool K2Node_CustomEvent_bInLowPerformanceMode, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetInLowPerformanceMode_ReturnValue)
{
	static auto Func = Class->GetFunction("PhoneInfo_C", "ExecuteUbergraph_PhoneInfo");

	Params::UPhoneInfo_C_ExecuteUbergraph_PhoneInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bInLowPerformanceMode = K2Node_CustomEvent_bInLowPerformanceMode;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInLowPerformanceMode_ReturnValue = CallFunc_GetInLowPerformanceMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
