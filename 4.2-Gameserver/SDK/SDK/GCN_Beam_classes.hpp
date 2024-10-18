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

// 0x4 (0x84 - 0x80)
// BlueprintGeneratedClass GCN_Beam.GCN_Beam_C
class UGCN_Beam_C : public UFortGameplayCueNotify_Simple
{
public:
	float                                        MaxBeamLength;                                     // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Beam_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsInstigatorLocallyControlled_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, bool CallFunc_OnExecute_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, class USoundBase* Temp_object_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* Temp_object_Variable1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool Temp_bool_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class USoundBase* K2Node_Select_Default, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, bool Temp_bool_Variable1, float CallFunc_Divide_FloatFloat_ReturnValue, class USoundBase* K2Node_Select1_Default, const struct FVector& CallFunc_MakeVector_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
