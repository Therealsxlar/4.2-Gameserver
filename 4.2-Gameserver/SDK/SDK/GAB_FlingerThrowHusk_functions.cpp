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


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CanActivate                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGAB_FlingerThrowHusk_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, bool CanActivate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue, bool CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "K2_CanActivateAbility");

	Params::UGAB_FlingerThrowHusk_C_K2_CanActivateAbility_Params Parms;
	Parms.ActorInfo = ActorInfo;
	Parms.CanActivate = CanActivate;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEncounterInfo_ReturnValue = CallFunc_GetEncounterInfo_ReturnValue;
	Parms.CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue = CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::Completed_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "Completed_B56594C44CE933A96A3E13BDCFC1097D");

	Params::UGAB_FlingerThrowHusk_C_Completed_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::Cancelled_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "Cancelled_B56594C44CE933A96A3E13BDCFC1097D");

	Params::UGAB_FlingerThrowHusk_C_Cancelled_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::Triggered_B56594C44CE933A96A3E13BDCFC1097D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "Triggered_B56594C44CE933A96A3E13BDCFC1097D");

	Params::UGAB_FlingerThrowHusk_C_Triggered_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerThrowHusk_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "K2_OnEndAbility");

	Params::UGAB_FlingerThrowHusk_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_FlingerThrowHusk_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "K2_ActivateAbility");

	Params::UGAB_FlingerThrowHusk_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerThrowHusk_C::CommitAndEndAbility()
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "CommitAndEndAbility");

	Params::UGAB_FlingerThrowHusk_C_CommitAndEndAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerThrowHusk_C::SpawnFX()
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "SpawnFX");

	Params::UGAB_FlingerThrowHusk_C_SpawnFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerThrowHusk_C::StopFX()
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "StopFX");

	Params::UGAB_FlingerThrowHusk_C_StopFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "OnEndPlay");

	Params::UGAB_FlingerThrowHusk_C_OnEndPlay_Params Parms;
	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.BindOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*                 Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::BindOnEndPlay(class AHuskPawn_C* Pawn)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "BindOnEndPlay");

	Params::UGAB_FlingerThrowHusk_C_BindOnEndPlay_Params Parms;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.UnbindOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*                 Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::UnbindOnEndPlay(class AHuskPawn_C* Pawn)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "UnbindOnEndPlay");

	Params::UGAB_FlingerThrowHusk_C_UnbindOnEndPlay_Params Parms;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable1                                            ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFireLocation_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetProjectileInitialValues_outProjectileSpeed           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileInitialValues_outSpawnDirection            (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetProjectileInitialValues_outProjectileGravity         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetProjectileInitialValues_HomingTarget                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFlingerPawn_C*              K2Node_DynamicCast_AsFlinger_Pawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetFireLocation_ReturnValue1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 CallFunc_SpawnAIPawnReservedForEnemySpawner_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHuskPawn_C*                 K2Node_DynamicCast_AsHusk_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_CustomEvent_EndPlayReason                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHuskPawn_C*                 K2Node_CustomEvent_Pawn1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AHuskPawn_C*                 K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerThrowHusk_C::ExecuteUbergraph_GAB_FlingerThrowHusk(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_GetFireLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetProjectileInitialValues_outProjectileSpeed, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection, float CallFunc_GetProjectileInitialValues_outProjectileGravity, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFlingerPawn_C* K2Node_DynamicCast_AsFlinger_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_GetFireLocation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue, bool CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue, class AFortAIPawn* CallFunc_SpawnAIPawnReservedForEnemySpawner_ReturnValue, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, class AHuskPawn_C* K2Node_CustomEvent_Pawn1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AHuskPawn_C* K2Node_CustomEvent_Pawn)
{
	static auto Func = Class->GetFunction("GAB_FlingerThrowHusk_C", "ExecuteUbergraph_GAB_FlingerThrowHusk");

	Params::UGAB_FlingerThrowHusk_C_ExecuteUbergraph_GAB_FlingerThrowHusk_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetFireLocation_ReturnValue = CallFunc_GetFireLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileSpeed = CallFunc_GetProjectileInitialValues_outProjectileSpeed;
	Parms.CallFunc_GetProjectileInitialValues_outSpawnDirection = CallFunc_GetProjectileInitialValues_outSpawnDirection;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileGravity = CallFunc_GetProjectileInitialValues_outProjectileGravity;
	Parms.CallFunc_GetProjectileInitialValues_HomingTarget = CallFunc_GetProjectileInitialValues_HomingTarget;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFlinger_Pawn = K2Node_DynamicCast_AsFlinger_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetFireLocation_ReturnValue1 = CallFunc_GetFireLocation_ReturnValue1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.CallFunc_GetEncounterInfo_ReturnValue = CallFunc_GetEncounterInfo_ReturnValue;
	Parms.CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue = CallFunc_EncounterHasReservedSpawnRequestForEnemySpawner_ReturnValue;
	Parms.CallFunc_SpawnAIPawnReservedForEnemySpawner_ReturnValue = CallFunc_SpawnAIPawnReservedForEnemySpawner_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn = K2Node_DynamicCast_AsHusk_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_EndPlayReason = K2Node_CustomEvent_EndPlayReason;
	Parms.K2Node_CustomEvent_Pawn1 = K2Node_CustomEvent_Pawn1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
