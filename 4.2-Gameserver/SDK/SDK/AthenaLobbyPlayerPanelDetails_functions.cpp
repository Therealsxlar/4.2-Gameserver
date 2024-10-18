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


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         ChangedTeamMemberInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& ChangedTeamMemberInfo, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnTeamMemberStateChanged");

	Params::UAthenaLobbyPlayerPanelDetails_C_OnTeamMemberStateChanged_Params Parms;
	Parms.ChangedTeamMemberInfo = ChangedTeamMemberInfo;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBattlePass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UAthenaLobbyPlayerPanelDetails_C::RefreshBattlePass(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Conv_IntToText_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshBattlePass");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshBattlePass_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::RefreshBanner(class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshBanner");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshBanner_Params Parms;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "SetTeamMemberInfo");

	Params::UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "InitializeContextEvents");

	Params::UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveFriendsCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnActiveFriendsCountUpdated(int32 ActiveFriendsCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnActiveFriendsCountUpdated");

	Params::UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params Parms;
	Parms.ActiveFriendsCount = ActiveFriendsCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InvitesCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnPartyInvitesCountChanged(int32 InvitesCount)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnPartyInvitesCountChanged");

	Params::UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params Parms;
	Parms.InvitesCount = InvitesCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::Initialize()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Initialize");

	Params::UAthenaLobbyPlayerPanelDetails_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsInvitationPending                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            PlayerUniqueId                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed        (HasGetValueTypeHash)
// bool                               CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetFriendRequestStatusForTeamMember_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPendingMcpPartyInvitation_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, const struct FUniqueNetIdRepl& CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed, bool CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool K2Node_Select_Default, bool CallFunc_HasPendingMcpPartyInvitation_ReturnValue, bool K2Node_Select1_Default, bool K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "IsInvitationPending");

	Params::UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params Parms;
	Parms.PlayerUniqueId = PlayerUniqueId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed = CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed;
	Parms.CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId = CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId;
	Parms.CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue = CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasPendingMcpPartyInvitation_ReturnValue = CallFunc_HasPendingMcpPartyInvitation_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = Parms.bIsInvitationPending;

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInvitationPending_bIsInvitationPending                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPendingInvite(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsInvitationPending_bIsInvitationPending, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPendingInvite");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsInvitationPending_bIsInvitationPending = CallFunc_IsInvitationPending_bIsInvitationPending;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPlayerName(class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPlayerName");

	Params::UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanelDetails_C::Refresh()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Refresh");

	Params::UAthenaLobbyPlayerPanelDetails_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "PreConstruct");

	Params::UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable3                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable4                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable5                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable6                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable7                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select1_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaLobbyPlayerPanelDetails_C::ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable1, const class FString& Temp_string_Variable4, const class FString& Temp_string_Variable5, const class FString& Temp_string_Variable6, const class FString& Temp_string_Variable7, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Select_Default, int32 CallFunc_RandomInteger_ReturnValue1, const class FString& K2Node_Select1_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "ExecuteUbergraph_AthenaLobbyPlayerPanelDetails");

	Params::UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_string_Variable4 = Temp_string_Variable4;
	Parms.Temp_string_Variable5 = Temp_string_Variable5;
	Parms.Temp_string_Variable6 = Temp_string_Variable6;
	Parms.Temp_string_Variable7 = Temp_string_Variable7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomInteger_ReturnValue1 = CallFunc_RandomInteger_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
