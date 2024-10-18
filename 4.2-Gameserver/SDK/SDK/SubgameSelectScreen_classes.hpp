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

// 0x141 (0x439 - 0x2F8)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Pan_P1P2;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1;                                            // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P2;                                            // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ContractSeperator;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToggleCycle;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ExpandSeperator;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      DescriptionIntro;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchMaterial;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     AthenaBtn;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BGImage;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonBack;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonExit;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchase;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRedeem;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CampaignBtn;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FullDescription;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextNormal;                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextSale;                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextNormal;                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextSale;                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherBR;                                        // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherMenu;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherStW;                                       // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      TitleImage;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        PveRotatorIndex;                                   // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4897[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubGameSelectRotatorItems>    Items;                                             // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFileMediaSource*                      BRTrailerMediaSource;                              // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMediaSubtitlesPlayer*             BRSubtitlePlayer;                                  // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFileMediaSource*                      STWTrailerMediaSource;                             // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMediaSubtitlesPlayer*             STWSubtitlePlayer;                                 // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          SelectedSubgame;                                   // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectScreen_C");
		return Clss;
	}

	void StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShowUpsell(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeShortDescriptions(class FText ShortDescription, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_GetIsOnSale_ReturnValue, bool CallFunc_GetIsOnSale_ReturnValue1, int32 K2Node_Select_Default, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetShortDescription_ShortDescription1, bool CallFunc_GetShortDescription_ReturnValue1, int32 K2Node_Select1_Default);
	bool IsBusyMatchmakingOrPartyTransitioning(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsLocalPlayerInParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Update();
	void AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SafeSetSubGame(enum class ESubGame SubGame, bool CallFunc_InstallAllOnDemandChunks_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetDescriptionForSubGame(enum class ESubGame SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription1, bool CallFunc_GetFullDescription_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, enum class ESubGame Temp_byte_Variable, class FText K2Node_Select_Default);
	void DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_9B87D67040B12081C9B651A92AD99EA4(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Try_And_Remove_The_Dialog();
	void Clear_Party_and_Matchmaking_Delegates();
	void CustomEvent_0(enum class EMatchmakingCompleteResult Result);
	void CustomEvent_1();
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent_2();
	void OnActivated();
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess);
	void Destruct();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowMinorShutdownMessage(bool bIsCampaign);
	void HandleMinorWarning_Campaign();
	void HandleMinorWarning_Athena();
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRedeemCodeComplete();
	void OnInputModeChanged(bool bUsingGamepad);
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum1_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class FText CallFunc_GetAccountGameplayRestrictionText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UStoreMain_Root_C* CallFunc_Create_ReturnValue1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, class FText CallFunc_CanPlay_DenialReason1, bool CallFunc_CanPlay_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool K2Node_CustomEvent_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText Temp_text_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled, bool K2Node_CustomEvent_bIsCampaign, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, float Temp_float_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool Temp_bool_Variable, float K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class FString>& CallFunc_GetUpsellStorefrontNames_OutStorefrontNames, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue4, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, bool K2Node_SwitchInteger1_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
