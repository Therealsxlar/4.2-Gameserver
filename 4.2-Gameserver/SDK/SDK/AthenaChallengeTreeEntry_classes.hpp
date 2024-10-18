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

// 0xE8 (0x980 - 0x898)
// WidgetBlueprintGeneratedClass AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C
class UAthenaChallengeTreeEntry_C : public UFortChallengeBundleTreeItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              BattleStars;                                       // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattleStarsCheck;                                  // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BattleStarSwitcher;                                // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattleStarTracker;                                 // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BundleNumber;                                      // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BundleSB;                                          // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BundleType;                                        // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeBundleCategoryHeader_C*      ChallengeBundleCategoryHeader;                     // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeProgressWidget_C*            ChallengeProgressWidget;                           // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ChaseRewardCard;                                   // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ExpansionIndicator;                                // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         FillCB;                                            // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         GradCB;                                            // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HeaderHB;                                          // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ItemCardOverlay;                                   // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LockCheckSwitcher;                                 // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockedText;                                        // 0x930(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MainEntryTypeSwitcher;                             // 0x938(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MiddleSectionSwitcher;                             // 0x940(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidSectionCompleteVB;                              // 0x948(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidSectionLockedVB;                                // 0x950(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x958(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         OutlineCB;                                         // 0x960(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RewardBoxCB;                                       // 0x968(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardSpacingLine;                                 // 0x970(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTokenType*                        MysteryItem;                                       // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChallengeTreeEntry_C");
		return Clss;
	}

	class UFortItem* GetRewardToShow(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class UFortItem* CallFunc_GetRewardItem_ReturnValue);
	void UpdateReward(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue1, class UFortItem* CallFunc_GetRewardItem_ReturnValue, bool CallFunc_IsRewardThresholdAchieved_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortItem* CallFunc_GetRewardToShow_ReturnValue);
	void UpdateBundleData(class UFortChallengeBundleInfo* BundleInfo, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_HasQuestReward_OutRecievedCount, int32 CallFunc_HasQuestReward_OutTotalCount, bool CallFunc_HasQuestReward_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetShortNameNumber_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, float CallFunc_GetAchievedCount_OutAchievedPercent, float CallFunc_GetAchievedCount_OutThresholdPercent, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateBundleStyle(class UFortChallengeBundleInfo* BundleInfo, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_IsCompleted_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_ShouldReplaceBattleStarsWithAlternateReward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateHeaderCategoryStyle(class UFortChallengeBundleCategoryInfo* CategoryInfo, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item);
	void SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo* Schedule);
	void SetupAsChallengeBundle(class UFortChallengeBundleInfo* Bundle);
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_AthenaChallengeTreeEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortChallengeBundleInfo* K2Node_Event_Bundle, class UFortChallengeBundleCategoryInfo* K2Node_Event_Schedule, class UFortItem* CallFunc_GetRewardToShow_ReturnValue, bool CallFunc_IsListItemExpanded_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
