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


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.On_CommonBorderTouchToClose_MouseButtonUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_bPassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UBattlePassDirectAcquisitionScreen_C::On_CommonBorderTouchToClose_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_HandleBack_bPassThrough)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "On_CommonBorderTouchToClose_MouseButtonUp");

	Params::UBattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_HandleBack_bPassThrough = CallFunc_HandleBack_bPassThrough;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "HandleBack");

	Params::UBattlePassDirectAcquisitionScreen_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Focus");

	Params::UBattlePassDirectAcquisitionScreen_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo*OfferData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDisplayAsset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBox*              K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData, bool CallFunc_HasDisplayAsset_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "GenerateOfferWidget");

	Params::UBattlePassDirectAcquisitionScreen_C_GenerateOfferWidget_Params Parms;
	Parms.OfferData = OfferData;
	Parms.CallFunc_HasDisplayAsset_ReturnValue = CallFunc_HasDisplayAsset_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "NoOffersAvailable");

	Params::UBattlePassDirectAcquisitionScreen_C_NoOffersAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnStartReadingOffers");

	Params::UBattlePassDirectAcquisitionScreen_C_OnStartReadingOffers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnOffersGenerated");

	Params::UBattlePassDirectAcquisitionScreen_C_OnOffersGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnActivated");

	Params::UBattlePassDirectAcquisitionScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Construct");

	Params::UBattlePassDirectAcquisitionScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.ExecuteUbergraph_BattlePassDirectAcquisitionScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentSeasonName_ReturnValue                        ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FDateTime                   CallFunc_GetSeasonStoreEndDate_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::ExecuteUbergraph_BattlePassDirectAcquisitionScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, class FText CallFunc_GetCurrentSeasonName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "ExecuteUbergraph_BattlePassDirectAcquisitionScreen");

	Params::UBattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentSeasonName_ReturnValue = CallFunc_GetCurrentSeasonName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetSeasonStoreEndDate_ReturnValue = CallFunc_GetSeasonStoreEndDate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
