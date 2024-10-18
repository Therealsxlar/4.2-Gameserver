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


// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedTwitchHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedTwitchHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedTwitchHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.ExecuteUbergraph_ItemReceivedTwitchHeader
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_HasParam_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       ()

void UItemReceivedTwitchHeader_C::ExecuteUbergraph_ItemReceivedTwitchHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasParam_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedTwitchHeader_C", "ExecuteUbergraph_ItemReceivedTwitchHeader");

	Params::UItemReceivedTwitchHeader_C_ExecuteUbergraph_ItemReceivedTwitchHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_HasParam_ReturnValue = CallFunc_HasParam_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
