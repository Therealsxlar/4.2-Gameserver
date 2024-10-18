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

// 0x148 (0x4B0 - 0x368)
// WidgetBlueprintGeneratedClass AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C
class UAthenaMatchmakingOptionsDisplay_v2_C : public UFortAthenaMatchmakingOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroRightPanel;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OutroRightPanel;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     AcceptButton;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              AthenaMatchmakingTile;                             // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              AthenaMatchmakingTile_0;                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              AthenaMatchmakingTile_1;                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              AthenaMatchmakingTile_2;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderLTMBang;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ChoosePromptSB;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentGameModeDescription;                        // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentGameModeDisabledDescription;                // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentGameModeName;                               // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeGlow;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeIcon;                                      // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GameModes;                                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacer;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LineRule;                                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LTMModeSubIcon;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ModeDescriptionScrollBox;                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RootBorder;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SubGameModeName;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SubGameModeNameHB;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_SaleInfo;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TouchToCloseZone;                                  // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GameModeContainer;                              // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        WarningHB;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_Cancel;                                      // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthena_Matchmaking_SpecialEventButton_C* MyLTM;                                             // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastHoveredStandardModeIndex;                      // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SM_Button_IndexMax;                                // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SM_Button_IndexCurrent;                            // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3518[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultPlaylists;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  InitialButtonSelection;                            // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CurrentPlaylist;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MatchmakingPageTileIndex;                          // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntroOutroTileDelayTime;                           // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputCustomMatchmaking;                            // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingOptionsDisplay_v2_C");
		return Clss;
	}

	void SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void OnCustomMatchmaking(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCustomMatchmakingKeyModal_C* CallFunc_Create_ReturnValue);
	void TriggerMatchmakingPageTileOutroAnim(int32 Temp_int_Variable, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAthenaMatchmakingTile_C* K2Node_DynamicCast_AsAthena_Matchmaking_Tile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void TriggerMatchmakingPageTileIntroAnim(class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaMatchmakingTile_C* K2Node_DynamicCast_AsAthena_Matchmaking_Tile, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable);
	struct FEventReply Touch_To_Close(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Handle_InputAction_Cancel(bool* Passthrough);
	void SetupInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void OnActivated();
	void Construct();
	void SetSquadFillText(bool InCurrentSquadFill);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateMatchmakingButtonsBP(bool IsPartyLeader, bool IsMatchmaking, bool PlaylistSupportsPartySize, bool PlaylistIsTeam);
	void OnRightPanelOutroFinshed();
	void OnBeginIntro();
	void OnRightPanelIntroFinshed();
	void RepresentedPlaylistChanged(class UFortPlaylistAthena* NewRepresentedPlaylist);
	void OnTileDoubleClicked(class UCommonButton* ButtonClicked);
	void ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable2, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable4, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable5, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable6, enum class EInputActionState Temp_byte_Variable4, enum class EInputActionState Temp_byte_Variable5, enum class EInputActionState K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_InCurrentSquadFill, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, bool Temp_bool_Variable7, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsPartyLeader, bool K2Node_Event_IsMatchmaking, bool K2Node_Event_PlaylistSupportsPartySize, bool K2Node_Event_PlaylistIsTeam, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select1_Default, class UClass* K2Node_Select2_Default, class UClass* K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select6_Default, bool CallFunc_Not_PreBool_ReturnValue2, bool Temp_bool_Variable8, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable9, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UFortPlaylistAthena* K2Node_Event_NewRepresentedPlaylist, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, enum class ESlateVisibility K2Node_Select7_Default, enum class ESlateVisibility K2Node_Select8_Default, enum class ESlateVisibility K2Node_Select9_Default, bool Temp_bool_Variable10, class UCommonButton* K2Node_Event_ButtonClicked, class FText K2Node_Select10_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
