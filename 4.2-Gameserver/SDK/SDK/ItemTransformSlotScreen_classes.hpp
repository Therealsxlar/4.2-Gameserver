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

// 0xC0 (0x2D0 - 0x210)
// WidgetBlueprintGeneratedClass ItemTransformSlotScreen.ItemTransformSlotScreen_C
class UItemTransformSlotScreen_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UItemTransformItemPicker_C*            ItemTransformItemPicker;                           // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformResultInfo_C*            ItemTransformResultInfo;                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot1;                                             // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot2;                                             // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot3;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot4;                                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             Slot5;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             SelectedKey;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SacrificeItems;                                    // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UItemTransformSlotEntry_C*>     SacrificeItemSlotWidgets;                          // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTransformConfirmed;                              // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFortItemTransformFilterTabLabelInfo> ItemPickerFilterTabs;                              // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTransformButtonUpdated;                          // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemPickerClosed;                                // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemPickerOpened;                                // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformSlotScreen_C");
		return Clss;
	}

	void Navigate_to_Button(int32 Index, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void NavigateToSelectedItem();
	void Get_Transform_Data(class UFortItem** SelectedKey, TArray<class UFortItem*>* SacrificeItems, int32* CurrentSacrificePoints, int32* CurrentTier, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier);
	void ResetScreen(int32 Temp_int_Variable, class UFortItem* Temp_object_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CloseItemPicker(int32 CallFunc_GetSelectedButtonIndex_ReturnValue);
	void SetupSlotScreen(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue);
	void OpenItemPicker(int32 CallFunc_GetSelectedButtonIndex_ReturnValue);
	void OpenSlotScreen();
	void BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem);
	void Construct();
	void BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier);
	void BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive);
	void HandleSlotButton_Clicked(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void HandleSlotButton_DoubleClicked(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void ExecuteUbergraph_ItemTransformSlotScreen(int32 EntryPoint, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 K2Node_ComponentBoundEvent_SacrificePoints, int32 K2Node_ComponentBoundEvent_CurrentTier, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, bool K2Node_ComponentBoundEvent_TransformActive, class UCommonButton* K2Node_CustomEvent_AssociatedButton1, int32 K2Node_CustomEvent_ButtonIndex1, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex);
	void OnItemPickerOpened__DelegateSignature();
	void OnItemPickerClosed__DelegateSignature();
	void OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void OnTransformConfirmed__DelegateSignature(TArray<class UFortItem*>& ItemsToSacrifice, int32 SacrificePoints, int32 CurrentTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
