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

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass FortReplayTimeline.FortReplayTimeline_C
class UFortReplayTimeline_C : public UFortTimelineBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__HP_Baseplate;                              // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__HP_Bar_Artwork;                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTimeBevel;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MarkerPanel;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayProgressBar;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBarTimeElapsed;                            // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTimeBevel;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTimelineBar;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         SliderGamepadSlider;                               // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayTimeline_C");
		return Clss;
	}

	void AddMarkerToTimeline(enum class EFortReplayEventType EventType, float RelativeTime, int32 EventIdx, class UCanvasPanelSlot* CanvasPanelSlot, const struct FVector2D& AnchorVec, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTimelineMarker_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void OnHUDVisibilityChanged(enum class EHudVisibilityState VisibilityState, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPressCancel(bool* bHandled, class UFortReplayContext* CallFunc_GetContext_ReturnValue);
	void OnPressConfirm(bool* bHandled, bool CallFunc_OnPressCancel_bHandled, class UFortReplayContext* CallFunc_GetContext_ReturnValue, float CallFunc_GetValue_ReturnValue);
	void OnTimelineInputFocusChanged(bool bHasInputFocus, const struct FDataTableRowHandle& CancelAction, const struct FDataTableRowHandle& ConfirmAction, bool HasFocus, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	class UWidget* GetProgressBarWidget();
	void SetReplayContext(class UFortReplayContext* InReplayContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateFillBar(float InPercent, float Temp_float_Variable, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void InitializeBar(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void CurrentTimeChangedFromNative(float TimeNow);
	void BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ClearTimelineMarkers();
	void ExecuteUbergraph_FortReplayTimeline(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_TimeNow, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortReplayContext* CallFunc_GetContext_ReturnValue2, float CallFunc_GetValue_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortReplayContext* CallFunc_GetContext_ReturnValue4, class UFortReplayContext* CallFunc_GetContext_ReturnValue5, bool K2Node_Event_IsDesignTime, class UFortReplayContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
