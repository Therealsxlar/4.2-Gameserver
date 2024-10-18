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

// 0x30 (0x240 - 0x210)
// WidgetBlueprintGeneratedClass MissionDetailsModifierList.MissionDetailsModifierList_C
class UMissionDetailsModifierList_C : public UCommonUserWidget
{
public:
	class UCommonBorder*                         BorderExtra;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMore;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxModifiers;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBoxModifiers;                                  // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> DebugMods;                                         // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionDetailsModifierList_C");
		return Clss;
	}

	void CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers, class UFortGameplayModifierItemDefinition* DebugMod8, class UFortGameplayModifierItemDefinition* DebugMod7, class UFortGameplayModifierItemDefinition* DebugMod6, class UFortGameplayModifierItemDefinition* DebugMod5, class UFortGameplayModifierItemDefinition* DebugMod4, class UFortGameplayModifierItemDefinition* DebugMod3, class UFortGameplayModifierItemDefinition* DebugMod2, class UFortGameplayModifierItemDefinition* DebugMod1, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UFortGameplayModifierItemDefinition* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool Show_Descriptions, TArray<class UFortGameplayModifierItemDefinition*>& ModifierItems, bool UseSmallIcons, int32 DisplayMoreThreshold, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionDetailsModifierRow_C* CallFunc_Create_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
