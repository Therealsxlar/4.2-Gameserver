#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Forward Adjustment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Forward_Adjustment(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "Calculate Launch Forward Adjustment");

	Params::UGA_Athena_RCRocket_C_Calculate_Launch_Forward_Adjustment_Params Parms;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Up Adjustment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Up_Adjustment(bool Temp_bool_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "Calculate Launch Up Adjustment");

	Params::UGA_Athena_RCRocket_C_Calculate_Launch_Up_Adjustment_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue = CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Right Adjustment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Right_Adjustment(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "Calculate Launch Right Adjustment");

	Params::UGA_Athena_RCRocket_C_Calculate_Launch_Right_Adjustment_Params Parms;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.CalculateRocketSpawnLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Calculate_Launch_Forward_Adjustment_ReturnValue         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Calculate_Launch_Up_Adjustment_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Calculate_Launch_Right_Adjustment_ReturnValue           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_RCRocket_C::CalculateRocketSpawnLocation(struct FTransform* Transform, class AFortWeapon* NewLocalVar_0, const struct FVector& CallFunc_Calculate_Launch_Forward_Adjustment_ReturnValue, const struct FVector& CallFunc_Calculate_Launch_Up_Adjustment_ReturnValue, const struct FVector& CallFunc_Calculate_Launch_Right_Adjustment_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "CalculateRocketSpawnLocation");

	Params::UGA_Athena_RCRocket_C_CalculateRocketSpawnLocation_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Calculate_Launch_Forward_Adjustment_ReturnValue = CallFunc_Calculate_Launch_Forward_Adjustment_ReturnValue;
	Parms.CallFunc_Calculate_Launch_Up_Adjustment_ReturnValue = CallFunc_Calculate_Launch_Up_Adjustment_ReturnValue;
	Parms.CallFunc_Calculate_Launch_Right_Adjustment_ReturnValue = CallFunc_Calculate_Launch_Right_Adjustment_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawnAthena*       AsFort_Player_Pawn_Athena                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_RCRocket_C::GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "GetAthenaPlayerPawn");

	Params::UGA_Athena_RCRocket_C_GetAthenaPlayerPawn_Params Parms;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Pawn_Athena != nullptr)
		*AsFort_Player_Pawn_Athena = Parms.AsFort_Player_Pawn_Athena;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerControllerAthena* AsFort_Player_Controller_Athena                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_RCRocket_C::GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena, class AFortPlayerPawnAthena* CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "GetAthenaPlayerController");

	Params::UGA_Athena_RCRocket_C_GetAthenaPlayerController_Params Parms;
	Parms.CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena = CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Controller_Athena != nullptr)
		*AsFort_Player_Controller_Athena = Parms.AsFort_Player_Controller_Athena;

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_RCRocket_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "K2_ActivateAbility");

	Params::UGA_Athena_RCRocket_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.ExecuteUbergraph_GA_Athena_RCRocket
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* CallFunc_GetAthenaPlayerController_AsFort_Player_Controller_Athena(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_CalculateRocketSpawnLocation_Transform                  (IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_PrjPawn_Athena_RCRocket_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_RCRocket_Launcher_Athena_C*K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()

void UGA_Athena_RCRocket_C::ExecuteUbergraph_GA_Athena_RCRocket(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerControllerAthena* CallFunc_GetAthenaPlayerController_AsFort_Player_Controller_Athena, class AFortPlayerPawnAthena* CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FTransform& CallFunc_CalculateRocketSpawnLocation_Transform, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_PrjPawn_Athena_RCRocket_C* CallFunc_FinishSpawningActor_ReturnValue, class AB_RCRocket_Launcher_Athena_C* K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static auto Func = Class->GetFunction("GA_Athena_RCRocket_C", "ExecuteUbergraph_GA_Athena_RCRocket");

	Params::UGA_Athena_RCRocket_C_ExecuteUbergraph_GA_Athena_RCRocket_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetAthenaPlayerController_AsFort_Player_Controller_Athena = CallFunc_GetAthenaPlayerController_AsFort_Player_Controller_Athena;
	Parms.CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena = CallFunc_GetAthenaPlayerPawn_AsFort_Player_Pawn_Athena;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_CalculateRocketSpawnLocation_Transform = CallFunc_CalculateRocketSpawnLocation_Transform;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena = K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
