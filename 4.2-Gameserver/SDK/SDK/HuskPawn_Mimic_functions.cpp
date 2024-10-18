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


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMission*                CallFunc_GetMissionFromGuid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGen_Interact_UnregisterFocus_C*CallFunc_SetParams_ThisObject                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMimic_Mission_C*            K2Node_DynamicCast_AsMimic_Mission                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::KillPawnOnceTransformedToChest(const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, class AFortMission* CallFunc_GetMissionFromGuid_ReturnValue, class UGen_Interact_UnregisterFocus_C* CallFunc_SetParams_ThisObject, class AMimic_Mission_C* K2Node_DynamicCast_AsMimic_Mission, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue1)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "KillPawnOnceTransformedToChest");

	Params::AHuskPawn_Mimic_C_KillPawnOnceTransformedToChest_Params Parms;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_GetMissionFromGuid_ReturnValue = CallFunc_GetMissionFromGuid_ReturnValue;
	Parms.CallFunc_SetParams_ThisObject = CallFunc_SetParams_ThisObject;
	Parms.K2Node_DynamicCast_AsMimic_Mission = K2Node_DynamicCast_AsMimic_Mission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionGuid_ReturnValue1 = CallFunc_GetMissionGuid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void AHuskPawn_Mimic_C::BecomeChest(class AController* CallFunc_GetController_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "BecomeChest");

	Params::AHuskPawn_Mimic_C_BecomeChest_Params Parms;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_Mimic_C::BecomeChestIfConditionsSatisfied(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "BecomeChestIfConditionsSatisfied");

	Params::AHuskPawn_Mimic_C_BecomeChestIfConditionsSatisfied_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::InitMimic(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "InitMimic");

	Params::AHuskPawn_Mimic_C_InitMimic_Params Parms;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGen_Interact_UnregisterFocus_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::UserConstructionScript(class UGen_Interact_UnregisterFocus_C* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "UserConstructionScript");

	Params::AHuskPawn_Mimic_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "ReceiveBeginPlay");

	Params::AHuskPawn_Mimic_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AHuskPawn_Mimic_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "OnDeathPlayEffects");

	Params::AHuskPawn_Mimic_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::TryToBecomeChest()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "TryToBecomeChest");

	Params::AHuskPawn_Mimic_C_TryToBecomeChest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::Event_LastTimeDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "Event_LastTimeDamaged");

	Params::AHuskPawn_Mimic_C_Event_LastTimeDamaged_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::ReturnToSpawnAndBecomeChest()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "ReturnToSpawnAndBecomeChest");

	Params::AHuskPawn_Mimic_C_ReturnToSpawnAndBecomeChest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::ResetTimerForBecomingChest()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "ResetTimerForBecomingChest");

	Params::AHuskPawn_Mimic_C_ResetTimerForBecomingChest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "ReceivePossessed");

	Params::AHuskPawn_Mimic_C_ReceivePossessed_Params Parms;
	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::DisableRibbons()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "DisableRibbons");

	Params::AHuskPawn_Mimic_C_DisableRibbons_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_Mimic_C::EnableRibbons()
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "EnableRibbons");

	Params::AHuskPawn_Mimic_C_EnableRibbons_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// struct FVector                     CallFunc_GetSpawnLocation_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSpawnRotation_ReturnValue                            (IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetGoalActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_Mimic_C::ExecuteUbergraph_HuskPawn_Mimic(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AController* K2Node_Event_NewController, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_GetSpawnLocation_ReturnValue, const struct FRotator& CallFunc_GetSpawnRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetGoalActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("HuskPawn_Mimic_C", "ExecuteUbergraph_HuskPawn_Mimic");

	Params::AHuskPawn_Mimic_C_ExecuteUbergraph_HuskPawn_Mimic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue1 = CallFunc_GetBlackboard_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_GetSpawnLocation_ReturnValue = CallFunc_GetSpawnLocation_ReturnValue;
	Parms.CallFunc_GetSpawnRotation_ReturnValue = CallFunc_GetSpawnRotation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue1 = CallFunc_GetController_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_AIController1 = K2Node_DynamicCast_AsFort_AIController1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetGoalActor_ReturnValue = CallFunc_GetGoalActor_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
