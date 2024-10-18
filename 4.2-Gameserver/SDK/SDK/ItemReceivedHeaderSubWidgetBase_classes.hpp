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

// 0x31 (0x239 - 0x208)
// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
class UItemReceivedHeaderSubWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UFortGiftBoxItem*                      GiftBoxItem_BP;                                    // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                FromUserName_BP;                                   // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>     ItemDefs;                                          // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         bIsBattlePassUpgrade;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedHeaderSubWidgetBase_C");
		return Clss;
	}

	void InitFromGiftBoxItem_BP();
	void Construct();
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
