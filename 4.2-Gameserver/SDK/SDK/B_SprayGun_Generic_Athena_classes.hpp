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

// 0x40 (0xEE8 - 0xEA8)
// BlueprintGeneratedClass B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C
class AB_SprayGun_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerSecondaryColor;                              // 0xEB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerPrimaryColor;                                // 0xEC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BannerIconLarge;                                   // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSprayItemDefinition*            MySpray;                                           // 0xEE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SprayGun_Generic_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoaded_F452B84F41E132B2E1CB668CFA098154(class UObject* Loaded);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void ExecuteUbergraph_B_SprayGun_Generic_Athena(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, class AController* CallFunc_GetController_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_Persistent_Fire, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_SprayDecal_C* CallFunc_FinishSpawningActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess3, class AController* CallFunc_GetController_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess4, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
