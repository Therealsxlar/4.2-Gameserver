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

// 0x2B0 (0x5D8 - 0x328)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderBackground;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CurrentTabSwitcher;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LanguageOk;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MESSAGE;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OverlayText;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetCustomGamepadToDefaultNo;                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetCustomGamepadToDefaultYes;                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultNo;                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultYes;                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultNo;                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultYes;                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetKBMToDefaultNo;                               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetKBMToDefaultYes;                              // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SavingLayer;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  SettingsTabs;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsAccept;                               // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsCancel;                               // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Current_Tab;                                       // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Accept_Input;                                      // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Video_Tab_Selected;                                // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UProgressModalWidget_C*                SavingModal;                                       // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VideoTabClass;                                     // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AccountTabClass;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GamepadTabClass;                                   // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                InputTabClass;                                     // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadCount;                                         // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UObject>                 TabGamePad;                                        // 0x430(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccount;                                        // 0x458(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabVideoOptions;                                   // 0x480(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabInputOptions;                                   // 0x4A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ApplyAction;                                       // 0x4D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetGameOptionsToDefaultAction;                   // 0x4E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetHUDToDefaultAction;                           // 0x4F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ToggleModeAction;                                  // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetToDefault;                                    // 0x510(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Restore;                                           // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Back;                                              // 0x530(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          ResetVideoOptionsTimer;                            // 0x540(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabAccessibilityOptions;                           // 0x548(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                AccessibilityTabClass;                             // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ResetCustomGamepadToDefault;                       // 0x578(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabBrightnessOptions;                              // 0x588(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                BrightnessTabClass;                                // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortTabButtonLabelInfo>       TabLabels;                                         // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          TabIds;                                            // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void Update_Header_Text_by_Tab_ID(class FName TabId, int32 CallFunc_Array_Find_ReturnValue);
	void DoResetKBMToDefault();
	void HandleResetCustomGamepadToDefault(bool* Passthrough);
	void UpdateAllOptionsTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleTabAccessibilityOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void ResetActionHandlerStates(bool DisableBack, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue, class UTabAccessibilityOptions_C* K2Node_DynamicCast_AsTab_Accessibility_Options, bool K2Node_DynamicCast_bSuccess2, class UFortAudioOptions* K2Node_DynamicCast_AsFort_Audio_Options, bool K2Node_DynamicCast_bSuccess3, class UTabBrightnessOptions_C* K2Node_DynamicCast_AsTab_Brightness_Options, bool K2Node_DynamicCast_bSuccess4, class UClass* CallFunc_GetObjectClass_ReturnValue2, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue2);
	void ApplySettings(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void DoResetHUDOptionsToDefault();
	void DoResetGameOptionsToDefault();
	void HandleTabGameOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabAccountLinkageActionHandlerStates();
	void HandleTabGamepadConfigActionHandlerStates(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCustomConfig_ReturnValue);
	void HandleTabFortAudioOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabVideoOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabBrightnessOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsResetActionHandlerStates(int32 ActiveWidgetIndex, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, int32 Temp_int_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState K2Node_Select_Default, int32 Temp_int_Variable1, enum class EInputActionState K2Node_Select1_Default);
	void HandleResetGameOptionsToDefault(bool* Passthrough);
	void CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess);
	void Handle_Reset_HUD_Default(bool* Passthrough);
	void SetBackground(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue);
	void AddTab(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FSlateBrush& Icon, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Handle_Toggle_Mode(bool* Passthrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortGamepadInputOptions* K2Node_DynamicCast_AsFort_Gamepad_Input_Options, bool K2Node_DynamicCast_bSuccess);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
	void HandleBack(bool* Passthrough);
	void Handle_Reset(bool* Passthrough);
	void HandleResetKBMToDefault(bool* Passthrough);
	void Handle_Apply(bool* Passthrough, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize(const struct FSlateBrush& Game_Normal, const struct FSlateBrush& Accounts_Normal, const struct FSlateBrush& Keys_Normal, const struct FSlateBrush& Controller_Normal, const struct FSlateBrush& Color_Normal, const struct FSlateBrush& Brightness_Normal, const struct FSlateBrush& Audio_Normal, const struct FSlateBrush& Video_Normal, class FText Temp_text_Variable, class FName CallFunc_GetTabIdAtIndex_ReturnValue, class FText Temp_text_Variable1, bool CallFunc_ShowBrightnessOptions_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_HasWidgets_ReturnValue, class FText K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable2, bool CallFunc_ShowInputOptions_ReturnValue, class FText Temp_text_Variable3, bool CallFunc_ShowVideoOptions_ReturnValue);
	void DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(enum class EFortDialogResult Result, class FName ResultName);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void Disable_Overlay();
	void Enable_Overlay_Video(bool Accept_Input);
	void Enable_Overlay_Input(bool Accept_Input, class FText Overlay_Text);
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetGameOptionsToDefaultMessage();
	void ShowResetHUDOptionToDefaultMessage();
	void HandleSettingsSaveComplete();
	void OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void ShowResetCustomGamepadToDefaultMessage();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetKBMToDefaultMessage();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(class FName TabId);
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UClass* K2Node_CustomEvent_Loaded5, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded4, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab1, bool K2Node_ClassDynamicCast_bSuccess1, class UClass* K2Node_CustomEvent_Loaded3, class UClass* Temp_class_Variable2, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab2, bool K2Node_ClassDynamicCast_bSuccess2, class UClass* K2Node_CustomEvent_Loaded2, class UClass* Temp_class_Variable3, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab3, bool K2Node_ClassDynamicCast_bSuccess3, class UClass* K2Node_CustomEvent_Loaded1, class UClass* Temp_class_Variable4, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab4, bool K2Node_ClassDynamicCast_bSuccess4, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable5, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab5, bool K2Node_ClassDynamicCast_bSuccess5, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortVideoOptions* K2Node_DynamicCast_AsFort_Video_Options, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess1, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess2, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess3, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options, bool K2Node_DynamicCast_bSuccess4, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool K2Node_CustomEvent_Gamepad_Enabled, class FName CallFunc_GetActiveTab_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button8, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Handle_Reset_PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortDialogResult Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Handle_Reset_PassThrough1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool K2Node_CustomEvent_Accept_Input1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_Accept_Input, class FText K2Node_CustomEvent_Overlay_Text, class UWidget* K2Node_CustomEvent_ActiveWidget, int32 K2Node_CustomEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_ShowVideoOptions_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_ShowInputOptions_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool CallFunc_IsVisible_ReturnValue1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue1, class UWidget* CallFunc_GetActiveWidget_ReturnValue2, class UWidget* CallFunc_GetActiveWidget_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UWidget* CallFunc_GetActiveWidget_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool CallFunc_ShowBrightnessOptions_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UWidget* CallFunc_GetActiveWidget_ReturnValue5, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options1, bool K2Node_DynamicCast_bSuccess7, class UWidget* CallFunc_GetActiveWidget_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options2, bool K2Node_DynamicCast_bSuccess8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class UWidget* CallFunc_GetActiveWidget_ReturnValue7, class FName K2Node_ComponentBoundEvent_TabId, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config1, bool K2Node_DynamicCast_bSuccess9, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config2, bool K2Node_DynamicCast_bSuccess10);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
