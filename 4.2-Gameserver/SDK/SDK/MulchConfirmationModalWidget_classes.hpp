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

// 0xC0 (0x408 - 0x348)
// WidgetBlueprintGeneratedClass MulchConfirmationModalWidget.MulchConfirmationModalWidget_C
class UMulchConfirmationModalWidget_C : public UFortMulchConfirmationModalWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DeclineButton;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox_NUI;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleWidget;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalItemsText;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalWarningsText;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WarningImage;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WarningList;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortItem*>                     ItemsToMulch;                                      // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EItemRecyclingWarning, class UMulchWarning_C*> WarningItemMap;                                    // 0x3A8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortItem*                             HoveredItem;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             SelectedItem;                                      // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulchConfirmationModalWidget_C");
		return Clss;
	}

	void UpdateWarningsList(int32 TotalWarnings, TMap<enum class EItemRecyclingWarning, int32> WarningsMap, class FText Temp_text_Variable, enum class EItemRecyclingWarning Temp_byte_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, TMap<enum class EItemRecyclingWarning, int32> K2Node_MakeVariable_MakeVariableOutput, TArray<enum class EItemRecyclingWarning>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, TMap<enum class EItemRecyclingWarning, int32> CallFunc_GetMulchWarnings_ReturnValue, class FText Temp_text_Variable5, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable2, class FText K2Node_Select1_Default, const struct FMargin& K2Node_MakeStruct_Margin, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Format_ReturnValue, class UMulchWarning_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateConfirmationModal_BP();
	void OnActivated();
	void BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_8_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_21_OnListViewItemClicked__DelegateSignature(class UObject* Item, bool bIsHovered);
	void ExecuteUbergraph_MulchConfirmationModalWidget(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class FText Temp_text_Variable3, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_Event_IsDesignTime, class UItemManagementMulchDetailsPanel_C* K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable2, TArray<class UFortItem*>& CallFunc_GetItemsToMulchBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_AreAnyItemsAnimate_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select1_Default, class UObject* K2Node_ComponentBoundEvent_Item1, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class UMulchWarning_C*>& CallFunc_Map_Values_Values, class UMulchWarning_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsHovered, class UFortItem* K2Node_DynamicCast_AsFort_Item1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_Select2_Default, TArray<class UFortItem*>& K2Node_MakeArray_Array1, TArray<enum class EItemRecyclingWarning>& CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings, int32 CallFunc_Array_Length_ReturnValue2, enum class EItemRecyclingWarning CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1, class UMulchWarning_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
