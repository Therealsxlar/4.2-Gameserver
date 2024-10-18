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


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>CallFunc_GetSlottingRestrictionReasons_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadSlotItemPickerTileButton_C::UpdateOverlays(TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "UpdateOverlays");

	Params::USquadSlotItemPickerTileButton_C_UpdateOverlays_Params Parms;
	Parms.CallFunc_GetSlottingRestrictionReasons_ReturnValue = CallFunc_GetSlottingRestrictionReasons_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "OnListItemObjectSet");

	Params::USquadSlotItemPickerTileButton_C_OnListItemObjectSet_Params Parms;
	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHomebaseSquadSlotId        SquadSlotId                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "HandleItemSlottedToDifferentSquad");

	Params::USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params Parms;
	Parms.SquadSlotId = SquadSlotId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotItemPickerTileButton_C::HandleSlottingRestrictionReasonsChanged()
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "HandleSlottingRestrictionReasonsChanged");

	Params::USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquadSlotId        K2Node_Event_SquadSlotId                                         (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNullItem_Is_Null_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::ExecuteUbergraph_SquadSlotItemPickerTileButton(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, const struct FHomebaseSquadSlotId& K2Node_Event_SquadSlotId, bool CallFunc_IsNullItem_Is_Null_Item, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "ExecuteUbergraph_SquadSlotItemPickerTileButton");

	Params::USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_SquadSlotId = K2Node_Event_SquadSlotId;
	Parms.CallFunc_IsNullItem_Is_Null_Item = CallFunc_IsNullItem_Is_Null_Item;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
