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

// 0xA8 (0x2B0 - 0x208)
// WidgetBlueprintGeneratedClass ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C
class UItemInspectEvolutionIngredientsEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UImage*                                CheckMarkIcon;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemName;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuantityText;                                      // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                 IngredientItemQuantity;                            // 0x230(0x30)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           NotHaveColor;                                      // 0x260(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HaveColor;                                         // 0x288(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolutionIngredientsEntry_C");
		return Clss;
	}

	int32 GetHaveQuantity(struct FFortItemQuantityPair& InPair, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue);
	void SetIngredientCount(int32 NeedQuantity, int32 HaveQuantity, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, const struct FSlateColor& K2Node_Select_Default, int32 CallFunc_GetHaveQuantity_ReturnValue);
	void GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void Construct();
	void ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, class FText CallFunc_GetDisplayName_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
