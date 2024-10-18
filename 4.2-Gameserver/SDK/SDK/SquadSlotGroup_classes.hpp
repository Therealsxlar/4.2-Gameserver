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

// 0x140 (0x350 - 0x210)
// WidgetBlueprintGeneratedClass SquadSlotGroup.SquadSlotGroup_C
class USquadSlotGroup_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UImage*                                GroupIconImage;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GroupLabelTextBlock;                               // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HeadingSizeBox;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SquadSlotBox;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  GroupLabelText;                                    // 0x240(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                               SquadSlotPadding;                                  // 0x258(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                        HeadingWidth;                                      // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowHeader;                                       // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TooltipDescription;                                // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TooltipHeader;                                     // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bShowImageInHeader;                                // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_32F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HeaderImageBrush;                                  // 0x2A8(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastDelegateProperty_                  HandleMouseEnter;                                  // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  HandleMouseLeave;                                  // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadSlotGroup_C");
		return Clss;
	}

	void RemoveDarkeningFromAllSlotsInGroup(int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess);
	void DarkenAllSlotsExceptIndex(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UCommonButton* K2Node_DynamicCast_AsCommon_Button1, bool K2Node_DynamicCast_bSuccess1);
	void SelectSquadSlot(int32 SlotIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* Get_SquadSlotBox_ToolTipWidget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Update_Squad_Slot_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void AddSquadSlots(TArray<class UWidget*>& SquadSlots, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_SquadSlotGroup(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_IsDesignTime, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void HandleMouseLeave__DelegateSignature();
	void HandleMouseEnter__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
