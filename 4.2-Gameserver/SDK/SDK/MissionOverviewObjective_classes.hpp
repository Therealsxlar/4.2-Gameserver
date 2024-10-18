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

// 0x48 (0x258 - 0x210)
// WidgetBlueprintGeneratedClass MissionOverviewObjective.MissionOverviewObjective_C
class UMissionOverviewObjective_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Description;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Heading;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HeadingText;                                       // 0x228(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  DescriptionText;                                   // 0x240(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionOverviewObjective_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_MissionOverviewObjective(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
