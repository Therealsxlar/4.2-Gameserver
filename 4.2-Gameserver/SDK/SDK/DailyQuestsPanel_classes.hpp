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

// 0xE8 (0x2F8 - 0x210)
// WidgetBlueprintGeneratedClass DailyQuestsPanel.DailyQuestsPanel_C
class UDailyQuestsPanel_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Set_Button;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ClaimReward;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderClaimButton;                                 // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ClaimButton;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DailyQuestList;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         DailyQuestSpacer;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EventQuestList;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EventQuestsLabel;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EventQuestSpacer;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayClaimButton;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonChallengesHeader;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SeasonChallengesSpacer;                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SeasonChallengesVB;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SeasonQuestsLabel;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxChallenges;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SuggestedQuestList;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TopSectionSpacer;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ClaimingQuestsInProgress;                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortQuestType                    QuestTypeToClaim;                                  // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   InspectActionButton;                               // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaLobby_C*                        ParentPanel;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDailyQuestWidget_C*>           CompletedQuests;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyQuestsPanel_C");
		return Clss;
	}

	void Reset_Button_Anim();
	void CreateMultiQuestWidget(TArray<class UFortQuestItem*>& Quests, class UVerticalBox* QuestList, bool* QuestCompleted, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuestSpinner_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetInputActionHandlers(class UPanelWidget* CallFunc_GetParent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UAthenaLobby_C* K2Node_DynamicCast_AsAthena_Lobby, bool K2Node_DynamicCast_bSuccess);
	void ProcessQuestUpdate(class UFortQuestItem* Quest, TArray<class UFortQuestItem*>& QuestArray, class UVerticalBox* QuestList, bool* QuestIsCompleted, bool QuestCompleted, bool CallFunc_CreateMultiQuestWidget_QuestCompleted, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CreateQuestWidget_QuestCompleted, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowModalQuests(bool* bCommitted, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UQuestsModal_C* CallFunc_Create_ReturnValue);
	void ClaimNextQuestReward(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void OnNoQuestRewardsToClaim(bool K2Node_SwitchEnum_CmpSuccess);
	void OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnQuestsGranted(TArray<class UFortQuestItem*>& NewQuests);
	void CreateQuestWidget(class UFortQuestItem* Quest, class UVerticalBox* QuestList, bool* QuestCompleted, bool CallFunc_HasCompletedQuest_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDailyQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnQuestsUpdated(bool ClaimQuests, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetBattlePassQuestsInProgress_OutQuests, bool CallFunc_GetBattlePassQuestsInProgress_bAllQuestsComplete, TArray<class UFortQuestItem*>& CallFunc_GetCurrentQuests_OutCurrentQuests, class UFortQuestItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EInputActionState Temp_byte_Variable4, enum class EInputActionState Temp_byte_Variable5, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable6, bool CallFunc_ProcessQuestUpdate_QuestIsCompleted, enum class ESlateVisibility Temp_byte_Variable7, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue2, enum class EInputActionState K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_ProcessQuestUpdate_QuestIsCompleted1, bool CallFunc_ProcessQuestUpdate_QuestIsCompleted2, enum class ESlateVisibility K2Node_Select2_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable3, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility K2Node_Select3_Default, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue);
	void BindEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ClaimReward_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_DailyQuestsPanel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UDailyQuestWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
