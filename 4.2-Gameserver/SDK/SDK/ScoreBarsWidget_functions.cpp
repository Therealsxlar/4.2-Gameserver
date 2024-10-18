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


// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UScoreBarsWidget_C::UnregisterForScoreStreamEvents(class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "UnregisterForScoreStreamEvents");

	Params::UScoreBarsWidget_C_UnregisterForScoreStreamEvents_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ScoreCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatCategory           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCollectionMultiProgressBar_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::HandleScoreNumberChanged(enum class EStatCategory ScoreCategory, enum class EStatCategory Temp_byte_Variable, class UCollectionMultiProgressBar_C* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreNumberChanged");

	Params::UScoreBarsWidget_C_HandleScoreNumberChanged_Params Parms;
	Parms.ScoreCategory = ScoreCategory;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*    ItemWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreBarsScoreMessageItem_C*K2Node_DynamicCast_AsScore_Bars_Score_Message_Item               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetScoreValueWidget_Widget                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetScoreValueWidget_Widget)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleMessageDisplayed");

	Params::UScoreBarsWidget_C_HandleMessageDisplayed_Params Parms;
	Parms.ItemWidget = ItemWidget;
	Parms.K2Node_DynamicCast_AsScore_Bars_Score_Message_Item = K2Node_DynamicCast_AsScore_Bars_Score_Message_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScoreValueWidget_Widget = CallFunc_GetScoreValueWidget_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsWidget_C::HideScoreMessageSlots()
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HideScoreMessageSlots");

	Params::UScoreBarsWidget_C_HideScoreMessageSlots_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetMessageManager_bCreatedNew                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIMessageManager*       CallFunc_GetMessageManager_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UScoreBarsWidget_C::RegisterForScoreStreamEvents(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetMessageManager_bCreatedNew, class UFortUIMessageManager* CallFunc_GetMessageManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "RegisterForScoreStreamEvents");

	Params::UScoreBarsWidget_C_RegisterForScoreStreamEvents_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMessageManager_bCreatedNew = CallFunc_GetMessageManager_bCreatedNew;
	Parms.CallFunc_GetMessageManager_ReturnValue = CallFunc_GetMessageManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*    Expired_Message                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UScoreBarsScoreMessageItem_C*K2Node_DynamicCast_AsScore_Bars_Score_Message_Item               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetScoreValueWidget_Widget                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetScoreValueWidget_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_RemoveChild_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreMessageExpired");

	Params::UScoreBarsWidget_C_HandleScoreMessageExpired_Params Parms;
	Parms.Expired_Message = Expired_Message;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsScore_Bars_Score_Message_Item = K2Node_DynamicCast_AsScore_Bars_Score_Message_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScoreValueWidget_Widget = CallFunc_GetScoreValueWidget_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortUIMessageItemWidget*    CallFunc_GetNextMessageInQueue_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::TryGetNextScoreMessage(int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIMessageItemWidget* CallFunc_GetNextMessageInQueue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "TryGetNextScoreMessage");

	Params::UScoreBarsWidget_C_TryGetNextScoreMessage_Params Parms;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetNextMessageInQueue_ReturnValue = CallFunc_GetNextMessageInQueue_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EFortReplicatedStat     StatType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatCategory           StatCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatCategory           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreMessageNumber_C*       K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIMessageItemWidget*    CallFunc_AddMessageItem_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreBarsScoreMessageItem_C*K2Node_DynamicCast_AsScore_Bars_Score_Message_Item               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleScoreStatChanged(int32 Delta, class FText& Name, enum class EFortReplicatedStat StatType, enum class EStatCategory StatCategory, class FName CallFunc_GetEnumeratorName_ReturnValue, enum class EStatCategory Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreMessageNumber_C* K2Node_Select_Default, class UFortUIMessageItemWidget* CallFunc_AddMessageItem_ReturnValue, class UScoreBarsScoreMessageItem_C* K2Node_DynamicCast_AsScore_Bars_Score_Message_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreStatChanged");

	Params::UScoreBarsWidget_C_HandleScoreStatChanged_Params Parms;
	Parms.Delta = Delta;
	Parms.Name = Name;
	Parms.StatType = StatType;
	Parms.StatCategory = StatCategory;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddMessageItem_ReturnValue = CallFunc_AddMessageItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsScore_Bars_Score_Message_Item = K2Node_DynamicCast_AsScore_Bars_Score_Message_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue1           (ConstParm)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2           (ConstParm)

void UScoreBarsWidget_C::InitializeIcons(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue1, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "InitializeIcons");

	Params::UScoreBarsWidget_C_InitializeIcons_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue1 = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue1;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2 = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsWidget_C::UpdateScoreBars()
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "UpdateScoreBars");

	Params::UScoreBarsWidget_C_UpdateScoreBars_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*           Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleUpdateUI(class AFortMissionState* Mission, bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleUpdateUI");

	Params::UScoreBarsWidget_C_HandleUpdateUI_Params Parms;
	Parms.Mission = Mission;
	Parms.CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos = CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldUtilityScore                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldBuildingScore                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCombatScore                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalScore_Score                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalScore_Score1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalScore_Score2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::UpdateScoreTotals(int32 OldUtilityScore, int32 OldBuildingScore, int32 OldCombatScore, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_GetTotalScore_Score, int32 CallFunc_GetTotalScore_Score1, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetTotalScore_Score2)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "UpdateScoreTotals");

	Params::UScoreBarsWidget_C_UpdateScoreTotals_Params Parms;
	Parms.OldUtilityScore = OldUtilityScore;
	Parms.OldBuildingScore = OldBuildingScore;
	Parms.OldCombatScore = OldCombatScore;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission = K2Node_DynamicCast_AsScore_Badge_Provider_Mission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission1 = K2Node_DynamicCast_AsScore_Badge_Provider_Mission1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetTotalScore_Score = CallFunc_GetTotalScore_Score;
	Parms.CallFunc_GetTotalScore_Score1 = CallFunc_GetTotalScore_Score1;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission2 = K2Node_DynamicCast_AsScore_Badge_Provider_Mission2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetTotalScore_Score2 = CallFunc_GetTotalScore_Score2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasValidBadgeInfos                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HasValidBadgeInfos(bool* bHasValidBadgeInfos, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HasValidBadgeInfos");

	Params::UScoreBarsWidget_C_HasValidBadgeInfos_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasValidBadgeInfos != nullptr)
		*bHasValidBadgeInfos = Parms.bHasValidBadgeInfos;

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCollectionMissionBadgeDisplayInfo>CallFunc_GetScoreBadgeInfos_BadgeInfos                           (ZeroConstructor, ReferenceParm)
// TArray<struct FCollectionMissionBadgeDisplayInfo>CallFunc_GetScoreBadgeInfos_BadgeInfos1                          (ZeroConstructor, ReferenceParm)
// UInterfaceProperty_                K2Node_DynamicCast_AsScore_Badge_Provider_Mission2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCollectionMissionBadgeDisplayInfo>CallFunc_GetScoreBadgeInfos_BadgeInfos2                          (ZeroConstructor, ReferenceParm)

