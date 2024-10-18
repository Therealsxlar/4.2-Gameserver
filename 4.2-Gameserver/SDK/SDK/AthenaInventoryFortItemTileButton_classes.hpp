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

// 0x20 (0x8D8 - 0x8B8)
// WidgetBlueprintGeneratedClass AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C
class UAthenaInventoryFortItemTileButton_C : public UAthenaInventoryFortItemTileButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(Transient, DuplicateTransient)
	class UImage*                                DropTarget;                                        // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InputActionWrapper;                                // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemWidgetHolder;                                  // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryFortItemTileButton_C");
		return Clss;
	}

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ValidDrop, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UCommonInputContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FEventReply& CallFunc_DetectDrag_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue1);
	void UpdateInteractionWidgetVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UObject* CallFunc_GetListItemObject_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsEquipable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UAthenaInventoryDragDrop_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromPointerEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaInventoryDragVisual_C* CallFunc_Create_ReturnValue);
	void UpdateStyle();
	void BP_OnSelected();
	void ExecuteUbergraph_AthenaInventoryFortItemTileButton(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
