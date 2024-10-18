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


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APBWA_W1_QuarterWallS_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "UserConstructionScript");

	Params::APBWA_W1_QuarterWallS_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APBWA_W1_QuarterWallS_C::GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "GameplayCue.Abilities.Activation.Generic.BannerWallBuff1");

	Params::APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APBWA_W1_QuarterWallS_C::GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "GameplayCue.Abilities.Activation.Generic.BannerWallBuff2");

	Params::APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.ExecuteUbergraph_PBWA_W1_QuarterWallS
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void APBWA_W1_QuarterWallS_C::ExecuteUbergraph_PBWA_W1_QuarterWallS(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue1)
{
	static auto Func = Class->GetFunction("PBWA_W1_QuarterWallS_C", "ExecuteUbergraph_PBWA_W1_QuarterWallS");

	Params::APBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimatingMID_ReturnValue = CallFunc_GetAnimatingMID_ReturnValue;
	Parms.CallFunc_GetAnimatingMID_ReturnValue1 = CallFunc_GetAnimatingMID_ReturnValue1;
	Parms.CallFunc_GetAnimatingMID_ReturnValue2 = CallFunc_GetAnimatingMID_ReturnValue2;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
