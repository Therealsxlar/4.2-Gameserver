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

// 0x24 (0x25C - 0x238)
// WidgetBlueprintGeneratedClass AthenaPickupStream.AthenaPickupStream_C
class UAthenaPickupStream_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PickupMessages;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUIMessageManager*                 MessageManager;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_Displayed_Items;                               // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPickupStream_C");
		return Clss;
	}

	void HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item);
	void TryGetNextItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumDisplayedItems_ReturnValue, class UFortUIMessageItemWidget* CallFunc_GetNextMessageInQueue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleItemPickup(class UFortWorldItem* NewItem, int32 Count, class FText CallFunc_GetDisplayName_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortUIMessageItemWidget* CallFunc_AddMessageItem_ReturnValue, class UAthenaPickupMessageItem_C* K2Node_DynamicCast_AsAthena_Pickup_Message_Item, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_AthenaPickupStream(int32 EntryPoint, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_GetMessageManager_bCreatedNew, class UFortUIMessageManager* CallFunc_GetMessageManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
