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


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Picked_Up_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()

void UAthenaPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaPickupMessageItem_C", "Setup");

	Params::UAthenaPickupMessageItem_C_Setup_Params Parms;
	Parms.Picked_Up_Item = Picked_Up_Item;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Refresh Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaPickupMessageItem_C::Refresh_Count()
{
	static auto Func = Class->GetFunction("AthenaPickupMessageItem_C", "Refresh Count");

	Params::UAthenaPickupMessageItem_C_Refresh_Count_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStackSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static auto Func = Class->GetFunction("AthenaPickupMessageItem_C", "OnStackSizeChanged");

	Params::UAthenaPickupMessageItem_C_OnStackSizeChanged_Params Parms;
	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaPickupMessageItem_C::OnBeginRemove()
{
	static auto Func = Class->GetFunction("AthenaPickupMessageItem_C", "OnBeginRemove");

	Params::UAthenaPickupMessageItem_C_OnBeginRemove_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OldStackSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::ExecuteUbergraph_AthenaPickupMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize)
{
	static auto Func = Class->GetFunction("AthenaPickupMessageItem_C", "ExecuteUbergraph_AthenaPickupMessageItem");

	Params::UAthenaPickupMessageItem_C_ExecuteUbergraph_AthenaPickupMessageItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldStackSize = K2Node_Event_OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
