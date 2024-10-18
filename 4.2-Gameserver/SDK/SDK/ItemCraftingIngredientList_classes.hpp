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

// 0x19 (0x2A9 - 0x290)
// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
class UItemCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          IngredientsList;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             ItemRepresented;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCraftingIngredientList_C");
		return Clss;
	}

	void HandleCraftItemFailed(enum class EFortCraftFailCause FailCause);
	void GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients, const TArray<struct FFortItemQuantityPair>& Ingredients, int32 Temp_int_Array_Index_Variable, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, const struct FRecipe& CallFunc_GetSchematicRecipe_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetItemToCompare(class UFortItem* ItemToCompare, TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients);
	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void RefreshInventoryTracking(int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UItemCraftingIngredientListEntryHaveNeedVerbose_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose, bool K2Node_DynamicCast_bSuccess, class UItemCraftingIngredientListEntryHaveNeed_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void Refresh(TArray<struct FFortItemQuantityPair>& CallFunc_GetIngredients_ReturnIngredients);
	void SetItemToRepresent(class UFortItem* Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ItemNeedsInventoryTracking_NeedsTracking1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_ItemCraftingIngredientList(int32 EntryPoint, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
