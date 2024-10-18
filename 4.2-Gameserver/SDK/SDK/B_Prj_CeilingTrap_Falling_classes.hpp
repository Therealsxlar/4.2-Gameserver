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

// 0x41 (0x711 - 0x6D0)
// BlueprintGeneratedClass B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C
class AB_Prj_CeilingTrap_Falling_C : public AFortProjectileFallingTrap
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   MeshTypes;                                         // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bActive;                                           // 0x6F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5398[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrevBounceLocation;                                // 0x6F4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinBounceDistanceSquared;                          // 0x700(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PrevBounceTime;                                    // 0x704(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinBounceTime;                                     // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinVelocitySquared;                                // 0x70C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExploded;                                         // 0x710(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_CeilingTrap_Falling_C");
		return Clss;
	}

	void OnRep_bExploded(bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	struct FVector RandomDirection(const struct FVector& InVec, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(const TArray<class UStaticMesh*>& Tires, TArray<class UStaticMesh*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnBounce(struct FHitResult& Hit);
	void Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BindOverlap();
	void ReceiveBeginPlay();
	void CheckTireDestruction(const struct FVector& CurrentVelocity);
	void DestroyTire();
	void ExecuteUbergraph_B_Prj_CeilingTrap_Falling(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess1, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& K2Node_CustomEvent_CurrentVelocity, float CallFunc_VSizeSquared_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_RandomDirection_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue1, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Dot_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
