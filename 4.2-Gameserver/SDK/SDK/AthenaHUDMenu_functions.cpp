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


// Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Died
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDied                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerDeathReport      DeathReport                                                      (Parm, OutParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsClientNotifiedOfPawnDied_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUDMenu_C::Has_Player_Died(bool* bDied, struct FFortPlayerDeathReport* DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfPawnDied_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "Has Player Died");

	Params::UAthenaHUDMenu_C_Has_Player_Died_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsClientNotifiedOfPawnDied_ReturnValue = CallFunc_IsClientNotifiedOfPawnDied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bDied != nullptr)
		*bDied = Parms.bDied;

	if (DeathReport != nullptr)
		*DeathReport = Parms.DeathReport;

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Has Player Or Team Won
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsClientNotifiedOfWin_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsClientNotifiedOfTeamWin_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUDMenu_C::Has_Player_Or_Team_Won(bool* bWon, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfWin_ReturnValue, bool CallFunc_IsClientNotifiedOfTeamWin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "Has Player Or Team Won");

	Params::UAthenaHUDMenu_C_Has_Player_Or_Team_Won_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsClientNotifiedOfWin_ReturnValue = CallFunc_IsClientNotifiedOfWin_ReturnValue;
	Parms.CallFunc_IsClientNotifiedOfTeamWin_ReturnValue = CallFunc_IsClientNotifiedOfTeamWin_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWon != nullptr)
		*bWon = Parms.bWon;

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*      ViewModel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUDMenu_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "SetViewModel");

	Params::UAthenaHUDMenu_C_SetViewModel_Params Parms;
	Parms.ViewModel = ViewModel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.CreateOrShowGameOverScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaGameOverWidget_C*     GameOverScreen                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDMenu_C::CreateOrShowGameOverScreen(class UAthenaGameOverWidget_C** GameOverScreen, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "CreateOrShowGameOverScreen");

	Params::UAthenaHUDMenu_C_CreateOrShowGameOverScreen_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameOverScreen != nullptr)
		*GameOverScreen = Parms.GameOverScreen;

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFeedback_C*                 K2Node_DynamicCast_AsFeedback                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUDMenu_C::Dismiss(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "Dismiss");

	Params::UAthenaHUDMenu_C_Dismiss_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFeedback = K2Node_DynamicCast_AsFeedback;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PopMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaHUDMenu_C::PopMenuContent(class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "PopMenuContent");

	Params::UAthenaHUDMenu_C_PopMenuContent_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PushMenuContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDMenu_C::PushMenuContent(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "PushMenuContent");

	Params::UAthenaHUDMenu_C_PushMenuContent_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.SetCursorModeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CustomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUDMenu_C::SetCursorModeContent(class UUserWidget* CustomWidget, class FName ActionName, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "SetCursorModeContent");

	Params::UAthenaHUDMenu_C_SetCursorModeContent_Params Parms;
	Parms.CustomWidget = CustomWidget;
	Parms.ActionName = ActionName;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Or Team Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDMenu_C::On_Player_Or_Team_Won()
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "On Player Or Team Won");

	Params::UAthenaHUDMenu_C_On_Player_Or_Team_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDMenu_C::HandleRevived()
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "HandleRevived");

	Params::UAthenaHUDMenu_C_HandleRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaHUDMenu_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "Construct");

	Params::UAthenaHUDMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Clear GameOver Screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDMenu_C::Clear_GameOver_Screen()
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "Clear GameOver Screen");

	Params::UAthenaHUDMenu_C_Clear_GameOver_Screen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUDMenu_C::On_Player_Died(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "On Player Died");

	Params::UAthenaHUDMenu_C_On_Player_Died_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.PostBind_CheckConditions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDMenu_C::PostBind_CheckConditions()
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "PostBind_CheckConditions");

	Params::UAthenaHUDMenu_C_PostBind_CheckConditions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDMenu.AthenaHUDMenu_C.ExecuteUbergraph_AthenaHUDMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaGameOverWidget_C*     CallFunc_CreateOrShowGameOverScreen_GameOverScreen               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UAthenaGameOverWidget_C*     CallFunc_CreateOrShowGameOverScreen_GameOverScreen1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_Has_Player_Or_Team_Won_bWon                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Player_Died_bDied                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerDeathReport      CallFunc_Has_Player_Died_DeathReport                             ()
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaGameOverWidget_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDMenu_C::ExecuteUbergraph_AthenaHUDMenu(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Has_Player_Or_Team_Won_bWon, bool CallFunc_Has_Player_Died_bDied, const struct FFortPlayerDeathReport& CallFunc_Has_Player_Died_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, float K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UAthenaGameOverWidget_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUDMenu_C", "ExecuteUbergraph_AthenaHUDMenu");

	Params::UAthenaHUDMenu_C_ExecuteUbergraph_AthenaHUDMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateOrShowGameOverScreen_GameOverScreen = CallFunc_CreateOrShowGameOverScreen_GameOverScreen;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_CreateOrShowGameOverScreen_GameOverScreen1 = CallFunc_CreateOrShowGameOverScreen_GameOverScreen1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Has_Player_Or_Team_Won_bWon = CallFunc_Has_Player_Or_Team_Won_bWon;
	Parms.CallFunc_Has_Player_Died_bDied = CallFunc_Has_Player_Died_bDied;
	Parms.CallFunc_Has_Player_Died_DeathReport = CallFunc_Has_Player_Died_DeathReport;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
