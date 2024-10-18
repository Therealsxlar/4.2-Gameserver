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

// 0x84 (0x4A4 - 0x420)
// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
class AGCL_BoostJumpPack_FuelRegen_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	float                                        FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FullBlinkTimeline;                                 // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnedParticleEmitter;                            // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFuelRechargeAudioEnabled;                         // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardThrustMax;                                   // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LateralThrustMax;                                  // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardAccelerationMax;                             // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LateralAccelerationMax;                            // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentUpwardVelocity;                             // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuelMax;                                           // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetFuelVolumeMultiplier;                        // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFuelVolumeMultiplier;                       // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelRecharged;                              // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelChargeRamp;                             // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedFuelRecharge;                               // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JetpackActivatedTime;                              // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuelRechargeRampVolumeMultiplier;                  // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FuelRechargeRampVolumeCurve;                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OnFuelRechargeRamp_Comp;                           // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReserveFuelMax;                                    // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_FuelRegen_C");
		return Clss;
	}

	float GetReserveFuel(const struct FGameplayAttribute& ReserveFuelAttribute, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue);
	void GetReserveFuelPercent(float* FuelPercent, float CallFunc_GetReserveFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	float GetFuel(const struct FGameplayAttribute& FuelAttribute, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue);
	void SetFuelRechargeAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1);
	void GetFuelPercent(float* FuelPercent, float CallFunc_GetFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void CacheAttributes(const struct FGameplayAttribute& ReserveMaxFuelAttribute, const struct FGameplayAttribute& MaxFuelAttribute, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute1, float CallFunc_GetFloatAttribute_ReturnValue1);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
	void UserConstructionScript();
	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void Audio_Tick();
	void ResetBlink();
	void Start_Fuel_Blink_FX();
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_GetFuelPercent_FuelPercent, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent1, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue2, float CallFunc_GetFuelPercent_FuelPercent2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetReserveFuelPercent_FuelPercent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
