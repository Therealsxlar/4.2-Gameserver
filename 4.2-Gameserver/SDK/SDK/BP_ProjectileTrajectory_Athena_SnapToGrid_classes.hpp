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

// 0x54 (0x3C4 - 0x370)
// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGrid.BP_ProjectileTrajectory_Athena_SnapToGrid_C
class ABP_ProjectileTrajectory_Athena_SnapToGrid_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Wall1;                                             // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Ceiling;                                           // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Floor;                                             // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wall4;                                             // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wall3;                                             // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wall2;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Building;                                          // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPointDist;                                     // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ProjectileTrajectory_Athena_SnapToGrid_C");
		return Clss;
	}

	void UserConstructionScript();
	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGrid(int32 EntryPoint, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item3, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable1, class USplineMeshComponent* CallFunc_Array_Get_Item4, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue2, const struct FVector& CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
