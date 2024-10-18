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


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "UserConstructionScript");

	Params::AVaultCamera_Blueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnDeactivated");

	Params::AVaultCamera_Blueprint_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AVaultCamera_Blueprint_C::OnActivated()
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "OnActivated");

	Params::AVaultCamera_Blueprint_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultCamera_Blueprint_C", "ExecuteUbergraph_VaultCamera_Blueprint");

	Params::AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
