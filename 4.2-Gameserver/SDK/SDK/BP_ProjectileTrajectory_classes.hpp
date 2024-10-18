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

// 0x48 (0x370 - 0x328)
// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Target;                                            // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMeshCount;                                      // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_424D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              SplineMID;                                         // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SplineFadeDistance;                                // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SplineFadeStartDistance;                           // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ProjectileTrajectory_C");
		return Clss;
	}

	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, float LastPointDist, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item3, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue1, const struct FVector& CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue2);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetTrajectoryFromNative(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
