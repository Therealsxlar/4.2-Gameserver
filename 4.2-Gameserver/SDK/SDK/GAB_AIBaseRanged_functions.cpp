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


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseRanged_C::Completed_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "Completed_2221E89D4148023005FB94B04BA06EF9");

	Params::UGAB_AIBaseRanged_C_Completed_2221E89D4148023005FB94B04BA06EF9_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseRanged_C::Cancelled_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "Cancelled_2221E89D4148023005FB94B04BA06EF9");

	Params::UGAB_AIBaseRanged_C_Cancelled_2221E89D4148023005FB94B04BA06EF9_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseRanged_C::Triggered_2221E89D4148023005FB94B04BA06EF9(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "Triggered_2221E89D4148023005FB94B04BA06EF9");

	Params::UGAB_AIBaseRanged_C_Triggered_2221E89D4148023005FB94B04BA06EF9_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_AIBaseRanged_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "K2_ActivateAbility");

	Params::UGAB_AIBaseRanged_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseRanged_C::K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "K2_TriggerFromAnimation");

	Params::UGAB_AIBaseRanged_C_K2_TriggerFromAnimation_Params Parms;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AIBaseRanged_C::IncreaseAccuracyAndUpdateLastThrowTime()
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "IncreaseAccuracyAndUpdateLastThrowTime");

	Params::UGAB_AIBaseRanged_C_IncreaseAccuracyAndUpdateLastThrowTime_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable1                                            ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_ApplicationTag                                      (NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetFireLocation_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProjectileInitialValues_outProjectileSpeed           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileInitialValues_outSpawnDirection            (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetProjectileInitialValues_outProjectileGravity         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetProjectileInitialValues_HomingTarget                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameDifficulty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetProjectileInitialValues_outProjectileSpeed1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileInitialValues_outSpawnDirection1           (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetProjectileInitialValues_outProjectileGravity1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetProjectileInitialValues_HomingTarget1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UGAB_AIBaseRanged_C::ExecuteUbergraph_GAB_AIBaseRanged(int32 EntryPoint, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& K2Node_Event_ApplicationTag, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetFireLocation_ReturnValue, float CallFunc_GetProjectileInitialValues_outProjectileSpeed, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection, float CallFunc_GetProjectileInitialValues_outProjectileGravity, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameDifficulty_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_GetProjectileInitialValues_outProjectileSpeed1, const struct FRotator& CallFunc_GetProjectileInitialValues_outSpawnDirection1, float CallFunc_GetProjectileInitialValues_outProjectileGravity1, class AActor* CallFunc_GetProjectileInitialValues_HomingTarget1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("GAB_AIBaseRanged_C", "ExecuteUbergraph_GAB_AIBaseRanged");

	Params::UGAB_AIBaseRanged_C_ExecuteUbergraph_GAB_AIBaseRanged_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_ApplicationTag = K2Node_Event_ApplicationTag;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFireLocation_ReturnValue = CallFunc_GetFireLocation_ReturnValue;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileSpeed = CallFunc_GetProjectileInitialValues_outProjectileSpeed;
	Parms.CallFunc_GetProjectileInitialValues_outSpawnDirection = CallFunc_GetProjectileInitialValues_outSpawnDirection;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileGravity = CallFunc_GetProjectileInitialValues_outProjectileGravity;
	Parms.CallFunc_GetProjectileInitialValues_HomingTarget = CallFunc_GetProjectileInitialValues_HomingTarget;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1 = CallFunc_GetGameTimeInSeconds_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue1 = CallFunc_GetGameState_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameDifficulty_ReturnValue = CallFunc_GetGameDifficulty_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileSpeed1 = CallFunc_GetProjectileInitialValues_outProjectileSpeed1;
	Parms.CallFunc_GetProjectileInitialValues_outSpawnDirection1 = CallFunc_GetProjectileInitialValues_outSpawnDirection1;
	Parms.CallFunc_GetProjectileInitialValues_outProjectileGravity1 = CallFunc_GetProjectileInitialValues_outProjectileGravity1;
	Parms.CallFunc_GetProjectileInitialValues_HomingTarget1 = CallFunc_GetProjectileInitialValues_HomingTarget1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
