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

// 0x2E0 (0x848 - 0x568)
// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       AOE_Audio_Effect;                                  // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Grenade_Linger;                                  // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DamageArea;                                        // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x590(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundAttenuationSettings             AOE_Sound_Attenuation_Based_On_Radius;             // 0x598(0x2A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            AOE_Electric_Sound;                                // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AOE_Commando_KeepOutExplosion_C");
		return Clss;
	}

	void OnRep_Radius(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSoundAttenuationSettings& K2Node_MakeStruct_SoundAttenuationSettings);
	void UserConstructionScript();
	void Send_Info(float Radius);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint, float K2Node_CustomEvent_Radius);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
