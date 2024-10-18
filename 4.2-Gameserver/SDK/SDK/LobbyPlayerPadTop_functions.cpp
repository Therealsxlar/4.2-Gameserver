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


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyTypeChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EAthenaPartyMemberReadyTypeReadyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnAthenaReadyTypeChanged(struct FUniqueNetIdRepl& MemberId, enum class EAthenaPartyMemberReadyType ReadyType, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnAthenaReadyTypeChanged");

	Params::ULobbyPlayerPadTop_C_OnAthenaReadyTypeChanged_Params Parms;
	Parms.MemberId = MemberId;
	Parms.ReadyType = ReadyType;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaTimeSpentInMatchChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FText                        Minutes                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Seconds                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsPartyInProgressEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnAthenaTimeSpentInMatchChanged(struct FUniqueNetIdRepl& MemberId, class FText& Minutes, class FText& Seconds, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnAthenaTimeSpentInMatchChanged");

	Params::ULobbyPlayerPadTop_C_OnAthenaTimeSpentInMatchChanged_Params Parms;
	Parms.MemberId = MemberId;
	Parms.Minutes = Minutes;
	Parms.Seconds = Seconds;
	Parms.CallFunc_IsPartyInProgressEnabled_ReturnValue = CallFunc_IsPartyInProgressEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaNumAliveChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              NumAlive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyInProgressEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnAthenaNumAliveChanged(struct FUniqueNetIdRepl& MemberId, int32 NumAlive, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnAthenaNumAliveChanged");

	Params::ULobbyPlayerPadTop_C_OnAthenaNumAliveChanged_Params Parms;
	Parms.MemberId = MemberId;
	Parms.NumAlive = NumAlive;
	Parms.CallFunc_IsPartyInProgressEnabled_ReturnValue = CallFunc_IsPartyInProgressEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::UpdateMicIcon()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "UpdateMicIcon");

	Params::ULobbyPlayerPadTop_C_UpdateMicIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerStoppedTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::HandlePlayerStoppedTalking()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerStoppedTalking");

	Params::ULobbyPlayerPadTop_C_HandlePlayerStoppedTalking_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::HandlePlayerMutingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerMutingChanged");

	Params::ULobbyPlayerPadTop_C_HandlePlayerMutingChanged_Params Parms;
	Parms.UniqueId = UniqueId;
	Parms.IsTalking = IsTalking;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::HandlePlayerTalkingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "HandlePlayerTalkingChanged");

	Params::ULobbyPlayerPadTop_C_HandlePlayerTalkingChanged_Params Parms;
	Parms.UniqueId = UniqueId;
	Parms.IsTalking = IsTalking;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshAthenaReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        ReadyVar                                                         (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAthenaPartyMemberReadyText_ReturnValue               ()
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaPartyMemberReadyTypeCallFunc_GetAthenaPartyMemberReadyType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::RefreshAthenaReadyState(const struct FUniqueNetIdRepl& MemberId, class FText ReadyVar, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAthenaPartyMemberReadyText_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, enum class EAthenaPartyMemberReadyType CallFunc_GetAthenaPartyMemberReadyType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "RefreshAthenaReadyState");

	Params::ULobbyPlayerPadTop_C_RefreshAthenaReadyState_Params Parms;
	Parms.MemberId = MemberId;
	Parms.ReadyVar = ReadyVar;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaPartyMemberReadyText_ReturnValue = CallFunc_GetAthenaPartyMemberReadyText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetAthenaPartyMemberReadyType_ReturnValue = CallFunc_GetAthenaPartyMemberReadyType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyPlayerUnhovered");

	Params::ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::Initialize(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Initialize");

	Params::ULobbyPlayerPadTop_C_Initialize_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortPartyContext* CallFunc_GetContext_ReturnValue4)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "InitializeContextEvents");

	Params::ULobbyPlayerPadTop_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyPlayerHovered");

	Params::ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "SetTeamMemberInfo");

	Params::ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bChatDisabled                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortLobbyBeaconClient*      CallFunc_GetLobbyBeaconClient_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortLobbyBeaconClientRM*    K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberLocationCallFunc_GetPartyMemberLocation_LocationOut                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPartyMemberLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::Refresh(bool bChatDisabled, const struct FLinearColor& Temp_struct_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable1, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Refresh");

	Params::ULobbyPlayerPadTop_C_Refresh_Params Parms;
	Parms.bChatDisabled = bChatDisabled;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetLobbyBeaconClient_ReturnValue = CallFunc_GetLobbyBeaconClient_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM = K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetPartyMemberLocation_LocationOut = CallFunc_GetPartyMemberLocation_LocationOut;
	Parms.CallFunc_GetPartyMemberLocation_ReturnValue = CallFunc_GetPartyMemberLocation_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadTop_C::RefreshPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "RefreshPlayerName");

	Params::ULobbyPlayerPadTop_C_RefreshPlayerName_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "PreConstruct");

	Params::ULobbyPlayerPadTop_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::Construct()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "Construct");

	Params::ULobbyPlayerPadTop_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::OnLobbyStarted()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyStarted");

	Params::ULobbyPlayerPadTop_C_OnLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            PlayerNetId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bIsReady                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadTop_C::OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnUpdateLobbyPlayerPadTop");

	Params::ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params Parms;
	Parms.PlayerNetId = PlayerNetId;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadTop_C::OnLobbyDisconnected()
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "OnLobbyDisconnected");

	Params::ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortLobbyBeaconClient*      CallFunc_GetLobbyBeaconClient_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortLobbyBeaconClientRM*    K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable3                                            (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_PlayerNetId                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void ULobbyPlayerPadTop_C::ExecuteUbergraph_LobbyPlayerPadTop(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& Temp_string_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, const class FString& Temp_string_Variable3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, bool K2Node_CustomEvent_bIsReady, bool CallFunc_AreUniqueIDsIdentical_ReturnValue, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyPlayerPadTop_C", "ExecuteUbergraph_LobbyPlayerPadTop");

	Params::ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLobbyBeaconClient_ReturnValue = CallFunc_GetLobbyBeaconClient_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM = K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.K2Node_CustomEvent_PlayerNetId = K2Node_CustomEvent_PlayerNetId;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
