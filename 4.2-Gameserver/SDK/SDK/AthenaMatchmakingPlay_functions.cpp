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


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingOptionsDisplay_v2_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::OpenPlayOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OpenPlayOptions");

	Params::UAthenaMatchmakingPlay_C_OpenPlayOptions_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "Construct");

	Params::UAthenaMatchmakingPlay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowPlayButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::OnPlayButtonUpdated(bool bShowPlayButton)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnPlayButtonUpdated");

	Params::UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params Parms;
	Parms.bShowPlayButton = bShowPlayButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayButtonText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetPlayButtonText(class FText& PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnSetPlayButtonText");

	Params::UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params Parms;
	Parms.PlayButtonText = PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetCancelButtonText(class FText& CancelButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnSetCancelButtonText");

	Params::UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params Parms;
	Parms.CancelButtonText = CancelButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         NewPlaylist                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::PlaylistChanged(class UFortPlaylistAthena* NewPlaylist)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistChanged");

	Params::UAthenaMatchmakingPlay_C_PlaylistChanged_Params Parms;
	Parms.NewPlaylist = NewPlaylist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetSquadFillText
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InCurrentSquadFill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::SetSquadFillText(bool InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "SetSquadFillText");

	Params::UAthenaMatchmakingPlay_C_SetSquadFillText_Params Parms;
	Parms.InCurrentSquadFill = InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowPlayButton                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PlayButtonText                                      (ConstParm)
// class FText                        K2Node_Event_CancelButtonText                                    (ConstParm)
// class UFortPlaylistAthena*         K2Node_Event_NewPlaylist                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InCurrentSquadFill                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bShowPlayButton, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, class UFortPlaylistAthena* K2Node_Event_NewPlaylist, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "ExecuteUbergraph_AthenaMatchmakingPlay");

	Params::UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button1 = K2Node_DynamicCast_AsIcon_Text_Button1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_bShowPlayButton = K2Node_Event_bShowPlayButton;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_Event_PlayButtonText = K2Node_Event_PlayButtonText;
	Parms.K2Node_Event_CancelButtonText = K2Node_Event_CancelButtonText;
	Parms.K2Node_Event_NewPlaylist = K2Node_Event_NewPlaylist;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_InCurrentSquadFill = K2Node_Event_InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
