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


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedFriendGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedFriendGiftHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemReceivedFriendGiftHeader_C::ExecuteUbergraph_ItemReceivedFriendGiftHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "ExecuteUbergraph_ItemReceivedFriendGiftHeader");

	Params::UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
