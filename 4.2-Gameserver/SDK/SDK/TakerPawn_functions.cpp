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


// Function TakerPawn.TakerPawn_C.StopMaterialTimeline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::StopMaterialTimeline(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "StopMaterialTimeline");

	Params::ATakerPawn_C_StopMaterialTimeline_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::StopDeathFX(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "StopDeathFX");

	Params::ATakerPawn_C_StopDeathFX_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerAirborneTest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPointOrTraceEndBelowTaker                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Airborne                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CapsuleTraceSingleForObjects_OutHit                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CapsuleTraceSingleForObjects_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::TakerAirborneTest(struct FVector* ImpactPointOrTraceEndBelowTaker, bool* Airborne, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerAirborneTest");

	Params::ATakerPawn_C_TakerAirborneTest_Params Parms;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_CapsuleTraceSingleForObjects_OutHit = CallFunc_CapsuleTraceSingleForObjects_OutHit;
	Parms.CallFunc_CapsuleTraceSingleForObjects_ReturnValue = CallFunc_CapsuleTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue1 = CallFunc_Subtract_VectorVector_ReturnValue1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactPointOrTraceEndBelowTaker != nullptr)
		*ImpactPointOrTraceEndBelowTaker = Parms.ImpactPointOrTraceEndBelowTaker;

	if (Airborne != nullptr)
		*Airborne = Parms.Airborne;

}


// Function TakerPawn.TakerPawn_C.SetTakerRotationRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              YawRate                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void ATakerPawn_C::SetTakerRotationRate(float YawRate, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "SetTakerRotationRate");

	Params::ATakerPawn_C_SetTakerRotationRate_Params Parms;
	Parms.YawRate = YawRate;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ResetTakerRotationRateToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::ResetTakerRotationRateToDefault()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ResetTakerRotationRateToDefault");

	Params::ATakerPawn_C_ResetTakerRotationRateToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnimMontage_LocalJumpToSectionName_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::OnRep_SoulSuckMontageSection(float CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AnimMontage_LocalJumpToSectionName_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnRep_SoulSuckMontageSection");

	Params::ATakerPawn_C_OnRep_SoulSuckMontageSection_Params Parms;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_AnimMontage_LocalJumpToSectionName_ReturnValue = CallFunc_AnimMontage_LocalJumpToSectionName_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.MarkForDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIDirector*             CallFunc_GetAIDirector_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayers_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::MarkForDeath(int32 Temp_int_Variable, class AFortAIDirector* CallFunc_GetAIDirector_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "MarkForDeath");

	Params::ATakerPawn_C_MarkForDeath_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAIDirector_ReturnValue = CallFunc_GetAIDirector_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetNumPlayers_ReturnValue = CallFunc_GetNumPlayers_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckEffectActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::OnRep_SoulSuckEffectActivated()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnRep_SoulSuckEffectActivated");

	Params::ATakerPawn_C_OnRep_SoulSuckEffectActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ApplyPortalEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Portal_Out_Direction                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    PortalRotation                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FVector                     BuildingCenter                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (IsPlainOldData, NoDestructor)
// class ABuildingWall*               K2Node_DynamicCast_AsBuilding_Wall                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCentroid_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::ApplyPortalEffect(class ABuildingActor* BuildingActor, const struct FVector& Portal_Out_Direction, const struct FRotator& PortalRotation, const struct FVector& BuildingCenter, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_GetCentroid_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Abs_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, float CallFunc_Abs_ReturnValue1, const struct FVector& CallFunc_GetComponentBounds_Origin1, const struct FVector& CallFunc_GetComponentBounds_BoxExtent1, float CallFunc_GetComponentBounds_SphereRadius1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ApplyPortalEffect");

	Params::ATakerPawn_C_ApplyPortalEffect_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.Portal_Out_Direction = Portal_Out_Direction;
	Parms.PortalRotation = PortalRotation;
	Parms.BuildingCenter = BuildingCenter;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Wall = K2Node_DynamicCast_AsBuilding_Wall;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_GetCentroid_ReturnValue = CallFunc_GetCentroid_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue1 = CallFunc_GetBuildingMeshComponent_ReturnValue1;
	Parms.CallFunc_Abs_ReturnValue1 = CallFunc_Abs_ReturnValue1;
	Parms.CallFunc_GetComponentBounds_Origin1 = CallFunc_GetComponentBounds_Origin1;
	Parms.CallFunc_GetComponentBounds_BoxExtent1 = CallFunc_GetComponentBounds_BoxExtent1;
	Parms.CallFunc_GetComponentBounds_SphereRadius1 = CallFunc_GetComponentBounds_SphereRadius1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ElementalEnum           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::UserConstructionScript(class UParticleSystem* Temp_object_Variable, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetScalarParameterValue_ReturnValue, enum class ElementalEnum Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UParticleSystem* K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "UserConstructionScript");

	Params::ATakerPawn_C_UserConstructionScript_Params Parms;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATakerPawn_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "Timeline_0__FinishedFunc");

	Params::ATakerPawn_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATakerPawn_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "Timeline_0__UpdateFunc");

	Params::ATakerPawn_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.Timeline_0__Spawn__EventFunc
