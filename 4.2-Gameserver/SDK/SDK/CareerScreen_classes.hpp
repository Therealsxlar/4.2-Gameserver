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

// 0x38 (0x330 - 0x2F8)
// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
class UCareerScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class ULandingPageTile_C*                    LeaderboardsBtn;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                    ProfileBtn;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                    ProfileStatsBtn;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                    RecentGamesBtn;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                    ReplaysBtn;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CareerScreen_C");
		return Clss;
	}

	void ApplyHotfixButtonStates(class UCommonButton* SelectedButton, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<struct FRuntimeOptionTabStateInfo>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FRuntimeOptionTabStateInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool K2Node_SwitchName_CmpSuccess);
	void GetFirstInteractableWidget(class UWidget** Widget, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void SetupButtonStates(enum class ESlateVisibility Temp_byte_Variable, enum class EFortUIFeatureState Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState Temp_byte_Variable2, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class ESlateVisibility Temp_byte_Variable3, bool K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class EFortUIFeatureState Temp_byte_Variable7, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable8, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState1, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason1, enum class ESlateVisibility K2Node_Select1_Default, bool K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class EFortUIFeatureState Temp_byte_Variable11, enum class ESlateVisibility K2Node_Select3_Default);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void ShowReplayBrowser();
	void BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent_211_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ProfileBtn_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent_245_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent_262_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaLeaderboardTab_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue, class UAthenaReplayBrowserTab_C* CallFunc_Create_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class URootProfileStatsScreen_C* CallFunc_Create_ReturnValue2, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue3, class UAthenaStatsTab_C* CallFunc_Create_ReturnValue3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1, class URecentMatchesStatScreen_C* CallFunc_Create_ReturnValue4, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetFirstInteractableWidget_Widget, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
