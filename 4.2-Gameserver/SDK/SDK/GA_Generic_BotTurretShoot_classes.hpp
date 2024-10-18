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

// 0x18 (0x920 - 0x908)
// BlueprintGeneratedClass GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C
class UGA_Generic_BotTurretShoot_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          T_None;                                            // 0x910(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_RangeUpgrade1;                                   // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Generic_BotTurretShoot_C");
		return Clss;
	}

	void GetRangeTag(struct FGameplayTag* TargetTag, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue);
	struct FTransform GetCustomAbilitySourceTransform(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1);
	void Cancelled_A37C36084B41A1B49DD946A52CACDE45(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_A37C36084B41A1B49DD946A52CACDE45(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Generic_BotTurretShoot(int32 EntryPoint, const struct FGameplayTag& CallFunc_GetRangeTag_TargetTag, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
