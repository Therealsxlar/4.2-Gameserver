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

// 0x94 (0x75C - 0x6C8)
// BlueprintGeneratedClass B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C
class AB_Prj_Athena_PopupGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BaseDestination;                                   // 0x6E8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        WallPieces;                                        // 0x6F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                       LocationOffsets;                                   // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                      Rotations;                                         // 0x718(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       P_BuildBuilding;                                   // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GridExplosionOffset;                               // 0x740(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x750(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x754(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x758(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_PopupGrenade_C");
		return Clss;
	}

	void GetGridActors(struct FVector& WorldLocation, TArray<class ABuildingSMActor*>* GridActors1, const TArray<class ABuildingSMActor*>& GridActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, const struct FBuildingGridActorFilter& K2Node_MakeStruct_BuildingGridActorFilter, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, class UBuildingStructuralSupportSystem* CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem, const struct FBuildingNeighboringActorInfo& CallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell, bool CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FNeighboringCenterCellInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, const struct FNeighboringFloorInfo& CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, const struct FNeighboringWallInfo& CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2);
	void CreateBase(const struct FVector& A, class AActor* CallFunc_GetOwner_ReturnValue, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess);
	void SetBaseDestination(struct FHitResult& Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue1, float CallFunc_GridSnap_Float_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnStop(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Athena_PopupGrenade(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GridSnap_Float_ReturnValue2, const struct FHitResult& K2Node_Event_Hit1, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, TArray<class ABuildingSMActor*>& CallFunc_GetGridActors_GridActors1, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class ABuildingStairs* K2Node_DynamicCast_AsBuilding_Stairs, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
