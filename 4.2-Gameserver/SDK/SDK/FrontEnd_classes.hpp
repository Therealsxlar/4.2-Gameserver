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

// 0x98 (0x3D0 - 0x338)
// WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
class UFrontEnd_C : public UFortUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(Transient, DuplicateTransient)
	class UBottomBarWidget_C*                    BottomBar;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BottomBarSizedSpacer;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPTT;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonToggleChat;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWidget_C*                         ChatWidget;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainAreaDarken;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxPTT;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TopBarSizedSpacer;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CheckFrontEndRewardsAction;                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Daily_Rewards_Action;                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Expedition_Rewards_Action;                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CheckRateExperienceAction;                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedCurrentEventMovie;                           // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartedPlayingVideo;                               // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5016[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaTabsScreen_C*                   AthenaTabScreen;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFileMediaSource*                      TrailerMediaSource;                                // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMediaSubtitlesPlayer*             TrailerSubtitle;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void PlayTrailerMovie(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActivatableMovieWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, const struct FSlateBrush& K2Node_Select_Default);
	void SetOverlayTitleBarVisibility(bool Visible);
	void PlayEventMovieIfNecessary(bool* PlayingEventMovie, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie);
	void NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2);
	void SetChatWidgetVisibility(bool Visible, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void InitForSubGame(bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UMainTabsScreen_C* CallFunc_Create_ReturnValue1, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum1_CmpSuccess);
	void GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool CallFunc_HasPendingNavigationOp_ReturnValue);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWidget_ReturnValue);
	void HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3);
	void SetFooterVisibility(bool Visible);
	void PopContentWidget_Internal();
	void SetHeaderVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter);
	void RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2);
	void HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select1_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FEventReply On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void HandleLobbyDisconnected();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnExitState(enum class EFortUIState NextUIState);
	void Destruct();
	void DailyRewardsTokenGranted();
	void HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void RequestOpenSocialMenu();
	void Construct();
	void Loading_Screen_Changed(bool IsVisible);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Can_PTT();
	void HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void OnMovieFinished();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, enum class EPTTState Temp_byte_Variable, enum class EPTTState CallFunc_GetPTTState_ReturnValue, enum class EPTTState Temp_byte_Variable1, enum class EPTTState Temp_byte_Variable2, enum class EPTTState Temp_byte_Variable3, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, enum class EPTTState K2Node_Select_Default, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue4, enum class EPTTState CallFunc_GetPTTState_ReturnValue2, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, bool Temp_bool_Variable, enum class EFortUIState K2Node_Event_NextUIState, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, enum class ESlateVisibility Temp_byte_Variable4, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_CustomEvent_IsVisible, class UCommonButton* K2Node_ComponentBoundEvent_Button2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected, bool Temp_bool_Variable1, class UClass* K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue8, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, enum class EFortUIState K2Node_Event_PreviousUIState, bool CallFunc_NeedSeeTrailerMovie_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
