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


// Function GamepadMappingInfo.GamepadMappingInfo_C.ClearAllComboTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()

void UGamepadMappingInfo_C::ClearAllComboTextLines(class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "ClearAllComboTextLines");

	Params::UGamepadMappingInfo_C_ClearAllComboTextLines_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProCombat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            ()
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue              ()
// class FText                        CallFunc_GetLookLabel_ReturnValue                                ()
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                ()
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               ()
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    ()
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCraftAmmoHoldLabel_ReturnValue                       ()
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     ()
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetReloadTapLabel_ReturnValue                           ()
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextWeaponTapLabel_ReturnValue                       ()
// class FText                        CallFunc_GetAttackConfirmLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            ()
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget2Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget2Label_ReturnValue1                            ()
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget1Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget1Label_ReturnValue1                            ()
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     ()
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue1                    ()
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    ()
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1                   ()
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          ()
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue1                         ()
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue28              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              ()
// class FText                        CallFunc_GetSprintLabel_ReturnValue1                             ()
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue29              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue30              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                ()
// class FText                        CallFunc_GetMoveLabel_ReturnValue1                               ()
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue31              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue32              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousWeaponTapLabel_ReturnValue                   ()
// class FText                        CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue             ()
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::InitializeListOfButtonTextForSTWCombatProCombat(TArray<class FText>& ButtonTextLabels, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue4, class FText CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue, class FText CallFunc_GetLookLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue6, class FText CallFunc_GetJumpLabel_ReturnValue, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue8, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue10, class FText CallFunc_GetCraftAmmoHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue12, class FText CallFunc_GetReloadTapLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue14, class FText CallFunc_GetNextWeaponTapLabel_ReturnValue, class FText CallFunc_GetAttackConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue16, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue18, class FText CallFunc_GetGadget2Label_ReturnValue, class FText CallFunc_GetGadget2Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue17, int32 CallFunc_Array_Add_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue20, class FText CallFunc_GetGadget1Label_ReturnValue, class FText CallFunc_GetGadget1Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue22, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue21, int32 CallFunc_Array_Add_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue24, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue26, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue28, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue30, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue31, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue32, class FText CallFunc_GetPreviousWeaponTapLabel_ReturnValue, class FText CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue31, int32 CallFunc_Array_Add_ReturnValue32, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Array_Add_ReturnValue33, int32 CallFunc_Array_Add_ReturnValue34, class FText Temp_text_Variable1, int32 CallFunc_Array_Add_ReturnValue35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "InitializeListOfButtonTextForSTWCombatProCombat");

	Params::UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProCombat_Params Parms;
	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue4;
	Parms.CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue = CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue6;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue8;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue10;
	Parms.CallFunc_GetCraftAmmoHoldLabel_ReturnValue = CallFunc_GetCraftAmmoHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue12;
	Parms.CallFunc_GetReloadTapLabel_ReturnValue = CallFunc_GetReloadTapLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue14;
	Parms.CallFunc_GetNextWeaponTapLabel_ReturnValue = CallFunc_GetNextWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAttackConfirmLabel_ReturnValue = CallFunc_GetAttackConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue16;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue18;
	Parms.CallFunc_GetGadget2Label_ReturnValue = CallFunc_GetGadget2Label_ReturnValue;
	Parms.CallFunc_GetGadget2Label_ReturnValue1 = CallFunc_GetGadget2Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue20;
	Parms.CallFunc_GetGadget1Label_ReturnValue = CallFunc_GetGadget1Label_ReturnValue;
	Parms.CallFunc_GetGadget1Label_ReturnValue1 = CallFunc_GetGadget1Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue22;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue1 = CallFunc_GetToggleInventoryLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue24;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue26;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue1 = CallFunc_GetAutoSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue28 = CallFunc_GetFortInputDataForBlueprint_ReturnValue28;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue1 = CallFunc_GetSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue29 = CallFunc_GetFortInputDataForBlueprint_ReturnValue29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue30 = CallFunc_GetFortInputDataForBlueprint_ReturnValue30;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue1 = CallFunc_GetMoveLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue31 = CallFunc_GetFortInputDataForBlueprint_ReturnValue31;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue32 = CallFunc_GetFortInputDataForBlueprint_ReturnValue32;
	Parms.CallFunc_GetPreviousWeaponTapLabel_ReturnValue = CallFunc_GetPreviousWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue = CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.SetTextFieldVisibilityForExtraLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "SetTextFieldVisibilityForExtraLine");

	Params::UGamepadMappingInfo_C_SetTextFieldVisibilityForExtraLine_Params Parms;
	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        DesiredSlateVisibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, enum class ESlateVisibility* DesiredSlateVisibility, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "GetDesiredSlateVisibilityForAbilityChordFromTextDisplay");

	Params::UGamepadMappingInfo_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params Parms;
	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DesiredSlateVisibility != nullptr)
		*DesiredSlateVisibility = Parms.DesiredSlateVisibility;

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBuildingEditResetLabel_ReturnValue                   ()
// class FText                        CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue         ()
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                ()
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                ()
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               ()
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTrapInventoryHoldLabel_ReturnValue                   ()
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     ()
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPickTrapTapHoldLabel_ReturnValue                     ()
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextBuildingPieceLabel_ReturnValue                   ()
// class FText                        CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue          ()
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            ()
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget2Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget2Label_ReturnValue1                            ()
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget1Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget1Label_ReturnValue1                            ()
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     ()
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue1                    ()
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    ()
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1                   ()
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          ()
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue1                         ()
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              ()
// class FText                        CallFunc_GetSprintLabel_ReturnValue1                             ()
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                ()
// class FText                        CallFunc_GetMoveLabel_ReturnValue1                               ()
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue28              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue29              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousBuildingPieceLabel_ReturnValue               ()
// class FText                        CallFunc_GetChangeMaterialLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// class FText                        Temp_text_Variable3                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::InitializeListOfButtonTextForSTWCombatProBuild(TArray<class FText>& ButtonTextLabels, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class FText CallFunc_GetBuildingEditResetLabel_ReturnValue, class FText CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class FText CallFunc_GetLookLabel_ReturnValue, class FText CallFunc_GetJumpLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue5, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue7, class FText CallFunc_GetTrapInventoryHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue9, class FText CallFunc_GetPickTrapTapHoldLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue11, class FText CallFunc_GetNextBuildingPieceLabel_ReturnValue, class FText CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue13, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue15, class FText CallFunc_GetGadget2Label_ReturnValue, class FText CallFunc_GetGadget2Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue17, class FText CallFunc_GetGadget1Label_ReturnValue, class FText CallFunc_GetGadget1Label_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue19, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue20, int32 CallFunc_Array_Add_ReturnValue21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue21, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue22, int32 CallFunc_Array_Add_ReturnValue23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue23, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue24, int32 CallFunc_Array_Add_ReturnValue25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue25, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue26, int32 CallFunc_Array_Add_ReturnValue27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue27, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue28, int32 CallFunc_Array_Add_ReturnValue29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue29, class FText CallFunc_GetPreviousBuildingPieceLabel_ReturnValue, class FText CallFunc_GetChangeMaterialLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue30, int32 CallFunc_Array_Add_ReturnValue31, class FText Temp_text_Variable2, class FText Temp_text_Variable3, int32 CallFunc_Array_Add_ReturnValue32, int32 CallFunc_Array_Add_ReturnValue33, class FText Temp_text_Variable4, int32 CallFunc_Array_Add_ReturnValue34, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "InitializeListOfButtonTextForSTWCombatProBuild");

	Params::UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProBuild_Params Parms;
	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetBuildingEditResetLabel_ReturnValue = CallFunc_GetBuildingEditResetLabel_ReturnValue;
	Parms.CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue = CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue5;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue7;
	Parms.CallFunc_GetTrapInventoryHoldLabel_ReturnValue = CallFunc_GetTrapInventoryHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue9;
	Parms.CallFunc_GetPickTrapTapHoldLabel_ReturnValue = CallFunc_GetPickTrapTapHoldLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue11;
	Parms.CallFunc_GetNextBuildingPieceLabel_ReturnValue = CallFunc_GetNextBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue = CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue13;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue15;
	Parms.CallFunc_GetGadget2Label_ReturnValue = CallFunc_GetGadget2Label_ReturnValue;
	Parms.CallFunc_GetGadget2Label_ReturnValue1 = CallFunc_GetGadget2Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue17;
	Parms.CallFunc_GetGadget1Label_ReturnValue = CallFunc_GetGadget1Label_ReturnValue;
	Parms.CallFunc_GetGadget1Label_ReturnValue1 = CallFunc_GetGadget1Label_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue19;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue1 = CallFunc_GetToggleInventoryLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue21;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue23;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue1 = CallFunc_GetAutoSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue25;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue1 = CallFunc_GetSprintLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue27;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue1 = CallFunc_GetMoveLabel_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue28 = CallFunc_GetFortInputDataForBlueprint_ReturnValue28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue29 = CallFunc_GetFortInputDataForBlueprint_ReturnValue29;
	Parms.CallFunc_GetPreviousBuildingPieceLabel_ReturnValue = CallFunc_GetPreviousBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetChangeMaterialLabel_ReturnValue = CallFunc_GetChangeMaterialLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonLabelTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::InitializeListOfButtonLabelTextWidgets(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue17, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, int32 CallFunc_Array_Add_ReturnValue21, int32 CallFunc_Array_Add_ReturnValue22, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, int32 CallFunc_Array_Add_ReturnValue31, int32 CallFunc_Array_Add_ReturnValue32, int32 CallFunc_Array_Add_ReturnValue33, int32 CallFunc_Array_Add_ReturnValue34, int32 CallFunc_Array_Add_ReturnValue35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "InitializeListOfButtonLabelTextWidgets");

	Params::UGamepadMappingInfo_C_InitializeListOfButtonLabelTextWidgets_Params Parms;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.CallFunc_Array_Add_ReturnValue32 = CallFunc_Array_Add_ReturnValue32;
	Parms.CallFunc_Array_Add_ReturnValue33 = CallFunc_Array_Add_ReturnValue33;
	Parms.CallFunc_Array_Add_ReturnValue34 = CallFunc_Array_Add_ReturnValue34;
	Parms.CallFunc_Array_Add_ReturnValue35 = CallFunc_Array_Add_ReturnValue35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed Hide or Show Unused Text Lines
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Handle Config Changed Hide or Show Unused Text Lines");

	Params::UGamepadMappingInfo_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Combat Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        Temp_text_Variable14                                             ()
