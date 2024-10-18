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


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedFoundersRewardsHeader_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "Construct");

	Params::UItemReceivedFoundersRewardsHeader_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedFoundersRewardsHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedFoundersRewardsHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedFoundersRewardsHeader.ItemReceivedFoundersRewardsHeader_C.ExecuteUbergraph_ItemReceivedFoundersRewardsHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedFoundersRewardsHeader_C::ExecuteUbergraph_ItemReceivedFoundersRewardsHeader(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedFoundersRewardsHeader_C", "ExecuteUbergraph_ItemReceivedFoundersRewardsHeader");

	Params::UItemReceivedFoundersRewardsHeader_C_ExecuteUbergraph_ItemReceivedFoundersRewardsHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
