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

// 0x28 (0x930 - 0x908)
// BlueprintGeneratedClass GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C
class UGAB_FlingerThrowHusk_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	class AFlingerPawn_C*                        FlingerPawn;                                       // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHuskPawn_C*                           HuskHeldByFlinger;                                 // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_FlingerGrabNPC;                                 // 0x920(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_NPCRangedThrow;                                 // 0x928(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_FlingerThrowHusk_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, bool CanActivate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue, bool CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Completed_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void CommitAndEndAbility();
	void SpawnFX();
	void StopFX();
	void OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void BindOnEndPlay(class AHuskPawn_C* Pawn);
	void UnbindOnEndPlay(class AHuskPawn_C* Pawn);
	void ExecuteUbergraph_GAB_FlingerThrowHusk(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_GetFireLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetProjectileInitialValues_outProjectileSpeed, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection, float CallFunc_GetProjectileInitialValues_outProjectileGravity, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFlingerPawn_C* K2Node_DynamicCast_AsFlinger_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_GetFireLocation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue, bool CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue, class AFortAIPawn* CallFunc_SpawnAIPawnReservedForEnemySpawner_ReturnValue, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, class AHuskPawn_C* K2Node_CustomEvent_Pawn1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AHuskPawn_C* K2Node_CustomEvent_Pawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
