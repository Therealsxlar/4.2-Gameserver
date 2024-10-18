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
// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C
class AGCNL_GM_OnLowHealth_Berzerker_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*              BodyMistFX;                                        // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GM_OnLowHealth_Berzerker_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, bool CallFunc_IsValid_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array1, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference1, bool CallFunc_IsValid_ReturnValue1);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
