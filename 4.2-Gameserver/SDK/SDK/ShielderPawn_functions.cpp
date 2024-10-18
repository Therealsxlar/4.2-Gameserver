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


// Function ShielderPawn.ShielderPawn_C.SpawnSuperShielderBGA
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddActorWorldOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_SuperShielder_Shield_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::SpawnSuperShielderBGA(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABGA_SuperShielder_Shield_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "SpawnSuperShielderBGA");

	Params::AShielderPawn_C_SpawnSuperShielderBGA_Params Parms;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue1 = CallFunc_Subtract_VectorVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AddActorWorldOffset_SweepHitResult = CallFunc_K2_AddActorWorldOffset_SweepHitResult;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.RemoveShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RemoveShieldFrom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::RemoveShield(class AActor* RemoveShieldFrom, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "RemoveShield");

	Params::AShielderPawn_C_RemoveShield_Params Parms;
	Parms.RemoveShieldFrom = RemoveShieldFrom;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "Orphaned");

	Params::AShielderPawn_C_Orphaned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}


// Function ShielderPawn.ShielderPawn_C.SetMiniMapIconStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::SetMiniMapIconStatus(bool CallFunc_BooleanAND_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "SetMiniMapIconStatus");

	Params::AShielderPawn_C_SetMiniMapIconStatus_Params Parms;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnRep_bShieldApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::OnRep_bShieldApplied(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, bool CallFunc_IsDead_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, bool CallFunc_IsDead_ReturnValue1)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnRep_bShieldApplied");

	Params::AShielderPawn_C_OnRep_bShieldApplied_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_IsDead_ReturnValue1 = CallFunc_IsDead_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.UpdateShieldFXVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::UpdateShieldFXVisibility(bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "UpdateShieldFXVisibility");

	Params::AShielderPawn_C_UpdateShieldFXVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ApplyShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ApplyShieldToThisActor                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDifficultyLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_ForwardGameplayCueToTarget_TargetCueInterface1_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDifficultyLevel_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateCurveTableRow_OutXY1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           ()
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_AssignSetByCallerMagnitude_ReturnValue                  ()
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveGameplayEffectStackCount_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::ApplyShield(class AActor* ApplyShieldToThisActor, float CallFunc_GetDifficultyLevel_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, UInterfaceProperty_ CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput, UInterfaceProperty_ CallFunc_ForwardGameplayCueToTarget_TargetCueInterface1_CastInput, float CallFunc_GetDifficultyLevel_ReturnValue1, bool Temp_bool_Variable, float CallFunc_EvaluateCurveTableRow_OutXY1, bool CallFunc_EvaluateCurveTableRow_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* K2Node_Select_Default, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ApplyShield");

	Params::AShielderPawn_C_ApplyShield_Params Parms;
	Parms.ApplyShieldToThisActor = ApplyShieldToThisActor;
	Parms.CallFunc_GetDifficultyLevel_ReturnValue = CallFunc_GetDifficultyLevel_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput = CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput;
	Parms.CallFunc_ForwardGameplayCueToTarget_TargetCueInterface1_CastInput = CallFunc_ForwardGameplayCueToTarget_TargetCueInterface1_CastInput;
	Parms.CallFunc_GetDifficultyLevel_ReturnValue1 = CallFunc_GetDifficultyLevel_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY1 = CallFunc_EvaluateCurveTableRow_OutXY1;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue1 = CallFunc_EvaluateCurveTableRow_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue1 = CallFunc_GetAbilitySystemComponent_ReturnValue1;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AssignSetByCallerMagnitude_ReturnValue = CallFunc_AssignSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_GetActiveGameplayEffectStackCount_ReturnValue = CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.GameTimeString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Float_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void AShielderPawn_C::GameTimeString(class FString* NewParam, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_BuildString_Float_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "GameTimeString");

	Params::AShielderPawn_C_GameTimeString_Params Parms;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_BuildString_Float_ReturnValue = CallFunc_BuildString_Float_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderSpringArm
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCapsuleComponent*           MeshCapsule                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::OnRep_ShielderSpringArm(class UCapsuleComponent* MeshCapsule, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnRep_ShielderSpringArm");

	Params::AShielderPawn_C_OnRep_ShielderSpringArm_Params Parms;
	Parms.MeshCapsule = MeshCapsule;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.DebugLineAndSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Line                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                LineColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sphere                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                SphereColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VisibilityOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::DebugLineAndSphere(bool Line, const struct FLinearColor& LineColor, bool Sphere, const struct FLinearColor& SphereColor, float VisibilityOffset, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "DebugLineAndSphere");

	Params::AShielderPawn_C_DebugLineAndSphere_Params Parms;
	Parms.Line = Line;
	Parms.LineColor = LineColor;
	Parms.Sphere = Sphere;
	Parms.SphereColor = SphereColor;
	Parms.VisibilityOffset = VisibilityOffset;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue1 = CallFunc_MakeLiteralFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::OnRep_ShielderVisible(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnRep_ShielderVisible");

	Params::AShielderPawn_C_OnRep_ShielderVisible_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AttachShielderToSpringArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::AttachShielderToSpringArm(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AttachShielderToSpringArm");

	Params::AShielderPawn_C_AttachShielderToSpringArm_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AttachSpringArmToAttachPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddActorWorldOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFlingerPawn_C*              K2Node_DynamicCast_AsFlinger_Pawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATakerPawn_C*                K2Node_DynamicCast_AsTaker_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface1_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASmasherPawn_C*              K2Node_DynamicCast_AsSmasher_Pawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHuskPawn_C*                 K2Node_DynamicCast_AsHusk_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::AttachSpringArmToAttachPawn(bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, class AFlingerPawn_C* K2Node_DynamicCast_AsFlinger_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, UInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface1_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue1, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess2, class AHuskPawn_C* K2Node_DynamicCast_AsHusk_Pawn, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AttachSpringArmToAttachPawn");

	Params::AShielderPawn_C_AttachSpringArmToAttachPawn_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AddActorWorldOffset_SweepHitResult = CallFunc_K2_AddActorWorldOffset_SweepHitResult;
	Parms.K2Node_DynamicCast_AsFlinger_Pawn = K2Node_DynamicCast_AsFlinger_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsTaker_Pawn = K2Node_DynamicCast_AsTaker_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface1_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface1_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue1 = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue1;
	Parms.K2Node_DynamicCast_AsSmasher_Pawn = K2Node_DynamicCast_AsSmasher_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsHusk_Pawn = K2Node_DynamicCast_AsHusk_Pawn;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "UserConstructionScript");

	Params::AShielderPawn_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderPawn_C::InterpShielderToNewLocation__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "InterpShielderToNewLocation__FinishedFunc");

	Params::AShielderPawn_C_InterpShielderToNewLocation__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderPawn_C::InterpShielderToNewLocation__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "InterpShielderToNewLocation__UpdateFunc");

	Params::AShielderPawn_C_InterpShielderToNewLocation__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.RotateShielder__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderPawn_C::RotateShielder__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "RotateShielder__FinishedFunc");

	Params::AShielderPawn_C_RotateShielder__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.RotateShielder__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderPawn_C::RotateShielder__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "RotateShielder__UpdateFunc");

	Params::AShielderPawn_C_RotateShielder__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnStunned
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::OnStunned()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnStunned");

	Params::AShielderPawn_C_OnStunned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AShielderPawn_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnDamageServer");

	Params::AShielderPawn_C_OnDamageServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnKnockedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::OnKnockedback()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnKnockedback");

	Params::AShielderPawn_C_OnKnockedback_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AShielderPawn_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ReceiveBeginPlay");

	Params::AShielderPawn_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AShielderPawn_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnDeathServer");

	Params::AShielderPawn_C_OnDeathServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ShielderAttachComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::ShielderAttachComplete()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ShielderAttachComplete");

	Params::AShielderPawn_C_ShielderAttachComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnEncounterEnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*        Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 SpawnedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnEncounterEnemySpawned");

	Params::AShielderPawn_C_OnEncounterEnemySpawned_Params Parms;
	Parms.Encounter = Encounter;
	Parms.SpawnedEnemy = SpawnedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.SetShielderOrphanStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Orphaned                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GiveZVelocityOnDetach                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AShielderPawn_C::SetShielderOrphanStatus(bool Orphaned, bool GiveZVelocityOnDetach, const class FString& Reason)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "SetShielderOrphanStatus");

	Params::AShielderPawn_C_SetShielderOrphanStatus_Params Parms;
	Parms.Orphaned = Orphaned;
	Parms.GiveZVelocityOnDetach = GiveZVelocityOnDetach;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnComponentBeginOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AShielderPawn_C::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnComponentBeginOverlap");

	Params::AShielderPawn_C_OnComponentBeginOverlap_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.VerifyPotentialAttachPawnIsValidAndAttachToIt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PotentialAttachPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HiddenAttach                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::VerifyPotentialAttachPawnIsValidAndAttachToIt(class AFortPawn* PotentialAttachPawn, bool HiddenAttach)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "VerifyPotentialAttachPawnIsValidAndAttachToIt");

	Params::AShielderPawn_C_VerifyPotentialAttachPawnIsValidAndAttachToIt_Params Parms;
	Parms.PotentialAttachPawn = PotentialAttachPawn;
	Parms.HiddenAttach = HiddenAttach;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.GrabRandomPotentialAttachPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HiddenAttach                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::GrabRandomPotentialAttachPawn(bool HiddenAttach)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "GrabRandomPotentialAttachPawn");

	Params::AShielderPawn_C_GrabRandomPotentialAttachPawn_Params Parms;
	Parms.HiddenAttach = HiddenAttach;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AttachShielderToPotentialAttachPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::AttachShielderToPotentialAttachPawn()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AttachShielderToPotentialAttachPawn");

	Params::AShielderPawn_C_AttachShielderToPotentialAttachPawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.BindEncounterSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::BindEncounterSpawn()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "BindEncounterSpawn");

	Params::AShielderPawn_C_BindEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ReApplyShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::ReApplyShield()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ReApplyShield");

	Params::AShielderPawn_C_ReApplyShield_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.UnBindEncounterSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::UnBindEncounterSpawn()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "UnBindEncounterSpawn");

	Params::AShielderPawn_C_UnBindEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OnComponentEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OnComponentEndOverlap");

	Params::AShielderPawn_C_OnComponentEndOverlap_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ShielderShieldBroken
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::ShielderShieldBroken()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ShielderShieldBroken");

	Params::AShielderPawn_C_ShielderShieldBroken_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AnimateSpringArm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::AnimateSpringArm()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AnimateSpringArm");

	Params::AShielderPawn_C_AnimateSpringArm_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AttachPawnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Despawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderPawn_C::AttachPawnDead(bool Despawn)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AttachPawnDead");

	Params::AShielderPawn_C_AttachPawnDead_Params Parms;
	Parms.Despawn = Despawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.OrphanForceKillTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::OrphanForceKillTimer()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "OrphanForceKillTimer");

	Params::AShielderPawn_C_OrphanForceKillTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.BindProxOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::BindProxOverlap()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "BindProxOverlap");

	Params::AShielderPawn_C_BindProxOverlap_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.UnBindProxOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::UnBindProxOverlap()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "UnBindProxOverlap");

	Params::AShielderPawn_C_UnBindProxOverlap_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.InterpShielderToSpringArm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::InterpShielderToSpringArm()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "InterpShielderToSpringArm");

	Params::AShielderPawn_C_InterpShielderToSpringArm_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.RotateShielderForward
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::RotateShielderForward()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "RotateShielderForward");

	Params::AShielderPawn_C_RotateShielderForward_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::AdditiveHitReactDelay()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "AdditiveHitReactDelay");

	Params::AShielderPawn_C_AdditiveHitReactDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.InvisibleOrphanTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::InvisibleOrphanTick()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "InvisibleOrphanTick");

	Params::AShielderPawn_C_InvisibleOrphanTick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderPawn_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ReceiveEndPlay");

	Params::AShielderPawn_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderPawn_C::PostSpawnIn()
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "PostSpawnIn");

	Params::AShielderPawn_C_PostSpawnIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderPawn.ShielderPawn_C.ExecuteUbergraph_ShielderPawn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags1                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum1                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext1                                      ()
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable                                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class AShielderSpringArm_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        K2Node_CustomEvent_Encounter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_CustomEvent_SpawnedEnemy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Orphaned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_GiveZVelocityOnDetach                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Reason                                        (ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromSweep                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_SweepResult                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_CustomEvent_PotentialAttachPawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HiddenAttach1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HiddenAttach                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Despawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class AFortPawn*>           CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPawn*>           CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        CallFunc_GetEncounterInfo_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue2                                (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue1                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue2                        (IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue3                                (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// UInterfaceProperty_                CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue4                                (NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UTextRenderComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDrawDebugTrace         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// enum class EDrawDebugTrace         Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDrawDebugTrace         K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UInterfaceProperty_                CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortAbilitySetHandle       CallFunc_EquipFortAbilitySet_ReturnValue                         (ContainsInstancedReference)
// class AActor*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_CapsuleTraceSingle_OutHit                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CapsuleTraceSingle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AShielderPawn_C::ExecuteUbergraph_ShielderPawn(int32 EntryPoint, bool Temp_bool_Variable, class AFortPawn* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AController* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, const struct FRotator& Temp_struct_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AShielderSpringArm_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& Temp_struct_Variable1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class AFortPawn* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue1, const struct FRotator& Temp_struct_Variable2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue2, class UFortAIEncounterInfo* K2Node_CustomEvent_Encounter, class AFortAIPawn* K2Node_CustomEvent_SpawnedEnemy, bool CallFunc_IsDead_ReturnValue1, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Orphaned, bool K2Node_CustomEvent_GiveZVelocityOnDetach, const class FString& K2Node_CustomEvent_Reason, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent1, class AActor* K2Node_CustomEvent_OtherActor1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp1, int32 K2Node_CustomEvent_OtherBodyIndex1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class AFortPawn* K2Node_CustomEvent_PotentialAttachPawn, bool K2Node_CustomEvent_HiddenAttach1, bool K2Node_CustomEvent_HiddenAttach, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FRotator& Temp_struct_Variable3, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FRotator& Temp_struct_Variable4, bool CallFunc_Greater_FloatFloat_ReturnValue1, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetGameTimeSinceCreation_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsDead_ReturnValue2, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue1, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, const struct FRotator& Temp_struct_Variable5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue4, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, const struct FRotator& K2Node_Select_Default, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool CallFunc_HasAuthority_ReturnValue5, bool K2Node_CustomEvent_Despawn, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue9, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue6, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsDead_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, TArray<class AFortPawn*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue2, TArray<class AFortPawn*>& CallFunc_GetAllActorsOfClass_OutActors1, bool CallFunc_Less_IntInt_ReturnValue, class AFortPawn* CallFunc_Array_Get_Item2, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue3, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_AddUnique_ReturnValue1, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue2, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDead_ReturnValue4, float CallFunc_GetGameTimeSinceCreation_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue7, bool CallFunc_HasAuthority_ReturnValue8, int32 Temp_int_Array_Index_Variable1, class AFortPawn* CallFunc_Array_Get_Item3, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess5, int32 CallFunc_Array_AddUnique_ReturnValue2, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue1, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2, bool K2Node_DynamicCast_bSuccess6, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue3, bool CallFunc_EqualEqual_GuidGuid_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn2, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsDead_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, float CallFunc_GetGameTimeSinceCreation_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue9, bool CallFunc_Less_FloatFloat_ReturnValue1, bool Temp_bool_Variable1, bool CallFunc_HasAuthority_ReturnValue10, bool CallFunc_HasAuthority_ReturnValue11, bool CallFunc_HasAuthority_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue2, class AFortPawn* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue11, class UFortAIEncounterInfo* CallFunc_GetEncounterInfo_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue2, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsDead_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue6, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, UInterfaceProperty_ CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput, float CallFunc_Subtract_FloatFloat_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue4, bool CallFunc_IsDead_ReturnValue7, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_IsValid_ReturnValue12, bool Temp_bool_Variable3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDead_ReturnValue8, bool CallFunc_IsDead_ReturnValue9, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue3, enum class EDrawDebugTrace Temp_byte_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue, enum class EDrawDebugTrace Temp_byte_Variable1, bool Temp_bool_Variable4, bool CallFunc_IsValid_ReturnValue13, enum class EDrawDebugTrace K2Node_Select1_Default, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UInterfaceProperty_ CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput, const struct FFortAbilitySetHandle& CallFunc_EquipFortAbilitySet_ReturnValue, class AActor* K2Node_Select2_Default, bool Temp_bool_Variable5, class AActor* K2Node_Select3_Default, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess8, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum3_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue1, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn3, bool K2Node_DynamicCast_bSuccess9, const struct FHitResult& CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue, bool CallFunc_IsDead_ReturnValue10, bool CallFunc_Not_PreBool_ReturnValue7, bool CallFunc_Not_PreBool_ReturnValue8, const struct FRotator& CallFunc_RLerp_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("ShielderPawn_C", "ExecuteUbergraph_ShielderPawn");

	Params::AShielderPawn_C_ExecuteUbergraph_ShielderPawn_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEncounterInfo_ReturnValue = CallFunc_GetEncounterInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Damage1 = K2Node_Event_Damage1;
	Parms.K2Node_Event_DamageTags1 = K2Node_Event_DamageTags1;
	Parms.K2Node_Event_Momentum1 = K2Node_Event_Momentum1;
	Parms.K2Node_Event_HitInfo1 = K2Node_Event_HitInfo1;
	Parms.K2Node_Event_InstigatedBy1 = K2Node_Event_InstigatedBy1;
	Parms.K2Node_Event_DamageCauser1 = K2Node_Event_DamageCauser1;
	Parms.K2Node_Event_EffectContext1 = K2Node_Event_EffectContext1;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.K2Node_CustomEvent_Encounter = K2Node_CustomEvent_Encounter;
	Parms.K2Node_CustomEvent_SpawnedEnemy = K2Node_CustomEvent_SpawnedEnemy;
	Parms.CallFunc_IsDead_ReturnValue1 = CallFunc_IsDead_ReturnValue1;
	Parms.K2Node_DynamicCast_AsShielder_Pawn = K2Node_DynamicCast_AsShielder_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Orphaned = K2Node_CustomEvent_Orphaned;
	Parms.K2Node_CustomEvent_GiveZVelocityOnDetach = K2Node_CustomEvent_GiveZVelocityOnDetach;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.K2Node_CustomEvent_OverlappedComponent1 = K2Node_CustomEvent_OverlappedComponent1;
	Parms.K2Node_CustomEvent_OtherActor1 = K2Node_CustomEvent_OtherActor1;
	Parms.K2Node_CustomEvent_OtherComp1 = K2Node_CustomEvent_OtherComp1;
	Parms.K2Node_CustomEvent_OtherBodyIndex1 = K2Node_CustomEvent_OtherBodyIndex1;
	Parms.K2Node_CustomEvent_bFromSweep = K2Node_CustomEvent_bFromSweep;
	Parms.K2Node_CustomEvent_SweepResult = K2Node_CustomEvent_SweepResult;
	Parms.K2Node_CustomEvent_PotentialAttachPawn = K2Node_CustomEvent_PotentialAttachPawn;
	Parms.K2Node_CustomEvent_HiddenAttach1 = K2Node_CustomEvent_HiddenAttach1;
	Parms.K2Node_CustomEvent_HiddenAttach = K2Node_CustomEvent_HiddenAttach;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1 = CallFunc_GetGameTimeInSeconds_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue = CallFunc_GetGameTimeSinceCreation_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsDead_ReturnValue2 = CallFunc_IsDead_ReturnValue2;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue = CallFunc_GetTeamAffiliation_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEncounterInfo_ReturnValue1 = CallFunc_GetEncounterInfo_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_OverlappedComponent = K2Node_CustomEvent_OverlappedComponent;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_OtherBodyIndex = K2Node_CustomEvent_OtherBodyIndex;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.K2Node_CustomEvent_Despawn = K2Node_CustomEvent_Despawn;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue6 = CallFunc_HasAuthority_ReturnValue6;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue3 = CallFunc_IsDead_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.CallFunc_GetEncounterInfo_ReturnValue2 = CallFunc_GetEncounterInfo_ReturnValue2;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.K2Node_DynamicCast_AsShielder_Pawn1 = K2Node_DynamicCast_AsShielder_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue4 = CallFunc_IsDead_ReturnValue4;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue1 = CallFunc_GetGameTimeSinceCreation_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_HasAuthority_ReturnValue7 = CallFunc_HasAuthority_ReturnValue7;
	Parms.CallFunc_HasAuthority_ReturnValue8 = CallFunc_HasAuthority_ReturnValue8;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_DynamicCast_AsFort_AIPawn1 = K2Node_DynamicCast_AsFort_AIPawn1;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_Array_AddUnique_ReturnValue2 = CallFunc_Array_AddUnique_ReturnValue2;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue1 = CallFunc_GetTeamAffiliation_ReturnValue1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue1 = CallFunc_HasMatchingGameplayTag_ReturnValue1;
	Parms.CallFunc_GetEncounterInfo_ReturnValue3 = CallFunc_GetEncounterInfo_ReturnValue3;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue1 = CallFunc_EqualEqual_GuidGuid_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_DynamicCast_AsShielder_Pawn2 = K2Node_DynamicCast_AsShielder_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue5 = CallFunc_IsDead_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue2 = CallFunc_GetGameTimeSinceCreation_ReturnValue2;
	Parms.CallFunc_HasAuthority_ReturnValue9 = CallFunc_HasAuthority_ReturnValue9;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_HasAuthority_ReturnValue10 = CallFunc_HasAuthority_ReturnValue10;
	Parms.CallFunc_HasAuthority_ReturnValue11 = CallFunc_HasAuthority_ReturnValue11;
	Parms.CallFunc_HasAuthority_ReturnValue12 = CallFunc_HasAuthority_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue2 = CallFunc_HasMatchingGameplayTag_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_GetEncounterInfo_ReturnValue4 = CallFunc_GetEncounterInfo_ReturnValue4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
	Parms.CallFunc_K2_SetTimer_ReturnValue2 = CallFunc_K2_SetTimer_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue1 = CallFunc_K2_GetActorRotation_ReturnValue1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue2 = CallFunc_K2_GetActorRotation_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_IsDead_ReturnValue6 = CallFunc_IsDead_ReturnValue6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.CallFunc_K2_SetTimer_ReturnValue3 = CallFunc_K2_SetTimer_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput = CallFunc_ForwardGameplayCueToTarget_TargetCueInterface_CastInput;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_K2_SetTimer_ReturnValue4 = CallFunc_K2_SetTimer_ReturnValue4;
	Parms.CallFunc_IsDead_ReturnValue7 = CallFunc_IsDead_ReturnValue7;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue2 = CallFunc_GetTeamAffiliation_ReturnValue2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsDead_ReturnValue8 = CallFunc_IsDead_ReturnValue8;
	Parms.CallFunc_IsDead_ReturnValue9 = CallFunc_IsDead_ReturnValue9;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue1 = CallFunc_K2_SetActorRotation_ReturnValue1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput = CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput;
	Parms.CallFunc_EquipFortAbilitySet_ReturnValue = CallFunc_EquipFortAbilitySet_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue3 = CallFunc_GetTeamAffiliation_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.K2Node_DynamicCast_AsShielder_Pawn3 = K2Node_DynamicCast_AsShielder_Pawn3;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_CapsuleTraceSingle_OutHit = CallFunc_CapsuleTraceSingle_OutHit;
	Parms.CallFunc_CapsuleTraceSingle_ReturnValue = CallFunc_CapsuleTraceSingle_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue10 = CallFunc_IsDead_ReturnValue10;
	Parms.CallFunc_Not_PreBool_ReturnValue7 = CallFunc_Not_PreBool_ReturnValue7;
	Parms.CallFunc_Not_PreBool_ReturnValue8 = CallFunc_Not_PreBool_ReturnValue8;
	Parms.CallFunc_RLerp_ReturnValue1 = CallFunc_RLerp_ReturnValue1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
