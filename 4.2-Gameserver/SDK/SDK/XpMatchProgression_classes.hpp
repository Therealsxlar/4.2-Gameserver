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

// 0x50 (0x260 - 0x210)
// WidgetBlueprintGeneratedClass XpMatchProgression.XpMatchProgression_C
class UXpMatchProgression_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class USmallLevelUpReward_C*                 LevelUpReward;                                     // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                  PlayerLevelBar;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                   TotalScore;                                        // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                   TotalXp;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeed_C*                       XpReasonFeed;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FAthenaMatchXpReward>          XpRewards;                                         // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        XpRewardIndex;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayingLeveling;                                   // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerMatchReport*              Report;                                            // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpMatchProgression_C");
		return Clss;
	}

	void UpdateRewardForLevel(int32 SeasonLevel, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetSeasonLevelUpReward_Reward, int32 CallFunc_GetSeasonLevelUpReward_RewardLevel, bool CallFunc_GetSeasonLevelUpReward_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsReadyForNextXpEvent(bool CallFunc_IsReadyForNextXpReward_Ready, bool CallFunc_IsReadyForNextXpReward_Ready1, bool CallFunc_BooleanAND_ReturnValue);
	void TickRewardAnimation(bool CallFunc_IsReadyForNextXpEvent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo);
	void Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Finished_Playing_Animation();
	void Destruct();
	void BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level);
	void ExecuteUbergraph_XpMatchProgression(int32 EntryPoint, class UAthenaPlayerMatchReport* K2Node_CustomEvent_Report, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Level, int32 CallFunc_GetTotalScoreEarned_ReturnValue, int32 CallFunc_GetTotalSeasonalXpEarned_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, TArray<struct FAthenaMatchXpReward>& CallFunc_GetXpRewards_XpRewards);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
