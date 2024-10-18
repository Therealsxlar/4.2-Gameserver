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

// 0x960 (0xC88 - 0x328)
// WidgetBlueprintGeneratedClass QuantitySelector.QuantitySelector_C
class UQuantitySelector_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AdditionalInfo;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               CurrentAmount;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               MaxAmount;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MaxButton;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         ValueSlider;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WindowTitle;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxValue;                                          // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnButtonClickedDispatcher;                         // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnStackValueChangedDispatcher;                     // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             Item;                                              // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSliderStyle                          SliderStyle_MouseKeyboard;                         // 0x3B0(0x230)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                          SliderStyle_XboxOne;                               // 0x5E0(0x230)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSliderStyle                          SliderStyle_PS4;                                   // 0x810(0x230)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bShowConfirmButton;                                // 0xA40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bShowCancelButton;                                 // 0xA41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowZeroQuantity;                                // 0xA42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4722[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          SliderStyle_Touch;                                 // 0xA48(0x230)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            ConfirmButtonSound;                                // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                            StorageCancelSound;                                // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuantitySelector_C");
		return Clss;
	}

	void SetCurrentValue(int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HandleMaxPressed_PassThrough);
	void GetCurrentValue(int32* CurrentValue);
	void SetupForInputMode(bool IsUsingGamepad, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess);
	void SliderValueChanged(float CallFunc_Conv_IntToFloat_ReturnValue);
	void HandleCancelPressed(bool* Passthrough);
	void HandleTransferPressed(bool* Passthrough);
	void HandleMaxPressed(bool* Passthrough);
	void CloseSelector(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetAdditionalText(class FText AdditionalInfoText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetSplitData(int32 StartingCount, int32 MaximumCount, class UFortItem* Item, class FText TitleText, class FText ButtonText, class FText AdditionalInfoText, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void Construct();
	void HandleChangeInputMode(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_QuantitySelector(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, float K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleMaxPressed_PassThrough, bool CallFunc_HandleTransferPressed_PassThrough, bool CallFunc_HandleCancelPressed_PassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool K2Node_CustomEvent_bUsingGamepad, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Round_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsBROnly_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnStackValueChangedDispatcher__DelegateSignature(int32 NewValue, class UFortItem* FortItem);
	void OnButtonClickedDispatcher__DelegateSignature(int32 ChosenValue, class UFortItem* FortItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
