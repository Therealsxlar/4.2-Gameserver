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


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::MapPingTimeOut()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MapPingTimeOut");

	Params::UAthenaTeamMemberInfo_C_MapPingTimeOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        AthenaGameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// float                              CallFunc_VSize2DSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::Mapping(class AFortGameStateAthena* AthenaGameState, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Mapping");

	Params::UAthenaTeamMemberInfo_C_Mapping_Params Parms;
	Parms.AthenaGameState = AthenaGameState;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_VSize2DSquared_ReturnValue = CallFunc_VSize2DSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::InitSpeakerMaterial(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "InitSpeakerMaterial");

	Params::UAthenaTeamMemberInfo_C_InitSpeakerMaterial_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetPlatformUniqueNetId_ReturnValue                      (HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::UpdateUniqueID(const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateUniqueID");

	Params::UAthenaTeamMemberInfo_C_UpdateUniqueID_Params Parms;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetPlatformUniqueNetId_ReturnValue = CallFunc_GetPlatformUniqueNetId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetIdToUse                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFriend_CanFriend                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SendFriendInvite(const struct FUniqueNetIdRepl& UniqueNetIdToUse, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTencentBuild_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_CanFriend_CanFriend)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SendFriendInvite");

	Params::UAthenaTeamMemberInfo_C_SendFriendInvite_Params Parms;
	Parms.UniqueNetIdToUse = UniqueNetIdToUse;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_CanFriend_CanFriend = CallFunc_CanFriend_CanFriend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanFriend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseConsoleId                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            NetIdToUse                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerOnPC_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusCallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusK2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select2_Default                                           (HasGetValueTypeHash)
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::CanFriend(bool* CanFriend, bool bUseConsoleId, const struct FUniqueNetIdRepl& NetIdToUse, bool Temp_bool_Variable, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_Select_Default, bool CallFunc_IsPlayerOnPC_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool Temp_bool_Variable5, enum class EFortFriendRequestStatus K2Node_Select1_Default, bool CallFunc_IsValidNetID_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select2_Default, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess1, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "CanFriend");

	Params::UAthenaTeamMemberInfo_C_CanFriend_Params Parms;
	Parms.bUseConsoleId = bUseConsoleId;
	Parms.NetIdToUse = NetIdToUse;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPlayerOnPC_ReturnValue = CallFunc_IsPlayerOnPC_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue;
	Parms.CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanFriend != nullptr)
		*CanFriend = Parms.CanFriend;

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetPlayerDisconnected");

	Params::UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params Parms;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetTalking");

	Params::UAthenaTeamMemberInfo_C_SetTalking_Params Parms;
	Parms.NewTalking = NewTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateMicIcon");

	Params::UAthenaTeamMemberInfo_C_UpdateMicIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetMuted");

	Params::UAthenaTeamMemberInfo_C_SetMuted_Params Parms;
	Parms.NewMuted = NewMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reviving                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetReviving");

	Params::UAthenaTeamMemberInfo_C_SetReviving_Params Parms;
	Parms.Reviving = Reviving;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DBNO                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDBNO");

	Params::UAthenaTeamMemberInfo_C_SetDBNO_Params Parms;
	Parms.DBNO = DBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dead                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FSlateColor                 K2Node_Select1_Default                                           ()

void UAthenaTeamMemberInfo_C::SetDead(bool Dead, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDead");

	Params::UAthenaTeamMemberInfo_C_SetDead_Params Parms;
	Parms.Dead = Dead;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetShield(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetShield");

	Params::UAthenaTeamMemberInfo_C_SetShield_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetHealth");

	Params::UAthenaTeamMemberInfo_C_SetHealth_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::DisplayAddFriendIfApplicable()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisplayAddFriendIfApplicable");

	Params::UAthenaTeamMemberInfo_C_DisplayAddFriendIfApplicable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UAthenaTeamMemberInfo_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Construct");

	Params::UAthenaTeamMemberInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::DisplayAddFriend_NoAnim()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisplayAddFriend_NoAnim");

	Params::UAthenaTeamMemberInfo_C_DisplayAddFriend_NoAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(bool bTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "TalkingStateChanged");

	Params::UAthenaTeamMemberInfo_C_TalkingStateChanged_Params Parms;
	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDBNO                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(bool bDBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DBNOStateChanged");

	Params::UAthenaTeamMemberInfo_C_DBNOStateChanged_Params Parms;
	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bReviving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(bool bReviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BeingRevivedStateChanged");

	Params::UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params Parms;
	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerNameChanged(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerNameChanged");

	Params::UAthenaTeamMemberInfo_C_PlayerNameChanged_Params Parms;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::HitPointsChanged(float HealthPercent, float ShieldPercent)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "HitPointsChanged");

	Params::UAthenaTeamMemberInfo_C_HitPointsChanged_Params Parms;
	Parms.HealthPercent = HealthPercent;
	Parms.ShieldPercent = ShieldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::MutedStateChanged(bool Muted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MutedStateChanged");

	Params::UAthenaTeamMemberInfo_C_MutedStateChanged_Params Parms;
	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               DeadStateChanged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DeadStateChanged(bool DeadStateChanged)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DeadStateChanged");

	Params::UAthenaTeamMemberInfo_C_DeadStateChanged_Params Parms;
	Parms.DeadStateChanged = DeadStateChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Disconnected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DisconnectedStateChanged(bool Disconnected)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisconnectedStateChanged");

	Params::UAthenaTeamMemberInfo_C_DisconnectedStateChanged_Params Parms;
	Parms.Disconnected = Disconnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      CurrentPlatform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerPlatformChanged(const class FString& CurrentPlatform)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerPlatformChanged");

	Params::UAthenaTeamMemberInfo_C_PlayerPlatformChanged_Params Parms;
	Parms.CurrentPlatform = CurrentPlatform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapIndicatorPositionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::MapIndicatorPositionChanged()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MapIndicatorPositionChanged");

	Params::UAthenaTeamMemberInfo_C_MapIndicatorPositionChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// bool                               CallFunc_CanFriend_CanFriend                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_CanFriend_CanFriend1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bDBNO                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReviving                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// float                              K2Node_Event_HealthPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ShieldPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Muted                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_DeadStateChanged                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Disconnected                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_CurrentPlatform                                     (ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, bool CallFunc_CanFriend_CanFriend, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_CanFriend_CanFriend1, bool K2Node_Event_bTalking, bool K2Node_Event_bDBNO, bool K2Node_Event_bReviving, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_Event_HealthPercent, float K2Node_Event_ShieldPercent, bool K2Node_Event_Muted, bool K2Node_Event_DeadStateChanged, bool K2Node_Event_Disconnected, const class FString& K2Node_Event_CurrentPlatform)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ExecuteUbergraph_AthenaTeamMemberInfo");

	Params::UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanFriend_CanFriend = CallFunc_CanFriend_CanFriend;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_CanFriend_CanFriend1 = CallFunc_CanFriend_CanFriend1;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.K2Node_Event_bDBNO = K2Node_Event_bDBNO;
	Parms.K2Node_Event_bReviving = K2Node_Event_bReviving;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_HealthPercent = K2Node_Event_HealthPercent;
	Parms.K2Node_Event_ShieldPercent = K2Node_Event_ShieldPercent;
	Parms.K2Node_Event_Muted = K2Node_Event_Muted;
	Parms.K2Node_Event_DeadStateChanged = K2Node_Event_DeadStateChanged;
	Parms.K2Node_Event_Disconnected = K2Node_Event_Disconnected;
	Parms.K2Node_Event_CurrentPlatform = K2Node_Event_CurrentPlatform;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
