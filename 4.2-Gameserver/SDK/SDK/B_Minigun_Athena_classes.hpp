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

// 0x6C (0xF14 - 0xEA8)
// BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C
class AB_Minigun_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BarrelGlowFX;                                      // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinUpSound;                                       // 0xEB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinDownSound;                                     // 0xEC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_MinigunChargeUp;                                 // 0xEC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpinAudioVolumeTimeline_Volume_18EF57D9444836E65E22B6A5DFE3BF4A; // 0xED0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SpinAudioVolumeTimeline__Direction_18EF57D9444836E65E22B6A5DFE3BF4A; // 0xED4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_543F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SpinAudioVolumeTimeline;                           // 0xED8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarrelGlow_MuzzleGlowOpacity_6AA244864FFB6D03BB4DAA82CADCA13E; // 0xEE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BarrelGlow__Direction_6AA244864FFB6D03BB4DAA82CADCA13E; // 0xEE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5440[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BarrelGlow;                                        // 0xEE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MuzzleGlowMID;                                     // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedSpinUpSound;                             // 0xEF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5441[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpinUpAudioVolumeMultiplier;                       // 0xEFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CurrentSpinAudioComponent;                         // 0xF00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentAmmo;                                       // 0xF08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedSpinUpAudio;                                // 0xF0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPlayedSpinDownAudio;                              // 0xF0D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5442[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpinVolumeMultiplier;                              // 0xF10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Minigun_Athena_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void BarrelGlow__FinishedFunc();
	void BarrelGlow__UpdateFunc();
	void SpinAudioVolumeTimeline__FinishedFunc();
	void SpinAudioVolumeTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void MakeBarrelGlow();
	void StopBarrelGlow();
	void OnAmmoCountChanged();
	void Start_Spin_Up_Audio();
	void Start_Spin_Down_Audio();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Minigun_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsDedicatedServer_ReturnValue1, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
