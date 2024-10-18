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

// 0x18 (0x438 - 0x420)
// BlueprintGeneratedClass GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C
class AGCL_Carmine_Jump_Dive_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	enum class ETimelineDirection                DiveTrailUpdate__Direction_B66364034F77F774B1B73FA0DCEE7236; // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DiveTrailUpdate;                                   // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_Carmine_Jump_Dive_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnStopParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters);
	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	void DiveTrailUpdate__FinishedFunc();
	void DiveTrailUpdate__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GCL_Carmine_Jump_Dive(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
