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

// 0xE1 (0x319 - 0x238)
// WidgetBlueprintGeneratedClass FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C
class UFrontEndRewards_ListRewards_C : public UFortRewardNotificationSubWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowHideDescription;                               // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOutro;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      RibbonExpand;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   ActionWidgetScroll;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow_left;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow_right;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasCardQueue;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dots_margin;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         HintBoxBorder;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMain;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBoxDescription;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxDescription;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlockHeader;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescriptionHeader;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescriptionSummary;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class URewards_ItemCard_C*>           CardList;                                          // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentSelectionIndex;                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CardSlideStaggerDelay;                             // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBusy;                                            // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CardOffset;                                        // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ScrollAction;                                      // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CollectAllAction;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectAction;                                     // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          TransitionInHandle;                                // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TransitionInStaggerDelay;                          // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TransitionInIndex;                                 // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTransitioningIn;                                 // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_ListRewards_C");
		return Clss;
	}

	void UpdateScrollHintVisibility(bool IsUsingGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool Get_Item_Description(class UFortItem* Object, class FText* OutDescription, class UFortTooltipContext* TooltipContext, class FText Description, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue);
	void Set_DisplayName_and_Description_Widget(class UFortItem* Item, class FText Description, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void Clear_DisplayName_and_Description_Widgets();
	void SkipTransitionIn(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class URewards_ItemCard_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void TickTransitionIn(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void HandleTransitionInComplete();
	void Reset();
	void AddInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void DisableInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void EnableInputActions(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PopulateFromCardsList(TArray<class URewards_ItemCard_C*>& Cards, int32 Temp_int_Array_Index_Variable, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleInspectAction(bool* Committed, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent);
	void HandleScrollAction(bool* Committed);
	void HandleCollectAllAction(bool* Committed);
	void SetArrowVisibility(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1);
	void HandleLastPopInFinished(int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item);
	void HandleOutroAnimFinished();
	void SelectCard(int32 InNewIndex, int32 OldIndex, int32 NewIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, class URewards_ItemCard_C* CallFunc_Array_Get_Item1, int32 CallFunc_Add_IntInt_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class URewards_ItemCard_C* CallFunc_Array_Get_Item2, class URewards_ItemCard_C* CallFunc_Array_Get_Item3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class URewards_ItemCard_C* CallFunc_Array_Get_Item4, class URewards_ItemCard_C* CallFunc_Array_Get_Item5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void SetCardSelected(class URewards_ItemCard_C* Card);
	void HandleCardClicked(class URewards_ItemCard_C* Card, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ClearCards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayCardSlide(class URewards_ItemCard_C* RewardsItemCard, float StaggerDelay, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, bool K2Node_SwitchInteger_CmpSuccess);
	void SetItemDescription(class UFortItem* Item, class FText CallFunc_Get_Item_Description_OutDescription, bool CallFunc_Get_Item_Description_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCardAlignment(class UWidget* CardWidget, int32 SelectionIndex, class UCanvasPanelSlot* CanvasPanelSlot, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class URewards_ItemCard_C* K2Node_DynamicCast_AsRewards_Item_Card, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess1, const struct FMargin& CallFunc_GetOffsets_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, const struct FMargin& K2Node_MakeStruct_Margin, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void SelectPreviousCard(int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HandleLastSlideAnimFinished(class URewards_ItemCard_C* RewardsItemCard, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetCardAlignment(int32 CardQueueIndex, int32 CardListIndex, struct FVector2D* Alignment, struct FAnchors* Anchors, float* Scale, float* Offset, float* Angle, struct FVector2D* Translation, float* DropShadowDepth, float CardQueueOffset, float CardWidth, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FAnchors& K2Node_MakeStruct_Anchors1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FAnchors& K2Node_MakeStruct_Anchors2, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue4);
	void SelectNextCard(int32 CallFunc_Add_IntInt_ReturnValue);
	void AddCard(class URewards_ItemCard_C* Card, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitDesignView(const TArray<class URewards_ItemCard_C*>& TempCardList, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void DelayedCheckScroll();
	void Construct();
	void TransitionInBegin();
	void TransitionOutBegin();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnActivated();
	void OnDeactivated();
	void OnPrimaryAction();
	void BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_FrontEndRewards_ListRewards(int32 EntryPoint, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState Temp_byte_Variable2, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_Array_LastIndex_ReturnValue1, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, enum class EInputActionState K2Node_Select_Default, bool CallFunc_HandleCollectAllAction_Committed, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URewards_ItemCard_C* CallFunc_Array_Get_Item1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_Greater_IntInt_ReturnValue2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
