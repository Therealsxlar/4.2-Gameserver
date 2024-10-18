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

// 0x1C (0xEC4 - 0xEA8)
// BlueprintGeneratedClass B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C
class AB_RCRocket_Launcher_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA8(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                RC;                                                // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0xEB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeFX_End;                                 // 0xEC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_RCRocket_Launcher_Athena_C");
		return Clss;
	}

	bool IsCachedIsProjectileWeapon();
	void UserConstructionScript();
	void SendMuzzleFlashFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_RCRocket_Launcher_Athena(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
