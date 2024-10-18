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


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.UpdateSeasonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SeasonNumber                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetCurrentSeasonNumber_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemReceivedBattlePassPromiseHeader_C::UpdateSeasonText(bool IsDesignTime, int32 SeasonNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "UpdateSeasonText");

	Params::UItemReceivedBattlePassPromiseHeader_C_UpdateSeasonText_Params Parms;
	Parms.IsDesignTime = IsDesignTime;
	Parms.SeasonNumber = SeasonNumber;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentSeasonNumber_ReturnValue = CallFunc_GetCurrentSeasonNumber_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedBattlePassPromiseHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "PreConstruct");

	Params::UItemReceivedBattlePassPromiseHeader_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedBattlePassPromiseHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedBattlePassPromiseHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedBattlePassPromiseHeader_C::ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader");

	Params::UItemReceivedBattlePassPromiseHeader_C_ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
