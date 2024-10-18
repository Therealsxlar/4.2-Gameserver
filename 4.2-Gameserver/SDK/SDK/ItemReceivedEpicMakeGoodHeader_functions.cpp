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


// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedEpicMakeGoodHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedEpicMakeGoodHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedEpicMakeGoodHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_HasParam_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       ()
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue1                      ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedEpicMakeGoodHeader_C::ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasParam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_FormatTextUsingParams_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedEpicMakeGoodHeader_C", "ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader");

	Params::UItemReceivedEpicMakeGoodHeader_C_ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_HasParam_ReturnValue = CallFunc_HasParam_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue1 = CallFunc_FormatTextUsingParams_ReturnValue1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
