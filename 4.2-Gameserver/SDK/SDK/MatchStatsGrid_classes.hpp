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

// 0x8 (0x210 - 0x208)
// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
class UMatchStatsGrid_C : public UUserWidget
{
public:
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x208(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchStatsGrid_C");
		return Clss;
	}

	void SetStats(class UAthenaMatchStatView* AthenaMatchStats);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
