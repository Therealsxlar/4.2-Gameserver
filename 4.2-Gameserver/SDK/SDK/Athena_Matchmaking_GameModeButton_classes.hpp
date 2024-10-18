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

// 0xB8 (0x2C0 - 0x208)
// WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C
class UAthena_Matchmaking_GameModeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CB_ExtraInfo;                                      // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CB_ModeDescription;                                // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PlayButton;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_ExtraInfo;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonLabel;                                       // 0x230(0x18)(Edit, BlueprintVisible)
	bool                                         bShowExtraInformation;                             // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ButtonMinWidth;                                    // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonMinHeight;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  GameModeSelected;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bGameModeDisabled;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                OverrideButtonClass;                               // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverrideButtonStyle;                              // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ModeDescription;                                   // 0x280(0x18)(Edit, BlueprintVisible)
	bool                                         bShowModeDescription;                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ButtonHovered;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaMatchmakingOptionsDisplay_v2_C* MyOwningDisplay;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylistAthena*                   MyPlaylist;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_Matchmaking_GameModeButton_C");
		return Clss;
	}

	void SetButtonSize(bool UseLargeSize);
	void SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay);
	void UpdateGameModeAvailibilty(bool CallFunc_IsGameModeAvailable_Available);
	void ShowDisabledMessage(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void DisableGameModeButton();
	void IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available, const TArray<enum class EFortAthenaPlaylist>& Debug);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnModeButtonHovered(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select1_Default, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
