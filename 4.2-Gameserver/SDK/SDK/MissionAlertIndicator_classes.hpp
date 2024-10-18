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

// 0x20 (0x230 - 0x210)
// WidgetBlueprintGeneratedClass MissionAlertIndicator.MissionAlertIndicator_C
class UMissionAlertIndicator_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageOtherIcon;                                    // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageOtherIconShadow;                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x228(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionAlertIndicator_C");
		return Clss;
	}

	void Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer& TagContainer, struct FSlateBrush* OutBrush, TMap<struct FGameplayTag, class UTexture*> GameplayTags, class UObject* ElementalZoneWaterImage, class UObject* ElementalZoneNatureImage, class UObject* ElementalZoneFireImage, class UObject* MinibossAlertImage, class UObject* StormAlertImage, TArray<class UTexture*>& CallFunc_Map_Values_Values, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<struct FGameplayTag, class UTexture*> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, class UTexture* CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_Array_Get_Item1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasTag_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Config(const struct FGameplayTagContainer& AlertVisualTags, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FSlateBrush& CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Update();
	void ToggleTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
