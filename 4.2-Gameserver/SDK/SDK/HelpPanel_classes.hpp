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

// 0x48 (0x370 - 0x328)
// WidgetBlueprintGeneratedClass HelpPanel.HelpPanel_C
class UHelpPanel_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHelpEntryBodyWidget_C*                HelpEntryBodyWidget;                               // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            HelpEntryScrollBox;                                // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HelpIcon;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       HelpTreeView;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortHelpItem*>                 TopLevelHelpItems;                                 // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HelpPanel_C");
		return Clss;
	}

	void SetSelectedItemByID(class FName SelectedItemID, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortHelpItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortHelpItem* CallFunc_GetItemWithID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnbindDelegates();
	TArray<class UObject*> HelpTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortHelpItem*>& HelpItems, class UFortHelpItem* K2Node_DynamicCast_AsFort_Help_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UFortHelpItem*>& CallFunc_GetSubItems_ReturnValue);
	void UpdateDetails(class UFortHelpItem* SelectedHelpItem, enum class EFortHelpItemType SelectedHelpItemType, class UFortHelpItem* LocalHelpItem, bool CallFunc_IsValid_ReturnValue);
	void HandleTopHelpListChanged(TArray<class UFortHelpItem*>& InHelpItems, bool bExpandAll);
	void BindDelegates();
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnActivated();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Destruct();
	void Construct();
	void OnContextHelpChanged();
	void ExecuteUbergraph_HelpPanel(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortHelpItem*>& CallFunc_GetTopLevelHelpItems_ActiveHelpEntries, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UFortHelpItem* K2Node_DynamicCast_AsFort_Help_Item, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
