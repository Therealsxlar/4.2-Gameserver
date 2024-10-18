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


// Function MessageCenterListItem.MessageCenterListItem_C.GetListItemObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UMessageCenterListItem_C::GetListItemObject()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "GetListItemObject");

	Params::UMessageCenterListItem_C_GetListItemObject_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "ShowText");

	Params::UMessageCenterListItem_C_ShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         MESSAGE                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::SetMessage(class UFortUINotification* MESSAGE)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "SetMessage");

	Params::UMessageCenterListItem_C_SetMessage_Params Parms;
	Parms.MESSAGE = MESSAGE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "BP_OnEntryReleased");

	Params::UMessageCenterListItem_C_BP_OnEntryReleased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "BP_OnItemExpansionChanged");

	Params::UMessageCenterListItem_C_BP_OnItemExpansionChanged_Params Parms;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "OnListItemObjectSet");

	Params::UMessageCenterListItem_C_OnListItemObjectSet_Params Parms;
	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMessageCenterListItem_C::Construct()
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "Construct");

	Params::UMessageCenterListItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "BP_OnItemSelectionChanged");

	Params::UMessageCenterListItem_C_BP_OnItemSelectionChanged_Params Parms;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_DynamicCast_AsFort_UINotification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterListItem_C::ExecuteUbergraph_MessageCenterListItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MessageCenterListItem_C", "ExecuteUbergraph_MessageCenterListItem");

	Params::UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_UINotification = K2Node_DynamicCast_AsFort_UINotification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
