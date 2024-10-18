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

// 0xF0 (0x460 - 0x370)
// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C
class ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_BuildingPreview;                                // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Building;                                          // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPointDist;                                     // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              YawOffset;                                         // 0x39C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              LastYawOffset;                                     // 0x3A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               GridSnapPosition;                                  // 0x3B4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastGridSnapPosition;                              // 0x3C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            GridSnapSound;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                CardinalDirection;                                 // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets;                       // 0x3E0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               DoorTraceOffsetHigh;                               // 0x430(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DoorTraceOffsetLow;                                // 0x43C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         b_HitTerrain;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BuildingPreviewMesh;                               // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           BuildingPreviewMeshUnderground;                    // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ProjectileTrajectory_Athena_SnapToGridArrow_C");
		return Clss;
	}

	void HandleGridSnapUpdates(const struct FVector& NewLocation, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GridSnap_Float_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Abs_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, TArray<struct FHitResult>& CallFunc_BoxTraceMulti_OutHits, bool CallFunc_BoxTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Normal_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable1, class USplineMeshComponent* CallFunc_Array_Get_Item4, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue2, const struct FVector& CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
