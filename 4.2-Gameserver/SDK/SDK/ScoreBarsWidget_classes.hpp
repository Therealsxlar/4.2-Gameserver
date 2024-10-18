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

// 0xA74 (0xCAC - 0x238)
// WidgetBlueprintGeneratedClass ScoreBarsWidget.ScoreBarsWidget_C
class UScoreBarsWidget_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCollectionMultiProgressBar_C*         BuildingMultiProgressBar;                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                 BuildingScoreMessageNumber;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCollectionMultiProgressBar_C*         CombatMultiProgressBar;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                 CombatScoreMessageNumber;                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ScoreBarElement;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ScoreMessageBox;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ScoreNumberPaddingBox;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCollectionMultiProgressBar_C*         UtilityMultiProgressBar;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                 UtilityScoreMessageNumber;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortMission*                          TrackedMission;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCollectionMissionBadgeDisplayInfo> CombatBadgeInfos;                                  // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCollectionMissionBadgeDisplayInfo> BuildingBadgeInfos;                                // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCollectionMissionBadgeDisplayInfo> UtilityBadgeInfos;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentCombatScore;                                // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentBuildingScore;                              // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentUtilityScore;                               // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowTopBarIcons;                                  // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShowSideBarIcons;                                 // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bOnlyShowIconsForTopCategory;                      // 0x2CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bOnlyShowBarsWithCountInRange;                     // 0x2CF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortMultiSizeBrush                   CombatCategoryIcon;                                // 0x2D0(0x330)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                   BuildingCategoryIcon;                              // 0x600(0x330)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                   UtilityCategoryIcon;                               // 0x930(0x330)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortBrushSize                    CategoryIconSize;                                  // 0xC60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    BadgeIconSize;                                     // 0xC61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CategoriesMargin;                                  // 0xC64(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FMargin                               BarsMargin;                                        // 0xC74(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FMargin                               BarsIconMargin;                                    // 0xC84(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIMessageManager*                 MessageManager;                                    // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxScoreMessagesDisplayed;                         // 0xCA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayScoreStream;                               // 0xCA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BarHeightOverride;                                 // 0xCA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScoreBarsWidget_C");
		return Clss;
	}

	void UnregisterForScoreStreamEvents(class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void HandleScoreNumberChanged(enum class EStatCategory ScoreCategory, enum class EStatCategory Temp_byte_Variable, class UCollectionMultiProgressBar_C* K2Node_Select_Default);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetScoreValueWidget_Widget);
	void HideScoreMessageSlots();
	void RegisterForScoreStreamEvents(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetMessageManager_bCreatedNew, class UFortUIMessageManager* CallFunc_GetMessageManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetScoreValueWidget_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_RemoveChild_ReturnValue);
	void TryGetNextScoreMessage(int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIMessageItemWidget* CallFunc_GetNextMessageInQueue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleScoreStatChanged(int32 Delta, class FText& Name, enum class EFortReplicatedStat StatType, enum class EStatCategory StatCategory, class FName CallFunc_GetEnumeratorName_ReturnValue, enum class EStatCategory Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreMessageNumber_C* K2Node_Select_Default, class UFortUIMessageItemWidget* CallFunc_AddMessageItem_ReturnValue, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess);
	void InitializeIcons(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue1, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2);
	void UpdateScoreBars();
	void HandleUpdateUI(class AFortMissionState* Mission, bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos);
	void UpdateScoreTotals(int32 OldUtilityScore, int32 OldBuildingScore, int32 OldCombatScore, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_GetTotalScore_Score, int32 CallFunc_GetTotalScore_Score1, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetTotalScore_Score2);
	void HasValidBadgeInfos(bool* bHasValidBadgeInfos, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void InitializeScoreBars(bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission1, bool K2Node_DynamicCast_bSuccess1, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos1, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission2, bool K2Node_DynamicCast_bSuccess2, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos2);
	void HandleMissionsUpdated(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortMission*>& CallFunc_GetAllLoadedMissions_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortMission* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ScoreBarsWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
