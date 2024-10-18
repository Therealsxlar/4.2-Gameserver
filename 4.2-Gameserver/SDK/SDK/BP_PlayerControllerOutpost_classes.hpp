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

// 0x19 (0x1929 - 0x1910)
// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1910(0x8)(Transient, DuplicateTransient)
	class AOutpostStructureBase*                 NewVar_0;                                          // 0x1918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOutpostStructureBase*                 NewVar_1;                                          // 0x1920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetHelp;                                           // 0x1928(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerControllerOutpost_C");
		return Clss;
	}

	void UserConstructionScript();
	void ServerStartExpandingOutpost(bool GetHelp);
	void ExecuteUbergraph_BP_PlayerControllerOutpost(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_GetHelp);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
