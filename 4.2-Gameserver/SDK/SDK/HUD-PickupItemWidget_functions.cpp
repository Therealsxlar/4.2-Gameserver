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


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                 NewPickup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PickupItemWidget_C::SetPickup(class AFortPickup* NewPickup)
{
	static auto Func = Class->GetFunction("HUD-PickupItemWidget_C", "SetPickup");

	Params::UHUD_PickupItemWidget_C_SetPickup_Params Parms;
	Parms.NewPickup = NewPickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractErrorText                                                (Edit, BlueprintVisible)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_ItemsCount                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_MaxItemsCount                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_OverflowItemsCount                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInteractErrorText_InteractErrorText                  ()
// bool                               CallFunc_GetInteractErrorText_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_PickupItemWidget_C::InitializeInteractionFailureText(class FText InteractErrorText, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeInteractionFailureText");

	Params::UHUD_PickupItemWidget_C_InitializeInteractionFailureText_Params Parms;
	Parms.InteractErrorText = InteractErrorText;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetBackpackItemCounts_ItemsCount = CallFunc_GetBackpackItemCounts_ItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_MaxItemsCount = CallFunc_GetBackpackItemCounts_MaxItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_OverflowItemsCount = CallFunc_GetBackpackItemCounts_OverflowItemsCount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInteractErrorText_InteractErrorText = CallFunc_GetInteractErrorText_InteractErrorText;
	Parms.CallFunc_GetInteractErrorText_ReturnValue = CallFunc_GetInteractErrorText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PickupItemWidget_C::InitializeItemData(bool Temp_bool_Variable, class UFortItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue1, class UFortItem* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeItemData");

	Params::UHUD_PickupItemWidget_C_InitializeItemData_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_PickupItemWidget_C::Construct()
{
	static auto Func = Class->GetFunction("HUD-PickupItemWidget_C", "Construct");

	Params::UHUD_PickupItemWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PickupItemWidget_C::ExecuteUbergraph_HUD_PickupItemWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HUD-PickupItemWidget_C", "ExecuteUbergraph_HUD-PickupItemWidget");

	Params::UHUD_PickupItemWidget_C_ExecuteUbergraph_HUD_PickupItemWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
