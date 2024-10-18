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


// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamCountWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaTeamCountWidget_C", "PreConstruct");

	Params::UAthenaTeamCountWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.SetTeamSlotData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              TeamIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaTeamCountSlotData    TeamSlotData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaTeamCountWidget_C::SetTeamSlotData(int32 TeamIdx, struct FAthenaTeamCountSlotData& TeamSlotData)
{
	static auto Func = Class->GetFunction("AthenaTeamCountWidget_C", "SetTeamSlotData");

	Params::UAthenaTeamCountWidget_C_SetTeamSlotData_Params Parms;
	Parms.TeamIdx = TeamIdx;
	Parms.TeamSlotData = TeamSlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.ExecuteUbergraph_AthenaTeamCountWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamCountSlot_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TeamIdx                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaTeamCountSlotData    K2Node_Event_TeamSlotData                                        (ConstParm)
// struct FAthenaTeamCountSlotData    K2Node_MakeStruct_AthenaTeamCountSlotData                        ()
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamCountSlot_C*      K2Node_DynamicCast_AsAthena_Team_Count_Slot                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaTeamCountSlotData    K2Node_MakeStruct_AthenaTeamCountSlotData1                       ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamCountSlot_C*      CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamCountWidget_C::ExecuteUbergraph_AthenaTeamCountWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 K2Node_Event_TeamIdx, const struct FAthenaTeamCountSlotData& K2Node_Event_TeamSlotData, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAthenaTeamCountSlot_C* K2Node_DynamicCast_AsAthena_Team_Count_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable1, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue1, class UPanelSlot* CallFunc_AddChild_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaTeamCountWidget_C", "ExecuteUbergraph_AthenaTeamCountWidget");

	Params::UAthenaTeamCountWidget_C_ExecuteUbergraph_AthenaTeamCountWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue1 = CallFunc_GetChildrenCount_ReturnValue1;
	Parms.K2Node_Event_TeamIdx = K2Node_Event_TeamIdx;
	Parms.K2Node_Event_TeamSlotData = K2Node_Event_TeamSlotData;
	Parms.K2Node_MakeStruct_AthenaTeamCountSlotData = K2Node_MakeStruct_AthenaTeamCountSlotData;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_Team_Count_Slot = K2Node_DynamicCast_AsAthena_Team_Count_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_AthenaTeamCountSlotData1 = K2Node_MakeStruct_AthenaTeamCountSlotData1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
