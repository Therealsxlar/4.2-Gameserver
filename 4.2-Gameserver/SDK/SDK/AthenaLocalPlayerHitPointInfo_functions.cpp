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


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*      ViewModel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocalPlayerHitPointInfo_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static auto Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "SetViewModel");

	Params::UAthenaLocalPlayerHitPointInfo_C_SetViewModel_Params Parms;
	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLocalPlayerHitPointInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "Construct");

	Params::UAthenaLocalPlayerHitPointInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLocalPlayerHitPointInfo_C::ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint, bool CallFunc_IsBROnly_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");

	Params::UAthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
