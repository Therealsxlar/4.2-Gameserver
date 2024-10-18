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

// 0x140 (0x508 - 0x3C8)
// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
class UAthenaStatsTab_C : public UAthenaStatsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Entrance;                                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Tabs_Paginate;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AccountLevelLabel;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        BacchusClose2Button;                               // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        BacchusClose3Button;                               // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        BacchusCloseButton;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider1;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider2;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FriendMatchXpBoostPointsLabel;                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxNoStats;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 HiddenSwitcher;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     KillsRow;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LastUpdatedTime;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LastUpdatedTimeBox;                                // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     MatchesPlayedRow;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchXpBoostPointsLabel;                           // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoStatsText;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem;                                  // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonLabel;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 SecondTierTile;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 ThirdTierTile;                                     // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStatsRow_C*                     TimePlayedRow;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        UpdatingBox;                                       // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxbannerstats;                                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxStats;                                         // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMainStatTile_C*                 WinsTile;                                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             TagToDisplayName;                                  // 0x4B8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaStatsTab_C");
		return Clss;
	}

	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void CanShowStats(bool* bCanShowStats, bool CallFunc_IsMobileGame_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue);
	void UpdateLastUpdatedTime(bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_GetLastUpdateTime_ReturnValue);
	void UpdateStats(int32 CallFunc_GetStatValue_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue1, class FText CallFunc_FormatStatValueAsElapsedTime_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue1, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue3, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, int32 CallFunc_GetStatValue_ReturnValue4, class FText CallFunc_Conv_IntToText_ReturnValue3, const class FString& CallFunc_GetWinsTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue5, class FText CallFunc_Conv_IntToText_ReturnValue4);
	void OnActivated();
	void OnQueryFinished(bool bWasSuccessful);
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnQueryStarted();
	void OnDeactivated();
	void Construct();
	void BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_Event_bWasSuccessful, class FName K2Node_ComponentBoundEvent_TabId, const class FString& CallFunc_GetWinsTag_ReturnValue, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class FText CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, bool CallFunc_IsActivated_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, int32 CallFunc_GetSeasonMatchXpBoost_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_CanShowStats_bCanShowStats, class FText CallFunc_Format_ReturnValue, bool CallFunc_CanShowStats_bCanShowStats1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_HandleBack_Passthrough, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText CallFunc_Conv_IntToText_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
