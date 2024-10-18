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

// 0x40 (0x358 - 0x318)
// WidgetBlueprintGeneratedClass FortItemManagementViewPopup.FortItemManagementViewPopup_C
class UFortItemManagementViewPopup_C : public UFortPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CollectionBookCheckmark;                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CollectionBookCheckmarkButton;                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrioritizeFavoritesCheckmark;                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PrioritizeFavoritesCheckmarkButton;                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleSizeButton;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementViewPopup_C");
		return Clss;
	}

	void SetupCheckboxes(class UItemManagementScreen_C* ItemManagementScreen, bool CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue, bool CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess);
	void CheckboxUpdate(class UImage* CheckboxImage, bool Check, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, bool Temp_bool_Variable1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select1_Default);
	void BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void OnActivated();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_FortItemManagementViewPopup(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen2, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
