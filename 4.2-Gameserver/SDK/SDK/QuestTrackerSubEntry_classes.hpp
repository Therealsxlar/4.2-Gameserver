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

// 0x160 (0x3B0 - 0x250)
// WidgetBlueprintGeneratedClass QuestTrackerSubEntry.QuestTrackerSubEntry_C
class UQuestTrackerSubEntry_C : public UFortQuestTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      CheckmarkAnimation;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompletionRemove;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompletionFlash;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BulletOverlay;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FlashImage;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ObjectiveDescriptionText;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pin;                                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           NonHUDBullet;                                      // 0x2A0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           NonHUDPin;                                         // 0x328(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTrackerSubEntry_C");
		return Clss;
	}

	float GetHeightEstimate(class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void HandleRemoveFinished();
	void HideIfEmpty(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateObjectiveText(class FText ObjectiveProgressText, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue1, class FText CallFunc_GetTooltipTextFromToken_OutText, bool CallFunc_GetTooltipTextFromToken_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default);
	void Construct();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void OnCompletionFlashFInished();
	void PostCompletionDelay();
	void ExecuteUbergraph_QuestTrackerSubEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