void UScoreBarsWidget_C::InitializeScoreBars(bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission1, bool K2Node_DynamicCast_bSuccess1, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos1, UInterfaceProperty_ K2Node_DynamicCast_AsScore_Badge_Provider_Mission2, bool K2Node_DynamicCast_bSuccess2, TArray<struct FCollectionMissionBadgeDisplayInfo>& CallFunc_GetScoreBadgeInfos_BadgeInfos2)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "InitializeScoreBars");

	Params::UScoreBarsWidget_C_InitializeScoreBars_Params Parms;
	Parms.CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos = CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission = K2Node_DynamicCast_AsScore_Badge_Provider_Mission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission1 = K2Node_DynamicCast_AsScore_Badge_Provider_Mission1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetScoreBadgeInfos_BadgeInfos = CallFunc_GetScoreBadgeInfos_BadgeInfos;
	Parms.CallFunc_GetScoreBadgeInfos_BadgeInfos1 = CallFunc_GetScoreBadgeInfos_BadgeInfos1;
	Parms.K2Node_DynamicCast_AsScore_Badge_Provider_Mission2 = K2Node_DynamicCast_AsScore_Badge_Provider_Mission2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetScoreBadgeInfos_BadgeInfos2 = CallFunc_GetScoreBadgeInfos_BadgeInfos2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortMission*>        CallFunc_GetAllLoadedMissions_ReturnValue                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMission*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleMissionsUpdated(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortMission*>& CallFunc_GetAllLoadedMissions_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortMission* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "HandleMissionsUpdated");

	Params::UScoreBarsWidget_C_HandleMissionsUpdated_Params Parms;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllLoadedMissions_ReturnValue = CallFunc_GetAllLoadedMissions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScoreBarsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "Construct");

	Params::UScoreBarsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScoreBarsWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "Destruct");

	Params::UScoreBarsWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UScoreBarsWidget_C::ExecuteUbergraph_ScoreBarsWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("ScoreBarsWidget_C", "ExecuteUbergraph_ScoreBarsWidget");

	Params::UScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos = CallFunc_HasValidBadgeInfos_bHasValidBadgeInfos;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
