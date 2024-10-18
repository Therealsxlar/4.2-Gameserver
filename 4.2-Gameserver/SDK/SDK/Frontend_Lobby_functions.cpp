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


// Function Frontend_Lobby.Frontend_Lobby_C.OnBackgroundChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::OnBackgroundChanged()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_C", "OnBackgroundChanged");

	Params::AFrontend_Lobby_C_OnBackgroundChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_Lobby_C", "ReceiveBeginPlay");

	Params::AFrontend_Lobby_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLobbyBackgroundLevelName_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Frontend_Lobby_C", "ExecuteUbergraph_Frontend_Lobby");

	Params::AFrontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue1 = CallFunc_NotEqual_NameName_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetLobbyBackgroundLevelName_ReturnValue = CallFunc_GetLobbyBackgroundLevelName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
