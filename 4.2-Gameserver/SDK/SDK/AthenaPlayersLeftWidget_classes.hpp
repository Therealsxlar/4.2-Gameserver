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

// 0x18 (0x268 - 0x250)
// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
class UAthenaPlayersLeftWidget_C : public UAthenaPlayersLeftBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UImage*                                PlayersImage;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        PlayersLeftText;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayersLeftWidget_C");
		return Clss;
	}

	void SetPlayersLeftText(class FText& PlayersText);
	void ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint, class FText K2Node_Event_PlayersText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
