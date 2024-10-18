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


// Function ItemTransform.ItemTransform_C.SetAndLogSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::SetAndLogSelectedKey(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "SetAndLogSelectedKey");

	Params::UItemTransform_C_SetAndLogSelectedKey_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.Handle SubScreen Activated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::Handle_SubScreen_Activated(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "Handle SubScreen Activated");

	Params::UItemTransform_C_Handle_SubScreen_Activated_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleClosePicker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleClosePicker(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleClosePicker");

	Params::UItemTransform_C_HandleClosePicker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemTransform.ItemTransform_C.OnItemPickerOpened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::OnItemPickerOpened()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OnItemPickerOpened");

	Params::UItemTransform_C_OnItemPickerOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OnItemPickerClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::OnItemPickerClosed()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OnItemPickerClosed");

	Params::UItemTransform_C_OnItemPickerClosed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.UpdateTransformAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::UpdateTransformAction(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "UpdateTransformAction");

	Params::UItemTransform_C_UpdateTransformAction_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.Handle Slot Screen Activated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   CallFunc_Get_Selected_Item_SelectedKey                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::Handle_Slot_Screen_Activated(class UFortItem* CallFunc_Get_Selected_Item_SelectedKey)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "Handle Slot Screen Activated");

	Params::UItemTransform_C_Handle_Slot_Screen_Activated_Params Parms;
	Parms.CallFunc_Get_Selected_Item_SelectedKey = CallFunc_Get_Selected_Item_SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.Handle Key Screen Activated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   CallFunc_Get_Selected_Item_SelectedKey                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::Handle_Key_Screen_Activated(class UFortItem* CallFunc_Get_Selected_Item_SelectedKey, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "Handle Key Screen Activated");

	Params::UItemTransform_C_Handle_Key_Screen_Activated_Params Parms;
	Parms.CallFunc_Get_Selected_Item_SelectedKey = CallFunc_Get_Selected_Item_SelectedKey;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.DisableTransformAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::DisableTransformAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "DisableTransformAction");

	Params::UItemTransform_C_DisableTransformAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HideTransformAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::HideTransformAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HideTransformAction");

	Params::UItemTransform_C_HideTransformAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.ShowTransformAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::ShowTransformAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "ShowTransformAction");

	Params::UItemTransform_C_ShowTransformAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::UpdateSelectKeyAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "UpdateSelectKeyAction");

	Params::UItemTransform_C_UpdateSelectKeyAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.DisableSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::DisableSelectKeyAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "DisableSelectKeyAction");

	Params::UItemTransform_C_DisableSelectKeyAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HideSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::HideSelectKeyAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HideSelectKeyAction");

	Params::UItemTransform_C_HideSelectKeyAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.ShowSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::ShowSelectKeyAction()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "ShowSelectKeyAction");

	Params::UItemTransform_C_ShowSelectKeyAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleSelect_PassThrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleSelectKeyAction(bool* Passthrough, bool CallFunc_HandleSelect_PassThrough)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleSelectKeyAction");

	Params::UItemTransform_C_HandleSelectKeyAction_Params Parms;
	Parms.CallFunc_HandleSelect_PassThrough = CallFunc_HandleSelect_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemTransform.ItemTransform_C.HandleTransformAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleTransformAction(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleTransformAction");

	Params::UItemTransform_C_HandleTransformAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemTransform.ItemTransform_C.ResetItemTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::ResetItemTransform()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "ResetItemTransform");

	Params::UItemTransform_C_ResetItemTransform_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleTransformFailed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemTransform_C::HandleTransformFailed(class FText& ErrorMessage)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleTransformFailed");

	Params::UItemTransform_C_HandleTransformFailed_Params Parms;
	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>RewardedItems                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair>SacrificedItems                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemTransform_C::HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>& RewardedItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificedItems)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleTransformSucceeded");

	Params::UItemTransform_C_HandleTransformSucceeded_Params Parms;
	Parms.RewardedItems = RewardedItems;
	Parms.SacrificedItems = SacrificedItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OpenResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>RewardItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair>SacrificeItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemTransformResultModal_C* K2Node_DynamicCast_AsItem_Transform_Result_Modal                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::OpenResult(TArray<struct FFortItemInstanceQuantityPair>& RewardItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificeItems, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemTransformResultModal_C* K2Node_DynamicCast_AsItem_Transform_Result_Modal, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OpenResult");

	Params::UItemTransform_C_OpenResult_Params Parms;
	Parms.RewardItems = RewardItems;
	Parms.SacrificeItems = SacrificeItems;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Transform_Result_Modal = K2Node_DynamicCast_AsItem_Transform_Result_Modal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Get_Transform_Data_SelectedKey                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_Get_Transform_Data_SacrificeItems                       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Get_Transform_Data_CurrentSacrificePoints               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentTier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleTransformConfirm(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_Get_Transform_Data_SelectedKey, TArray<class UFortItem*>& CallFunc_Get_Transform_Data_SacrificeItems, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleTransformConfirm");

	Params::UItemTransform_C_HandleTransformConfirm_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Get_Transform_Data_SelectedKey = CallFunc_Get_Transform_Data_SelectedKey;
	Parms.CallFunc_Get_Transform_Data_SacrificeItems = CallFunc_Get_Transform_Data_SacrificeItems;
	Parms.CallFunc_Get_Transform_Data_CurrentSacrificePoints = CallFunc_Get_Transform_Data_CurrentSacrificePoints;
	Parms.CallFunc_Get_Transform_Data_CurrentTier = CallFunc_Get_Transform_Data_CurrentTier;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleTransformCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::HandleTransformCancel()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleTransformCancel");

	Params::UItemTransform_C_HandleTransformCancel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OpenConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UItemTransformConfirmationModal_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Get_Transform_Data_SelectedKey                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_Get_Transform_Data_SacrificeItems                       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Get_Transform_Data_CurrentSacrificePoints               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentTier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::OpenConfirmation(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UItemTransformConfirmationModal_C* CallFunc_Create_ReturnValue, class UFortItem* CallFunc_Get_Transform_Data_SelectedKey, TArray<class UFortItem*>& CallFunc_Get_Transform_Data_SacrificeItems, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OpenConfirmation");

	Params::UItemTransform_C_OpenConfirmation_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Transform_Data_SelectedKey = CallFunc_Get_Transform_Data_SelectedKey;
	Parms.CallFunc_Get_Transform_Data_SacrificeItems = CallFunc_Get_Transform_Data_SacrificeItems;
	Parms.CallFunc_Get_Transform_Data_CurrentSacrificePoints = CallFunc_Get_Transform_Data_CurrentSacrificePoints;
	Parms.CallFunc_Get_Transform_Data_CurrentTier = CallFunc_Get_Transform_Data_CurrentTier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.HandleSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleSelect(bool* Passthrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleSelect");

	Params::UItemTransform_C_HandleSelect_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemTransform.ItemTransform_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "HandleBack");

	Params::UItemTransform_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemTransform.ItemTransform_C.SetupActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UItemTransform_C::SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "SetupActionHandlers");

	Params::UItemTransform_C_SetupActionHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OpenSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::OpenSlotScreen()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OpenSlotScreen");

	Params::UItemTransform_C_OpenSlotScreen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OpenKeyScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransform_C::OpenKeyScreen()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OpenKeyScreen");

	Params::UItemTransform_C_OpenKeyScreen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OpenItemTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::OpenItemTransform(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OpenItemTransform");

	Params::UItemTransform_C_OpenItemTransform_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature");

	Params::UItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemTransform_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OnActivated");

	Params::UItemTransform_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature");

	Params::UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature");

	Params::UItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	Params::UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransform_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "Construct");

	Params::UItemTransform_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.OnRequestCloseItemPicker
// (Event, Public, BlueprintEvent)
// Parameters:

void UItemTransform_C::OnRequestCloseItemPicker()
{
	static auto Func = Class->GetFunction("ItemTransform_C", "OnRequestCloseItemPicker");

	Params::UItemTransform_C_OnRequestCloseItemPicker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleSelect_PassThrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_TransformActive                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_Key                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleClosePicker_PassThrough                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransform_C::ExecuteUbergraph_ItemTransform(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_HandleSelect_PassThrough, bool K2Node_ComponentBoundEvent_TransformActive, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortItem* K2Node_ComponentBoundEvent_Key, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_HandleClosePicker_PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemTransform_C", "ExecuteUbergraph_ItemTransform");

	Params::UItemTransform_C_ExecuteUbergraph_ItemTransform_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.CallFunc_HandleSelect_PassThrough = CallFunc_HandleSelect_PassThrough;
	Parms.K2Node_ComponentBoundEvent_TransformActive = K2Node_ComponentBoundEvent_TransformActive;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Key = K2Node_ComponentBoundEvent_Key;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_HandleClosePicker_PassThrough = CallFunc_HandleClosePicker_PassThrough;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue1 = CallFunc_GetActiveWidgetIndex_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
