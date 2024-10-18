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


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdatePageCompletionWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FilledSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlots                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     ()
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UCollectionBookPageListWidget_C::UpdatePageCompletionWidget(int32 FilledSlots, int32 TotalSlots, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "UpdatePageCompletionWidget");

	Params::UCollectionBookPageListWidget_C_UpdatePageCompletionWidget_Params Parms;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumAvailableSlots                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsWidget(int32 NumAvailableSlots, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "UpdateAvailableSlotsWidget");

	Params::UCollectionBookPageListWidget_C_UpdateAvailableSlotsWidget_Params Parms;
	Parms.NumAvailableSlots = NumAvailableSlots;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ColorToUse                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors(const struct FLinearColor& ColorToUse, bool CallFunc_GetSelected_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "UpdateAvailableSlotsBorderColors");

	Params::UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params Parms;
	Parms.ColorToUse = ColorToUse;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory* Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory* Category)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsCategory");

	Params::UCollectionBookPageListWidget_C_SetupAsCategory_Params Parms;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     Page                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage* Page)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsPage");

	Params::UCollectionBookPageListWidget_C_SetupAsPage_Params Parms;
	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "PreConstruct");

	Params::UCollectionBookPageListWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableSlots                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FilledSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlots                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnPageDetailsUpdated");

	Params::UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params Parms;
	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ThisButton                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnSelectionChanged");

	Params::UCollectionBookPageListWidget_C_OnSelectionChanged_Params Parms;
	Parms.ThisButton = ThisButton;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnCategoryDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableSlots                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FilledSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlots                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnCategoryDetailsUpdated");

	Params::UCollectionBookPageListWidget_C_OnCategoryDetailsUpdated_Params Parms;
	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "BP_OnItemExpansionChanged");

	Params::UCollectionBookPageListWidget_C_BP_OnItemExpansionChanged_Params Parms;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookCategory* K2Node_Event_Category                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookPage*     K2Node_Event_Page                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_AvailableSlots1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FilledSlots1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalSlots1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_ThisButton                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSelected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_AvailableSlots                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FilledSlots                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalSlots                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UFortCollectionBookCategory* K2Node_Event_Category, class UFortCollectionBookPage* K2Node_Event_Page, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_AvailableSlots1, int32 K2Node_Event_FilledSlots1, int32 K2Node_Event_TotalSlots1, enum class EFortCollectionBookState K2Node_Event_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_ThisButton, bool K2Node_CustomEvent_bSelected, bool Temp_bool_Variable1, int32 K2Node_Event_AvailableSlots, int32 K2Node_Event_FilledSlots, int32 K2Node_Event_TotalSlots, bool K2Node_Event_bIsExpanded, int32 K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "ExecuteUbergraph_CollectionBookPageListWidget");

	Params::UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Event_Category = K2Node_Event_Category;
	Parms.K2Node_Event_Page = K2Node_Event_Page;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_AvailableSlots1 = K2Node_Event_AvailableSlots1;
	Parms.K2Node_Event_FilledSlots1 = K2Node_Event_FilledSlots1;
	Parms.K2Node_Event_TotalSlots1 = K2Node_Event_TotalSlots1;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ThisButton = K2Node_CustomEvent_ThisButton;
	Parms.K2Node_CustomEvent_bSelected = K2Node_CustomEvent_bSelected;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Event_AvailableSlots = K2Node_Event_AvailableSlots;
	Parms.K2Node_Event_FilledSlots = K2Node_Event_FilledSlots;
	Parms.K2Node_Event_TotalSlots = K2Node_Event_TotalSlots;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
