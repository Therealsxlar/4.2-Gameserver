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

// 0x28 (0x930 - 0x908)
// BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C
class UGA_Athena_RCRocket_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	class AB_PrjPawn_Athena_RCRocket_C*          SpawnedRocket;                                     // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             PlayerPawn;                                        // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GT_EventWeaponFire;                                // 0x920(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GT_EventWeaponFire_RCRocket;                       // 0x928(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_RCRocket_C");
		return Clss;
	}

	struct FVector Calculate_Launch_Forward_Adjustment(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	struct FVector Calculate_Launch_Up_Adjustment(bool Temp_bool_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& K2Node_Select_Default);
	struct FVector Calculate_Launch_Right_Adjustment(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void CalculateRocketSpawnLocation(struct FTransform* Transform, class AFortWeapon* NewLocalVar_0, const struct FVector& CallFunc_Calculate_Launch_Forward_Adjustment_ReturnValue, const struct FVector& CallFunc_Calculate_Launch_Up_Adjustment_ReturnValue, const struct FVector& CallFunc_Calculate_Launch_Right_Adjustment_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena, class AFortPlayerPawnAthena* CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_RCRocket(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerControllerAthena* CallFunc_GetAthenaPlayerController_AsFort_Player_Controller_Athena, class AFortPlayerPawnAthena* CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FTransform& CallFunc_CalculateRocketSpawnLocation_Transform, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_PrjPawn_Athena_RCRocket_C* CallFunc_FinishSpawningActor_ReturnValue, class AB_RCRocket_Launcher_Athena_C* K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
