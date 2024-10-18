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

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass AthenaTeamCountSlot.AthenaTeamCountSlot_C
class UAthenaTeamCountSlot_C : public UCommonUserWidget
{
public:
	class URichTextBlock*                        TeamCount;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TeamName;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamCountSlot_C");
		return Clss;
	}

	void SetTeamSlotData(const struct FAthenaTeamCountSlotData& TeamSlotData, float DrawOpacity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
