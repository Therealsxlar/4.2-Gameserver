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

// 0x8D (0x41D - 0x390)
// WidgetBlueprintGeneratedClass ItemReceived_Base.ItemReceived_Base_C
class UItemReceived_Base_C : public UFortItemReceivedScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BattlePassUnlockAnim_C*            BP_BattlePassUnlockAnim;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EquipButton;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                     FortItemTileView_0;                                // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxActions;                              // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRarityFlare;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LeftContainer;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutOf;                                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ShowNextButton;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ItemSelectionIndex;                                // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimationIndex;                                    // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RolloutTime;                                       // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimationIndexCached;                              // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         B;                                                 // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NewVar_0;                                          // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F29[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentUserSelectedIndex;                          // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBattlePassUpgrade;                              // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnItemReceived;                               // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseClickRollout;                                   // 0x41C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceived_Base_C");
		return Clss;
	}

	void Clicked(class UCommonButton* NewParam);
	void HandleSelectionIncrement(bool Increment, int32* Index, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleRight(enum class EUINavigation Nav_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default);
	void HandleLeft(enum class EUINavigation Navigation_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default);
	void UpdateFromHoverState(const struct FFortReceivedItemLootInfo& Loot);
	class UItemCardWidget_C* AddItemCard(const struct FFortReceivedItemLootInfo& NewParam, int32 CallFunc_GetChildrenCount_ReturnValue, class UItemCardWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void UpdateFromItemReceivedInfo(const struct FFortReceivedItemLootInfo& Loot, bool Select, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SelectItem(int32 Index, bool CenterWidget);
	void Left();
	void Right();
	void AnimateRollout();
	void PreConstruct(bool IsDesignTime);
	void OnGiftBoxItemSet();
	void OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateRarityFlare(bool NewParam, int32 Who);
	void Construct();
	void CustomEvent_0();
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputModeChanged(bool bUsingGamepad);
	void Check_if_Battlepass_upgrade();
	void Rollout_Items_Received();
	void Play_BattlePass_Upgrade_Anim();
	void OnBattlepassAnimFinished();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowNextItem();
	void ExecuteUbergraph_ItemReceived_Base(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_CenterWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HandleBack_Passthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item1, bool K2Node_CustomEvent_NewParam, int32 K2Node_CustomEvent_Who, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget1, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* CallFunc_Create_ReturnValue, class UItemReceivedHeaderSubWidgetBase_C* K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base, bool K2Node_DynamicCast_bSuccess2, enum class ESlateVisibility Temp_byte_Variable2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable3, int32 Temp_int_Array_Index_Variable1, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable5, int32 Temp_int_Variable, bool Temp_bool_Variable2, int32 Temp_int_Loop_Counter_Variable1, enum class ESlateVisibility Temp_byte_Variable6, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, class UItemCardWidget_C* CallFunc_AddItemCard_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable3, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_Event_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, TArray<class UFortItem*>& CallFunc_GetItemInstancesByDefinition_Items, class UFortItem* CallFunc_Array_Get_Item4, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue3, class UItemCardWidget_C* CallFunc_AddItemCard_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_Array_Length_ReturnValue4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility K2Node_Select3_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
