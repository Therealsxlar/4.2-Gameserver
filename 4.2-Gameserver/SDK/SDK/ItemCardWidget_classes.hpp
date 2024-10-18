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

// 0x5C (0x8E4 - 0x888)
// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
class UItemCardWidget_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Show;                                              // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortMultiSizeItemCard_0;                           // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnHoveredEvent;                                    // 0x8A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortReceivedItemLootInfo             ItemReceivedInfo_BP;                               // 0x8B0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USoundBase*                            SoundOnItemCardShow;                               // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cscs;                                              // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemCardWidget_C");
		return Clss;
	}

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnCentered();
	void PlayShow(int32 Idx);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void Construct();
	void ExecuteUbergraph_ItemCardWidget(int32 EntryPoint, int32 K2Node_CustomEvent_Idx, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
