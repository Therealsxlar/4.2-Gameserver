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

// 0x30 (0x960 - 0x930)
// BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C
class UGAB_FlingerRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x930(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ThrowFX;                                           // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ThrowFXTemplate;                                   // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FlingerMesh;                                       // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_NPCRangedGrab;                                  // 0x950(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_NPCRangedThrow;                                 // 0x958(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_FlingerRanged_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void SpawnFX();
	void StopFX();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_FlingerRanged(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
