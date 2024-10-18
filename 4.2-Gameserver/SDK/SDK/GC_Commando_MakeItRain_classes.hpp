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
// BlueprintGeneratedClass GC_Commando_MakeItRain.GC_Commando_MakeItRain_C
class AGC_Commando_MakeItRain_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*              Spawned_Looping;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Commando_MakeItRain_C");
		return Clss;
	}

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActive_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnRemove_ReturnValue);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
