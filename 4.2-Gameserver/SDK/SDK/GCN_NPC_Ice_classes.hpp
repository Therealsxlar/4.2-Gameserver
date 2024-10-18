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

// 0x60 (0x480 - 0x420)
// BlueprintGeneratedClass GCN_NPC_Ice.GCN_NPC_Ice_C
class AGCN_NPC_Ice_C : public AFortGameplayCueNotify_Looping
{
public:
	float                                        TransitionOutLength;                               // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              IceParticles;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>       VectorParameters;                                  // 0x430(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_NPC_Ice_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_GetVisualEffectQuality_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
