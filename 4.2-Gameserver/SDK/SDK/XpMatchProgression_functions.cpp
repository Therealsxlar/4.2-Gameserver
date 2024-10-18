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


// Function XpMatchProgression.XpMatchProgression_C.UpdateRewardForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SeasonLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPairCallFunc_GetSeasonLevelUpReward_Reward                           (NoDestructor)
// int32                              CallFunc_GetSeasonLevelUpReward_RewardLevel                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeasonLevelUpReward_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpMatchProgression_C::UpdateRewardForLevel(int32 SeasonLevel, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetSeasonLevelUpReward_Reward, int32 CallFunc_GetSeasonLevelUpReward_RewardLevel, bool CallFunc_GetSeasonLevelUpReward_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "UpdateRewardForLevel");

	Params::UXpMatchProgression_C_UpdateRewardForLevel_Params Parms;
	Parms.SeasonLevel = SeasonLevel;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_GetSeasonLevelUpReward_Reward = CallFunc_GetSeasonLevelUpReward_Reward;
	Parms.CallFunc_GetSeasonLevelUpReward_RewardLevel = CallFunc_GetSeasonLevelUpReward_RewardLevel;
	Parms.CallFunc_GetSeasonLevelUpReward_ReturnValue = CallFunc_GetSeasonLevelUpReward_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.IsReadyForNextXpEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForNextXpReward_Ready                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForNextXpReward_Ready1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UXpMatchProgression_C::IsReadyForNextXpEvent(bool CallFunc_IsReadyForNextXpReward_Ready, bool CallFunc_IsReadyForNextXpReward_Ready1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "IsReadyForNextXpEvent");

	Params::UXpMatchProgression_C_IsReadyForNextXpEvent_Params Parms;
	Parms.CallFunc_IsReadyForNextXpReward_Ready = CallFunc_IsReadyForNextXpReward_Ready;
	Parms.CallFunc_IsReadyForNextXpReward_Ready1 = CallFunc_IsReadyForNextXpReward_Ready1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function XpMatchProgression.XpMatchProgression_C.TickRewardAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsReadyForNextXpEvent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpMatchProgression_C::TickRewardAnimation(bool CallFunc_IsReadyForNextXpEvent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "TickRewardAnimation");

	Params::UXpMatchProgression_C_TickRewardAnimation_Params Parms;
	Parms.CallFunc_IsReadyForNextXpEvent_ReturnValue = CallFunc_IsReadyForNextXpEvent_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaLevelInfo            AthenaLevelInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpMatchProgression_C::SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "SetPlayerState");

	Params::UXpMatchProgression_C_SetPlayerState_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.AthenaLevelInfo = AthenaLevelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.Play Xp Rewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerMatchReport*    Report                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "Play Xp Rewards");

	Params::UXpMatchProgression_C_Play_Xp_Rewards_Params Parms;
	Parms.Report = Report;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "Tick");

	Params::UXpMatchProgression_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.Finished Playing Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpMatchProgression_C::Finished_Playing_Animation()
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "Finished Playing Animation");

	Params::UXpMatchProgression_C_Finished_Playing_Animation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpMatchProgression_C::Destruct()
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "Destruct");

	Params::UXpMatchProgression_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature");

	Params::UXpMatchProgression_C_BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature_Params Parms;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpMatchProgression.XpMatchProgression_C.ExecuteUbergraph_XpMatchProgression
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaPlayerMatchReport*    K2Node_CustomEvent_Report                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Level                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalScoreEarned_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalSeasonalXpEarned_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// TArray<struct FAthenaMatchXpReward>CallFunc_GetXpRewards_XpRewards                                  (ZeroConstructor, ReferenceParm)

void UXpMatchProgression_C::ExecuteUbergraph_XpMatchProgression(int32 EntryPoint, class UAthenaPlayerMatchReport* K2Node_CustomEvent_Report, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Level, int32 CallFunc_GetTotalScoreEarned_ReturnValue, int32 CallFunc_GetTotalSeasonalXpEarned_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, TArray<struct FAthenaMatchXpReward>& CallFunc_GetXpRewards_XpRewards)
{
	static auto Func = Class->GetFunction("XpMatchProgression_C", "ExecuteUbergraph_XpMatchProgression");

	Params::UXpMatchProgression_C_ExecuteUbergraph_XpMatchProgression_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Report = K2Node_CustomEvent_Report;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Level = K2Node_ComponentBoundEvent_Level;
	Parms.CallFunc_GetTotalScoreEarned_ReturnValue = CallFunc_GetTotalScoreEarned_ReturnValue;
	Parms.CallFunc_GetTotalSeasonalXpEarned_ReturnValue = CallFunc_GetTotalSeasonalXpEarned_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_GetXpRewards_XpRewards = CallFunc_GetXpRewards_XpRewards;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
