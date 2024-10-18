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

// 0xBD (0x3D5 - 0x318)
// WidgetBlueprintGeneratedClass HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C
class UHeroSquadTilePopupMenu_C : public UFortSquadSlotSelectorPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut_;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EditSlotButton;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InspectButton;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleFavoriteButton;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ViewAllButton;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_CheckBox;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CollectionBookItemSlotId;                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSlotItemInCollectionBook;                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CollectionBookConfirmationDialogTitle;             // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CollectionBookConfirmationDialogMessage;           // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   SlotItemInCollectionBookAction;                    // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BackAction;                                        // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortDialogExternalLatentActionHandle CollectionBookLatentDialogHandle;                  // 0x3D0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EHeroSquadTilePopupMenuButtons    SelectedButton;                                    // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadTilePopupMenu_C");
		return Clss;
	}

	void GetItemInSlot(class UFortItem** Item, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue);
	void SetViewAllText();
	void OnActivated();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePostDifferentContextProviderSet();
	void Initialize();
	void OnDeactivated();
	void ExecuteUbergraph_HeroSquadTilePopupMenu(int32 EntryPoint, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortItem* CallFunc_GetItemInSlot_Item, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, bool K2Node_SwitchEnum1_CmpSuccess, float Temp_float_Variable1, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool Temp_bool_Variable1, class UFortItem* CallFunc_GetItemInSlot_Item1, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item1, bool K2Node_DynamicCast_bSuccess1, float K2Node_Select1_Default, bool CallFunc_IsFavorite_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UFortItem* CallFunc_GetItemInSlot_Item2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
