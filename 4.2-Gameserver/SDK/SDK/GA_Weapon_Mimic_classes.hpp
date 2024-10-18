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

// 0x218 (0xB20 - 0x908)
// BlueprintGeneratedClass GA_Weapon_Mimic.GA_Weapon_Mimic_C
class UGA_Weapon_Mimic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	float                                        Default_Duration;                                  // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Duration;                                    // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x918(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_AutomatedDefenses;                              // 0x9C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                B_Prj_Mimic_Chest;                                 // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Prj_BR_HolderSpeed;                                // 0x9F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Prj_BR_Holder_Gravity;                             // 0x9F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventActivation;                                   // 0x9F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xA00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_BottleRocket_Explode;                           // 0xA08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          M_ThrowDown;                                       // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IFFCoding;                                         // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LifeTime;                                          // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_BottleRocketHolder_Explode;                     // 0xA20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          NewVar;                                            // 0xA28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       P_MuzzleFlash;                                     // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Muzzle;                                         // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          NewVar0;                                           // 0xA50(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                NewVar1;                                           // 0xA68(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Weapon_Mimic_C");
		return Clss;
	}

	void SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetAimLocationNearestPawn_ReturnValue);
	void Destroyed_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Exploded_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Stopped_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Bounced_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Touched_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Created_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData);
	void Completed_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Weapon_Mimic(int32 EntryPoint, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_SetupBottleRocket_Spawn_Location, const struct FRotator& CallFunc_SetupBottleRocket_Spawn_Rotation, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_Holder_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_BottleRocket_Explosion, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_K2_CommitAbility_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
