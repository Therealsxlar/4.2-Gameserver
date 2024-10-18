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

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass ItemInspectCycleWidget.ItemInspectCycleWidget_C
class UItemInspectCycleWidget_C : public UFortItemInspectCycleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      RightPulse;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      LeftPulse;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LeftButton;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RightButton;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectCycleWidget_C");
		return Clss;
	}

	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem);
	void ExecuteUbergraph_ItemInspectCycleWidget(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* K2Node_Event_OldItem, class UFortItem* K2Node_Event_NewItem, int32 K2Node_Event_OffsetFromPreviousItem, bool CallFunc_Less_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