// (BlueprintEvent)
// Parameters:

void ATakerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "Timeline_0__Spawn__EventFunc");

	Params::ATakerPawn_C_Timeline_0__Spawn__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATakerPawn_C::UpdateMaterialParamsTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "UpdateMaterialParamsTL__FinishedFunc");

	Params::ATakerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATakerPawn_C::UpdateMaterialParamsTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "UpdateMaterialParamsTL__UpdateFunc");

	Params::ATakerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MidPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LowWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MidWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FullWall                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WindowWall                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "MantleStart");

	Params::ATakerPawn_C_MantleStart_Params Parms;
	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::MantleEnd()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "MantleEnd");

	Params::ATakerPawn_C_MantleEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::HuskEvadeStart()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "HuskEvadeStart");

	Params::ATakerPawn_C_HuskEvadeStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpecialAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Soul_Suck                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "VerifyTakerAttack");

	Params::ATakerPawn_C_VerifyTakerAttack_Params Parms;
	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SoulSuckMelee                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ResetTakerSpecialAttackTimer");

	Params::ATakerPawn_C_ResetTakerSpecialAttackTimer_Params Parms;
	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BuildingPart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DesiredMoveLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerWallPortalBehavior");

	Params::ATakerPawn_C_TakerWallPortalBehavior_Params Parms;
	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Portal_Available_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "IsTakerWallPortalAvailable");

	Params::ATakerPawn_C_IsTakerWallPortalAvailable_Params Parms;
	Parms.Portal_Available_ = Portal_Available_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SuccessfulHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerAttackFSM");

	Params::ATakerPawn_C_TakerAttackFSM_Params Parms;
	Parms.SuccessfulHit = SuccessfulHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.PortalAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATakerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "PortalAdd");

	Params::ATakerPawn_C_PortalAdd_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::PortalClear()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "PortalClear");

	Params::ATakerPawn_C_PortalClear_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::TakerSoulSuckInterrupted()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerSoulSuckInterrupted");

	Params::ATakerPawn_C_TakerSoulSuckInterrupted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.PortalGet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                      BT                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "PortalGet");

	Params::ATakerPawn_C_PortalGet_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::PortalFX()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "PortalFX");

	Params::ATakerPawn_C_PortalFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Collide_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::PortalCollision(bool Collide_)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "PortalCollision");

	Params::ATakerPawn_C_PortalCollision_Params Parms;
	Parms.Collide_ = Collide_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATakerPawn_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ReceiveBeginPlay");

	Params::ATakerPawn_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::BeginTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "BeginTakerSwoopAttack");

	Params::ATakerPawn_C_BeginTakerSwoopAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::EndTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "EndTakerSwoopAttack");

	Params::ATakerPawn_C_EndTakerSwoopAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATakerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerSoulSuckSoundBegin");

	Params::ATakerPawn_C_TakerSoulSuckSoundBegin_Params Parms;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::TakerSoulSuckSoundEnd()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerSoulSuckSoundEnd");

	Params::ATakerPawn_C_TakerSoulSuckSoundEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.DoPortal
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PortalOutDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::DoPortal(class ABuildingActor* BuildingActor, const struct FVector& PortalOutDirection)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "DoPortal");

	Params::ATakerPawn_C_DoPortal_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.PortalOutDirection = PortalOutDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::TakerSoulSuckEffectOn()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerSoulSuckEffectOn");

	Params::ATakerPawn_C_TakerSoulSuckEffectOn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::TakerSoulSuckEffectOff()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "TakerSoulSuckEffectOff");

	Params::ATakerPawn_C_TakerSoulSuckEffectOff_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnDeathPlayEffects");

	Params::ATakerPawn_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature(class AFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature");

	Params::ATakerPawn_C_BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature_Params Parms;
	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATakerPawn_C::GameplayCue_Impact_Physical_Creature(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "GameplayCue.Impact.Physical.Creature");

	Params::ATakerPawn_C_GameplayCue_Impact_Physical_Creature_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ModifySwoopOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::ModifySwoopOverlap()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ModifySwoopOverlap");

	Params::ATakerPawn_C_ModifySwoopOverlap_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.StartOverlapBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::StartOverlapBox()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "StartOverlapBox");

	Params::ATakerPawn_C_StartOverlapBox_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.StopOverlapBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::StopOverlapBox()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "StopOverlapBox");

	Params::ATakerPawn_C_StopOverlapBox_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ATakerPawn_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnDamagePlayEffects");

	Params::ATakerPawn_C_OnDamagePlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::AdditiveHitReactDelay()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "AdditiveHitReactDelay");

	Params::ATakerPawn_C_AdditiveHitReactDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.SpawnDeathFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATakerPawn_C::SpawnDeathFX()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "SpawnDeathFX");

	Params::ATakerPawn_C_SpawnDeathFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.DoPortalFailsafe
