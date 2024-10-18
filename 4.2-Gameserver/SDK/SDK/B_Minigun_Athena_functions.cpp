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


// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Minigun_Athena_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "UserConstructionScript");

	Params::AB_Minigun_Athena_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::BarrelGlow__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "BarrelGlow__FinishedFunc");

	Params::AB_Minigun_Athena_C_BarrelGlow__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::BarrelGlow__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "BarrelGlow__UpdateFunc");

	Params::AB_Minigun_Athena_C_BarrelGlow__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::SpinAudioVolumeTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "SpinAudioVolumeTimeline__FinishedFunc");

	Params::AB_Minigun_Athena_C_SpinAudioVolumeTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::SpinAudioVolumeTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "SpinAudioVolumeTimeline__UpdateFunc");

	Params::AB_Minigun_Athena_C_SpinAudioVolumeTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Minigun_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnChargeUp()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnChargeUp");

	Params::AB_Minigun_Athena_C_OnChargeUp_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnChargeDown()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnChargeDown");

	Params::AB_Minigun_Athena_C_OnChargeDown_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification   CosmeticMod                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    DynamicMaterialInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Minigun_Athena_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnInitCosmeticAlterations");

	Params::AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params Parms;
	Parms.CosmeticMod = CosmeticMod;
	Parms.DynamicMaterialInstance = DynamicMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::MakeBarrelGlow()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "MakeBarrelGlow");

	Params::AB_Minigun_Athena_C_MakeBarrelGlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::StopBarrelGlow()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "StopBarrelGlow");

	Params::AB_Minigun_Athena_C_StopBarrelGlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnAmmoCountChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnAmmoCountChanged()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnAmmoCountChanged");

	Params::AB_Minigun_Athena_C_OnAmmoCountChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::Start_Spin_Up_Audio()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "Start Spin Up Audio");

	Params::AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::Start_Spin_Down_Audio()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "Start Spin Down Audio");

	Params::AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnWeaponAttached");

	Params::AB_Minigun_Athena_C_OnWeaponAttached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortCosmeticModification   K2Node_Event_CosmeticMod                                         ()
// class UMaterialInstanceDynamic*    K2Node_Event_DynamicMaterialInstance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLocalMagazineAmmoCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Minigun_Athena_C::ExecuteUbergraph_B_Minigun_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsDedicatedServer_ReturnValue1, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "ExecuteUbergraph_B_Minigun_Athena");

	Params::AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_CosmeticMod = K2Node_Event_CosmeticMod;
	Parms.K2Node_Event_DynamicMaterialInstance = K2Node_Event_DynamicMaterialInstance;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.CallFunc_GetLocalMagazineAmmoCount_ReturnValue = CallFunc_GetLocalMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
