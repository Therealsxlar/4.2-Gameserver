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

// 0x60 (0x2F8 - 0x298)
// WidgetBlueprintGeneratedClass CollectionBookItemPicker.CollectionBookItemPicker_C
class UCollectionBookItemPicker_C : public UFortCollectionBookPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	struct FDataTableRowHandle                   BackInputActionName;                               // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                  ConfirmSlotItemTitle;                              // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConfirmSlotItemMessage;                            // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   ConfirmInputActionName;                            // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UCollectionBookRecycleSlotResultsWidget_C* RecycleSlotItemWidget;                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookItemPicker_C");
		return Clss;
	}

	void Get_Type_Text(class UFortItem* Item, class FText* Type, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4);
	void HandleCommitAction(bool* Passthrough, bool CallFunc_TryCommitSelectedItem_ReturnValue);
	void HandleItemSelected(class UObject* ItemSelected, bool IsSelected);
	void DialogResult_C897FB8741239C9DAE2430AD3D91A030(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Construct();
	void ShowSlotItemConfirmation(class UFortItem* SelectedItem);
	void ExecuteUbergraph_CollectionBookItemPicker(int32 EntryPoint, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortItem* K2Node_CustomEvent_SelectedItem, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDONOTUSE_C* CallFunc_Create_ReturnValue, const struct FCommonInputActionData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UCollectionBookRecycleSlotResultsWidget_C* CallFunc_Create_ReturnValue1, class UFortAccountItem* CallFunc_GetCurrentSlottedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountItem* CallFunc_GetCurrentSlottedItem_ReturnValue1, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue1, class FText CallFunc_Get_Type_Text_Type, class FText CallFunc_Get_Type_Text_Type1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array2, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
