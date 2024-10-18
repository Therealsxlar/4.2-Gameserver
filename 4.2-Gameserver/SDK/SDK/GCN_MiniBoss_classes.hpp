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

// 0x160 (0x580 - 0x420)
// BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C
class AGCN_MiniBoss_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UFortMiniMapComponent*                 MiniMapCrosshair;                                  // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_NPCCharacterTypeMiniBoss1P;                     // 0x430(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPCCharacterTypeMiniBoss4P;                     // 0x450(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          _4P_Color;                                         // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          _1P_Color;                                         // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>       VectorParameters;                                  // 0x490(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FName, float>                     ScalarParameters;                                  // 0x4E0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FString, class UParticleSystem*>  ElementalParticlesMap;                             // 0x530(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_MiniBoss_C");
		return Clss;
	}

	void OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent, const class FString& TagName, bool TagWasFound, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& K2Node_Select_Default, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void HideMiniBossGCN();
	void SetMiniBossGCNColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_MiniBoss(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
