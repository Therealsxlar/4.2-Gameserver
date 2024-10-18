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


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   ItemTypes                                                        (Parm, OutParm, ZeroConstructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseSquadSlot          CallFunc_Array_Get_Item                                          ()

void UExpeditionSquadSlotButton_C::Get_Squad_Data(class FName* OutSquadId, int32* OutSquadSlotIndex, TArray<enum class EFortItemType>* ItemTypes, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_IsValid_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "Get Squad Data");

	Params::UExpeditionSquadSlotButton_C_Get_Squad_Data_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

	if (ItemTypes != nullptr)
		*ItemTypes = Parms.ItemTypes;

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UExpeditionSquadSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "PreConstruct");

	Params::UExpeditionSquadSlotButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "SquadSlotWidgetUpdated");

	Params::UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "HandlePostDifferentSquadSlotSetBP");

	Params::UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "BP_OnSelected");

	Params::UExpeditionSquadSlotButton_C_BP_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UExpeditionSquadSlotButton_C::BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UExpeditionSquadSlotButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;
	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::Construct()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "Construct");

	Params::UExpeditionSquadSlotButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::Destruct()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "Destruct");

	Params::UExpeditionSquadSlotButton_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Open Squad Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotButton_C::Open_Squad_Slot(int32 SquadSlotIndex)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "Open Squad Slot");

	Params::UExpeditionSquadSlotButton_C_Open_Squad_Slot_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SquadSlotIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquadSlotLockedBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UExpeditionSquadSlotButton_C::ExecuteUbergraph_ExpeditionSquadSlotButton(int32 EntryPoint, enum class EFortItemCardSize Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, class UClass* Temp_class_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue1, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue1, bool K2Node_ComponentBoundEvent_bIsOpen, class UClass* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, int32 K2Node_CustomEvent_SquadSlotIndex, bool CallFunc_IsSquadSlotLockedBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "ExecuteUbergraph_ExpeditionSquadSlotButton");

	Params::UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.Temp_class_Variable5 = Temp_class_Variable5;
	Parms.Temp_class_Variable6 = Temp_class_Variable6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue1 = CallFunc_GetOwningLocalPlayer_ReturnValue1;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue1 = CallFunc_GetItemInSquadSlotBP_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CustomEvent_SquadSlotIndex = K2Node_CustomEvent_SquadSlotIndex;
	Parms.CallFunc_IsSquadSlotLockedBP_ReturnValue = CallFunc_IsSquadSlotLockedBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotButton_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "OnSquadSlotOpened__DelegateSignature");

	Params::UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotButton_C::OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "OnSquadSlotUpdated__DelegateSignature");

	Params::UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotButton_C::OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static auto Func = Class->GetFunction("ExpeditionSquadSlotButton_C", "OnSquadSlotSelected__DelegateSignature");

	Params::UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
