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


// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "UserConstructionScript");

	Params::AB_StockBattleBus_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Bus_Music_Fader__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "Bus Music Fader__FinishedFunc");

	Params::AB_StockBattleBus_C_Bus_Music_Fader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Bus_Music_Fader__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "Bus Music Fader__UpdateFunc");

	Params::AB_StockBattleBus_C_Bus_Music_Fader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "ReceiveBeginPlay");

	Params::AB_StockBattleBus_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Start_Audio()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "Start Audio");

	Params::AB_StockBattleBus_C_Start_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::GrabAudioReferences()
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "GrabAudioReferences");

	Params::AB_StockBattleBus_C_GrabAudioReferences_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetFlightLoopingSound_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetFlightLoopingMusic_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StockBattleBus_C::ExecuteUbergraph_B_StockBattleBus(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class USoundBase* CallFunc_GetFlightLoopingSound_ReturnValue, class USoundBase* CallFunc_GetFlightLoopingMusic_ReturnValue)
{
	static auto Func = Class->GetFunction("B_StockBattleBus_C", "ExecuteUbergraph_B_StockBattleBus");

	Params::AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_GetFlightLoopingSound_ReturnValue = CallFunc_GetFlightLoopingSound_ReturnValue;
	Parms.CallFunc_GetFlightLoopingMusic_ReturnValue = CallFunc_GetFlightLoopingMusic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
