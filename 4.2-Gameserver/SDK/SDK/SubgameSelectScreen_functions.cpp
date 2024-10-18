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


// Function SubgameSelectScreen.SubgameSelectScreen_C.StartSubgameSelectMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "StartSubgameSelectMusic");

	Params::USubgameSelectScreen_C_StartSubgameSelectMusic_Params Parms;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsMinorShutdownWarningEnabled");

	Params::USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::ShowUpsell(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ShowUpsell");

	Params::USubgameSelectScreen_C_ShowUpsell_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeRedeemButton");

	Params::USubgameSelectScreen_C_InitializeRedeemButton_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue1 = CallFunc_EqualEqual_StrStr_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShortDescription                                                 (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsOnSale_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsOnSale_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortDescription_ShortDescription                    ()
// bool                               CallFunc_GetShortDescription_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShortDescription_ShortDescription1                   ()
// bool                               CallFunc_GetShortDescription_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::InitializeShortDescriptions(class FText ShortDescription, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_GetIsOnSale_ReturnValue, bool CallFunc_GetIsOnSale_ReturnValue1, int32 K2Node_Select_Default, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetShortDescription_ShortDescription1, bool CallFunc_GetShortDescription_ReturnValue1, int32 K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeShortDescriptions");

	Params::USubgameSelectScreen_C_InitializeShortDescriptions_Params Parms;
	Parms.ShortDescription = ShortDescription;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_GetIsOnSale_ReturnValue = CallFunc_GetIsOnSale_ReturnValue;
	Parms.CallFunc_GetIsOnSale_ReturnValue1 = CallFunc_GetIsOnSale_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_GetShortDescription_ShortDescription = CallFunc_GetShortDescription_ShortDescription;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetShortDescription_ShortDescription1 = CallFunc_GetShortDescription_ShortDescription1;
	Parms.CallFunc_GetShortDescription_ReturnValue1 = CallFunc_GetShortDescription_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerInParty_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool USubgameSelectScreen_C::IsBusyMatchmakingOrPartyTransitioning(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsLocalPlayerInParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsBusyMatchmakingOrPartyTransitioning");

	Params::USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;
	Parms.CallFunc_IsLocalPlayerInParty_ReturnValue = CallFunc_IsLocalPlayerInParty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Update()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Update");

	Params::USubgameSelectScreen_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSubGameSelectRotatorItems  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "AdvanceRotator");

	Params::USubgameSelectScreen_C_AdvanceRotator_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSubGameSelectRotatorItems  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void USubgameSelectScreen_C::ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ResetKeyArtForMainMenu");

	Params::USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void USubgameSelectScreen_C::ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ToggleTimer");

	Params::USubgameSelectScreen_C_ToggleTimer_Params Parms;
	Parms.Enabled = Enabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                SubGame                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InstallAllOnDemandChunks_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::SafeSetSubGame(enum class ESubGame SubGame, bool CallFunc_InstallAllOnDemandChunks_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "SafeSetSubGame");

	Params::USubgameSelectScreen_C_SafeSetSubGame_Params Parms;
	Parms.SubGame = SubGame;
	Parms.CallFunc_InstallAllOnDemandChunks_ReturnValue = CallFunc_InstallAllOnDemandChunks_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                SubGame                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFullDescription_FullDescription                      ()
// bool                               CallFunc_GetFullDescription_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetFullDescription_FullDescription1                     ()
// bool                               CallFunc_GetFullDescription_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// enum class ESubGame                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

void USubgameSelectScreen_C::SetDescriptionForSubGame(enum class ESubGame SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription1, bool CallFunc_GetFullDescription_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, enum class ESubGame Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "SetDescriptionForSubGame");

	Params::USubgameSelectScreen_C_SetDescriptionForSubGame_Params Parms;
	Parms.SubGame = SubGame;
	Parms.CallFunc_GetFullDescription_FullDescription = CallFunc_GetFullDescription_FullDescription;
	Parms.CallFunc_GetFullDescription_ReturnValue = CallFunc_GetFullDescription_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetFullDescription_FullDescription1 = CallFunc_GetFullDescription_FullDescription1;
	Parms.CallFunc_GetFullDescription_ReturnValue1 = CallFunc_GetFullDescription_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "DialogResult_FA087F7E461591BDBC2AECAB522E633C");

	Params::USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_9B87D67040B12081C9B651A92AD99EA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::DialogResult_9B87D67040B12081C9B651A92AD99EA4(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "DialogResult_9B87D67040B12081C9B651A92AD99EA4");

	Params::USubgameSelectScreen_C_DialogResult_9B87D67040B12081C9B651A92AD99EA4_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Try_And_Remove_The_Dialog()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Try And Remove The Dialog");

	Params::USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Clear Party and Matchmaking Delegates");

	Params::USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::CustomEvent_0(enum class EMatchmakingCompleteResult Result)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_0");

	Params::USubgameSelectScreen_C_CustomEvent_0_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::CustomEvent_1()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_1");

	Params::USubgameSelectScreen_C_CustomEvent_1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Show_Busy_If_Async_Tasks_Still_Pending()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Show Busy If Async Tasks Still Pending");

	Params::USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Construct");

	Params::USubgameSelectScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::CustomEvent_2()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_2");

	Params::USubgameSelectScreen_C_CustomEvent_2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnActivated");

	Params::USubgameSelectScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::OnRealMoneyPurchaseComleteHandler(bool bSuccess)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnRealMoneyPurchaseComleteHandler");

	Params::USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Destruct");

	Params::USubgameSelectScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowMinorShutdownMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsCampaign                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::ShowMinorShutdownMessage(bool bIsCampaign)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ShowMinorShutdownMessage");

	Params::USubgameSelectScreen_C_ShowMinorShutdownMessage_Params Parms;
	Parms.bIsCampaign = bIsCampaign;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.HandleMinorWarning_Campaign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::HandleMinorWarning_Campaign()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "HandleMinorWarning_Campaign");

	Params::USubgameSelectScreen_C_HandleMinorWarning_Campaign_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.HandleMinorWarning_Athena
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::HandleMinorWarning_Athena()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "HandleMinorWarning_Athena");

	Params::USubgameSelectScreen_C_HandleMinorWarning_Athena_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRedeemCodeComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnRedeemCodeComplete()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnRedeemCodeComplete");

	Params::USubgameSelectScreen_C_OnRedeemCodeComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnInputModeChanged");

	Params::USubgameSelectScreen_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAccountGameplayRestrictionText_ReturnValue           ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// enum class EMatchmakingCompleteResultK2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_Root_C*           CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason1                                   ()
