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

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
class UGen_Interact_UnregisterFocus_C : public UFortMissionEventParams
{
public:
	class AActor*                                ActorToUnregister;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Gen_Interact_UnregisterFocus_C");
		return Clss;
	}

	void BreakParams(class AActor** ActorToUnregisterRegister);
	void SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
