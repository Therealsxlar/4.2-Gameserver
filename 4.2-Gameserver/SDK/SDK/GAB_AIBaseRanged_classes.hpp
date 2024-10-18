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
// BlueprintGeneratedClass GAB_AIBaseRanged.GAB_AIBaseRanged_C
class UGAB_AIBaseRanged_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	class AActor*                                CurrentAIAbilityTarget;                            // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastThrowTime;                                     // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceLastThrowToResetThrowCount;               // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  ProjectileSpeedDifficultyCurve;                    // 0x920(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AIBaseRanged_C");
		return Clss;
	}

	void Completed_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag);
	void IncreaseAccuracyAndUpdateLastThrowTime();
	void ExecuteUbergraph_GAB_AIBaseRanged(int32 EntryPoint, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& K2Node_Event_ApplicationTag, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetFireLocation_ReturnValue, float CallFunc_GetProjectileInitialValues_outProjectileSpeed, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection, float CallFunc_GetProjectileInitialValues_outProjectileGravity, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameDifficulty_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_GetProjectileInitialValues_outProjectileSpeed1, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection1, float CallFunc_GetProjectileInitialValues_outProjectileGravity1, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
