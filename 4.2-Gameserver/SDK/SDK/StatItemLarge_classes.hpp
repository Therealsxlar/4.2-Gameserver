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

// 0xD9 (0x3E1 - 0x308)
// WidgetBlueprintGeneratedClass StatItemLarge.StatItemLarge_C
class UStatItemLarge_C : public UFortAttributeListItem_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(Transient, DuplicateTransient)
	class UImage*                                BasicPairBuffArrow;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BuffArrowSpacer;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Name;                                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               Value;                                             // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundCue*                             SoundCueValueUp;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             SoundCueValueDown;                                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           IconBrush;                                         // 0x348(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          IconColor;                                         // 0x3D0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowBuffStateOnlyIfPreviewing;                     // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatItemLarge_C");
		return Clss;
	}

	void UpdateValue(float NewValue, float CurrentValue, enum class EFortStatValueDisplayType DisplayType, enum class EFortBuffState BuffState, const struct FLinearColor& BuffColor, const struct FLinearColor& BaseColor, enum class EFortStatValueDisplayType LocalDisplayType, enum class EFortBuffState LocalBuffState, float LocalCurrentValue, float LocalNewValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortBuffState Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortBuffState Temp_byte_Variable5, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FVector2D& Temp_struct_Variable1, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, enum class EFortBuffState Temp_byte_Variable6, bool CallFunc_HasPreviewAttribute_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector2D& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UpdateIcon();
	void UpdateDisplayData(enum class EFortStatValueDisplayType DisplayState, enum class EFortBuffState BuffState, float NewValue, class FText DisplayName, float CurrentValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute);
	void GetLocalPlayerId(struct FUniqueNetIdRepl* LocalPlayerNetId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue);
	void Construct();
	void DisplayAttributeChanged();
	void PreConstruct(bool IsDesignTime);
	void PreviewStarted();
	void PreviewEnded();
	void ValueChanged(float Delta);
	void ExecuteUbergraph_StatItemLarge(int32 EntryPoint, float K2Node_Event_Delta, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
