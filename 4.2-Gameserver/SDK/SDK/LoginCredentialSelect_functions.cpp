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


// Function LoginCredentialSelect.LoginCredentialSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginCredentialSelect_C::Construct()
{
	static auto Func = Class->GetFunction("LoginCredentialSelect_C", "Construct");

	Params::ULoginCredentialSelect_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInviteUIDisabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginCredentialSelect_C::ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsInviteUIDisabled_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginCredentialSelect_C", "ExecuteUbergraph_LoginCredentialSelect");

	Params::ULoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsInviteUIDisabled_ReturnValue = CallFunc_IsInviteUIDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
