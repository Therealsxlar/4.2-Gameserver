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


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle_93D7E1854196ECDA2F2306926AC3D608
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_Stun_C::InvalidHandle_93D7E1854196ECDA2F2306926AC3D608(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto Func = Class->GetFunction("GA_DanceGrenade_Stun_C", "InvalidHandle_93D7E1854196ECDA2F2306926AC3D608");

	Params::UGA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608_Params Parms;
	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved_93D7E1854196ECDA2F2306926AC3D608
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_Stun_C::OnRemoved_93D7E1854196ECDA2F2306926AC3D608(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto Func = Class->GetFunction("GA_DanceGrenade_Stun_C", "OnRemoved_93D7E1854196ECDA2F2306926AC3D608");

	Params::UGA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608_Params Parms;
	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DanceGrenade_Stun_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_DanceGrenade_Stun_C", "K2_ActivateAbility");

	Params::UGA_DanceGrenade_Stun_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DanceGrenade_Stun_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_DanceGrenade_Stun_C", "K2_OnEndAbility");

	Params::UGA_DanceGrenade_Stun_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo                     (ConstParm)
// struct FGameplayEffectRemovalInfo  Temp_struct_Variable                                             ()
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEffectRemoved*CallFunc_WaitForGameplayEffectRemoved_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue1                               (ContainsInstancedReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo1                    (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UGA_DanceGrenade_Stun_C::ExecuteUbergraph_GA_DanceGrenade_Stun(int32 EntryPoint, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue1, float CallFunc_PlayAnimMontage_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("GA_DanceGrenade_Stun_C", "ExecuteUbergraph_GA_DanceGrenade_Stun");

	Params::UGA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo = K2Node_CustomEvent_GameplayEffectRemovalInfo;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_WaitForGameplayEffectRemoved_ReturnValue = CallFunc_WaitForGameplayEffectRemoved_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActorInfo_ReturnValue1 = CallFunc_GetActorInfo_ReturnValue1;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn1 = K2Node_DynamicCast_AsFort_Player_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo1 = K2Node_CustomEvent_GameplayEffectRemovalInfo1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
