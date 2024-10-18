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

// 0x83 (0x5E3 - 0x560)
// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C
class UFortHeroSupportPerkWidget_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderShell;                                       // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 DescriptionTextSwitcher;                           // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EvolutionBorder;                                   // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSquadBonusType;                               // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InvalidForSlotImage;                               // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      InvalidSlotText;                                   // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedPerkImage;                                   // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PerkBoxBorder;                                     // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SquadBonusTypeText;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StarsRequired;                                     // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         StatFocus;                                         // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UnlockAtText;                                      // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        UnlockText;                                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Name_Text_Style;                                   // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                Description_Text_Style;                            // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SupportTypeMatchesDisplay;                         // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisplayHeaderIfActive;                             // 0x5E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DisplayedOutsideOfHeroSquad;                       // 0x5E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSupportPerkWidget_C");
		return Clss;
	}

	void IsInInvalidSlot(bool* InInvalidSlot, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsPerkInCorrectSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsHeroInSupportSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateComparisonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsPerkHighlighted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateEmptyVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsPerkEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateActiveDisplay(bool Temp_bool_Variable, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable6, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, bool CallFunc_IsPerkActive_ReturnValue, bool CallFunc_IsInInvalidSlot_InInvalidSlot, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsInInvalidSlot_InInvalidSlot1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsPerkActive_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, class UClass* K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select4_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_Select5_Default, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select6_Default);
	void UpdateLockedVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default);
	void UpdateVisibility();
	void Update(bool DisplayedOutsideOfHeroSquad, enum class EFortSupportBonusType TargetedSupportType, enum class EFortSupportBonusType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, enum class EFortSupportBonusType Temp_byte_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select1_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void Construct();
	void OnStateChanged();
	void ExecuteUbergraph_FortHeroSupportPerkWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
