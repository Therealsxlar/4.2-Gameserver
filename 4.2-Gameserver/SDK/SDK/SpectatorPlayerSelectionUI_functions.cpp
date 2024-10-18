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


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.SetFollowedPlayerButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     NewButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpectatorPlayerSelectionUI_C::SetFollowedPlayerButton(class UButton* NewButton, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "SetFollowedPlayerButton");

	Params::USpectatorPlayerSelectionUI_C_SetFollowedPlayerButton_Params Parms;
	Parms.NewButton = NewButton;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.FindPlayerWithPressedButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            Player                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpectatorPlayerSelectionUI_C::FindPlayerWithPressedButton(class AFortPlayerState** Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerState* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsPressed_ReturnValue)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "FindPlayerWithPressedButton");

	Params::USpectatorPlayerSelectionUI_C_FindPlayerWithPressedButton_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.AddPlayerElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     NewTeamInfoWidget                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     NewButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UButton*                     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpectatorPlayerSelectionUI_C::AddPlayerElement(class AFortPlayerStateAthena* Player, class UAthenaTeamMemberInfo_C* NewTeamInfoWidget, class UButton* NewButton, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UButton* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "AddPlayerElement");

	Params::USpectatorPlayerSelectionUI_C_AddPlayerElement_Params Parms;
	Parms.Player = Player;
	Parms.NewTeamInfoWidget = NewTeamInfoWidget;
	Parms.NewButton = NewButton;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpectatorPlayerSelectionUI_C::Construct()
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "Construct");

	Params::USpectatorPlayerSelectionUI_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnPlayerButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpectatorPlayerSelectionUI_C::OnPlayerButtonPressed()
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "OnPlayerButtonPressed");

	Params::USpectatorPlayerSelectionUI_C_OnPlayerButtonPressed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.OnFollowedPlayerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*SpectatorPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            NewFollowedPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpectatorPlayerSelectionUI_C::OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "OnFollowedPlayerChanged");

	Params::USpectatorPlayerSelectionUI_C_OnFollowedPlayerChanged_Params Parms;
	Parms.SpectatorPC = SpectatorPC;
	Parms.NewFollowedPlayer = NewFollowedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameRelevant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            NewlyRelevantPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpectatorPlayerSelectionUI_C::PlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "PlayerBecameRelevant");

	Params::USpectatorPlayerSelectionUI_C_PlayerBecameRelevant_Params Parms;
	Parms.NewlyRelevantPlayer = NewlyRelevantPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.PlayerBecameIrrelevant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            NewlyRelevantPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpectatorPlayerSelectionUI_C::PlayerBecameIrrelevant(class AFortPlayerState* NewlyRelevantPlayer)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "PlayerBecameIrrelevant");

	Params::USpectatorPlayerSelectionUI_C_PlayerBecameIrrelevant_Params Parms;
	Parms.NewlyRelevantPlayer = NewlyRelevantPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C.ExecuteUbergraph_SpectatorPlayerSelectionUI
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_FindPlayerWithPressedButton_Player                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerSpectating*K2Node_CustomEvent_SpectatorPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_CustomEvent_NewFollowedPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerState*            K2Node_CustomEvent_NewlyRelevantPlayer1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_CustomEvent_NewlyRelevantPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UButton*                     CallFunc_Map_Find_Value1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UButton*                     CallFunc_Map_Find_Value2                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpectatorPlayerSelectionUI_C::ExecuteUbergraph_SpectatorPlayerSelectionUI(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerState* CallFunc_FindPlayerWithPressedButton_Player, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating1, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC, class AFortPlayerState* K2Node_CustomEvent_NewFollowedPlayer, class UButton* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerState* K2Node_CustomEvent_NewlyRelevantPlayer1, class AFortPlayerState* K2Node_CustomEvent_NewlyRelevantPlayer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UButton* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UButton* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2)
{
	static auto Func = Class->GetFunction("SpectatorPlayerSelectionUI_C", "ExecuteUbergraph_SpectatorPlayerSelectionUI");

	Params::USpectatorPlayerSelectionUI_C_ExecuteUbergraph_SpectatorPlayerSelectionUI_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindPlayerWithPressedButton_Player = CallFunc_FindPlayerWithPressedButton_Player;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating1 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_SpectatorPC = K2Node_CustomEvent_SpectatorPC;
	Parms.K2Node_CustomEvent_NewFollowedPlayer = K2Node_CustomEvent_NewFollowedPlayer;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewlyRelevantPlayer1 = K2Node_CustomEvent_NewlyRelevantPlayer1;
	Parms.K2Node_CustomEvent_NewlyRelevantPlayer = K2Node_CustomEvent_NewlyRelevantPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Map_Find_Value2 = CallFunc_Map_Find_Value2;
	Parms.CallFunc_Map_Find_ReturnValue2 = CallFunc_Map_Find_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
