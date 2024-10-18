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

// 0x38 (0x3C8 - 0x390)
// WidgetBlueprintGeneratedClass CustomFilterModal.CustomFilterModal_C
class UCustomFilterModal_C : public UFortItemManagementCustomFilterModalWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DeclineButton;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          FilterList;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox_NUI;                                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleWidget;                                       // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomFilterModal_C");
		return Clss;
	}

	void Construct();
	void HandleFilterToggled(enum class EFortInventoryCustomFilter Filter, bool IsChecked);
	void Destruct();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ExecuteUbergraph_CustomFilterModal(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCustomFilterRow_C* K2Node_DynamicCast_AsCustom_Filter_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsCustomFilterEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCustomFilterRow_C* CallFunc_Create_ReturnValue, enum class EFortInventoryCustomFilter K2Node_CustomEvent_Filter, bool K2Node_CustomEvent_IsChecked, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortInventoryCustomFilter CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue1, class UCustomFilterRow_C* K2Node_DynamicCast_AsCustom_Filter_Row1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
