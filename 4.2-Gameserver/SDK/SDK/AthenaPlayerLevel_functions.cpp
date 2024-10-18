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


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UAthenaPlayerLevel_C::UpdateLevel(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateLevel");

	Params::UAthenaPlayerLevel_C_UpdateLevel_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelXp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelXpForLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::UpdateXp(int32 LevelXp, int32 LevelXpForLevel, int32 Level, int32 MaxLevel, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateXp");

	Params::UAthenaPlayerLevel_C_UpdateXp_Params Parms;
	Parms.LevelXp = LevelXp;
	Parms.LevelXpForLevel = LevelXpForLevel;
	Parms.Level = Level;
	Parms.MaxLevel = MaxLevel;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "IsReadyForNextXpReward");

	Params::UAthenaPlayerLevel_C_IsReadyForNextXpReward_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaLevelInfo            LevelInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromLevelInfo(const struct FAthenaLevelInfo& LevelInfo)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromLevelInfo");

	Params::UAthenaPlayerLevel_C_InitializeFromLevelInfo_Params Parms;
	Parms.LevelInfo = LevelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      FortPublicAccountInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromAccount(struct FFortPublicAccountInfo& FortPublicAccountInfo)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromAccount");

	Params::UAthenaPlayerLevel_C_InitializeFromAccount_Params Parms;
	Parms.FortPublicAccountInfo = FortPublicAccountInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward        Reward                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerLevel_C::Play_Xp_Reward(struct FAthenaMatchXpReward& Reward)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "Play Xp Reward");

	Params::UAthenaPlayerLevel_C_Play_Xp_Reward_Params Parms;
	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "Tick");

	Params::UAthenaPlayerLevel_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaPlayerLevel_C::BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UAthenaPlayerLevel_C_BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaPlayerLevel_C::BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UAthenaPlayerLevel_C_BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              XpToAdd                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Play_XP_Reward_Directly(int32 XpToAdd)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "Play XP Reward Directly");

	Params::UAthenaPlayerLevel_C_Play_XP_Reward_Directly_Params Parms;
	Parms.XpToAdd = XpToAdd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaPlayerLevel_C::EventTrack_Leveled()
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "EventTrack_Leveled");

	Params::UAthenaPlayerLevel_C_EventTrack_Leveled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaPlayerLevel_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "Destruct");

	Params::UAthenaPlayerLevel_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "PreConstruct");

	Params::UAthenaPlayerLevel_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaMatchXpReward        K2Node_CustomEvent_Reward                                        (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_XpToAdd                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaSeasonRewardLevelInfoCallFunc_GetSeasonLevelInfo_ReturnValue                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaSeasonRewardLevelInfoCallFunc_GetSeasonLevelInfo_ReturnValue1                         ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::ExecuteUbergraph_AthenaPlayerLevel(int32 EntryPoint, bool CallFunc_Less_IntInt_ReturnValue, const struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 K2Node_CustomEvent_XpToAdd, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAthenaSeasonRewardLevelInfo& CallFunc_GetSeasonLevelInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FAthenaSeasonRewardLevelInfo& CallFunc_GetSeasonLevelInfo_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "ExecuteUbergraph_AthenaPlayerLevel");

	Params::UAthenaPlayerLevel_C_ExecuteUbergraph_AthenaPlayerLevel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Reward = K2Node_CustomEvent_Reward;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_CustomEvent_XpToAdd = K2Node_CustomEvent_XpToAdd;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSeasonLevelInfo_ReturnValue = CallFunc_GetSeasonLevelInfo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetAthenaProfile_ReturnValue1 = CallFunc_GetAthenaProfile_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSeasonLevelInfo_ReturnValue1 = CallFunc_GetSeasonLevelInfo_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.LevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::LevelChanged__DelegateSignature(int32 Level)
{
	static auto Func = Class->GetFunction("AthenaPlayerLevel_C", "LevelChanged__DelegateSignature");

	Params::UAthenaPlayerLevel_C_LevelChanged__DelegateSignature_Params Parms;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
