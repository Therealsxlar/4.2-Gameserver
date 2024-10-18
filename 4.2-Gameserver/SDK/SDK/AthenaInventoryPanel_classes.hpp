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

// 0x98 (0x410 - 0x378)
// WidgetBlueprintGeneratedClass AthenaInventoryPanel.AthenaInventoryPanel_C
class UAthenaInventoryPanel_C : public UAthenaInventoryPanelBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeMessage;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationsWidget_C*                  AlterationsWidget;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot1;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot2;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot3;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot4;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaInventoryEquipSlot_C*           EquipSlot5;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         InventoryArea;                                     // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* ItemDetails;                                       // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseRetire;                                        // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideCount;                                        // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideResources;                                    // 0x3D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideTitle;                                        // 0x3D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuantitySelector_C*                   MulchQuantitySelector;                             // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuantitySelector_C*                   QuantitySelectorWidget;                            // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_AthenaMoveItem;                              // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_AthenaDropHalf;                              // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          HackTimer;                                         // 0x408(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryPanel_C");
		return Clss;
	}

	void DropItemWithDialog(class UFortWorldItem* Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool CallFunc_HandleClose_PassThrough, bool CallFunc_IsDragOverDropArea_bOverDropArea, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void IsDragItemDroppable(class UObject* DragDropObject, bool* bIsDroppable, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_CanBeDropped_ReturnValue);
	void IsDragOverDropArea(struct FPointerEvent& PointerEvent, bool* bOverDropArea, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUnderLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleDropHalf(bool* Passthrough, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void RegisterDropHalf(enum class EInputActionState Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanBeDropped_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputActionState K2Node_Select_Default);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, enum class EAthenaDragDropAction Temp_byte_Variable, bool CallFunc_IsDragItemDroppable_bIsDroppable, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDragOverDropArea_bOverDropArea, enum class EAthenaDragDropAction Temp_byte_Variable1, bool Temp_bool_Variable, enum class EAthenaDragDropAction K2Node_Select_Default);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsDragItemDroppable_bIsDroppable, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess1, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsDragOverDropArea_bOverDropArea, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, int32 K2Node_Select_Default);
	void RefreshItemDetails(class UFortItem* ItemToDetail, bool CallFunc_IsValid_ReturnValue);
	void RegisterMove(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void FocusFirstEquipSlot(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	class UWidget* NavAmmo(enum class EUINavigation Navigation, bool Temp_bool_Variable, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default);
	class UWidget* NavResources(enum class EUINavigation Navigation, bool Temp_bool_Variable, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default);
	class UWidget* NavEquipment(enum class EUINavigation Navigation, bool Temp_bool_Variable, class UFortItemTileView* Temp_object_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UFortItemTileView* Temp_object_Variable1, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, bool Temp_bool_Variable3, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsSwapping_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_GetNumItems_ReturnValue2, class UFortItemTileView* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortItemTileView* K2Node_Select1_Default, class UFortItemTileView* K2Node_Select2_Default, int32 CallFunc_GetNumItems_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, class UWidget* K2Node_Select3_Default, class UWidget* K2Node_Select4_Default);
	void HandleDropItemConfirmationCallback(int32 ChosenQuantity, class UFortItem* Item, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess);
	void DestroyQuantitySelectorWidget(bool CallFunc_IsValid_ReturnValue);
	void CreateQuantitySelectorWidget(class UFortWorldItem* Item, class FText ConfirmationText, int32 CallFunc_GetNumInStack_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuantitySelector_C* CallFunc_Create_ReturnValue);
	void DropItem(class UFortWorldItem* Item, int32 Quantity, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemTileView* CallFunc_GetTileViewForItem_ReturnValue, class UFortItemTileView* CallFunc_GetTileViewForItem_ReturnValue1, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandleDrop(bool* Passthrough, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess);
	void RegisterDrop(enum class EInputActionState Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanBeDropped_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EInputActionState K2Node_Select_Default);
	void RegisterLeaveInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void TrySetupInputHandling();
	void RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleClose(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsSwapping_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2);
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void OnActivated();
	void Construct();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDeactivated();
	void RequestEquip(class UFortItem* Item);
	void PostActivate();
	void ExecuteUbergraph_AthenaInventoryPanel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, enum class EFortQuickBars K2Node_Event_QuickBarType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, TArray<class UAthenaInventoryEquipSlot_C*>& K2Node_MakeArray_Array, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UAthenaInventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* K2Node_Event_Item, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_HandleClose_PassThrough, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
