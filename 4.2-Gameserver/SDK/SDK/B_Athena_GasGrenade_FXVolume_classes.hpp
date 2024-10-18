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

// 0xD8 (0x400 - 0x328)
// BlueprintGeneratedClass B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C
class AB_Athena_GasGrenade_FXVolume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_GasGrenade_InnerSmoke;                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcessComponent;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PostProcessParentShape;                            // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_ReleaseSmoke;                                // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SmokeVolumeMesh;                                   // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeSmokeTL_Float_025E191F4B87AB9F397708B9AE320879; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeSmokeTL__Direction_025E191F4B87AB9F397708B9AE320879; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeSmokeTL;                                       // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 SmokePP;                                           // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasGrenadeLifespan;                                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        GasGrenadeRadius;                                  // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPawn*                             Pawn;                                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SmokeVolumeMeshMID;                                // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasFadeValue;                                      // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasFadeInTime;                                     // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasFadeOutTime;                                    // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasDelayBeforeFadeIn;                              // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdjustedDistanceValue;                             // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousAdjustedDistanceValue;                     // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PPEndFadeRadius;                                   // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PPStartFadeRadius;                                 // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TickDistanceCheckInterval;                         // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousScopeValue;                                // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScopeStateSwappedTime;                             // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              PPGainColorMorning;                                // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              PPGainColorDay;                                    // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              PPGainColorEvening;                                // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              PPGainColorNight;                                  // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_GasGrenade_FXVolume_C");
		return Clss;
	}

	void DistanceFromPlayerToPPVolumeCenter(float* Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
	void GetPlayerPawn(TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void AdjustedDistanceFromPlayerToPPVolumeCenter(float ScopeStateSwappedTime, float* DistanceOut, bool* bPlayerIsUsingScope, float DistanceLerpSpeed, float DistanceScopedLocalVariable, bool PlayerIsUsingScope, float DistanceLocalVariable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool Temp_bool_Variable, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue1);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
	void FadeSmokeTL__FinishedFunc();
	void FadeSmokeTL__UpdateFunc();
	void ReceiveBeginPlay();
	void FadeIn();
	void FadeOut();
	void ExecuteUbergraph_B_Athena_GasGrenade_FXVolume(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable1, float Temp_float_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Select1_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Variable2, float K2Node_Select2_Default, float CallFunc_Divide_FloatFloat_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
