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

// 0x40 (0x268 - 0x228)
// WidgetBlueprintGeneratedClass ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C
class UItemManagementMulchDetailsPanel_C : public UFortItemManagementMulchDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     DoneButton;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MulchPromptText;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MulchResourceBox;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ResourceListWidgetSwitcher;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         RecyclingAnimateItems;                             // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  MulchListChanged;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementMulchDetailsPanel_C");
		return Clss;
	}

	void UpdateDoneButtonText(class FText Temp_text_Variable, class FText Temp_text_Variable1, bool CallFunc_IsSpaceAvailableForMulch_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default);
	void GetWarningText(TArray<enum class EItemRecyclingWarning>& Warnings, bool HasAnimateItems, class FText* WarningText, class FText TextGroup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetRecyclingWarningText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleSetOfItemsToMulchChangedBP();
	void BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemManagementMulchDetailsPanel(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsToMulch_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_IsSpaceAvailableForMulch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GuardActionForReadOnlyWIFE_Proceed, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<enum class EItemRecyclingWarning>& CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1);
	void MulchListChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
