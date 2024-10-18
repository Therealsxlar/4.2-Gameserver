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

// 0x190 (0x500 - 0x370)
// WidgetBlueprintGeneratedClass AthenaCustomizationTab.AthenaCustomizationTab_C
class UAthenaCustomizationTab_C : public UAthenaCustomizationScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroPicker;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BackpackSlot;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BannerItemSwitcher;                                // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationBannerButton_C*    BannerSlot;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BattleBusSlot;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonCancel;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonConfirm;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CharacterSlot;                                     // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ContrailSlot;                                      // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot1;                                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot2;                                        // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot3;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot4;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot5;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot6;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* GliderSlot;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HarvestToolSlot;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HatSlot;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxBacchusControls;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                HeaderItemCard;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderItemType;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* LoadScreenSlot;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LockerSlotsCB;                                     // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          PickerCP;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityGlow;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichDescriptionBox;                                // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatsHeader;                                       // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* TauntSlot;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* VictoryPoseSlot;                                   // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PickingCosmetic;                                   // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               PickingRestoreFocusWidget;                         // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ProgressModal;                                     // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*         NewLocalPlayerWidget;                              // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoUnhoveredBehavior;                               // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaCustomizationSlotButtonWrapper_C*> AllSlots;                                          // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  CurrentCategoryName;                               // 0x4C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SavingModalShown;                                  // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EAthenaCustomizationCategory      CurrentCustomizationType;                          // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentSubslotIndex;                               // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CurrentSlotDescriptionText;                        // 0x4E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            Sound_OnChangeStyle;                               // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationTab_C");
		return Clss;
	}

	class UWidget* GetWidgetForFramingViewedItem();
	void HandleShiftCosmeticTier(bool* Passthrough, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess);
	void RegisterShiftCosmeticTier(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleFavorite(bool* Passthrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RegisterFavorite(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void SetItemDetailsToDisplay(class UFortItem* InputPin, class FText HeaderText, class FText DescriptionText, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetRichDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue1);
	void SetHeaderToBanner();
	void SetupBanner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue);
	void ShowVaultItemByCategory(enum class EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex, bool CanShowEmpty, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UAthenaCharacterItemDefinition* CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void HandleSlotHovered(enum class EAthenaCustomizationCategory Type, class FText HeaderText, class FText DescriptionText, int32 SubslotIndex, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 K2Node_Select_Default);
	void SelectFirstWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void ShowSavingModal(class UFortUIManagerWidget_NUI* UIManager, class FText Temp_text_Variable, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void RefreshInputActions(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class EInputActionState Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable4, enum class EInputActionState Temp_byte_Variable5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EInputActionState Temp_byte_Variable6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMultipleVariants_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_HasCosmeticVariance_ReturnValue, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState Temp_byte_Variable7, bool Temp_bool_Variable3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5, enum class EInputActionState K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle6, enum class EInputActionState K2Node_Select3_Default);
	void SelectInitialWidgetForGamepad();
	void EndPickingCustomization(bool RestoreFocus, float Temp_float_Variable, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, float K2Node_Select_Default);
	void BeginPickingCustomization(enum class EAthenaCustomizationCategory Category, class UCommonButton* WidgetToReturnFocusTo, class FText HeaderText, int32 Subslot_Index, enum class EAthenaCustomizationCategory NewLocalVar_0, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void RegisterInputActions();
	void RegisterCancel(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleCancel(bool* Passthrough, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue);
	void OnInputModeChanged(bool bUsingGamepad);
	void OnActivated();
	void OnDeactivated();
	void Construct();
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature();
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature();
	void BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaCustomizationTab(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool K2Node_Event_bUsingGamepad, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UAthenaBannerSelectModal_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class UCommonButton* K2Node_ComponentBoundEvent_Button2, TArray<class UAthenaCustomizationSlotButtonWrapper_C*>& K2Node_MakeArray_Array, bool CallFunc_HandleCancel_PassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TryCommitSelectedItem_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
