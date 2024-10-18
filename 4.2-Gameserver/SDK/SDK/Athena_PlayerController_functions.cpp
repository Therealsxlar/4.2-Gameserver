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


// Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            SquadMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo               (HasGetValueTypeHash)
// bool                               CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeamMemberFriend_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AAthena_PlayerController_C::IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState* SquadMember, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo, bool CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue, bool CallFunc_IsTeamMemberFriend_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "IsLocalPlayerFriendsWithSquadMember");

	Params::AAthena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember_Params Parms;
	Parms.SquadMember = SquadMember;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo = CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo;
	Parms.CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue = CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue;
	Parms.CallFunc_IsTeamMemberFriend_ReturnValue = CallFunc_IsTeamMemberFriend_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "UserConstructionScript");

	Params::AAthena_PlayerController_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveBeginPlay");

	Params::AAthena_PlayerController_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::PlayWinEffects()
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "PlayWinEffects");

	Params::AAthena_PlayerController_C_PlayWinEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UAmbientControllerComponent_Athena_C*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_PlayerController_C", "ExecuteUbergraph_Athena_PlayerController");

	Params::AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
