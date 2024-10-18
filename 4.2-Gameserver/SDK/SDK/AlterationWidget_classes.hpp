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

// 0x100 (0x320 - 0x220)
// WidgetBlueprintGeneratedClass AlterationWidget.AlterationWidget_C
class UAlterationWidget_C : public UFortAlterationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TextFade;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AlterationDescription;                             // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AlterationName;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AlterationShortDescription;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHBox;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EvolutionBorder;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ExtraContentSlot;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAlteration;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBackground;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLocked;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InfoSwitcher;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LargeInfo;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelRequired;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LockedBox;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 PerkModeSwitcher;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PipSizeBox;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxIcon;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SmallInfo;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Spacer;                                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UpgradePips;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeShortDescription;                          // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeDescription;                               // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortBrushSize                    IconSize;                                          // 0x2D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bUseLargeFormatName;                               // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_436F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Locked_Description_Style;                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Locked_Text_Style;                                 // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldShowRarity;                                  // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4370[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EvolutionHighlightStyle;                           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                StandardStyle;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          UnlockedColor;                                     // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LockedColor;                                       // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AlterationWidget_C");
		return Clss;
	}

	struct FSlateBrush GetValidBrush(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void HasValidBrush(bool* ValidBrush, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void IsGamplaySlot(class UFortAlterationItemDefinition* Alteration, bool* Result, enum class EFortAlteration CallFunc_GetAlterationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void TriggerTextAnimation();
	void SetWidgetSettings(bool bInIncludeName, bool bInIncludeShortDescription, bool bInIncludeDescription, enum class EFortBrushSize InIconSize, bool bInUseLargeFormatName, bool InShouldShowRarity);
	void InitLockedLayout(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_ShouldFadeAlteration_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_ShouldFadeAlteration_ReturnValue1, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, const struct FLinearColor& K2Node_Select1_Default, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue2, enum class ESlateVisibility K2Node_Select2_Default);
	void SetEvolutionDetails(bool Temp_bool_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, class UClass* K2Node_Select_Default);
	void UpdatePips(class UFortAlterationInfo* LocalAlterationInfo, class UMaterialInstanceDynamic* PipMID, bool Temp_bool_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, float Temp_float_Variable, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool Temp_bool_Variable1, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue1, class UFortItem* CallFunc_GetCorrespondingItem_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortAlteration CallFunc_GetAlterationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue1, bool CallFunc_IsAlterationHighlighted_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetCurrentPipCount_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select1_Default);
	void InitDescriptiveText(class UFortAlterationItemDefinition* AlterationDef, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, bool CallFunc_IsValid_ReturnValue, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UClass* Temp_class_Variable1, class UWidget* K2Node_Select2_Default, bool Temp_bool_Variable4, class UClass* K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default);
	void InitIcon(class UFortAlterationItemDefinition* AlterationDef, bool CallFunc_HasValidBrush_ValidBrush, const struct FSlateBrush& CallFunc_GetValidBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam);
	bool ShouldFadeAlteration(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	struct FLinearColor GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default);
	void OnSetup();
	void ExecuteUbergraph_AlterationWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
