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

// 0x41 (0x949 - 0x908)
// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	int32                                        SquadSlotIndex;                                    // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3502[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSquadSlotSelected;                               // 0x918(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSquadSlotUpdated;                                // 0x928(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSquadSlotOpened;                                 // 0x938(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortItemCardSize                 SlottedItemCardSize;                               // 0x948(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExpeditionSquadSlotButton_C");
		return Clss;
	}

	void Get_Squad_Data(class FName* OutSquadId, int32* OutSquadSlotIndex, TArray<enum class EFortItemType>* ItemTypes, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_IsValid_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item);
	void PreConstruct(bool IsDesignTime);
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void BP_OnSelected();
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void Construct();
	void Destruct();
	void Open_Squad_Slot(int32 SquadSlotIndex);
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int32 EntryPoint, enum class EFortItemCardSize Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, class UClass* Temp_class_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue1, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue1, bool K2Node_ComponentBoundEvent_bIsOpen, class UClass* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, int32 K2Node_CustomEvent_SquadSlotIndex, bool CallFunc_IsSquadSlotLockedBP_ReturnValue);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
