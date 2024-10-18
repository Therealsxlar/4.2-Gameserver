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


// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivateAbilityByTag_C::ReceiveActivation(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("ActivateAbilityByTag_C", "ReceiveActivation");

	Params::UActivateAbilityByTag_C_ReceiveActivation_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivateAbilityByTag_C::ReceiveDeactivation(class AActor* OwnerActor)
{
	static auto Func = Class->GetFunction("ActivateAbilityByTag_C", "ReceiveDeactivation");

	Params::UActivateAbilityByTag_C_ReceiveDeactivation_Params Parms;
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivateAbilityByTag_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("ActivateAbilityByTag_C", "ReceiveTick");

	Params::UActivateAbilityByTag_C_ReceiveTick_Params Parms;
	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ExecuteUbergraph_ActivateAbilityByTag
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OwnerActor2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetGoalActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHitTargetWithAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivateAbilityByTag_C::ExecuteUbergraph_ActivateAbilityByTag(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_OwnerActor2, class AActor* K2Node_Event_OwnerActor1, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetGoalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool Temp_bool_Variable, bool CallFunc_CanHitTargetWithAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("ActivateAbilityByTag_C", "ExecuteUbergraph_ActivateAbilityByTag");

	Params::UActivateAbilityByTag_C_ExecuteUbergraph_ActivateAbilityByTag_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_OwnerActor2 = K2Node_Event_OwnerActor2;
	Parms.K2Node_Event_OwnerActor1 = K2Node_Event_OwnerActor1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGoalActor_ReturnValue = CallFunc_GetGoalActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue = CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue = CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue = CallFunc_TryActivateAbilitiesByTag_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CanHitTargetWithAbility_ReturnValue = CallFunc_CanHitTargetWithAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
