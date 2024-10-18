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

// 0x87 (0x36F - 0x2E8)
// WidgetBlueprintGeneratedClass QuickbarSlot.QuickbarSlot_C
class UQuickbarSlot_C : public UFortQuickBarSlotBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimMaximize;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimMinimize;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _SizeBox__Item;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemLocked;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJetpackFuelGauge_C*                   JetpackFuelGauge;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo1;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo2;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      QuickBarSlotInvalidationBox;                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selection;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBottomKeybind;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTopKeybind;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemDisplayStyle                 ItemDisplayStyle;                                  // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	float                                        AnimatedBoxScaleFactor;                            // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MinimumCardSize;                                   // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MaximumCardSize;                                   // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCollapseItemWidgetBorder;                    // 0x36E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuickbarSlot_C");
		return Clss;
	}

	void InitializeInvalidation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortItemType K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, enum class EFortItemType K2Node_Select1_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1);
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeCooldowns(class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void HandleMaximizeStarted();
	void HandleMinimizeFinished();
	void HandleMaximizeFinished();
	void HandleMinimizeStarted();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor);
	void MaximizeSlot(bool bShouldSkipAnimation);
	void MinimizeSlot(bool bShouldSkipAnimation);
	void SetSlotSelected(bool bSelected);
	void ExecuteUbergraph_QuickbarSlot(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_AnimatedBoxScaleFactor, class UTexture2D* Temp_object_Variable, bool K2Node_Event_bShouldSkipAnimation1, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* Temp_object_Variable1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, bool K2Node_Event_bShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue1, class UTexture2D* Temp_object_Variable5, class UTexture2D* Temp_object_Variable6, enum class EItemDisplayStyle Temp_byte_Variable2, class UTexture2D* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bSelected, enum class ESlateVisibility K2Node_Select1_Default, float CallFunc_GetEndTime_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
