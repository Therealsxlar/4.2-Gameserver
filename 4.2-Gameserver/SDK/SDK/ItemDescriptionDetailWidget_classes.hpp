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

// 0x1A (0x272 - 0x258)
// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
class UItemDescriptionDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ItemDescriptionTextBlock;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuantityTextBlock;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShouldShowOnlyIfItemIsSimple;                      // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         InCollectionBook;                                  // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDescriptionDetailWidget_C");
		return Clss;
	}

	void UpdateQuantityTextBlock(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void IsItemSimple(bool* Result, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int32 EntryPoint, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_IsItemSimple_Result, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
