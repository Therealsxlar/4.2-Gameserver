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

// 0xA8 (0x350 - 0x2A8)
// WidgetBlueprintGeneratedClass AlterationOptionsWidget.AlterationOptionsWidget_C
class UAlterationOptionsWidget_C : public UFortAlterationOptionsBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(Transient, DuplicateTransient)
	class UAlterationOption_C*                   AlterationOption;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_0;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_1;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOption_C*                   AlterationOption_2;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationOptionsIngredientsList_C*   AlterationOptionsIngredientsList;                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderCostandConfirmation;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonHBox;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DetailsButton;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoAlterationsText;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OptionsSwitcher;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OptionsVbox;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ReplacementsBorder;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ReplacementsVBox;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Upgrades;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         UpgradesBorder;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UpgradesVBox;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemWindow_C*                         ItemInfoWindow;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AlterationOptionsWidget_C");
		return Clss;
	}

	bool ShouldShowNoOptions(bool CallFunc_IsValidAlterationSlot_ReturnValue, bool CallFunc_DoAnyAlterationsExist_OptionsExist, bool CallFunc_IsGameplayAlterationSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DoAnyAlterationsExist(bool* OptionsExist, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void HandleDetailsClosed(int32 CallFunc_GetSelectedButtonIndex_ReturnValue);
	void HandleShouldGiveFocus(int32 Index, bool GiveFocus, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateIngredientsButtonVisibility(bool Hidden, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateButtonsForConfirmation(bool Enabled);
	void UpdateIngredients(TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_AreIngredientRequirementsMent_ReturnValue);
	void AddAlterationOptionWidget(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget, enum class EFortAlterationOptionType Temp_byte_Variable, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void ClearOptionsAndInitialize(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_ShouldShowNoOptions_ReturnValue, bool CallFunc_ShouldShowNoOptions_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select1_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, enum class ESlateVisibility K2Node_Select3_Default);
	void OnItemChanged();
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	void OnIngredientsChanged(TArray<struct FFortItemQuantityPair>& RequiredIngredients);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void ConfirmationComplete();
	void OnShouldGiveFocus(int32 Index, bool bGiveFocus);
	void ExecuteUbergraph_AlterationOptionsWidget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class EFortAlterationOptionType K2Node_Event_OptionType, class UFortAlterationOption* K2Node_Event_OptionWidget, TArray<struct FFortItemQuantityPair>& K2Node_Event_RequiredIngredients, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 K2Node_Event_Index, bool K2Node_Event_bGiveFocus, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue, class UItemWindow_C* CallFunc_Create_ReturnValue, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
