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

// 0x48 (0x290 - 0x248)
// WidgetBlueprintGeneratedClass PlayerEmblemAndXp.PlayerEmblemAndXp_C
class UPlayerEmblemAndXp_C : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UAthenaBattlePassTrackerWidget_C*      AthenaBattlePassTrackerWidget;                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                  AthenaPlayerLevel;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MiniReward1HB;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*               MiniReward1Info;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MiniReward2HB;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*               MiniReward2Info;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MiniReward2LevelTB;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNameLabel;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerEmblemAndXp_C");
		return Clss;
	}

	void SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UDailyQuestRewardInfo_C* RewardInfoWidget, bool HasReward, const struct FFortItemQuantityPair& RewardItem, int32 LevelRewarded, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, const struct FFortItemQuantityPair& CallFunc_GetNextSeasonReward_Reward, int32 CallFunc_GetNextSeasonReward_RewardLevel, bool CallFunc_GetNextSeasonReward_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_GetNextSeasonChaseReward_Reward, int32 CallFunc_GetNextSeasonChaseReward_RewardLevel, bool CallFunc_GetNextSeasonChaseReward_ReturnValue);
	void Construct();
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result);
	void ExecuteUbergraph_PlayerEmblemAndXp(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
