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

// 0x8 (0x240 - 0x238)
// WidgetBlueprintGeneratedClass AthenaKillFeedItem.AthenaKillFeedItem_C
class UAthenaKillFeedItem_C : public UFortHUDElementWidget
{
public:
	class URichTextBlock*                        KillText;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaKillFeedItem_C");
		return Clss;
	}

	void SetText(class FText Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