// (Net, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingSMActor*>    ModifiedBuildings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                     PortalOutDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::DoPortalFailsafe(class ABuildingActor* BuildingActor, TArray<class ABuildingSMActor*>& ModifiedBuildings, const struct FVector& PortalOutDirection)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "DoPortalFailsafe");

	Params::ATakerPawn_C_DoPortalFailsafe_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.ModifiedBuildings = ModifiedBuildings;
	Parms.PortalOutDirection = PortalOutDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATakerPawn_C::OnBeginSleepEffects()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnBeginSleepEffects");

	Params::ATakerPawn_C_OnBeginSleepEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATakerPawn_C::OnEndSleepEffects()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnEndSleepEffects");

	Params::ATakerPawn_C_OnEndSleepEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATakerPawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ATakerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATakerPawn_C::OnStartedEncounterSpawn()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnStartedEncounterSpawn");

	Params::ATakerPawn_C_OnStartedEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATakerPawn_C::OnFinishedEncounterSpawn()
{
	static auto Func = Class->GetFunction("TakerPawn_C", "OnFinishedEncounterSpawn");

	Params::ATakerPawn_C_OnFinishedEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATakerPawn_C::GameplayCue_GameplayModifiers_OnLowHealth_Enrage(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "GameplayCue.GameplayModifiers.OnLowHealth.Enrage");

	Params::ATakerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATakerPawn_C::GameplayCue_Shield_Reapplied(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "GameplayCue.Shield.Reapplied");

	Params::ATakerPawn_C_GameplayCue_Shield_Reapplied_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATakerPawn_C::GameplayCue_Shield_Destroyed(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "GameplayCue.Shield.Destroyed");

	Params::ATakerPawn_C_GameplayCue_Shield_Destroyed_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATakerPawn_C::GameplayCue_Damage_Shielded(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "GameplayCue.Damage.Shielded");

	Params::ATakerPawn_C_GameplayCue_Damage_Shielded_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATakerPawn_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ReceivePossessed");

	Params::ATakerPawn_C_ReceivePossessed_Params Parms;
	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TakerPawn.TakerPawn_C.ExecuteUbergraph_TakerPawn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam1                              (IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_StartPos                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_MidPos                                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_EndPos                                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_LowWall                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_MidWall                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_FullWall                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WindowWall                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpecialAttack                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Swoop1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Soul_Suck                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Swoop                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SoulSuckMelee                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_BuildingPart                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*       K2Node_Event_Task                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_DesiredMoveLocation                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Debug                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal_Available_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SuccessfulHit                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingActor*              K2Node_Event_BuildingActor1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      K2Node_Event_BuildingActorList1                                  (ZeroConstructor, ReferenceParm)
// class ABuildingActor*              K2Node_Event_BuildingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      K2Node_Event_BuildingActorList                                   (ZeroConstructor, ReferenceParm)
// class AActor*                      K2Node_Event_BT                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collide_                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Rift_Portals_C*           K2Node_DynamicCast_AsB_Rift_Portals                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_CustomEvent_BuildingActor1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_PortalOutDirection1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags1                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum1                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext1                                      ()
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_ComponentBoundEvent_PlayerController                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters4                              (ContainsInstancedReference)
// struct FHitResult                  CallFunc_GetHitResult_ReturnValue                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_GetHitResult_ReturnValue1                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        CallFunc_GetFortPhysicalSurface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal2                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart2                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayLocalAnimMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetPawnMID_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam2                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam3                              (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_CustomEvent_BuildingActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingSMActor*>    K2Node_CustomEvent_ModifiedBuildings                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                     K2Node_CustomEvent_PortalOutDirection                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue1                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue3                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue4                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue2                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable5                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue6                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue7                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue5                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue3                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue6                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue4                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue8                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue9                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue7                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATakerPawn_C::ExecuteUbergraph_TakerPawn(int32 EntryPoint, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable2, bool Temp_bool_Has_Been_Initd_Variable1, bool Temp_bool_IsClosed_Variable1, const struct FLinearColor& Temp_struct_Variable3, bool Temp_bool_Variable2, bool CallFunc_HasAuthority_ReturnValue, const struct FLinearColor& Temp_struct_Variable4, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, class UParticleSystem* Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FVector& K2Node_Event_StartPos, const struct FVector& K2Node_Event_MidPos, const struct FVector& K2Node_Event_EndPos, bool K2Node_Event_LowWall, bool K2Node_Event_MidWall, bool K2Node_Event_FullWall, bool K2Node_Event_WindowWall, bool K2Node_Event_SpecialAttack, bool K2Node_Event_Swoop1, bool K2Node_Event_Soul_Suck, bool K2Node_Event_Portal1, bool K2Node_Event_Swoop, bool K2Node_Event_SoulSuckMelee, bool K2Node_Event_Portal, class AActor* K2Node_Event_BuildingPart, class UBTTask_BlueprintBase* K2Node_Event_Task, const struct FVector& K2Node_Event_DesiredMoveLocation, bool K2Node_Event_Debug, bool K2Node_Event_Portal_Available_, bool K2Node_Event_SuccessfulHit, class ABuildingActor* K2Node_Event_BuildingActor1, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList1, class ABuildingActor* K2Node_Event_BuildingActor, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList, class AActor* K2Node_Event_BT, bool K2Node_Event_Collide_, bool K2Node_Event_Success, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystem* Temp_object_Variable1, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class AB_Rift_Portals_C* K2Node_DynamicCast_AsB_Rift_Portals, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2, class ABuildingActor* K2Node_CustomEvent_BuildingActor1, const struct FVector& K2Node_CustomEvent_PortalOutDirection1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UParticleSystem* Temp_object_Variable2, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortPlayerController* K2Node_ComponentBoundEvent_PlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDedicatedServer_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, const struct FHitResult& CallFunc_GetHitResult_ReturnValue, const struct FHitResult& CallFunc_GetHitResult_ReturnValue1, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, class USoundBase* CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, float CallFunc_BreakHitResult_Distance2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AController* CallFunc_GetController_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, class UObject* CallFunc_GetValueAsObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess3, class UParticleSystem* Temp_object_Variable3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_K2_IsTimerActive_ReturnValue, class UParticleSystem* Temp_object_Variable4, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, float CallFunc_PlayLocalAnimMontage_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetPawnMID_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FVector& CallFunc_GetComponentBounds_Origin1, const struct FVector& CallFunc_GetComponentBounds_BoxExtent1, float CallFunc_GetComponentBounds_SphereRadius1, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_VSize_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue4, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Lerp_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, float CallFunc_VSize_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, enum class EPhysicalSurface Temp_byte_Variable, class UParticleSystem* K2Node_Select_Default, class ABuildingActor* K2Node_CustomEvent_BuildingActor, TArray<class ABuildingSMActor*>& K2Node_CustomEvent_ModifiedBuildings, const struct FVector& K2Node_CustomEvent_PortalOutDirection, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class ABuildingSMActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_IsValid_ReturnValue11, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue12, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess4, float CallFunc_Multiply_FloatFloat_ReturnValue6, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, float CallFunc_VSize_ReturnValue3, const struct FVector& CallFunc_Normal_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, bool CallFunc_IsDedicatedServer_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Greater_ByteByte_ReturnValue, const struct FTransform& Temp_struct_Variable5, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue3, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_IsValid_ReturnValue14, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, class AController* K2Node_Event_NewController, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, const struct FVector& CallFunc_GetVelocity_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue7, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue5, const struct FVector& CallFunc_GetVelocity_ReturnValue2, const struct FVector& CallFunc_Normal_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue6, const struct FVector& CallFunc_Normal_ReturnValue4, float CallFunc_VSize_ReturnValue4, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_MakeLiteralFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue8, float CallFunc_Divide_FloatFloat_ReturnValue6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue9, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue7, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_Abs_ReturnValue, float CallFunc_FClamp_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Divide_FloatFloat_ReturnValue7, float CallFunc_SelectFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue8, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult1)
{
	static auto Func = Class->GetFunction("TakerPawn_C", "ExecuteUbergraph_TakerPawn");

	Params::ATakerPawn_C_ExecuteUbergraph_TakerPawn_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.K2Node_MakeStruct_ParticleSysParam1 = K2Node_MakeStruct_ParticleSysParam1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.K2Node_Event_StartPos = K2Node_Event_StartPos;
	Parms.K2Node_Event_MidPos = K2Node_Event_MidPos;
	Parms.K2Node_Event_EndPos = K2Node_Event_EndPos;
	Parms.K2Node_Event_LowWall = K2Node_Event_LowWall;
	Parms.K2Node_Event_MidWall = K2Node_Event_MidWall;
	Parms.K2Node_Event_FullWall = K2Node_Event_FullWall;
	Parms.K2Node_Event_WindowWall = K2Node_Event_WindowWall;
	Parms.K2Node_Event_SpecialAttack = K2Node_Event_SpecialAttack;
	Parms.K2Node_Event_Swoop1 = K2Node_Event_Swoop1;
	Parms.K2Node_Event_Soul_Suck = K2Node_Event_Soul_Suck;
	Parms.K2Node_Event_Portal1 = K2Node_Event_Portal1;
	Parms.K2Node_Event_Swoop = K2Node_Event_Swoop;
	Parms.K2Node_Event_SoulSuckMelee = K2Node_Event_SoulSuckMelee;
	Parms.K2Node_Event_Portal = K2Node_Event_Portal;
	Parms.K2Node_Event_BuildingPart = K2Node_Event_BuildingPart;
	Parms.K2Node_Event_Task = K2Node_Event_Task;
	Parms.K2Node_Event_DesiredMoveLocation = K2Node_Event_DesiredMoveLocation;
	Parms.K2Node_Event_Debug = K2Node_Event_Debug;
	Parms.K2Node_Event_Portal_Available_ = K2Node_Event_Portal_Available_;
	Parms.K2Node_Event_SuccessfulHit = K2Node_Event_SuccessfulHit;
	Parms.K2Node_Event_BuildingActor1 = K2Node_Event_BuildingActor1;
	Parms.K2Node_Event_BuildingActorList1 = K2Node_Event_BuildingActorList1;
	Parms.K2Node_Event_BuildingActor = K2Node_Event_BuildingActor;
	Parms.K2Node_Event_BuildingActorList = K2Node_Event_BuildingActorList;
	Parms.K2Node_Event_BT = K2Node_Event_BT;
	Parms.K2Node_Event_Collide_ = K2Node_Event_Collide_;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue1 = CallFunc_MakeLiteralName_ReturnValue1;
	Parms.K2Node_DynamicCast_AsB_Rift_Portals = K2Node_DynamicCast_AsB_Rift_Portals;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue1 = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2 = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2;
	Parms.K2Node_CustomEvent_BuildingActor1 = K2Node_CustomEvent_BuildingActor1;
	Parms.K2Node_CustomEvent_PortalOutDirection1 = K2Node_CustomEvent_PortalOutDirection1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_Event_Damage1 = K2Node_Event_Damage1;
	Parms.K2Node_Event_DamageTags1 = K2Node_Event_DamageTags1;
	Parms.K2Node_Event_Momentum1 = K2Node_Event_Momentum1;
	Parms.K2Node_Event_HitInfo1 = K2Node_Event_HitInfo1;
	Parms.K2Node_Event_InstigatedBy1 = K2Node_Event_InstigatedBy1;
	Parms.K2Node_Event_DamageCauser1 = K2Node_Event_DamageCauser1;
	Parms.K2Node_Event_EffectContext1 = K2Node_Event_EffectContext1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_ComponentBoundEvent_PlayerController = K2Node_ComponentBoundEvent_PlayerController;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.K2Node_GameplayCueEvent_EventType4 = K2Node_GameplayCueEvent_EventType4;
	Parms.K2Node_GameplayCueEvent_Parameters4 = K2Node_GameplayCueEvent_Parameters4;
	Parms.CallFunc_GetHitResult_ReturnValue = CallFunc_GetHitResult_ReturnValue;
	Parms.CallFunc_GetHitResult_ReturnValue1 = CallFunc_GetHitResult_ReturnValue1;
	Parms.CallFunc_GetFortPhysicalSurface_ReturnValue = CallFunc_GetFortPhysicalSurface_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit1 = CallFunc_BreakHitResult_bBlockingHit1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap1 = CallFunc_BreakHitResult_bInitialOverlap1;
	Parms.CallFunc_BreakHitResult_Time1 = CallFunc_BreakHitResult_Time1;
	Parms.CallFunc_BreakHitResult_Distance1 = CallFunc_BreakHitResult_Distance1;
	Parms.CallFunc_BreakHitResult_Location1 = CallFunc_BreakHitResult_Location1;
	Parms.CallFunc_BreakHitResult_ImpactPoint1 = CallFunc_BreakHitResult_ImpactPoint1;
	Parms.CallFunc_BreakHitResult_Normal1 = CallFunc_BreakHitResult_Normal1;
	Parms.CallFunc_BreakHitResult_ImpactNormal1 = CallFunc_BreakHitResult_ImpactNormal1;
	Parms.CallFunc_BreakHitResult_PhysMat1 = CallFunc_BreakHitResult_PhysMat1;
	Parms.CallFunc_BreakHitResult_HitActor1 = CallFunc_BreakHitResult_HitActor1;
	Parms.CallFunc_BreakHitResult_HitComponent1 = CallFunc_BreakHitResult_HitComponent1;
	Parms.CallFunc_BreakHitResult_HitBoneName1 = CallFunc_BreakHitResult_HitBoneName1;
	Parms.CallFunc_BreakHitResult_HitItem1 = CallFunc_BreakHitResult_HitItem1;
	Parms.CallFunc_BreakHitResult_FaceIndex1 = CallFunc_BreakHitResult_FaceIndex1;
	Parms.CallFunc_BreakHitResult_TraceStart1 = CallFunc_BreakHitResult_TraceStart1;
	Parms.CallFunc_BreakHitResult_TraceEnd1 = CallFunc_BreakHitResult_TraceEnd1;
	Parms.CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue = CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit2 = CallFunc_BreakHitResult_bBlockingHit2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap2 = CallFunc_BreakHitResult_bInitialOverlap2;
	Parms.CallFunc_BreakHitResult_Time2 = CallFunc_BreakHitResult_Time2;
	Parms.CallFunc_BreakHitResult_Distance2 = CallFunc_BreakHitResult_Distance2;
	Parms.CallFunc_BreakHitResult_Location2 = CallFunc_BreakHitResult_Location2;
	Parms.CallFunc_BreakHitResult_ImpactPoint2 = CallFunc_BreakHitResult_ImpactPoint2;
	Parms.CallFunc_BreakHitResult_Normal2 = CallFunc_BreakHitResult_Normal2;
	Parms.CallFunc_BreakHitResult_ImpactNormal2 = CallFunc_BreakHitResult_ImpactNormal2;
	Parms.CallFunc_BreakHitResult_PhysMat2 = CallFunc_BreakHitResult_PhysMat2;
	Parms.CallFunc_BreakHitResult_HitActor2 = CallFunc_BreakHitResult_HitActor2;
	Parms.CallFunc_BreakHitResult_HitComponent2 = CallFunc_BreakHitResult_HitComponent2;
	Parms.CallFunc_BreakHitResult_HitBoneName2 = CallFunc_BreakHitResult_HitBoneName2;
	Parms.CallFunc_BreakHitResult_HitItem2 = CallFunc_BreakHitResult_HitItem2;
	Parms.CallFunc_BreakHitResult_FaceIndex2 = CallFunc_BreakHitResult_FaceIndex2;
	Parms.CallFunc_BreakHitResult_TraceStart2 = CallFunc_BreakHitResult_TraceStart2;
	Parms.CallFunc_BreakHitResult_TraceEnd2 = CallFunc_BreakHitResult_TraceEnd2;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetController_ReturnValue1 = CallFunc_GetController_ReturnValue1;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_GetBlackboard_ReturnValue1 = CallFunc_GetBlackboard_ReturnValue1;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_IsTimerActive_ReturnValue = CallFunc_K2_IsTimerActive_ReturnValue;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;
	Parms.CallFunc_PlayLocalAnimMontage_ReturnValue = CallFunc_PlayLocalAnimMontage_ReturnValue;
	Parms.CallFunc_GetPawnMID_ReturnValue = CallFunc_GetPawnMID_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue1 = CallFunc_Subtract_VectorVector_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetComponentBounds_Origin1 = CallFunc_GetComponentBounds_Origin1;
	Parms.CallFunc_GetComponentBounds_BoxExtent1 = CallFunc_GetComponentBounds_BoxExtent1;
	Parms.CallFunc_GetComponentBounds_SphereRadius1 = CallFunc_GetComponentBounds_SphereRadius1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_Subtract_VectorVector_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue1 = CallFunc_VSize_ReturnValue1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue5 = CallFunc_Divide_FloatFloat_ReturnValue5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_FClamp_ReturnValue1 = CallFunc_FClamp_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue3 = CallFunc_Subtract_VectorVector_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue2 = CallFunc_VSize_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.K2Node_MakeStruct_ParticleSysParam2 = K2Node_MakeStruct_ParticleSysParam2;
	Parms.K2Node_MakeStruct_ParticleSysParam3 = K2Node_MakeStruct_ParticleSysParam3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_BuildingActor = K2Node_CustomEvent_BuildingActor;
	Parms.K2Node_CustomEvent_ModifiedBuildings = K2Node_CustomEvent_ModifiedBuildings;
	Parms.K2Node_CustomEvent_PortalOutDirection = K2Node_CustomEvent_PortalOutDirection;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue3 = CallFunc_SpawnEmitterAttached_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue4 = CallFunc_SpawnEmitterAttached_ReturnValue4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue2 = CallFunc_GetSocketLocation_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue1 = CallFunc_Conv_VectorToLinearColor_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue3 = CallFunc_GetSocketLocation_ReturnValue3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Multiply_FloatFloat_ReturnValue6;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue4 = CallFunc_Subtract_VectorVector_ReturnValue4;
	Parms.CallFunc_Normal_ReturnValue1 = CallFunc_Normal_ReturnValue1;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue3 = CallFunc_VSize_ReturnValue3;
	Parms.CallFunc_Normal_ReturnValue2 = CallFunc_Normal_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue3 = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue3;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue6 = CallFunc_K2_GetActorLocation_ReturnValue6;
	Parms.CallFunc_GetVelocity_ReturnValue1 = CallFunc_GetVelocity_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue7 = CallFunc_K2_GetActorLocation_ReturnValue7;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue5 = CallFunc_Subtract_VectorVector_ReturnValue5;
	Parms.CallFunc_GetVelocity_ReturnValue2 = CallFunc_GetVelocity_ReturnValue2;
	Parms.CallFunc_Normal_ReturnValue3 = CallFunc_Normal_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue6 = CallFunc_Subtract_VectorVector_ReturnValue6;
	Parms.CallFunc_Normal_ReturnValue4 = CallFunc_Normal_ReturnValue4;
	Parms.CallFunc_VSize_ReturnValue4 = CallFunc_VSize_ReturnValue4;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Multiply_FloatFloat_ReturnValue7;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Multiply_FloatFloat_ReturnValue8;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue1 = CallFunc_MakeLiteralFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue2 = CallFunc_MakeLiteralFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue8 = CallFunc_K2_GetActorLocation_ReturnValue8;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue6 = CallFunc_Divide_FloatFloat_ReturnValue6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue9 = CallFunc_K2_GetActorLocation_ReturnValue9;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue7 = CallFunc_Subtract_VectorVector_ReturnValue7;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue3 = CallFunc_FClamp_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue9 = CallFunc_Multiply_FloatFloat_ReturnValue9;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue7 = CallFunc_Divide_FloatFloat_ReturnValue7;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue8 = CallFunc_Divide_FloatFloat_ReturnValue8;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult1 = CallFunc_K2_SetRelativeLocation_SweepHitResult1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
