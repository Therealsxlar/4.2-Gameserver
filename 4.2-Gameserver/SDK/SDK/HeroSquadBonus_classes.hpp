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

// 0x128 (0x400 - 0x2D8)
// WidgetBlueprintGeneratedClass HeroSquadBonus.HeroSquadBonus_C
class UHeroSquadBonus_C : public UFortPerkWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      BonusPerkDescription;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BonusPerkIcon;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BonusPerkTitle;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderBackground;                            // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLock;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSquadBonusType;                               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PerkIconSlotSizeBox;                               // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         StatFocus;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           EmptyBrush;                                        // 0x320(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EmptyText;                                         // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BonusPerkTItleText;                                // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             Skill_Icon_Size;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortSupportBonusType             SquadBonusType;                                    // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_47CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CachedTooltipDescription;                          // 0x3E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadBonus_C");
		return Clss;
	}

	class UWidget* Get_ToolTipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetTooltipTitle_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void SetBackgroundGlow(bool GlowBackground, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateSquadBonusIconState(const struct FSlateColor& Tint, enum class EFortSupportBonusType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortSupportBonusType Temp_byte_Variable4, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, class UObject* Temp_object_Variable2, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsPerkEmpty_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select2_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void UpdateBonusPerk(class FText CallFunc_GetTooltipTitle_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsPerkEmpty_ReturnValue, const struct FSlateBrush& CallFunc_GetIcon_Brush, bool CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut, class FText CallFunc_GetTooltipTitle_ReturnValue1);
	void PreConstruct(bool IsDesignTime);
	void OnPerkUpdated();
	void Construct();
	void OnCombinedTooltipDescriptionReady(class FText& Description);
	void ExecuteUbergraph_HeroSquadBonus(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText K2Node_Event_Description);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
