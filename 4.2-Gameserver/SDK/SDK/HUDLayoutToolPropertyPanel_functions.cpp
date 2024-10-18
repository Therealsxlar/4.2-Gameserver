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


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Create Button Group
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::Create_Button_Group(class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "Create Button Group");

	Params::UHUDLayoutToolPropertyPanel_C_Create_Button_Group_Params Parms;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.OnWidgetSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UHUDLayoutToolPlacementWidget*NewlySelectedWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "OnWidgetSelected");

	Params::UHUDLayoutToolPropertyPanel_C_OnWidgetSelected_Params Parms;
	Parms.NewlySelectedWidget = NewlySelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_ResetProperties_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_ResetProperties_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_ResetProperties_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_ResetProperties_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyPanel_C::Construct()
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "Construct");

	Params::UHUDLayoutToolPropertyPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.On Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyPanel_C::On_Open()
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "On Open");

	Params::UHUDLayoutToolPropertyPanel_C_On_Open_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.ExecuteUbergraph_HUDLayoutToolPropertyPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetPropertyMenuState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolPlacementWidget*K2Node_Event_NewlySelectedWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLayoutDirty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSavedLayout_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::ExecuteUbergraph_HUDLayoutToolPropertyPanel(int32 EntryPoint, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetPropertyMenuState_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, class UHUDLayoutToolPlacementWidget* K2Node_Event_NewlySelectedWidget, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button4, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_IsLayoutDirty_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, class UWidget* K2Node_Select2_Default, bool CallFunc_HasSavedLayout_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "ExecuteUbergraph_HUDLayoutToolPropertyPanel");

	Params::UHUDLayoutToolPropertyPanel_C_ExecuteUbergraph_HUDLayoutToolPropertyPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPropertyMenuState_ReturnValue = CallFunc_GetPropertyMenuState_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewlySelectedWidget = K2Node_Event_NewlySelectedWidget;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_IsLayoutDirty_ReturnValue = CallFunc_IsLayoutDirty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Selected1 = K2Node_ComponentBoundEvent_Selected1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue = CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_HasSavedLayout_ReturnValue = CallFunc_HasSavedLayout_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
