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


// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedVariationReceived_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedVariationReceived_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedVariationReceived_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.ExecuteUbergraph_ItemReceivedVariationReceived
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortReceivedItemLootInfo   CallFunc_Array_Get_Item                                          ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UItemReceivedVariationReceived_C::ExecuteUbergraph_ItemReceivedVariationReceived(int32 EntryPoint, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedVariationReceived_C", "ExecuteUbergraph_ItemReceivedVariationReceived");

	Params::UItemReceivedVariationReceived_C_ExecuteUbergraph_ItemReceivedVariationReceived_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
