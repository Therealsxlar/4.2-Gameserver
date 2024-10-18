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


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Get Player Pawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFortPlayerPawn* UGA_BoostJumpPack_C::Get_Player_Pawn(class UObject* Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Get Player Pawn");

	Params::UGA_BoostJumpPack_C_Get_Player_Pawn_Params Parms;
	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsCurrentlyDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagOne                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_BoostJumpPack_C::IsCurrentlyDead(const struct FGameplayTag& TagOne, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "IsCurrentlyDead");

	Params::UGA_BoostJumpPack_C_IsCurrentlyDead_Params Parms;
	Parms.TagOne = TagOne;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue1 = CallFunc_MatchesTag_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Falling Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Reengage_Falling_Movement(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Reengage Falling Movement");

	Params::UGA_BoostJumpPack_C_Reengage_Falling_Movement_Params Parms;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Hovering Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Reengage_Hovering_Movement(bool CallFunc_IsFalling_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Reengage Hovering Movement");

	Params::UGA_BoostJumpPack_C_Reengage_Hovering_Movement_Params Parms;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SavePlayerPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::SavePlayerPawn(const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "SavePlayerPawn");

	Params::UGA_BoostJumpPack_C_SavePlayerPawn_Params Parms;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnAbilityCanceled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::OnAbilityCanceled()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "OnAbilityCanceled");

	Params::UGA_BoostJumpPack_C_OnAbilityCanceled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Cheat DBNO When Player Hits Exectute on Controller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Cheat_DBNO_When_Player_Hits_Exectute_on_Controller(bool CallFunc_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Cheat DBNO When Player Hits Exectute on Controller");

	Params::UGA_BoostJumpPack_C_Cheat_DBNO_When_Player_Hits_Exectute_on_Controller_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsEmpty
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::OnFuelIsEmpty()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "OnFuelIsEmpty");

	Params::UGA_BoostJumpPack_C_OnFuelIsEmpty_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsFull
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::OnFuelIsFull()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "OnFuelIsFull");

	Params::UGA_BoostJumpPack_C_OnFuelIsFull_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reset Toggle Input State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Reset_Toggle_Input_State(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Reset Toggle Input State");

	Params::UGA_BoostJumpPack_C_Reset_Toggle_Input_State_Params Parms;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessTriggerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagOne                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::ProcessTriggerData(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "ProcessTriggerData");

	Params::UGA_BoostJumpPack_C_ProcessTriggerData_Params Parms;
	Parms.TagOne = TagOne;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue1 = CallFunc_MatchesAnyTags_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Push Jetpack Input Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Push_Jetpack_Input_Component(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Push Jetpack Input Component");

	Params::UGA_BoostJumpPack_C_Push_Jetpack_Input_Component_Params Parms;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Pop Jetpack Input Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Pop_Jetpack_Input_Component(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Pop Jetpack Input Component");

	Params::UGA_BoostJumpPack_C_Pop_Jetpack_Input_Component_Params Parms;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Stop Regen Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Stop_Regen_Effect(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Stop Regen Effect");

	Params::UGA_BoostJumpPack_C_Stop_Regen_Effect_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Start Regen Effect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::Start_Regen_Effect(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Start Regen Effect");

	Params::UGA_BoostJumpPack_C_Start_Regen_Effect_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Stopping Regen Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetMaxFuel_MaxFuel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Consider_Stopping_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Consider Stopping Regen Effect");

	Params::UGA_BoostJumpPack_C_Consider_Stopping_Regen_Effect_Params Parms;
	Parms.CallFunc_GetMaxFuel_MaxFuel = CallFunc_GetMaxFuel_MaxFuel;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Starting Regen Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetMaxFuel_MaxFuel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Consider_Starting_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Consider Starting Regen Effect");

	Params::UGA_BoostJumpPack_C_Consider_Starting_Regen_Effect_Params Parms;
	Parms.CallFunc_GetMaxFuel_MaxFuel = CallFunc_GetMaxFuel_MaxFuel;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue1 = CallFunc_NotEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsBoostAllowed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_BoostJumpPack_C::IsBoostAllowed(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "IsBoostAllowed");

	Params::UGA_BoostJumpPack_C_IsBoostAllowed_Params Parms;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "K2_OnEndAbility");

	Params::UGA_BoostJumpPack_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       InAirExecutionTags                                               (Edit, BlueprintVisible)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_Get_Player_Pawn_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_BoostJumpPack_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, const struct FGameplayTagContainer& InAirExecutionTags, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent_Params Parms;
	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.InAirExecutionTags = InAirExecutionTags;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Player_Pawn_ReturnValue = CallFunc_Get_Player_Pawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetMaxFuel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              MaxFuel                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::GetMaxFuel(float* MaxFuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "GetMaxFuel");

	Params::UGA_BoostJumpPack_C_GetMaxFuel_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxFuel != nullptr)
		*MaxFuel = Parms.MaxFuel;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetFuel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Fuel                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::GetFuel(float* Fuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "GetFuel");

	Params::UGA_BoostJumpPack_C_GetFuel_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Fuel != nullptr)
		*Fuel = Parms.Fuel;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup PlayerPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UGA_BoostJumpPack_C::Setup_PlayerPawn(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Setup PlayerPawn");

	Params::UGA_BoostJumpPack_C_Setup_PlayerPawn_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsUsingJetpackEffectActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveGameplayEffectStackCount_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_BoostJumpPack_C::IsUsingJetpackEffectActive(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "IsUsingJetpackEffectActive");

	Params::UGA_BoostJumpPack_C_IsUsingJetpackEffectActive_Params Parms;
	Parms.CallFunc_GetActiveGameplayEffectStackCount_ReturnValue = CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleCurrentBoostStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJumpBoostPackState     PreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJumpBoostPackState     CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingJetpackEffectActive_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingJetpackEffectActive_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "HandleCurrentBoostStateChanged");

	Params::UGA_BoostJumpPack_C_HandleCurrentBoostStateChanged_Params Parms;
	Parms.PreviousState = PreviousState;
	Parms.CurrentState = CurrentState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsUsingJetpackEffectActive_ReturnValue = CallFunc_IsUsingJetpackEffectActive_ReturnValue;
	Parms.CallFunc_IsUsingJetpackEffectActive_ReturnValue1 = CallFunc_IsUsingJetpackEffectActive_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetCurrentBoostState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJumpBoostPackState     NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJumpBoostPackState     PreviousState                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BoostJumpStates    PreviewBoostState                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::SetCurrentBoostState(enum class EJumpBoostPackState NewState, enum class EJumpBoostPackState PreviousState, enum class Enum_BoostJumpStates PreviewBoostState)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "SetCurrentBoostState");

	Params::UGA_BoostJumpPack_C_SetCurrentBoostState_Params Parms;
	Parms.NewState = NewState;
	Parms.PreviousState = PreviousState;
	Parms.PreviewBoostState = PreviewBoostState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.PotentiallyEndHovering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceEndHovering                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::PotentiallyEndHovering(bool bForceEndHovering, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "PotentiallyEndHovering");

	Params::UGA_BoostJumpPack_C_PotentiallyEndHovering_Params Parms;
	Parms.bForceEndHovering = bForceEndHovering;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup Notify at Apex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNotifyApex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_CharacterAthena*K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::Setup_Notify_at_Apex(bool bNotifyApex, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Setup Notify at Apex");

	Params::UGA_BoostJumpPack_C_Setup_Notify_at_Apex_Params Parms;
	Parms.bNotifyApex = bNotifyApex;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena = K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::HandleIdle()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "HandleIdle");

	Params::UGA_BoostJumpPack_C_HandleIdle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleFalling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::HandleFalling(float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_FMax_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "HandleFalling");

	Params::UGA_BoostJumpPack_C_HandleFalling_Params Parms;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue1 = CallFunc_GetTimeSeconds_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue2 = CallFunc_GetTimeSeconds_ReturnValue2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleHovering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::HandleHovering(float CallFunc_GetTimeSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "HandleHovering");

	Params::UGA_BoostJumpPack_C_HandleHovering_Params Parms;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue1 = CallFunc_GetTimeSeconds_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue2 = CallFunc_GetTimeSeconds_ReturnValue2;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ResetTransitionVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TargetTag                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::ResetTransitionVariables(const struct FGameplayTag& TargetTag)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "ResetTransitionVariables");

	Params::UGA_BoostJumpPack_C_ResetTransitionVariables_Params Parms;
	Parms.TargetTag = TargetTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromFalling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BoostJumpStates    TargetBoostState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::TransitionFromFalling(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "TransitionFromFalling");

	Params::UGA_BoostJumpPack_C_TransitionFromFalling_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetBoostState != nullptr)
		*TargetBoostState = Parms.TargetBoostState;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromHovering
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BoostJumpStates    TargetBoostState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::TransitionFromHovering(enum class Enum_BoostJumpStates* TargetBoostState, float CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "TransitionFromHovering");

	Params::UGA_BoostJumpPack_C_TransitionFromHovering_Params Parms;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetBoostState != nullptr)
		*TargetBoostState = Parms.TargetBoostState;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BoostJumpStates    TargetBoostState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::TransitionFromBoost(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "TransitionFromBoost");

	Params::UGA_BoostJumpPack_C_TransitionFromBoost_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetBoostState != nullptr)
		*TargetBoostState = Parms.TargetBoostState;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromIdle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class Enum_BoostJumpStates    TargetBoostState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBoostAllowed_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFuel_Fuel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFuel_Fuel1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxFuel_MaxFuel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::TransitionFromIdle(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBoostAllowed_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetFuel_Fuel1, float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "TransitionFromIdle");

	Params::UGA_BoostJumpPack_C_TransitionFromIdle_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsBoostAllowed_ReturnValue = CallFunc_IsBoostAllowed_ReturnValue;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFuel_Fuel1 = CallFunc_GetFuel_Fuel1;
	Parms.CallFunc_GetMaxFuel_MaxFuel = CallFunc_GetMaxFuel_MaxFuel;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetBoostState != nullptr)
		*TargetBoostState = Parms.TargetBoostState;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessAbilityStateMachine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BoostJumpStates    CallFunc_DetermineStateToTransitionTo_BoostState                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::ProcessAbilityStateMachine(bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_DetermineStateToTransitionTo_BoostState, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "ProcessAbilityStateMachine");

	Params::UGA_BoostJumpPack_C_ProcessAbilityStateMachine_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DetermineStateToTransitionTo_BoostState = CallFunc_DetermineStateToTransitionTo_BoostState;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.DetermineStateToTransitionTo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BoostJumpStates    BoostState                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BoostJumpStates    CallFunc_TransitionFromFalling_TargetBoostState                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BoostJumpStates    CallFunc_TransitionFromHovering_TargetBoostState                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BoostJumpStates    CallFunc_TransitionFromBoost_TargetBoostState                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BoostJumpStates    CallFunc_TransitionFromIdle_TargetBoostState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::DetermineStateToTransitionTo(enum class Enum_BoostJumpStates* BoostState, bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_TransitionFromFalling_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromHovering_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromBoost_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromIdle_TargetBoostState)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "DetermineStateToTransitionTo");

	Params::UGA_BoostJumpPack_C_DetermineStateToTransitionTo_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TransitionFromFalling_TargetBoostState = CallFunc_TransitionFromFalling_TargetBoostState;
	Parms.CallFunc_TransitionFromHovering_TargetBoostState = CallFunc_TransitionFromHovering_TargetBoostState;
	Parms.CallFunc_TransitionFromBoost_TargetBoostState = CallFunc_TransitionFromBoost_TargetBoostState;
	Parms.CallFunc_TransitionFromIdle_TargetBoostState = CallFunc_TransitionFromIdle_TargetBoostState;

	UObject::ProcessEvent(Func, &Parms);

	if (BoostState != nullptr)
		*BoostState = Parms.BoostState;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetupTransitionVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TargetTag                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPendingSkydiveLaunch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsParachuteOpen_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentlyDead_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::SetupTransitionVariables(const struct FGameplayTag& Tag, const struct FGameplayTag& TargetTag, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_IsCurrentlyDead_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "SetupTransitionVariables");

	Params::UGA_BoostJumpPack_C_SetupTransitionVariables_Params Parms;
	Parms.Tag = Tag;
	Parms.TargetTag = TargetTag;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_GetPendingSkydiveLaunch_ReturnValue = CallFunc_GetPendingSkydiveLaunch_ReturnValue;
	Parms.CallFunc_IsParachuteOpen_ReturnValue = CallFunc_IsParachuteOpen_ReturnValue;
	Parms.CallFunc_IsCurrentlyDead_ReturnValue = CallFunc_IsCurrentlyDead_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue1 = CallFunc_MatchesTag_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostJump
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_SetJumpHeight_Pawn_Out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SetJumpHeight_Jump_Height                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::HandleBoostJump(const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_SetJumpHeight_Pawn_Out, const struct FVector& CallFunc_SetJumpHeight_Jump_Height)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "HandleBoostJump");

	Params::UGA_BoostJumpPack_C_HandleBoostJump_Params Parms;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SetJumpHeight_Pawn_Out = CallFunc_SetJumpHeight_Pawn_Out;
	Parms.CallFunc_SetJumpHeight_Jump_Height = CallFunc_SetJumpHeight_Jump_Height;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetJumpHeight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             Pawn_Out                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Jump_Height                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "SetJumpHeight");

	Params::UGA_BoostJumpPack_C_SetJumpHeight_Params Parms;
	Parms.Pawn = Pawn;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pawn_Out != nullptr)
		*Pawn_Out = Parms.Pawn_Out;

	if (Jump_Height != nullptr)
		*Jump_Height = Parms.Jump_Height;

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.On Reached Jump Apex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::On_Reached_Jump_Apex()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "On Reached Jump Apex");

	Params::UGA_BoostJumpPack_C_On_Reached_Jump_Apex_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnPawnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_BoostJumpPack_C::OnPawnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "OnPawnLanded");

	Params::UGA_BoostJumpPack_C_OnPawnLanded_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_BoostJumpPack_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_BoostJumpPack_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnCurrentStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EJumpBoostPackState     InPreviousState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJumpBoostPackState     InCurrentState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_C::OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "OnCurrentStateChanged");

	Params::UGA_BoostJumpPack_C_OnCurrentStateChanged_Params Parms;
	Parms.InPreviousState = InPreviousState;
	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.Delay_ProcessAbilityStateMachine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_C::Delay_ProcessAbilityStateMachine()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "Delay_ProcessAbilityStateMachine");

	Params::UGA_BoostJumpPack_C_Delay_ProcessAbilityStateMachine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack.GA_BoostJumpPack_C.ExecuteUbergraph_GA_BoostJumpPack
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// enum class EJumpBoostPackState     K2Node_Event_InPreviousState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJumpBoostPackState     K2Node_Event_InCurrentState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BoostJumpPack_C::ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayEventData& K2Node_Event_EventData, enum class EJumpBoostPackState K2Node_Event_InPreviousState, enum class EJumpBoostPackState K2Node_Event_InCurrentState, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_C", "ExecuteUbergraph_GA_BoostJumpPack");

	Params::UGA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_Event_InPreviousState = K2Node_Event_InPreviousState;
	Parms.K2Node_Event_InCurrentState = K2Node_Event_InCurrentState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
