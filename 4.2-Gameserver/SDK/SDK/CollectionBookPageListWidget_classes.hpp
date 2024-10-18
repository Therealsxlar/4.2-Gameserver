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

// 0x90 (0x948 - 0x8B8)
// WidgetBlueprintGeneratedClass CollectionBookPageListWidget.CollectionBookPageListWidget_C
class UCollectionBookPageListWidget_C : public UFortCollectionBookPageListWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         AvailableSlotsBorder;                              // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExpansionStateSwitcher;                            // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               PageSpacer;                                        // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CategoryTextStyle;                                 // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PageTextStyle;                                     // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CategoryButtonStyle;                               // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PageButtonStyle;                                   // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AvailableSlotBorderColor1ParamName;                // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AvailableSlotBorderColor2ParamName;                // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AvailableSlotBorderSelectedColor;                  // 0x928(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AvailableSlotBorderDeselectedColor;                // 0x938(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookPageListWidget_C");
		return Clss;
	}

	void UpdatePageCompletionWidget(int32 FilledSlots, int32 TotalSlots, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateAvailableSlotsWidget(int32 NumAvailableSlots, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateAvailableSlotsBorderColors(const struct FLinearColor& ColorToUse, bool CallFunc_GetSelected_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void SetupAsPage(class UFortCollectionBookPage* Page);
	void PreConstruct(bool IsDesignTime);
	void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected);
	void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UFortCollectionBookCategory* K2Node_Event_Category, class UFortCollectionBookPage* K2Node_Event_Page, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_AvailableSlots1, int32 K2Node_Event_FilledSlots1, int32 K2Node_Event_TotalSlots1, enum class EFortCollectionBookState K2Node_Event_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_ThisButton, bool K2Node_CustomEvent_bSelected, bool Temp_bool_Variable1, int32 K2Node_Event_AvailableSlots, int32 K2Node_Event_FilledSlots, int32 K2Node_Event_TotalSlots, bool K2Node_Event_bIsExpanded, int32 K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
