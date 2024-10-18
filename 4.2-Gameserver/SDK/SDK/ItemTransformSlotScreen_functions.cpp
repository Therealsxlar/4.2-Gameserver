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


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Navigate to Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::Navigate_to_Button(int32 Index, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "Navigate to Button");

	Params::UItemTransformSlotScreen_C_Navigate_to_Button_Params Parms;
	Parms.Index = Index;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::NavigateToSelectedItem()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "NavigateToSelectedItem");

	Params::UItemTransformSlotScreen_C_NavigateToSelectedItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedKey                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor)
// int32                              CurrentSacrificePoints                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentSacrificePoints               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentTier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::Get_Transform_Data(class UFortItem** SelectedKey, TArray<class UFortItem*>* SacrificeItems, int32* CurrentSacrificePoints, int32* CurrentTier, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "Get Transform Data");

	Params::UItemTransformSlotScreen_C_Get_Transform_Data_Params Parms;
	Parms.CallFunc_Get_Transform_Data_CurrentSacrificePoints = CallFunc_Get_Transform_Data_CurrentSacrificePoints;
	Parms.CallFunc_Get_Transform_Data_CurrentTier = CallFunc_Get_Transform_Data_CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = Parms.SelectedKey;

	if (SacrificeItems != nullptr)
		*SacrificeItems = Parms.SacrificeItems;

	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = Parms.CurrentSacrificePoints;

	if (CurrentTier != nullptr)
		*CurrentTier = Parms.CurrentTier;

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::ResetScreen(int32 Temp_int_Variable, class UFortItem* Temp_object_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "ResetScreen");

	Params::UItemTransformSlotScreen_C_ResetScreen_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedButtonIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::CloseItemPicker(int32 CallFunc_GetSelectedButtonIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "CloseItemPicker");

	Params::UItemTransformSlotScreen_C_CloseItemPicker_Params Parms;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::SetupSlotScreen(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "SetupSlotScreen");

	Params::UItemTransformSlotScreen_C_SetupSlotScreen_Params Parms;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedButtonIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::OpenItemPicker(int32 CallFunc_GetSelectedButtonIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OpenItemPicker");

	Params::UItemTransformSlotScreen_C_OpenItemPicker_Params Parms;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::OpenSlotScreen()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OpenSlotScreen");

	Params::UItemTransformSlotScreen_C_OpenSlotScreen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "Construct");

	Params::UItemTransformSlotScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SacrificePoints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params Parms;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               AssociatedButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::HandleSlotButton_Clicked(class UCommonButton* AssociatedButton, int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "HandleSlotButton_Clicked");

	Params::UItemTransformSlotScreen_C_HandleSlotButton_Clicked_Params Parms;
	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_DoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               AssociatedButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::HandleSlotButton_DoubleClicked(class UCommonButton* AssociatedButton, int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "HandleSlotButton_DoubleClicked");

	Params::UItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked_Params Parms;
	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedButtonIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemTransformSlotEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SacrificePoints                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_CurrentTier                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_TransformActive                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_AssociatedButton1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ButtonIndex1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_AssociatedButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ButtonIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::ExecuteUbergraph_ItemTransformSlotScreen(int32 EntryPoint, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 K2Node_ComponentBoundEvent_SacrificePoints, int32 K2Node_ComponentBoundEvent_CurrentTier, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, bool K2Node_ComponentBoundEvent_TransformActive, class UCommonButton* K2Node_CustomEvent_AssociatedButton1, int32 K2Node_CustomEvent_ButtonIndex1, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "ExecuteUbergraph_ItemTransformSlotScreen");

	Params::UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_SacrificePoints = K2Node_ComponentBoundEvent_SacrificePoints;
	Parms.K2Node_ComponentBoundEvent_CurrentTier = K2Node_ComponentBoundEvent_CurrentTier;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_TransformActive = K2Node_ComponentBoundEvent_TransformActive;
	Parms.K2Node_CustomEvent_AssociatedButton1 = K2Node_CustomEvent_AssociatedButton1;
	Parms.K2Node_CustomEvent_ButtonIndex1 = K2Node_CustomEvent_ButtonIndex1;
	Parms.K2Node_CustomEvent_AssociatedButton = K2Node_CustomEvent_AssociatedButton;
	Parms.K2Node_CustomEvent_ButtonIndex = K2Node_CustomEvent_ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::OnItemPickerOpened__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnItemPickerOpened__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::OnItemPickerClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnItemPickerClosed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotScreen_C::OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnTransformButtonUpdated__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           ItemsToSacrifice                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              SacrificePoints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::OnTransformConfirmed__DelegateSignature(TArray<class UFortItem*>& ItemsToSacrifice, int32 SacrificePoints, int32 CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnTransformConfirmed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params Parms;
	Parms.ItemsToSacrifice = ItemsToSacrifice;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
