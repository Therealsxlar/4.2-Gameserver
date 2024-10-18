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


// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedUnGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedUnGiftHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedUnGiftHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.ExecuteUbergraph_ItemReceivedUnGiftHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedUnGiftHeader_C::ExecuteUbergraph_ItemReceivedUnGiftHeader(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedUnGiftHeader_C", "ExecuteUbergraph_ItemReceivedUnGiftHeader");

	Params::UItemReceivedUnGiftHeader_C_ExecuteUbergraph_ItemReceivedUnGiftHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
