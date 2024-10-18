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


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "SetScrollWidget");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_SetScrollWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomMatchmakingKeyModal_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnCustomMatchmaking(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCustomMatchmakingKeyModal_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnCustomMatchmaking");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnCustomMatchmaking_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingTile_C*    K2Node_DynamicCast_AsAthena_Matchmaking_Tile                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::TriggerMatchmakingPageTileOutroAnim(int32 Temp_int_Variable, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAthenaMatchmakingTile_C* K2Node_DynamicCast_AsAthena_Matchmaking_Tile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "TriggerMatchmakingPageTileOutroAnim");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileOutroAnim_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Tile = K2Node_DynamicCast_AsAthena_Matchmaking_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingTile_C*    K2Node_DynamicCast_AsAthena_Matchmaking_Tile                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::TriggerMatchmakingPageTileIntroAnim(class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaMatchmakingTile_C* K2Node_DynamicCast_AsAthena_Matchmaking_Tile, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "TriggerMatchmakingPageTileIntroAnim");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileIntroAnim_Params Parms;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Tile = K2Node_DynamicCast_AsAthena_Matchmaking_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaMatchmakingOptionsDisplay_v2_C::Touch_To_Close(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Touch To Close");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Touch_To_Close_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::Handle_InputAction_Cancel(bool* Passthrough)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Handle_InputAction_Cancel");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "SetupInput");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnActivated");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "Construct");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InCurrentSquadFill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetSquadFillText(bool InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "SetSquadFillText");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_SetSquadFillText_Params Parms;
	Parms.InCurrentSquadFill = InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMatchmakingButtonsBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsPartyLeader                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMatchmaking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaylistSupportsPartySize                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaylistIsTeam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateMatchmakingButtonsBP(bool IsPartyLeader, bool IsMatchmaking, bool PlaylistSupportsPartySize, bool PlaylistIsTeam)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "UpdateMatchmakingButtonsBP");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_UpdateMatchmakingButtonsBP_Params Parms;
	Parms.IsPartyLeader = IsPartyLeader;
	Parms.IsMatchmaking = IsMatchmaking;
	Parms.PlaylistSupportsPartySize = PlaylistSupportsPartySize;
	Parms.PlaylistIsTeam = PlaylistIsTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelOutroFinshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::OnRightPanelOutroFinshed()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnRightPanelOutroFinshed");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelOutroFinshed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnBeginIntro");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelIntroFinshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingOptionsDisplay_v2_C::OnRightPanelIntroFinshed()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnRightPanelIntroFinshed");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelIntroFinshed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         NewRepresentedPlaylist                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::RepresentedPlaylistChanged(class UFortPlaylistAthena* NewRepresentedPlaylist)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "RepresentedPlaylistChanged");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_RepresentedPlaylistChanged_Params Parms;
	Parms.NewRepresentedPlaylist = NewRepresentedPlaylist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonButton*               ButtonClicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnTileDoubleClicked(class UCommonButton* ButtonClicked)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "OnTileDoubleClicked");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_OnTileDoubleClicked_Params Parms;
	Parms.ButtonClicked = ButtonClicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InCurrentSquadFill                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsPartyLeader                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsMatchmaking                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PlaylistSupportsPartySize                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PlaylistIsTeam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class UFortPlaylistAthena*         K2Node_Event_NewRepresentedPlaylist                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              ()
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                ()
// enum class ESlateVisibility        K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_Event_ButtonClicked                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()

void UAthenaMatchmakingOptionsDisplay_v2_C::ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable2, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable4, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable5, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable6, enum class EInputActionState Temp_byte_Variable4, enum class EInputActionState Temp_byte_Variable5, enum class EInputActionState K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_InCurrentSquadFill, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, bool Temp_bool_Variable7, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsPartyLeader, bool K2Node_Event_IsMatchmaking, bool K2Node_Event_PlaylistSupportsPartySize, bool K2Node_Event_PlaylistIsTeam, enum class ESlateVisibility Temp_byte_Variable8, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select1_Default, class UClass* K2Node_Select2_Default, class UClass* K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select6_Default, bool CallFunc_Not_PreBool_ReturnValue2, bool Temp_bool_Variable8, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable9, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UFortPlaylistAthena* K2Node_Event_NewRepresentedPlaylist, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, enum class ESlateVisibility K2Node_Select7_Default, enum class ESlateVisibility K2Node_Select8_Default, enum class ESlateVisibility K2Node_Select9_Default, bool Temp_bool_Variable10, class UCommonButton* K2Node_Event_ButtonClicked, class FText K2Node_Select10_Default)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingOptionsDisplay_v2_C", "ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2");

	Params::UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue = CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_InCurrentSquadFill = K2Node_Event_InCurrentSquadFill;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsPartyLeader = K2Node_Event_IsPartyLeader;
	Parms.K2Node_Event_IsMatchmaking = K2Node_Event_IsMatchmaking;
	Parms.K2Node_Event_PlaylistSupportsPartySize = K2Node_Event_PlaylistSupportsPartySize;
	Parms.K2Node_Event_PlaylistIsTeam = K2Node_Event_PlaylistIsTeam;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_Event_NewRepresentedPlaylist = K2Node_Event_NewRepresentedPlaylist;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Event_ButtonClicked = K2Node_Event_ButtonClicked;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