// class FText                        Temp_text_Variable15                                             ()
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           ()
// class FText                        Temp_text_Variable20                                             ()
// class FText                        Temp_text_Variable21                                             ()
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        Temp_text_Variable26                                             ()
// class FText                        Temp_text_Variable27                                             ()
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          ()
// class FText                        Temp_text_Variable32                                             ()
// class FText                        Temp_text_Variable33                                             ()
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          ()
// class FText                        Temp_text_Variable38                                             ()
// class FText                        Temp_text_Variable39                                             ()
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          ()
// class FText                        Temp_text_Variable40                                             ()
// class FText                        Temp_text_Variable41                                             ()
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          ()
// class FText                        Temp_text_Variable42                                             ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        K2Node_Select21_Default                                          ()
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable44                                             ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    ()
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            ()
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class UCommonTextBlock*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable45                                             ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select22_Default                                          ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Handle_Config_Changed_STW_Combat_Mode(int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable2, class FText Temp_text_Variable3, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class FText Temp_text_Variable7, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable8, class FText Temp_text_Variable9, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable10, class FText Temp_text_Variable11, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable14, class FText Temp_text_Variable15, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable16, class FText Temp_text_Variable17, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable18, class FText Temp_text_Variable19, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable20, class FText Temp_text_Variable21, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable22, class FText Temp_text_Variable23, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable24, class FText Temp_text_Variable25, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable26, class FText Temp_text_Variable27, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable28, class FText Temp_text_Variable29, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable30, class FText Temp_text_Variable31, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable32, class FText Temp_text_Variable33, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable34, class FText Temp_text_Variable35, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable36, class FText Temp_text_Variable37, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable38, class FText Temp_text_Variable39, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable40, class FText Temp_text_Variable41, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText K2Node_Select21_Default, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable44, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue1, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue3, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UCommonTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText Temp_text_Variable45, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable22, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select22_Default, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Handle Config Changed STW Combat Mode");

	Params::UGamepadMappingInfo_C_Handle_Config_Changed_STW_Combat_Mode_Params Parms;
	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue1;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue3;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Build Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        Temp_text_Variable13                                             ()
// class FText                        Temp_text_Variable14                                             ()
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable17                                             ()
// class FText                        Temp_text_Variable18                                             ()
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          ()
// class FText                        Temp_text_Variable25                                             ()
// class FText                        Temp_text_Variable26                                             ()
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          ()
// class FText                        Temp_text_Variable29                                             ()
// class FText                        Temp_text_Variable30                                             ()
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          ()
// class FText                        Temp_text_Variable41                                             ()
// class FText                        Temp_text_Variable42                                             ()
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          ()
// class FText                        Temp_text_Variable45                                             ()
// class FText                        Temp_text_Variable46                                             ()
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          ()
// class FText                        Temp_text_Variable47                                             ()
// class FText                        Temp_text_Variable48                                             ()
// class FText                        K2Node_Select23_Default                                          ()
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable49                                             ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select24_Default                                          ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Handle_Config_Changed_STW_Build_Mode(int32 Config, class FText Temp_text_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable5, class FText Temp_text_Variable6, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable7, class FText Temp_text_Variable8, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable9, class FText Temp_text_Variable10, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable11, class FText Temp_text_Variable12, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable13, class FText Temp_text_Variable14, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable17, class FText Temp_text_Variable18, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable19, class FText Temp_text_Variable20, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable21, class FText Temp_text_Variable22, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable23, class FText Temp_text_Variable24, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable25, class FText Temp_text_Variable26, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable27, class FText Temp_text_Variable28, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable29, class FText Temp_text_Variable30, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable31, class FText Temp_text_Variable32, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable33, class FText Temp_text_Variable34, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable35, class FText Temp_text_Variable36, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable37, class FText Temp_text_Variable38, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable39, class FText Temp_text_Variable40, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable41, class FText Temp_text_Variable42, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable43, class FText Temp_text_Variable44, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable45, class FText Temp_text_Variable46, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText K2Node_Select23_Default, int32 Temp_int_Array_Index_Variable, class UCommonTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText Temp_text_Variable49, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable24, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select24_Default, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Handle Config Changed STW Build Mode");

	Params::UGamepadMappingInfo_C_Handle_Config_Changed_STW_Build_Mode_Params Parms;
	Parms.Config = Config;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_C::HandleConfigChanged(int32 Mode, int32 Config, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged");

	Params::UGamepadMappingInfo_C_HandleConfigChanged_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1                                              ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable14                                             ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// class FText                        Temp_text_Variable21                                             ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        Temp_text_Variable26                                             ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// class FText                        Temp_text_Variable33                                             ()
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// class FText                        Temp_text_Variable38                                             ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// class FText                        Temp_text_Variable41                                             ()
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           ()
// class FText                        Temp_text_Variable42                                             ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// class FText                        Temp_text_Variable45                                             ()
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        Temp_text_Variable46                                             ()
// class FText                        Temp_text_Variable47                                             ()
// class FText                        Temp_text_Variable48                                             ()
// class FText                        Temp_text_Variable49                                             ()
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          ()
// class FText                        Temp_text_Variable50                                             ()
// class FText                        Temp_text_Variable51                                             ()
// class FText                        Temp_text_Variable52                                             ()
// class FText                        Temp_text_Variable53                                             ()
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        Temp_text_Variable54                                             ()
// class FText                        Temp_text_Variable55                                             ()
// class FText                        Temp_text_Variable56                                             ()
// class FText                        Temp_text_Variable57                                             ()
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          ()
// class FText                        Temp_text_Variable58                                             ()
// class FText                        Temp_text_Variable59                                             ()
// class FText                        Temp_text_Variable60                                             ()
// class FText                        Temp_text_Variable61                                             ()
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          ()
// class FText                        Temp_text_Variable62                                             ()
// class FText                        Temp_text_Variable63                                             ()
// class FText                        Temp_text_Variable64                                             ()
// class FText                        Temp_text_Variable65                                             ()
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          ()
// class FText                        Temp_text_Variable66                                             ()
// class FText                        Temp_text_Variable67                                             ()
// class FText                        Temp_text_Variable68                                             ()
// class FText                        Temp_text_Variable69                                             ()
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          ()
// class FText                        Temp_text_Variable70                                             ()
// class FText                        Temp_text_Variable71                                             ()
// class FText                        Temp_text_Variable72                                             ()
// class FText                        Temp_text_Variable73                                             ()
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          ()
// class FText                        Temp_text_Variable74                                             ()
// class FText                        Temp_text_Variable75                                             ()
// class FText                        Temp_text_Variable76                                             ()
// class FText                        Temp_text_Variable77                                             ()
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          ()
// class FText                        Temp_text_Variable78                                             ()
// class FText                        Temp_text_Variable79                                             ()
// class FText                        Temp_text_Variable80                                             ()
// class FText                        Temp_text_Variable81                                             ()
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          ()
// class FText                        Temp_text_Variable82                                             ()
// class FText                        Temp_text_Variable83                                             ()
// class FText                        Temp_text_Variable84                                             ()
// class FText                        Temp_text_Variable85                                             ()
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          ()
// class FText                        Temp_text_Variable86                                             ()
// class FText                        Temp_text_Variable87                                             ()
// class FText                        Temp_text_Variable88                                             ()
// class FText                        Temp_text_Variable89                                             ()
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          ()
// class FText                        Temp_text_Variable90                                             ()
// class FText                        Temp_text_Variable91                                             ()
// class FText                        Temp_text_Variable92                                             ()
// class FText                        Temp_text_Variable93                                             ()
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          ()
// class FText                        Temp_text_Variable94                                             ()
// class FText                        Temp_text_Variable95                                             ()
// class FText                        Temp_text_Variable96                                             ()
// class FText                        Temp_text_Variable97                                             ()
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select23_Default                                          ()
// class FText                        Temp_text_Variable98                                             ()
// class FText                        Temp_text_Variable99                                             ()
// class FText                        Temp_text_Variable100                                            ()
// class FText                        Temp_text_Variable101                                            ()
// int32                              Temp_int_Variable25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select24_Default                                          ()
// class FText                        Temp_text_Variable102                                            ()
// class FText                        Temp_text_Variable103                                            ()
// class FText                        Temp_text_Variable104                                            ()
// class FText                        Temp_text_Variable105                                            ()
// int32                              Temp_int_Variable26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select25_Default                                          ()
// class FText                        Temp_text_Variable106                                            ()
// class FText                        Temp_text_Variable107                                            ()
// class FText                        Temp_text_Variable108                                            ()
// class FText                        Temp_text_Variable109                                            ()
// int32                              Temp_int_Variable27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select26_Default                                          ()
// class FText                        Temp_text_Variable110                                            ()
// class FText                        Temp_text_Variable111                                            ()
// class FText                        Temp_text_Variable112                                            ()
// class FText                        Temp_text_Variable113                                            ()
// int32                              Temp_int_Variable28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select27_Default                                          ()
// class FText                        Temp_text_Variable114                                            ()
// class FText                        Temp_text_Variable115                                            ()
// class FText                        Temp_text_Variable116                                            ()
// class FText                        Temp_text_Variable117                                            ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select28_Default                                          ()
// bool                               CallFunc_IsCustomGamepadConfig_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable118                                            ()
// class FText                        Temp_text_Variable119                                            ()
// class FText                        Temp_text_Variable120                                            ()
// class FText                        Temp_text_Variable121                                            ()
// int32                              Temp_int_Variable30                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select29_Default                                          ()
// class FText                        Temp_text_Variable122                                            ()
// class FText                        Temp_text_Variable123                                            ()
// class FText                        Temp_text_Variable124                                            ()
// class FText                        Temp_text_Variable125                                            ()
// int32                              Temp_int_Variable31                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select30_Default                                          ()
// class FText                        Temp_text_Variable126                                            ()
// class FText                        Temp_text_Variable127                                            ()
// class FText                        Temp_text_Variable128                                            ()
// class FText                        Temp_text_Variable129                                            ()
// int32                              Temp_int_Variable32                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select31_Default                                          ()
// class FText                        Temp_text_Variable130                                            ()
// class FText                        Temp_text_Variable131                                            ()
// class FText                        Temp_text_Variable132                                            ()
// class FText                        Temp_text_Variable133                                            ()
// int32                              Temp_int_Variable33                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select32_Default                                          ()
// class FText                        Temp_text_Variable134                                            ()
// class FText                        Temp_text_Variable135                                            ()
// class FText                        Temp_text_Variable136                                            ()
// class FText                        Temp_text_Variable137                                            ()
// int32                              Temp_int_Variable34                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select33_Default                                          ()
// class FText                        Temp_text_Variable138                                            ()
// class FText                        Temp_text_Variable139                                            ()
// class FText                        Temp_text_Variable140                                            ()
// class FText                        Temp_text_Variable141                                            ()
// int32                              Temp_int_Variable35                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select34_Default                                          ()
// class FText                        Temp_text_Variable142                                            ()
// class FText                        Temp_text_Variable143                                            ()
// class FText                        Temp_text_Variable144                                            ()
// class FText                        Temp_text_Variable145                                            ()
// int32                              Temp_int_Variable36                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select35_Default                                          ()
// class FText                        Temp_text_Variable146                                            ()
// class FText                        Temp_text_Variable147                                            ()
// class FText                        Temp_text_Variable148                                            ()
// class FText                        Temp_text_Variable149                                            ()
// int32                              Temp_int_Variable37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select36_Default                                          ()
// class FText                        Temp_text_Variable150                                            ()
// class FText                        Temp_text_Variable151                                            ()
// class FText                        Temp_text_Variable152                                            ()
// class FText                        Temp_text_Variable153                                            ()
// int32                              Temp_int_Variable38                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select37_Default                                          ()
// class FText                        Temp_text_Variable154                                            ()
// class FText                        Temp_text_Variable155                                            ()
// class FText                        Temp_text_Variable156                                            ()
// class FText                        Temp_text_Variable157                                            ()
// int32                              Temp_int_Variable39                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select38_Default                                          ()
// class FText                        Temp_text_Variable158                                            ()
// class FText                        Temp_text_Variable159                                            ()
// class FText                        Temp_text_Variable160                                            ()
// class FText                        Temp_text_Variable161                                            ()
// int32                              Temp_int_Variable40                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select39_Default                                          ()
// class FText                        Temp_text_Variable162                                            ()
// class FText                        Temp_text_Variable163                                            ()
// class FText                        Temp_text_Variable164                                            ()
// class FText                        Temp_text_Variable165                                            ()
// int32                              Temp_int_Variable41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select40_Default                                          ()
// class FText                        Temp_text_Variable166                                            ()
// class FText                        Temp_text_Variable167                                            ()
// class FText                        Temp_text_Variable168                                            ()
// class FText                        Temp_text_Variable169                                            ()
// int32                              Temp_int_Variable42                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select41_Default                                          ()
// class FText                        Temp_text_Variable170                                            ()
// class FText                        Temp_text_Variable171                                            ()
// class FText                        Temp_text_Variable172                                            ()
// class FText                        Temp_text_Variable173                                            ()
// int32                              Temp_int_Variable43                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select42_Default                                          ()
// class FText                        Temp_text_Variable174                                            ()
// class FText                        Temp_text_Variable175                                            ()
// class FText                        Temp_text_Variable176                                            ()
// class FText                        Temp_text_Variable177                                            ()
// int32                              Temp_int_Variable44                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select43_Default                                          ()
// class FText                        Temp_text_Variable178                                            ()
// class FText                        Temp_text_Variable179                                            ()
// class FText                        Temp_text_Variable180                                            ()
// class FText                        Temp_text_Variable181                                            ()
// int32                              Temp_int_Variable45                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select44_Default                                          ()
// class FText                        Temp_text_Variable182                                            ()
// class FText                        Temp_text_Variable183                                            ()
// class FText                        Temp_text_Variable184                                            ()
// class FText                        Temp_text_Variable185                                            ()
// int32                              Temp_int_Variable46                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select45_Default                                          ()
// class FText                        Temp_text_Variable186                                            ()
// class FText                        Temp_text_Variable187                                            ()
// class FText                        Temp_text_Variable188                                            ()
// class FText                        Temp_text_Variable189                                            ()
// int32                              Temp_int_Variable47                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select46_Default                                          ()
// class FText                        Temp_text_Variable190                                            ()
// class FText                        Temp_text_Variable191                                            ()
// class FText                        Temp_text_Variable192                                            ()
// class FText                        Temp_text_Variable193                                            ()
// int32                              Temp_int_Variable48                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select47_Default                                          ()
// class FText                        Temp_text_Variable194                                            ()
// class FText                        Temp_text_Variable195                                            ()
// class FText                        Temp_text_Variable196                                            ()
// class FText                        Temp_text_Variable197                                            ()
// class FText                        K2Node_Select48_Default                                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable198                                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        Temp_text_Variable199                                            ()
// int32                              Temp_int_Variable49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select49_Default                                          ()

void UGamepadMappingInfo_C::HandleConfigChanged_Athena(int32 Mode, int32 Config, class FText Temp_text_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable1, int32 Temp_int_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 Temp_int_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, int32 Temp_int_Variable2, class FText K2Node_Select1_Default, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable70, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable74, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, class FText Temp_text_Variable81, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable82, class FText Temp_text_Variable83, class FText Temp_text_Variable84, class FText Temp_text_Variable85, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable86, class FText Temp_text_Variable87, class FText Temp_text_Variable88, class FText Temp_text_Variable89, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable90, class FText Temp_text_Variable91, class FText Temp_text_Variable92, class FText Temp_text_Variable93, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable94, class FText Temp_text_Variable95, class FText Temp_text_Variable96, class FText Temp_text_Variable97, int32 Temp_int_Variable24, class FText K2Node_Select23_Default, class FText Temp_text_Variable98, class FText Temp_text_Variable99, class FText Temp_text_Variable100, class FText Temp_text_Variable101, int32 Temp_int_Variable25, class FText K2Node_Select24_Default, class FText Temp_text_Variable102, class FText Temp_text_Variable103, class FText Temp_text_Variable104, class FText Temp_text_Variable105, int32 Temp_int_Variable26, class FText K2Node_Select25_Default, class FText Temp_text_Variable106, class FText Temp_text_Variable107, class FText Temp_text_Variable108, class FText Temp_text_Variable109, int32 Temp_int_Variable27, class FText K2Node_Select26_Default, class FText Temp_text_Variable110, class FText Temp_text_Variable111, class FText Temp_text_Variable112, class FText Temp_text_Variable113, int32 Temp_int_Variable28, class FText K2Node_Select27_Default, class FText Temp_text_Variable114, class FText Temp_text_Variable115, class FText Temp_text_Variable116, class FText Temp_text_Variable117, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText K2Node_Select28_Default, bool CallFunc_IsCustomGamepadConfig_ReturnValue, int32 Temp_int_Variable29, class FText Temp_text_Variable118, class FText Temp_text_Variable119, class FText Temp_text_Variable120, class FText Temp_text_Variable121, int32 Temp_int_Variable30, class FText K2Node_Select29_Default, class FText Temp_text_Variable122, class FText Temp_text_Variable123, class FText Temp_text_Variable124, class FText Temp_text_Variable125, int32 Temp_int_Variable31, class FText K2Node_Select30_Default, class FText Temp_text_Variable126, class FText Temp_text_Variable127, class FText Temp_text_Variable128, class FText Temp_text_Variable129, int32 Temp_int_Variable32, class FText K2Node_Select31_Default, class FText Temp_text_Variable130, class FText Temp_text_Variable131, class FText Temp_text_Variable132, class FText Temp_text_Variable133, int32 Temp_int_Variable33, class FText K2Node_Select32_Default, class FText Temp_text_Variable134, class FText Temp_text_Variable135, class FText Temp_text_Variable136, class FText Temp_text_Variable137, int32 Temp_int_Variable34, class FText K2Node_Select33_Default, class FText Temp_text_Variable138, class FText Temp_text_Variable139, class FText Temp_text_Variable140, class FText Temp_text_Variable141, int32 Temp_int_Variable35, class FText K2Node_Select34_Default, class FText Temp_text_Variable142, class FText Temp_text_Variable143, class FText Temp_text_Variable144, class FText Temp_text_Variable145, int32 Temp_int_Variable36, class FText K2Node_Select35_Default, class FText Temp_text_Variable146, class FText Temp_text_Variable147, class FText Temp_text_Variable148, class FText Temp_text_Variable149, int32 Temp_int_Variable37, class FText K2Node_Select36_Default, class FText Temp_text_Variable150, class FText Temp_text_Variable151, class FText Temp_text_Variable152, class FText Temp_text_Variable153, int32 Temp_int_Variable38, class FText K2Node_Select37_Default, class FText Temp_text_Variable154, class FText Temp_text_Variable155, class FText Temp_text_Variable156, class FText Temp_text_Variable157, int32 Temp_int_Variable39, class FText K2Node_Select38_Default, class FText Temp_text_Variable158, class FText Temp_text_Variable159, class FText Temp_text_Variable160, class FText Temp_text_Variable161, int32 Temp_int_Variable40, class FText K2Node_Select39_Default, class FText Temp_text_Variable162, class FText Temp_text_Variable163, class FText Temp_text_Variable164, class FText Temp_text_Variable165, int32 Temp_int_Variable41, class FText K2Node_Select40_Default, class FText Temp_text_Variable166, class FText Temp_text_Variable167, class FText Temp_text_Variable168, class FText Temp_text_Variable169, int32 Temp_int_Variable42, class FText K2Node_Select41_Default, class FText Temp_text_Variable170, class FText Temp_text_Variable171, class FText Temp_text_Variable172, class FText Temp_text_Variable173, int32 Temp_int_Variable43, class FText K2Node_Select42_Default, class FText Temp_text_Variable174, class FText Temp_text_Variable175, class FText Temp_text_Variable176, class FText Temp_text_Variable177, int32 Temp_int_Variable44, class FText K2Node_Select43_Default, class FText Temp_text_Variable178, class FText Temp_text_Variable179, class FText Temp_text_Variable180, class FText Temp_text_Variable181, int32 Temp_int_Variable45, class FText K2Node_Select44_Default, class FText Temp_text_Variable182, class FText Temp_text_Variable183, class FText Temp_text_Variable184, class FText Temp_text_Variable185, int32 Temp_int_Variable46, class FText K2Node_Select45_Default, class FText Temp_text_Variable186, class FText Temp_text_Variable187, class FText Temp_text_Variable188, class FText Temp_text_Variable189, int32 Temp_int_Variable47, class FText K2Node_Select46_Default, class FText Temp_text_Variable190, class FText Temp_text_Variable191, class FText Temp_text_Variable192, class FText Temp_text_Variable193, int32 Temp_int_Variable48, class FText K2Node_Select47_Default, class FText Temp_text_Variable194, class FText Temp_text_Variable195, class FText Temp_text_Variable196, class FText Temp_text_Variable197, class FText K2Node_Select48_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable198, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText Temp_text_Variable199, int32 Temp_int_Variable49, class FText K2Node_Select49_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged_Athena");

	Params::UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_text_Variable89 = Temp_text_Variable89;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable90 = Temp_text_Variable90;
	Parms.Temp_text_Variable91 = Temp_text_Variable91;
	Parms.Temp_text_Variable92 = Temp_text_Variable92;
	Parms.Temp_text_Variable93 = Temp_text_Variable93;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable94 = Temp_text_Variable94;
	Parms.Temp_text_Variable95 = Temp_text_Variable95;
	Parms.Temp_text_Variable96 = Temp_text_Variable96;
	Parms.Temp_text_Variable97 = Temp_text_Variable97;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_text_Variable98 = Temp_text_Variable98;
	Parms.Temp_text_Variable99 = Temp_text_Variable99;
	Parms.Temp_text_Variable100 = Temp_text_Variable100;
	Parms.Temp_text_Variable101 = Temp_text_Variable101;
	Parms.Temp_int_Variable25 = Temp_int_Variable25;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;
	Parms.Temp_text_Variable102 = Temp_text_Variable102;
	Parms.Temp_text_Variable103 = Temp_text_Variable103;
	Parms.Temp_text_Variable104 = Temp_text_Variable104;
	Parms.Temp_text_Variable105 = Temp_text_Variable105;
	Parms.Temp_int_Variable26 = Temp_int_Variable26;
	Parms.K2Node_Select25_Default = K2Node_Select25_Default;
	Parms.Temp_text_Variable106 = Temp_text_Variable106;
	Parms.Temp_text_Variable107 = Temp_text_Variable107;
	Parms.Temp_text_Variable108 = Temp_text_Variable108;
	Parms.Temp_text_Variable109 = Temp_text_Variable109;
	Parms.Temp_int_Variable27 = Temp_int_Variable27;
	Parms.K2Node_Select26_Default = K2Node_Select26_Default;
	Parms.Temp_text_Variable110 = Temp_text_Variable110;
	Parms.Temp_text_Variable111 = Temp_text_Variable111;
	Parms.Temp_text_Variable112 = Temp_text_Variable112;
	Parms.Temp_text_Variable113 = Temp_text_Variable113;
	Parms.Temp_int_Variable28 = Temp_int_Variable28;
	Parms.K2Node_Select27_Default = K2Node_Select27_Default;
	Parms.Temp_text_Variable114 = Temp_text_Variable114;
	Parms.Temp_text_Variable115 = Temp_text_Variable115;
	Parms.Temp_text_Variable116 = Temp_text_Variable116;
	Parms.Temp_text_Variable117 = Temp_text_Variable117;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select28_Default = K2Node_Select28_Default;
	Parms.CallFunc_IsCustomGamepadConfig_ReturnValue = CallFunc_IsCustomGamepadConfig_ReturnValue;
	Parms.Temp_int_Variable29 = Temp_int_Variable29;
	Parms.Temp_text_Variable118 = Temp_text_Variable118;
	Parms.Temp_text_Variable119 = Temp_text_Variable119;
	Parms.Temp_text_Variable120 = Temp_text_Variable120;
	Parms.Temp_text_Variable121 = Temp_text_Variable121;
	Parms.Temp_int_Variable30 = Temp_int_Variable30;
	Parms.K2Node_Select29_Default = K2Node_Select29_Default;
	Parms.Temp_text_Variable122 = Temp_text_Variable122;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable124 = Temp_text_Variable124;
	Parms.Temp_text_Variable125 = Temp_text_Variable125;
	Parms.Temp_int_Variable31 = Temp_int_Variable31;
	Parms.K2Node_Select30_Default = K2Node_Select30_Default;
	Parms.Temp_text_Variable126 = Temp_text_Variable126;
	Parms.Temp_text_Variable127 = Temp_text_Variable127;
	Parms.Temp_text_Variable128 = Temp_text_Variable128;
	Parms.Temp_text_Variable129 = Temp_text_Variable129;
	Parms.Temp_int_Variable32 = Temp_int_Variable32;
	Parms.K2Node_Select31_Default = K2Node_Select31_Default;
	Parms.Temp_text_Variable130 = Temp_text_Variable130;
	Parms.Temp_text_Variable131 = Temp_text_Variable131;
	Parms.Temp_text_Variable132 = Temp_text_Variable132;
	Parms.Temp_text_Variable133 = Temp_text_Variable133;
	Parms.Temp_int_Variable33 = Temp_int_Variable33;
	Parms.K2Node_Select32_Default = K2Node_Select32_Default;
	Parms.Temp_text_Variable134 = Temp_text_Variable134;
	Parms.Temp_text_Variable135 = Temp_text_Variable135;
	Parms.Temp_text_Variable136 = Temp_text_Variable136;
	Parms.Temp_text_Variable137 = Temp_text_Variable137;
	Parms.Temp_int_Variable34 = Temp_int_Variable34;
	Parms.K2Node_Select33_Default = K2Node_Select33_Default;
	Parms.Temp_text_Variable138 = Temp_text_Variable138;
	Parms.Temp_text_Variable139 = Temp_text_Variable139;
	Parms.Temp_text_Variable140 = Temp_text_Variable140;
	Parms.Temp_text_Variable141 = Temp_text_Variable141;
	Parms.Temp_int_Variable35 = Temp_int_Variable35;
	Parms.K2Node_Select34_Default = K2Node_Select34_Default;
	Parms.Temp_text_Variable142 = Temp_text_Variable142;
	Parms.Temp_text_Variable143 = Temp_text_Variable143;
	Parms.Temp_text_Variable144 = Temp_text_Variable144;
	Parms.Temp_text_Variable145 = Temp_text_Variable145;
	Parms.Temp_int_Variable36 = Temp_int_Variable36;
	Parms.K2Node_Select35_Default = K2Node_Select35_Default;
	Parms.Temp_text_Variable146 = Temp_text_Variable146;
	Parms.Temp_text_Variable147 = Temp_text_Variable147;
	Parms.Temp_text_Variable148 = Temp_text_Variable148;
	Parms.Temp_text_Variable149 = Temp_text_Variable149;
	Parms.Temp_int_Variable37 = Temp_int_Variable37;
	Parms.K2Node_Select36_Default = K2Node_Select36_Default;
	Parms.Temp_text_Variable150 = Temp_text_Variable150;
	Parms.Temp_text_Variable151 = Temp_text_Variable151;
	Parms.Temp_text_Variable152 = Temp_text_Variable152;
	Parms.Temp_text_Variable153 = Temp_text_Variable153;
	Parms.Temp_int_Variable38 = Temp_int_Variable38;
	Parms.K2Node_Select37_Default = K2Node_Select37_Default;
	Parms.Temp_text_Variable154 = Temp_text_Variable154;
	Parms.Temp_text_Variable155 = Temp_text_Variable155;
	Parms.Temp_text_Variable156 = Temp_text_Variable156;
	Parms.Temp_text_Variable157 = Temp_text_Variable157;
	Parms.Temp_int_Variable39 = Temp_int_Variable39;
	Parms.K2Node_Select38_Default = K2Node_Select38_Default;
	Parms.Temp_text_Variable158 = Temp_text_Variable158;
	Parms.Temp_text_Variable159 = Temp_text_Variable159;
	Parms.Temp_text_Variable160 = Temp_text_Variable160;
	Parms.Temp_text_Variable161 = Temp_text_Variable161;
	Parms.Temp_int_Variable40 = Temp_int_Variable40;
	Parms.K2Node_Select39_Default = K2Node_Select39_Default;
	Parms.Temp_text_Variable162 = Temp_text_Variable162;
	Parms.Temp_text_Variable163 = Temp_text_Variable163;
	Parms.Temp_text_Variable164 = Temp_text_Variable164;
	Parms.Temp_text_Variable165 = Temp_text_Variable165;
	Parms.Temp_int_Variable41 = Temp_int_Variable41;
	Parms.K2Node_Select40_Default = K2Node_Select40_Default;
	Parms.Temp_text_Variable166 = Temp_text_Variable166;
	Parms.Temp_text_Variable167 = Temp_text_Variable167;
	Parms.Temp_text_Variable168 = Temp_text_Variable168;
	Parms.Temp_text_Variable169 = Temp_text_Variable169;
	Parms.Temp_int_Variable42 = Temp_int_Variable42;
	Parms.K2Node_Select41_Default = K2Node_Select41_Default;
	Parms.Temp_text_Variable170 = Temp_text_Variable170;
	Parms.Temp_text_Variable171 = Temp_text_Variable171;
	Parms.Temp_text_Variable172 = Temp_text_Variable172;
	Parms.Temp_text_Variable173 = Temp_text_Variable173;
	Parms.Temp_int_Variable43 = Temp_int_Variable43;
	Parms.K2Node_Select42_Default = K2Node_Select42_Default;
	Parms.Temp_text_Variable174 = Temp_text_Variable174;
	Parms.Temp_text_Variable175 = Temp_text_Variable175;
	Parms.Temp_text_Variable176 = Temp_text_Variable176;
	Parms.Temp_text_Variable177 = Temp_text_Variable177;
	Parms.Temp_int_Variable44 = Temp_int_Variable44;
	Parms.K2Node_Select43_Default = K2Node_Select43_Default;
	Parms.Temp_text_Variable178 = Temp_text_Variable178;
	Parms.Temp_text_Variable179 = Temp_text_Variable179;
	Parms.Temp_text_Variable180 = Temp_text_Variable180;
	Parms.Temp_text_Variable181 = Temp_text_Variable181;
	Parms.Temp_int_Variable45 = Temp_int_Variable45;
	Parms.K2Node_Select44_Default = K2Node_Select44_Default;
	Parms.Temp_text_Variable182 = Temp_text_Variable182;
	Parms.Temp_text_Variable183 = Temp_text_Variable183;
	Parms.Temp_text_Variable184 = Temp_text_Variable184;
	Parms.Temp_text_Variable185 = Temp_text_Variable185;
	Parms.Temp_int_Variable46 = Temp_int_Variable46;
	Parms.K2Node_Select45_Default = K2Node_Select45_Default;
	Parms.Temp_text_Variable186 = Temp_text_Variable186;
	Parms.Temp_text_Variable187 = Temp_text_Variable187;
	Parms.Temp_text_Variable188 = Temp_text_Variable188;
	Parms.Temp_text_Variable189 = Temp_text_Variable189;
	Parms.Temp_int_Variable47 = Temp_int_Variable47;
	Parms.K2Node_Select46_Default = K2Node_Select46_Default;
	Parms.Temp_text_Variable190 = Temp_text_Variable190;
	Parms.Temp_text_Variable191 = Temp_text_Variable191;
	Parms.Temp_text_Variable192 = Temp_text_Variable192;
	Parms.Temp_text_Variable193 = Temp_text_Variable193;
	Parms.Temp_int_Variable48 = Temp_int_Variable48;
	Parms.K2Node_Select47_Default = K2Node_Select47_Default;
	Parms.Temp_text_Variable194 = Temp_text_Variable194;
	Parms.Temp_text_Variable195 = Temp_text_Variable195;
	Parms.Temp_text_Variable196 = Temp_text_Variable196;
	Parms.Temp_text_Variable197 = Temp_text_Variable197;
	Parms.K2Node_Select48_Default = K2Node_Select48_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable198 = Temp_text_Variable198;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.Temp_text_Variable199 = Temp_text_Variable199;
	Parms.Temp_int_Variable49 = Temp_int_Variable49;
	Parms.K2Node_Select49_Default = K2Node_Select49_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_C::OnConfigChanged(int32 Mode, int32 Config, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "OnConfigChanged");

	Params::UGamepadMappingInfo_C_OnConfigChanged_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Configuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_Mode_Combat                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_Mode_Build                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        K2Node_Select_Default                                            ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Temp_object_Variable                                             (ZeroConstructor, ReferenceParm)
// class UTexture2D*                  CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_Select3_Default                                           (ZeroConstructor, ReferenceParm)
// class UTexture2D*                  K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int32 Platform, int32 Mode, int32 Configuration, class UTexture2D* T_Mode_Combat, class UTexture2D* T_Mode_Build, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Variable, int32 Temp_int_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, int32 Temp_int_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, int32 Temp_int_Variable3, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue1, TArray<class UTexture2D*>& Temp_object_Variable, class UTexture2D* CallFunc_Array_Get_Item1, int32 Temp_int_Variable4, int32 CallFunc_Conv_ByteToInt_ReturnValue2, class UTexture2D* CallFunc_Array_Get_Item2, int32 CallFunc_Conv_ByteToInt_ReturnValue3, class UTexture2D* CallFunc_Array_Get_Item3, int32 CallFunc_Conv_ByteToInt_ReturnValue4, class UTexture2D* CallFunc_Array_Get_Item4, int32 CallFunc_Conv_ByteToInt_ReturnValue5, class UTexture2D* CallFunc_Array_Get_Item5, int32 CallFunc_Conv_ByteToInt_ReturnValue6, int32 CallFunc_Conv_ByteToInt_ReturnValue7, class UTexture2D* CallFunc_Array_Get_Item6, class UTexture2D* CallFunc_Array_Get_Item7, TArray<class UTexture2D*>& K2Node_Select3_Default, class UTexture2D* K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Update Displayed Mapping");

	Params::UGamepadMappingInfo_C_Update_Displayed_Mapping_Params Parms;
	Parms.Platform = Platform;
	Parms.Mode = Mode;
	Parms.Configuration = Configuration;
	Parms.T_Mode_Combat = T_Mode_Combat;
	Parms.T_Mode_Build = T_Mode_Build;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue2 = CallFunc_Conv_ByteToInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue3 = CallFunc_Conv_ByteToInt_ReturnValue3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue4 = CallFunc_Conv_ByteToInt_ReturnValue4;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue5 = CallFunc_Conv_ByteToInt_ReturnValue5;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue6 = CallFunc_Conv_ByteToInt_ReturnValue6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue7 = CallFunc_Conv_ByteToInt_ReturnValue7;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_C::Construct()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Construct");

	Params::UGamepadMappingInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.ExecuteUbergraph_GamepadMappingInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::ExecuteUbergraph_GamepadMappingInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "ExecuteUbergraph_GamepadMappingInfo");

	Params::UGamepadMappingInfo_C_ExecuteUbergraph_GamepadMappingInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