// bool                               CallFunc_CanPlay_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlatformDisplayName_ReturnValue                      ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMinorShutdownWarningEnabled_Enabled                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bIsCampaign                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMinorShutdownWarningEnabled_Enabled1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetUpsellStorefrontNames_OutStorefrontNames             (ZeroConstructor, ReferenceParm)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger1_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum1_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class FText CallFunc_GetAccountGameplayRestrictionText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UStoreMain_Root_C* CallFunc_Create_ReturnValue1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, class FText CallFunc_CanPlay_DenialReason1, bool CallFunc_CanPlay_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool K2Node_CustomEvent_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText Temp_text_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled, bool K2Node_CustomEvent_bIsCampaign, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, float Temp_float_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool Temp_bool_Variable, float K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class FString>& CallFunc_GetUpsellStorefrontNames_OutStorefrontNames, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue4, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, bool K2Node_SwitchInteger1_CmpSuccess)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ExecuteUbergraph_SubgameSelectScreen");

	Params::USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetAccountGameplayRestrictionText_ReturnValue = CallFunc_GetAccountGameplayRestrictionText_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue1 = CallFunc_PauseAnimation_ReturnValue1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_CanPlay_DenialReason1 = CallFunc_CanPlay_DenialReason1;
	Parms.CallFunc_CanPlay_ReturnValue1 = CallFunc_CanPlay_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetPlatformDisplayName_ReturnValue = CallFunc_GetPlatformDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue = CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue;
	Parms.CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1 = CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_IsMinorShutdownWarningEnabled_Enabled = CallFunc_IsMinorShutdownWarningEnabled_Enabled;
	Parms.K2Node_CustomEvent_bIsCampaign = K2Node_CustomEvent_bIsCampaign;
	Parms.CallFunc_IsMinorShutdownWarningEnabled_Enabled1 = CallFunc_IsMinorShutdownWarningEnabled_Enabled1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue3 = CallFunc_GetUINavigationManager_ReturnValue3;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUpsellStorefrontNames_OutStorefrontNames = CallFunc_GetUpsellStorefrontNames_OutStorefrontNames;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetUINavigationManager_ReturnValue4 = CallFunc_GetUINavigationManager_ReturnValue4;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue1 = CallFunc_GetActiveWidgetIndex_ReturnValue1;
	Parms.K2Node_SwitchInteger1_CmpSuccess = K2Node_SwitchInteger1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
