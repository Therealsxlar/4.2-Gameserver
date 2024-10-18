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

// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass QuestObjectiveEntry.QuestObjectiveEntry_C
class UQuestObjectiveEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BulletOverlay;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestHudIcon;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestProgressWidget_C*                QuestProgressWidget;                               // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TaskName;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestObjectiveEntry_C");
		return Clss;
	}

	void PlayAppearAnimation();
	void Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_GetText_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue1, class FText CallFunc_GetCombinedDescription_OutDescription1, bool CallFunc_GetCombinedDescription_ReturnValue1);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetData(class UObject* InData);
	void ExecuteUbergraph_QuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_Event_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
