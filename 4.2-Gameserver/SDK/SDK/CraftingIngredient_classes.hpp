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

// 0x60 (0x298 - 0x238)
// WidgetBlueprintGeneratedClass CraftingIngredient.CraftingIngredient_C
class UCraftingIngredient_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      InventoryText;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Divider;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalText;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_831;                                   // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                 Ingredient;                                        // 0x268(0x30)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingIngredient_C");
		return Clss;
	}

	void ShowDivider(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	class UWidget* Get_Tooltip(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Refresh(int32 TotalCount, int32 InventoryCount, enum class EFortUITheme Temp_byte_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortUITheme Temp_byte_Variable1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetNumInInventory_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EFortUITheme K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void ExecuteUbergraph_CraftingIngredient(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
