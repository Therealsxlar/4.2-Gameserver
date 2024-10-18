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

// 0xF8 (0x980 - 0x888)
// WidgetBlueprintGeneratedClass IconTextButton.IconTextButton_C
class UIconTextButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RightExtraContentSlot;                             // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x8B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x8C8(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ControllerInputStyle;                              // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MouseKeyboardStyle;                                // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMouseKeyboardStyleSet;                            // 0x961(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_223D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideButtonText;                                // 0x968(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IconTextButton_C");
		return Clss;
	}

	void Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void ShowIcon(bool bShouldShow);
	void SetTextInternal(class FText InButtonText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetInitialMouseKeyboardStyle();
	void UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue);
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateStyle(bool UsingGamepad);
	void UpdateText(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetDisplayText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select1_Default);
	void SetControllerStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateTextAndStyle(bool bUsingGamepad);
	void InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_IconTextButton(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_ComponentBoundEvent_bUsingGamepad, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
