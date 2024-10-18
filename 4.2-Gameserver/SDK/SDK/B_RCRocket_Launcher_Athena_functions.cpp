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


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_RCRocket_Launcher_Athena_C::IsCachedIsProjectileWeapon()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "IsCachedIsProjectileWeapon");

	Params::AB_RCRocket_Launcher_Athena_C_IsCachedIsProjectileWeapon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RCRocket_Launcher_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "UserConstructionScript");

	Params::AB_RCRocket_Launcher_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RCRocket_Launcher_Athena_C::SendMuzzleFlashFX()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "SendMuzzleFlashFX");

	Params::AB_RCRocket_Launcher_Athena_C_SendMuzzleFlashFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_RCRocket_Launcher_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "ReceiveBeginPlay");

	Params::AB_RCRocket_Launcher_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RCRocket_Launcher_Athena_C::ExecuteUbergraph_B_RCRocket_Launcher_Athena(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "ExecuteUbergraph_B_RCRocket_Launcher_Athena");

	Params::AB_RCRocket_Launcher_Athena_C_ExecuteUbergraph_B_RCRocket_Launcher_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
