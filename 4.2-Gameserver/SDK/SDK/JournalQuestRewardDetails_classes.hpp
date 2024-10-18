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

// 0x20 (0x238 - 0x218)
// WidgetBlueprintGeneratedClass JournalQuestRewardDetails.JournalQuestRewardDetails_C
class UJournalQuestRewardDetails_C : public UFortJournalQuestDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderBonusesBottomEdge;                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestVerticalRewardInfo_C*            QuestVerticalRewardInfo;                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JournalQuestRewardDetails_C");
		return Clss;
	}

	void UpdatePanelInfo(class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue);
	void UpdatePlayButtonState(bool CallFunc_CanGotoQuest_ReturnValue, bool CallFunc_CanPlayQuest_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateButtonStates();
	void HandleOnEndSpokenDialog();
	void HandleOnBeginSpokenDialog(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void Setup(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void HandleCurrentQuestChangedBP();
	void ExecuteUbergraph_JournalQuestRewardDetails(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
