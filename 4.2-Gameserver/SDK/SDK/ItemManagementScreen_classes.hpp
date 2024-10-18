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

// 0x48 (0x4F8 - 0x4B0)
// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
class UItemManagementScreen_C : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(Transient, DuplicateTransient)
	class UCraftingBar_C*                        CraftingBar;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Inventory;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Screen;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ItemDragEnabled;                                   // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2602[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemManagementItemTileButton*     SelectedTileButton;                                // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                   QuantitySelectorWidget;                            // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WarningShownReadOnlyWIFE;                          // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2603[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            StorageTransferSound;                              // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementScreen_C");
		return Clss;
	}

	void GetShouldPrioritizeFavorites(bool* SortFavoritesSeparately, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetShouldPrioritizeFavorites_ReturnValue);
	void TogglePrioritizeFavorites(class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess);
	void ToggleTileSize(class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess);
	void GuardActionForReadOnlyWIFE(bool* Proceed, class UFortItem* CallFunc_GetItemToDetail_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreProfilesAvailableToWIFE_ReturnValue, bool CallFunc_IsScreenWIFE_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SizeScreen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsEquipAvailable(class UFortItem* Item, bool* EquipAvailable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_DoesMatchSearchString_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void HandleMulchItemsCallback(int32 Quantity, class UFortItem* Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetMaxTransferCount(class UFortItem* Item, int32* Count, class UFortWorldItem* WorldItem, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetNumInStack_ReturnValue1, int32 CallFunc_GetBackpackOverflowFromAddingItem_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetDeployableBaseOverflowFromAddingItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetStorageOverflowFromAddingItem_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_ContainsItem_ReturnValue);
	void CompleteItemDrop(class UFortItem* Item, int32 Quantity, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandleDropItemsCallback(int32 Quantity, class UFortItem* Item);
	void HandleDrop(class UFortItem* Item, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CompleteItemTransfer(class UFortItem* Item, int32 Quantity, bool IsDeposit, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GuardActionForReadOnlyWIFE_Proceed, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetItemGuid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerDeployableBase* K2Node_DynamicCast_AsFort_Player_Controller_Deployable_Base, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2);
	void HandleTransferItemsCallback(int32 Quantity, class UFortItem* Item);
	void CreateQuantitySelector(class UFortItem* Item, class FText Title, class FText ConfirmText, int32 InitialQuantity, int32 MaxQuantity, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue);
	void HandleTransfer(class UFortItem* ItemToTransfer, class UFortItem* Item, int32 CallFunc_GetMaxTransferCount_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ShowCraftError(enum class EFortCraftFailCause FailCause);
	void CraftAndSlot(class UFortSchematicItem* SchematicItem, class UFortSchematicItem* Item, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UCommonInputContext* CallFunc_GetContext_ReturnValue3, enum class EFortCraftFailCause CallFunc_CraftAndSlotSchematic_FailCause, bool CallFunc_CraftAndSlotSchematic_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1);
	void HandleEquip(class UFortItem* Item, bool CallFunc_IsEquipAvailable_EquipAvailable, bool CallFunc_IsSlotted_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GuardActionForReadOnlyWIFE_Proceed, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_RemoveItemFromQuickBar_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue2, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SizeInventoryPanel(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_RemoveItemFromQuickBar_ReturnValue);
	void GetDescriptionText(class FText* ItemDescription, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue);
	void HandleInspect(class UFortItem* ItemToInspect, bool AllowFavoriting, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable, class UFortItemTileView* K2Node_Select_Default);
	void HandleClose(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedEquipSlot_Slot, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(enum class EFortDialogResult Result, class FName ResultName);
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void DialogResult_CDD8108541BE3E4EA0F093B03D59650F(enum class EFortDialogResult Result, class FName ResultName);
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void DefaultActionRefresh();
	void OnActivated();
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void ShowWarningReadOnlyWIFE(bool Force);
	void ExecuteUbergraph_ItemManagementScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FText CallFunc_GetDescriptionText_ItemDescription, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, class UFortItem* K2Node_Event_Item4, class UFortSchematicItem* K2Node_Event_SchematicItem, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemManagementItemTileButton_C* K2Node_DynamicCast_AsItem_Management_Item_Tile_Button, bool K2Node_DynamicCast_bSuccess, class UBoostsRoot_C* CallFunc_Create_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, class UFortInventoryContext* CallFunc_GetContext_ReturnValue7, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, enum class EFortCraftFailCause CallFunc_CraftSchematic_FailCause, bool CallFunc_CraftSchematic_ReturnValue, class UItemIconWidget_C* CallFunc_Create_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortConsumableAccountItem* K2Node_Event_ConsumableItem, class UFortItem* K2Node_Event_Item3, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_CanActivateOnOthers_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_CanActivateOnSelf_ReturnValue, class UFortItem* K2Node_Event_Item2, class UFortItem* K2Node_Event_Item1, class UFortItem* K2Node_Event_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 CallFunc_GetNumInStack_ReturnValue, class FName Temp_name_Variable1, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess1, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, int32 CallFunc_GetSelectedEquipSlot_Slot, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_Force, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
