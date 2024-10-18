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

// 0x2C (0x26C - 0x240)
// WidgetBlueprintGeneratedClass StatsListWidget.StatsListWidget_C
class UStatsListWidget_C : public UFortAttributeList_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HBoxCapMessage;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsList;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               RowMargin;                                         // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        ClampedAttributeCount;                             // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatsListWidget_C");
		return Clss;
	}

	void AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
	void ToggleClampedValueMessage(bool InShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void ExecuteUbergraph_StatsListWidget(int32 EntryPoint, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UStatsListItemWIdget_C* K2Node_DynamicCast_AsStats_List_Item_WIdget, bool K2Node_DynamicCast_bSuccess, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget, int32 K2Node_Event_AtIndex, bool CallFunc_RemoveChildAt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
