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

// 0x78 (0x288 - 0x210)
// WidgetBlueprintGeneratedClass ItemTransformKeyScreen.ItemTransformKeyScreen_C
class UItemTransformKeyScreen_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  HorizontalTabList;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyInfo_C*               ItemTransformKeyInfo;                              // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyPicker_C*             ItemTransformKeyPicker;                            // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TabLabelText;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             CurrentKey;                                        // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              KeyItems;                                          // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnKeySelected;                                     // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnKeyConfirmed;                                    // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CurrentTab;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_ItemTransform_TabButton_C*> TabButtons;                                        // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformKeyScreen_C");
		return Clss;
	}

	void Refresh_Tab_Button_Bangs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_ItemTransform_TabButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Determine_Tab_List_Title(class FName TabNameID, class FText* Text, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2);
	void Determine_Key_Types_to_See(class FName TabNameID, enum class EConversionControlKeyRequest* RequestType, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2);
	void NavigateToFirstItem();
	void NavigateToSelectedItem(class UFortItem* InItem);
	void Get_Selected_Item(class UFortItem** SelectedKey, class UFortItem* CallFunc_GetSelectedKey_SelectedKey);
	void ResetScreen();
	void HandleItemSelected(class UFortItem* Item);
	void SetupKeyList(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RebuildKeyList(enum class EConversionControlKeyRequest RequestType, int32 LastSelectedKeyIndex, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, class FText CallFunc_Determine_Tab_List_Title_Text, int32 CallFunc_Array_LastIndex_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys);
	void Construct();
	void BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(class FName TabId);
	void HandleHomebaseInventoryChanged();
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_40_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_77_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_116_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void HACK();
	void ExecuteUbergraph_ItemTransformKeyScreen(int32 EntryPoint, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem2, class FName K2Node_ComponentBoundEvent_TabId1, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UBP_ItemTransform_TabButton_C* K2Node_DynamicCast_AsBP_Item_Transform_Tab_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem1, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType1);
	void OnKeyConfirmed__DelegateSignature();
	void OnKeySelected__DelegateSignature(class UFortItem* Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
