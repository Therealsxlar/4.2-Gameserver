#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x388 - 0x2F8)
// WidgetBlueprintGeneratedClass ItemTransform.ItemTransform_C
class UItemTransform_C : public UFortItemTransform
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UItemTransformKeyScreen_C*             KeyScreen;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotScreen_C*            SlotScreen;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TransformScreenSwitcher;                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SelectKeyInputAction;                              // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   TransformInputAction;                              // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SelectItemInputAction;                             // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectItemInputAction;                            // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsItemPickerOpen;                                  // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ClosePickerInputAction;                            // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransform_C");
		return Clss;
	}

	void SetAndLogSelectedKey(class UFortItem* SelectedItem);
	void Handle_SubScreen_Activated(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void HandleClosePicker(bool* Passthrough);
	void OnItemPickerOpened();
	void OnItemPickerClosed();
	void UpdateTransformAction(bool TransformActive);
	void Handle_Slot_Screen_Activated(class UFortItem* CallFunc_Get_Selected_Item_SelectedKey);
	void Handle_Key_Screen_Activated(class UFortItem* CallFunc_Get_Selected_Item_SelectedKey, bool CallFunc_IsValid_ReturnValue);
	void DisableTransformAction();
	void HideTransformAction();
	void ShowTransformAction();
	void UpdateSelectKeyAction();
	void DisableSelectKeyAction();
	void HideSelectKeyAction();
	void ShowSelectKeyAction();
	void HandleSelectKeyAction(bool* Passthrough, bool CallFunc_HandleSelect_PassThrough);
	void HandleTransformAction(bool* Passthrough);
	void ResetItemTransform();
	void HandleTransformFailed(class FText& ErrorMessage);
	void HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>& RewardedItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificedItems);
	void OpenResult(TArray<struct FFortItemInstanceQuantityPair>& RewardItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificeItems, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemTransformResultModal_C* K2Node_DynamicCast_AsItem_Transform_Result_Modal, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void HandleTransformConfirm(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_Get_Transform_Data_SelectedKey, TArray<class UFortItem*>& CallFunc_Get_Transform_Data_SacrificeItems, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void HandleTransformCancel();
	void OpenConfirmation(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UItemTransformConfirmationModal_C* CallFunc_Create_ReturnValue, class UFortItem* CallFunc_Get_Transform_Data_SelectedKey, TArray<class UFortItem*>& CallFunc_Get_Transform_Data_SacrificeItems, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleSelect(bool* Passthrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
	void OpenSlotScreen();
	void OpenKeyScreen();
	void OpenItemTransform(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnActivated();
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature();
	void BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key);
	void Construct();
	void OnRequestCloseItemPicker();
	void ExecuteUbergraph_ItemTransform(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_HandleSelect_PassThrough, bool K2Node_ComponentBoundEvent_TransformActive, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortItem* K2Node_ComponentBoundEvent_Key, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_HandleClosePicker_PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
