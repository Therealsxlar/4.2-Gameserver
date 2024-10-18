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

// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass TravelLogTextItem.TravelLogTextItem_C
class UTravelLogTextItem_C : public UCommonUserWidget
{
public:
	class URichTextBlock*                        Text;                                              // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TravelLogTextItem_C");
		return Clss;
	}

	void SetText(class FText InText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
