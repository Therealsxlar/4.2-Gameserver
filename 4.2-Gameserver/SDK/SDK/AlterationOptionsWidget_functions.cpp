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


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidAlterationSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAnyAlterationsExist_OptionsExist                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayAlterationSlot_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAlterationOptionsWidget_C::ShouldShowNoOptions(bool CallFunc_IsValidAlterationSlot_ReturnValue, bool CallFunc_DoAnyAlterationsExist_OptionsExist, bool CallFunc_IsGameplayAlterationSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "ShouldShowNoOptions");

	Params::UAlterationOptionsWidget_C_ShouldShowNoOptions_Params Parms;
	Parms.CallFunc_IsValidAlterationSlot_ReturnValue = CallFunc_IsValidAlterationSlot_ReturnValue;
	Parms.CallFunc_DoAnyAlterationsExist_OptionsExist = CallFunc_DoAnyAlterationsExist_OptionsExist;
	Parms.CallFunc_IsGameplayAlterationSlot_ReturnValue = CallFunc_IsGameplayAlterationSlot_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OptionsExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::DoAnyAlterationsExist(bool* OptionsExist, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "DoAnyAlterationsExist");

	Params::UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params Parms;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue = CallFunc_DoAlterationOptionsExist_ReturnValue;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue1 = CallFunc_DoAlterationOptionsExist_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OptionsExist != nullptr)
		*OptionsExist = Parms.OptionsExist;

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleDetailsClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedButtonIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::HandleDetailsClosed(int32 CallFunc_GetSelectedButtonIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "HandleDetailsClosed");

	Params::UAlterationOptionsWidget_C_HandleDetailsClosed_Params Parms;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleShouldGiveFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GiveFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::HandleShouldGiveFocus(int32 Index, bool GiveFocus, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "HandleShouldGiveFocus");

	Params::UAlterationOptionsWidget_C_HandleShouldGiveFocus_Params Parms;
	Parms.Index = Index;
	Parms.GiveFocus = GiveFocus;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue1 = CallFunc_GetButtonAtIndex_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredientsButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::UpdateIngredientsButtonVisibility(bool Hidden, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "UpdateIngredientsButtonVisibility");

	Params::UAlterationOptionsWidget_C_UpdateIngredientsButtonVisibility_Params Parms;
	Parms.Hidden = Hidden;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateButtonsForConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::UpdateButtonsForConfirmation(bool Enabled)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "UpdateButtonsForConfirmation");

	Params::UAlterationOptionsWidget_C_UpdateButtonsForConfirmation_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredients
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>Ingredients                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_AreIngredientRequirementsMent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::UpdateIngredients(TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_AreIngredientRequirementsMent_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "UpdateIngredients");

	Params::UAlterationOptionsWidget_C_UpdateIngredients_Params Parms;
	Parms.Ingredients = Ingredients;
	Parms.CallFunc_AreIngredientRequirementsMent_ReturnValue = CallFunc_AreIngredientRequirementsMent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortAlterationOptionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::AddAlterationOptionWidget(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget, enum class EFortAlterationOptionType Temp_byte_Variable, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "AddAlterationOptionWidget");

	Params::UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params Parms;
	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowNoOptions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowNoOptions_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::ClearOptionsAndInitialize(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_ShouldShowNoOptions_ReturnValue, bool CallFunc_ShouldShowNoOptions_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select1_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, enum class ESlateVisibility K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "ClearOptionsAndInitialize");

	Params::UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_ShouldShowNoOptions_ReturnValue = CallFunc_ShouldShowNoOptions_ReturnValue;
	Parms.CallFunc_ShouldShowNoOptions_ReturnValue1 = CallFunc_ShouldShowNoOptions_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue = CallFunc_DoAlterationOptionsExist_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue1 = CallFunc_DoAlterationOptionsExist_ReturnValue1;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOptionsWidget_C::OnItemChanged()
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "OnItemChanged");

	Params::UAlterationOptionsWidget_C_OnItemChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "OnGenerateOption");

	Params::UAlterationOptionsWidget_C_OnGenerateOption_Params Parms;
	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnIngredientsChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>RequiredIngredients                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAlterationOptionsWidget_C::OnIngredientsChanged(TArray<struct FFortItemQuantityPair>& RequiredIngredients)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "OnIngredientsChanged");

	Params::UAlterationOptionsWidget_C_OnIngredientsChanged_Params Parms;
	Parms.RequiredIngredients = RequiredIngredients;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::UAlterationOptionsWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	Params::UAlterationOptionsWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature");

	Params::UAlterationOptionsWidget_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOptionsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "Construct");

	Params::UAlterationOptionsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOptionsWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "Destruct");

	Params::UAlterationOptionsWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ConfirmationComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationOptionsWidget_C::ConfirmationComplete()
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "ConfirmationComplete");

	Params::UAlterationOptionsWidget_C_ConfirmationComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnShouldGiveFocus
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bGiveFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::OnShouldGiveFocus(int32 Index, bool bGiveFocus)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "OnShouldGiveFocus");

	Params::UAlterationOptionsWidget_C_OnShouldGiveFocus_Params Parms;
	Parms.Index = Index;
	Parms.bGiveFocus = bGiveFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAlterationOptionTypeK2Node_Event_OptionType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       K2Node_Event_OptionWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>K2Node_Event_RequiredIngredients                                 (ConstParm, ZeroConstructor, ReferenceParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bGiveFocus                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItemDefinition*> CallFunc_GetItemDefinitions_ReturnValue                          (ZeroConstructor, ReferenceParm)
// class UItemWindow_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItemDefinition*> CallFunc_GetItemDefinitions_ReturnValue1                         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::ExecuteUbergraph_AlterationOptionsWidget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class EFortAlterationOptionType K2Node_Event_OptionType, class UFortAlterationOption* K2Node_Event_OptionWidget, TArray<struct FFortItemQuantityPair>& K2Node_Event_RequiredIngredients, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 K2Node_Event_Index, bool K2Node_Event_bGiveFocus, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue, class UItemWindow_C* CallFunc_Create_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationOptionsWidget_C", "ExecuteUbergraph_AlterationOptionsWidget");

	Params::UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Event_OptionType = K2Node_Event_OptionType;
	Parms.K2Node_Event_OptionWidget = K2Node_Event_OptionWidget;
	Parms.K2Node_Event_RequiredIngredients = K2Node_Event_RequiredIngredients;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_bGiveFocus = K2Node_Event_bGiveFocus;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetItemDefinitions_ReturnValue = CallFunc_GetItemDefinitions_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetItemDefinitions_ReturnValue1 = CallFunc_GetItemDefinitions_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
