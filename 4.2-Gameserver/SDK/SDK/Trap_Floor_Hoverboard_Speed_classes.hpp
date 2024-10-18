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

// 0x50 (0xD00 - 0xCB0)
// BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
class ATrap_Floor_Hoverboard_Speed_C : public ABuildingTrapFloor_Hoverboard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB0(0x8)(Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_SpeedBoost_Idle;                                 // 0xCC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger;                                           // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene1;                                            // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Placed_Sound;                                 // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Ready_Sound;                                  // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound;                                   // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Reload_Sound;                                 // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Explode_Sound;                                // 0xCF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Floor_Hoverboard_Speed_C");
		return Clss;
	}

	bool BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& Touching, bool bTouchingIsAlreadyLaunched);
	void UserConstructionScript();
	void OnPlaced();
	void OnOutOfDurability();
	void OnFinishedBuilding();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_TriggerIfAppropriate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
