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

// 0x68 (0x278 - 0x210)
// WidgetBlueprintGeneratedClass OptionsMenuHudRotator.OptionsMenuHudRotator_C
class UOptionsMenuHudRotator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLeft;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRight;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DisplayText;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4243[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HoverText;                                         // 0x240(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  Selection_Changed;                                 // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x270(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuHudRotator_C");
		return Clss;
	}

	class UObject* GetListItemObject();
	void UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, const struct FVector2D& K2Node_Select_Default, class UClass* Temp_class_Variable1, const struct FVector2D& K2Node_Select1_Default, bool Temp_bool_Variable2, class UClass* K2Node_Select2_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1);
	void Update_Options(TArray<class FText>& NewParam);
	void Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Update_Row_Selector(int32 Currently_Selected);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuHudRotator(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_ListItemObject, class UFortHUDVisibilityData* K2Node_DynamicCast_AsFort_HUDVisibility_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Selection_Changed__DelegateSignature(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
