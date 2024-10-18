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

// 0xD0 (0x3F0 - 0x320)
// WidgetBlueprintGeneratedClass ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C
class UItemManagementItemTilePopupMenu_C : public UFortItemManagementItemPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut_;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BatchRecycleButton;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonAddToCB;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CompareButton;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InspectButton;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleFavoriteButton;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_CheckBox;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CollectionBookItemSlotId;                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSlotItemInCollectionBook;                       // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CollectionBookConfirmationDialogTitle;             // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CollectionBookConfirmationDialogMessage;           // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   SlotItemInCollectionBookAction;                    // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BackAction;                                        // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortDialogExternalLatentActionHandle CollectionBookLatentDialogHandle;                  // 0x3E0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EItemManagementItemTilePopupMenuButtons SelectedButton;                                    // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LastPosition;                                      // 0x3E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementItemTilePopupMenu_C");
		return Clss;
	}

	void GetWarningText(TArray<enum class EItemRecyclingWarning>& Warnings, bool HasAnimateItem, class FText* WarningText, class FText TextGroup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetRecyclingWarningText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateCollectionBookButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateRecycleButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, TArray<enum class EItemRecyclingRestrictionReason>& CallFunc_CanRecycle_OutRestrictionReasons, bool CallFunc_CanRecycle_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateFavoriteFlag(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, float K2Node_Select_Default);
	void SetupRecycleRetireText(class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3);
	void OnSlotItemInCollectionBookComplete(class UFortAccountItem* AccountItem, class FName SlotId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue);
	void CacheCollectionBookStatus(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSlotItem_ReturnValue);
	void DialogResult_AA710CD8400475561228C78BEBCE1FFB(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void OnActivated();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePostDifferentContextProviderSet();
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ResetGate();
	void ExecuteUbergraph_ItemManagementItemTilePopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bItemChanged, bool K2Node_Event_bAmmoChanged, bool K2Node_Event_bIngredientsChanged, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue1, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue2, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue3, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item1, bool K2Node_DynamicCast_bSuccess1, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_SlotItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, bool Temp_bool_Variable, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, bool K2Node_SwitchEnum1_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, const struct FVector2D& CallFunc_GetMenuPosition_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_IsOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue1, const struct FVector2D& CallFunc_GetMenuPosition_ReturnValue1, float CallFunc_DistanceBetweenTwoVectors_Distance, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
