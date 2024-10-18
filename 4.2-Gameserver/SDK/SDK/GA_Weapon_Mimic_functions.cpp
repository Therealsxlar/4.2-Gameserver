#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.SetupBottleRocket
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Spawn_Location                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Spawn_Rotation                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecHolder_Explosion                                                 (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecBottleRocket_Explosion                                           (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue1            ()
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAimLocationNearestPawn_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_Mimic_C::SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetAimLocationNearestPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "SetupBottleRocket");

	Params::UGA_Weapon_Mimic_C_SetupBottleRocket_Params Parms;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetAimLocationNearestPawn_ReturnValue = CallFunc_GetAimLocationNearestPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawn_Location != nullptr)
		*Spawn_Location = Parms.Spawn_Location;

	if (Spawn_Rotation != nullptr)
		*Spawn_Rotation = Parms.Spawn_Rotation;

	if (Holder_Explosion != nullptr)
		*Holder_Explosion = Parms.Holder_Explosion;

	if (BottleRocket_Explosion != nullptr)
		*BottleRocket_Explosion = Parms.BottleRocket_Explosion;

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Destroyed_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Destroyed_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Destroyed_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Destroyed_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Exploded_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Exploded_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Exploded_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Exploded_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Stopped_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Stopped_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Stopped_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Stopped_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Bounced_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Bounced_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Bounced_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Bounced_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Touched_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Touched_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Touched_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Touched_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Created_B3D1CBD84767EEBE300B609957138606
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_Mimic_C::Created_B3D1CBD84767EEBE300B609957138606(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Created_B3D1CBD84767EEBE300B609957138606");

	Params::UGA_Weapon_Mimic_C_Created_B3D1CBD84767EEBE300B609957138606_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Completed_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_Mimic_C::Completed_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Completed_43984B0A46B0D598E56025AEA6D640D0");

	Params::UGA_Weapon_Mimic_C_Completed_43984B0A46B0D598E56025AEA6D640D0_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Cancelled_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_Mimic_C::Cancelled_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Cancelled_43984B0A46B0D598E56025AEA6D640D0");

	Params::UGA_Weapon_Mimic_C_Cancelled_43984B0A46B0D598E56025AEA6D640D0_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Triggered_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_Mimic_C::Triggered_43984B0A46B0D598E56025AEA6D640D0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "Triggered_43984B0A46B0D598E56025AEA6D640D0");

	Params::UGA_Weapon_Mimic_C_Triggered_43984B0A46B0D598E56025AEA6D640D0_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Weapon_Mimic_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "K2_ActivateAbility");

	Params::UGA_Weapon_Mimic_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.ExecuteUbergraph_GA_Weapon_Mimic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData4                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData3                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData2                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData1                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData                                (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        Temp_struct_Variable                                             (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable1                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable2                                            ()
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData5                               (ConstParm, ContainsInstancedReference)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SetupBottleRocket_Spawn_Location                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SetupBottleRocket_Spawn_Rotation                        (IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecCallFunc_SetupBottleRocket_Holder_Explosion                      ()
// struct FFortGameplayEffectContainerSpecCallFunc_SetupBottleRocket_BottleRocket_Explosion                ()
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_SpawnProjectileAndWait*CallFunc_SpawnProjectileAndWait_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Weapon_Mimic_C::ExecuteUbergraph_GA_Weapon_Mimic(int32 EntryPoint, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayTag& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_SetupBottleRocket_Spawn_Location, const struct FRotator& CallFunc_SetupBottleRocket_Spawn_Rotation, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_Holder_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_BottleRocket_Explosion, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_K2_CommitAbility_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_Weapon_Mimic_C", "ExecuteUbergraph_GA_Weapon_Mimic");

	Params::UGA_Weapon_Mimic_C_ExecuteUbergraph_GA_Weapon_Mimic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ProjectileData4 = K2Node_CustomEvent_ProjectileData4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ProjectileData3 = K2Node_CustomEvent_ProjectileData3;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_ProjectileData2 = K2Node_CustomEvent_ProjectileData2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_ProjectileData1 = K2Node_CustomEvent_ProjectileData1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_ProjectileData = K2Node_CustomEvent_ProjectileData;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.K2Node_CustomEvent_ProjectileData5 = K2Node_CustomEvent_ProjectileData5;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetupBottleRocket_Spawn_Location = CallFunc_SetupBottleRocket_Spawn_Location;
	Parms.CallFunc_SetupBottleRocket_Spawn_Rotation = CallFunc_SetupBottleRocket_Spawn_Rotation;
	Parms.CallFunc_SetupBottleRocket_Holder_Explosion = CallFunc_SetupBottleRocket_Holder_Explosion;
	Parms.CallFunc_SetupBottleRocket_BottleRocket_Explosion = CallFunc_SetupBottleRocket_BottleRocket_Explosion;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_SpawnProjectileAndWait_ReturnValue = CallFunc_SpawnProjectileAndWait_ReturnValue;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue1 = CallFunc_K2_CommitAbility_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
