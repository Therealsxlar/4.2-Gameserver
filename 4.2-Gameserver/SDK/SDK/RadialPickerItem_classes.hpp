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
// WidgetBlueprintGeneratedClass RadialPickerItem.RadialPickerItem_C
class URadialPickerItem_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderItemBorder;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageItemNotSelected;                              // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ImageOrItemSwitcher;                               // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                PickerItem;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLabel;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PickerItemText;                                    // 0x250(0x18)(Edit, BlueprintVisible)
	UMulticastDelegateProperty_                  On_Item_Touched;                                   // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadialPickerItem_C");
		return Clss;
	}

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetKeybindVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UCommonInputContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetShowImageAndLabel(bool ShowImageAndLabel);
	void SetItemContent(class UFortItem* Item, bool Option_Enabled, int32 Radial_Item_Index, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue);
	void SetSelected(bool IsSelected, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1);
	void SetImageAndLabelContent(class FText Text, const struct FSlateBrush& Brush, bool Option_Enabled, int32 RadialItemIndex, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue);
	void Construct();
	void ExecuteUbergraph_RadialPickerItem(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
