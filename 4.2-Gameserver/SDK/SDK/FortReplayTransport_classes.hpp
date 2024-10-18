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

// 0xC4 (0x3BC - 0x2F8)
// WidgetBlueprintGeneratedClass FortReplayTransport.FortReplayTransport_C
class UFortReplayTransport_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UIconTextButtonReplay_C*               Back;                                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_2;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ButtonSpacer;                                      // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           CameraSelectAnchor;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               CurrentCamera;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Faster;                                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Forward;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               JumpToEnd;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               JumptoStart;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               NextPlayerButton;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               PlayerList;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               PlayPause;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               PreviousPlayerButton;                              // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectedPlayerText;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               SelectPlayerButton;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Slower;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Playback;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextTimeDilation;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TimeDilationButtonIcon;                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               TimelineFocusMode;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               ViewSettings;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayContext*                    ReplayContext;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeToSkip;                                        // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayTransport_C");
		return Clss;
	}

	void ResetFocusToPlayPauseIfNeeded(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetButtonsAllowedFocus(bool bFocusAllowed, bool* FocusAllowed);
	void FollowedPlayerChanged(class AFortPlayerControllerSpectating* PlayerController, class AFortPlayerState* NewFollowedPlayer, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void CameraTypeChanged(class AFortPlayerControllerSpectating* PlayerController, enum class ESpectatorCameraType CameraType, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class AFortPlayerState* CallFunc_GetFollowedPlayer_ReturnValue, class FText CallFunc_GetCameraNameFromType_ReturnValue);
	void SetupHUDEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess);
	void Focus_Menu();
	void Unfocus_Menu();
	void BindingsChanged(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_SetButtonsAllowedFocus_focusAllowed);
	void Format_Playback_Multiplier(float Multiplier, class FString* FormattedText, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetReplayContext(class UFortReplayContext* InReplayContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PlaybackMultiplierChangedFromNative(float NewMultiplier);
	void BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnDeactivated();
	void PauseStateChangedFromNative(bool bNewPauseState);
	void BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_FortReplayTransport(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class UFortReplayContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UCommonInputContext* CallFunc_GetContext_ReturnValue4, class UFortReplayContext* CallFunc_GetContext_ReturnValue5, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue6, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button11, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, float K2Node_CustomEvent_NewMultiplier, class UCommonButton* K2Node_ComponentBoundEvent_Button4, const class FString& CallFunc_Format_Playback_Multiplier_FormattedText, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating2, bool K2Node_DynamicCast_bSuccess2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UTexture2D* Temp_object_Variable5, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, enum class ECommonGamepadType Temp_byte_Variable, class UCommonInputContext* CallFunc_GetContext_ReturnValue7, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* K2Node_Select_Default, bool K2Node_CustomEvent_bNewPauseState, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class USoundBase* K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UTexture2D* Temp_object_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue4, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsFollowedPlayerInBus_ReturnValue, class UTexture2D* Temp_object_Variable7, bool Temp_bool_Variable1, class UTexture2D* K2Node_Select2_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
