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


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AAthena_Prop_Tiered_Chest_6_Parent_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "ShouldDie");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_ShouldDie_Params Parms;
	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AAthena_Prop_Tiered_Chest_6_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "BlueprintCanInteract");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_BlueprintCanInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_Prop_Tiered_Chest_6_Parent_C::SetLightVisibility(bool Visible, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "SetLightVisibility");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_SetLightVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_Prop_Tiered_Chest_6_Parent_C::UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "UserConstructionScript");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "ReceiveBeginPlay");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "ReceiveDestroyed");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_Prop_Tiered_Chest_6_Parent_C::ReceiveActorBeginCursorOver()
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "ReceiveActorBeginCursorOver");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_ReceiveActorBeginCursorOver_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C.ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Tiered_Chest_6_Parent_C::ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Athena_Prop_Tiered_Chest_6_Parent_C", "ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent");

	Params::AAthena_Prop_Tiered_Chest_6_Parent_C_ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
