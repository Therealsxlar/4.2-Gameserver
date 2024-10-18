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

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C
class AGCL_Carmine_Jump_Trails_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_Carmine_Jump_Trails_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_GCL_Carmine_Jump_Trails(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
