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

// 0x150 (0xFF8 - 0xEA8)
// BlueprintGeneratedClass B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C
class AB_Rifle_AMR_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sm_AMR_Glass_01;                                   // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsSide1;                                 // 0xEB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsTop2;                                  // 0xEC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsTop1;                                  // 0xEC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AMRFan;                                            // 0xED0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleLight;                                       // 0xED8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       FullCharge_AudioComponent;                         // 0xEE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Ambient_Charge_AudioComponent;                     // 0xEE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ElectrodeParticles;                                // 0xEF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CoreParticles;                                     // 0xEF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SlowdownTimeline_LERP_FA3456884604F88A7D037EA57D2A559E; // 0xF00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SlowdownTimeline__Direction_FA3456884604F88A7D037EA57D2A559E; // 0xF04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5435[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SlowdownTimeline;                                  // 0xF08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpringVal_springValCurve_40BD27CD4D6E40F558011BAB35039509; // 0xF10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SpringVal__Direction_40BD27CD4D6E40F558011BAB35039509; // 0xF14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5436[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SpringVal;                                         // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleUpParticles_SpawnRate_7A6295DF4D992FC114D1DCBF417ED9FD; // 0xF20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleUpParticles__Direction_7A6295DF4D992FC114D1DCBF417ED9FD; // 0xF24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5437[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleUpParticles;                                  // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleDownParticles_SpawnRate_5C07019A41C7FA0F760F718DC5413D1A; // 0xF30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleDownParticles__Direction_5C07019A41C7FA0F760F718DC5413D1A; // 0xF34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5438[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleDownParticles;                                // 0xF38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reload_PItchChange_NewTrack_0_377ECAF246C00AC525A90D814B63399F; // 0xF40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reload_PItchChange_Reload_Pitch_377ECAF246C00AC525A90D814B63399F; // 0xF44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Reload_PItchChange__Direction_377ECAF246C00AC525A90D814B63399F; // 0xF48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5439[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Reload_PItchChange;                                // 0xF50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpawnRate_Uncharged_;                 // 0xF58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpawnRate_Charged_;                   // 0xF5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ChargedBeam;                                       // 0xF60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DefaultBeam;                                       // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Uncharged_;                          // 0xF70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Charged_;                            // 0xF74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesTimeDilation_Uncharged_;              // 0xF78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesTimeDilation_Charged_;                // 0xF7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpinRate_Charged_;                    // 0xF80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElectrodeParticlesEnergizedSpawnRate_Uncharged_;   // 0xF84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElectrodeParticlesEnergizedSpawnRate_Charged_;     // 0xF88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reached_Min_Charge;                                // 0xF8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_543A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BarrelGlowMID;                                     // 0xF90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BarrelGlowColor_Uncharged_;                        // 0xF98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BarrelGlowColor_Charged_;                          // 0xFA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleFlash_Uncharged_;                            // 0xFB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleFlash_Charged_;                              // 0xFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muzzle_Flash_Light_Intensity__Charged_;            // 0xFC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muzzle_Flash_Light_Intensity__Uncharged_;          // 0xFCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurbineSpinRate_Charged_;                          // 0xFD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurbineSpinRate_Uncharged_;                        // 0xFD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Reloading_;                          // 0xFD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargePercent;                                     // 0xFDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Delta;                                        // 0xFE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Charging;                                          // 0xFE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OutOfAmmo_Local;                                   // 0xFE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_543B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentPlayRate;                                   // 0xFE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmmoCost_MinCharge;                                // 0xFEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeAudio;                                       // 0xFF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Rifle_AMR_Athena_C");
		return Clss;
	}

	void VFX_SetChargedParams();
	void VFX_SetUnchargedParams();
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue);
	void ScaleDownParticles__FinishedFunc();
	void ScaleDownParticles__UpdateFunc();
	void Reload_PItchChange__FinishedFunc();
	void Reload_PItchChange__UpdateFunc();
	void ScaleUpParticles__FinishedFunc();
	void ScaleUpParticles__UpdateFunc();
	void SpringVal__FinishedFunc();
	void SpringVal__UpdateFunc();
	void SlowdownTimeline__FinishedFunc();
	void SlowdownTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStartCharge();
	void OnReachedMinCharge();
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void EndOfCharge();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnAmmoCountChanged();
	void CameraShakeLoop();
	void OnChargeDown();
	void OnReachedMaxCharge();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_AMR_Athena(int32 EntryPoint, const struct FFortRangedWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_Selection, enum class EFortReloadFXState K2Node_Event_ReloadStage, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USK_AMR_Skeleton_AnimBP_C* K2Node_DynamicCast_AsSK_AMR_Skeleton_Anim_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetPlayRate_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetChargePercent_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue3, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
