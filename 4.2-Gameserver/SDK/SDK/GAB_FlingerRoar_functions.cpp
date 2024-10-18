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


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCancelled_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnCancelled_AD410E224F398036F9E428A39B02B87C()
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "OnCancelled_AD410E224F398036F9E428A39B02B87C");

	Params::UGAB_FlingerRoar_C_OnCancelled_AD410E224F398036F9E428A39B02B87C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnInterrupted_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnInterrupted_AD410E224F398036F9E428A39B02B87C()
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "OnInterrupted_AD410E224F398036F9E428A39B02B87C");

	Params::UGAB_FlingerRoar_C_OnInterrupted_AD410E224F398036F9E428A39B02B87C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnBlendOut_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnBlendOut_AD410E224F398036F9E428A39B02B87C()
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "OnBlendOut_AD410E224F398036F9E428A39B02B87C");

	Params::UGAB_FlingerRoar_C_OnBlendOut_AD410E224F398036F9E428A39B02B87C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCompleted_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnCompleted_AD410E224F398036F9E428A39B02B87C()
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "OnCompleted_AD410E224F398036F9E428A39B02B87C");

	Params::UGAB_FlingerRoar_C_OnCompleted_AD410E224F398036F9E428A39B02B87C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "K2_ActivateAbility");

	Params::UGAB_FlingerRoar_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.ExecuteUbergraph_GAB_FlingerRoar
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRoar_C::ExecuteUbergraph_GAB_FlingerRoar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_FlingerRoar_C", "ExecuteUbergraph_GAB_FlingerRoar");

	Params::UGAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
