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

// 0xE8 (0x460 - 0x378)
// WidgetBlueprintGeneratedClass ItemInspectScreen.ItemInspectScreen_C
class UItemInspectScreen_C : public UFortItemInspectionScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class USpacer*                               CameraFrameSpacer;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  ExtraDetailsPanelTabList;                          // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExtraDetailsTabContentSwitcher;                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ItemActionSwitcher;                                // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*    ItemAlterationsListDetailWidget;                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*        ItemDescriptionDetailWidget;                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionConfirmation_C*   ItemInspectEvolutionConfirmation;                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolveRarityConfirmation_C* ItemInspectEvolveRarityConfirmation;               // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeCallout_C*          ItemInspectUpgradeCallout;                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeConfirmation_C*     ItemInspectUpgradeConfirmation;                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemPerksListDetailWidget_C*          ItemPerksListDetailWidget;                         // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* MainDetailsPanel;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksAndAlterationsBox;                            // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportHeroSquadBonusesDetailWidget_C* SupportHeroSquadBonusesDetailWidget;               // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*         SurvivorTraitsDetailWidget;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionItemExtraDetailsHostPanel_C* TabbedExtraDetailsPanel;                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PreviewLabel;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowTitleBarArea*                   WindowTitleBar;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedEvolutionIndex;                            // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4495[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             SelectedEvolutionItem;                             // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemView*                         ItemViewObject_0;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectUpgradePopupMenu_C*        UpgradePopupMenu;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectAlterationModScreen_C*     AlterationModScreen;                               // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x440(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectScreen_C");
		return Clss;
	}

	bool SchematicRequirementsMet(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_DoesItemHaveLegacyAlterations_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	bool MeetsQuestRequirements(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsAlterableItem(class UFortAlterableItem* K2Node_DynamicCast_AsFort_Alterable_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CreateUpgradePopupMenu(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectUpgradePopupMenu_C* K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu, bool K2Node_DynamicCast_bSuccess);
	void HandleAlterationModify(class UFortAlterableItem* AlterableItem);
	void GetItemActionSwitcherVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetUpgradeItemInputActionState(enum class EInputActionState* Return_Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionState Temp_byte_Variable1, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void GetAlterationModifyVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_MeetsQuestRequirements_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_IsAlterableItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default);
	void SetOverviewActionsInputState(enum class EInputActionState State);
	void GetLevelUpVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleSchematicUpgradeOptions(bool* bPassThrough);
	void UpdateInspectionMode(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetItemActionSwitcherVisibility_Return_Value, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	enum class ESlateVisibility GetWindowTitleBarVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UnbindDelegates(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2);
	class UWidget* GetWidgetForFramingViewedItem(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default);
	void RefreshItemViewHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue1, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default);
	void Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex);
	enum class ESlateVisibility GetUpgradeRarityVisibility(class UFortAlterableItem* AlterableItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_SchematicRequirementsMet_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasRarityUpgrade_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class ESlateVisibility K2Node_Select_Default);
	enum class EInputActionState GetFavoriteInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	enum class ESlateVisibility GetEvolutionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_HasEvolutions_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default);
	enum class EInputActionState GetViewInputState(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void SetAllInputActionStates(enum class EInputActionState InputActionState);
	void HandleUpgradeItemRarity();
	void RefreshExtraDetailsTabs(class FName SelectedTabId, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue1, int32 CallFunc_GetTabCount_ReturnValue1, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess1, class UFortHero* K2Node_DynamicCast_AsFort_Hero1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, bool CallFunc_RegisterFortTab_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo3, bool CallFunc_RegisterFortTab_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue3);
	void OnItemCycleChangedItem(class UFortItem* NewItemToRepresent);
	void SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode);
	void SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshCallout(bool CallFunc_BooleanAND_ReturnValue);
	void RefreshActionHandlers(enum class EInputActionState CallFunc_GetUpgradeItemInputActionState_Return_Value, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value);
	void HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RefreshOnUpgrade();
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_Passthrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ResetDetailsPanel();
	void SetupActionHandlers(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4);
	void GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex);
	void HandleEvolutionChoiceUnhovered(class UFortItem* Item);
	void HandleEvolutionChoiceHovered(class UFortItem* Item);
	void HandleUpgrade();
	void HandleEvolution();
	void HandleView(bool* Passthrough);
	void HandleFavorite(bool* Passthrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleBack(bool* Passthrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature();
	void OnActivated();
	void Destruct();
	void OnDeactivated();
	void BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature();
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature();
	void HandleIsPreviewingChanged();
	void HandleDifferentItemToInspectSetBP();
	void HandleDifferentInspectionModeSetBP();
	void HandleItemToInspectChangedBP();
	void HandleItemToInspectDestroyedBP();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HandleBack_Passthrough, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortItem* K2Node_ComponentBoundEvent_Item1, int32 K2Node_ComponentBoundEvent_RecipeIndex1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_HandleBack_PassThrough1, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue5, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class ESlateVisibility CallFunc_GetWindowTitleBarVisibility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
