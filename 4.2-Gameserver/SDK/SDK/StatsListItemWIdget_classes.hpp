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

// 0x1E8 (0x4F0 - 0x308)
// WidgetBlueprintGeneratedClass StatsListItemWIdget.StatsListItemWIdget_C
class UStatsListItemWIdget_C : public UFortAttributeListItem_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(Transient, DuplicateTransient)
	class UImage*                                BasicPairBuffArrow;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BasicPairIcon;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicPairLabel;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicPairValue;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BasicSingleBuffArrow;                              // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BasicSingleValue;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border_StatDeltaPositive;                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClampedValuePaired;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClampedValueSingle;                                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PairedBackgroundBorder;                            // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PairedHbox;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Single;                                            // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SingleBackgroundBorder;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         StatBorder;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SwitcherPairedBasic;                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBStatHeader;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           StatIcon;                                          // 0x398(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           NormalBorderStyle;                                 // 0x420(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Indent;                                            // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3245[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideStateName;                                 // 0x4B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                StatBGBorderStyle;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                StatValueTextStyle;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                LabelTextStyleNormal;                              // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                LabelTextStyleHighlighted;                         // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                StatBGBorderStyleHighlight;                        // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatsListItemWIdget_C");
		return Clss;
	}

	void SetTextAndBorderHighlight(bool bHightlight, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default);
	class UWidget* GetListItemTooltipWidget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void SetStatIcon(const struct FSlateBrush& NewParam);
	void UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, enum class EFortClampState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortComparisonType Temp_byte_Variable4, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, enum class EFortComparisonType Temp_byte_Variable5, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, enum class EFortClampState Temp_byte_Variable10, float K2Node_Select3_Default);
	void UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue);
	void UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute);
	void UpdateType(const struct FFortDisplayAttribute& CurrentAttribute, enum class EFortStatValueDisplayType Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& LocalCurrentAttribute, const struct FLinearColor& BuffColor, const struct FLinearColor& BaseColor, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, enum class EFortBuffState Temp_byte_Variable, enum class EFortBuffState Temp_byte_Variable1, class UClass* K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, enum class EFortComparisonType Temp_byte_Variable2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select2_Default);
	void Update(const struct FFortDisplayAttribute& CurrentAttribute, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute);
	void ValueChanged(float Delta);
	void Construct();
	void PreviewEnded();
	void PreviewStarted();
	void DisplayAttributeChanged();
	void ExecuteUbergraph_StatsListItemWIdget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, float K2Node_Event_Delta);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
