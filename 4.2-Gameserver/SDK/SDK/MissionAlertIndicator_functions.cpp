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


// Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateBrush                 OutBrush                                                         (Parm, OutParm)
// TMap<struct FGameplayTag, class UTexture*>GameplayTags                                                     (Edit, BlueprintVisible, ZeroConstructor)
// class UObject*                     ElementalZoneWaterImage                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ElementalZoneNatureImage                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ElementalZoneFireImage                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MinibossAlertImage                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     StormAlertImage                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture*>            CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<struct FGameplayTag, class UTexture*>K2Node_MakeVariable_MakeVariableOutput                           (ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item1                                         (NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionAlertIndicator_C::Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer& TagContainer, struct FSlateBrush* OutBrush, TMap<struct FGameplayTag, class UTexture*> GameplayTags, class UObject* ElementalZoneWaterImage, class UObject* ElementalZoneNatureImage, class UObject* ElementalZoneFireImage, class UObject* MinibossAlertImage, class UObject* StormAlertImage, TArray<class UTexture*>& CallFunc_Map_Values_Values, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<struct FGameplayTag, class UTexture*> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, class UTexture* CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_Array_Get_Item1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasTag_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Get Mission Alert Visual Icon");

	Params::UMissionAlertIndicator_C_Get_Mission_Alert_Visual_Icon_Params Parms;
	Parms.TagContainer = TagContainer;
	Parms.GameplayTags = GameplayTags;
	Parms.ElementalZoneWaterImage = ElementalZoneWaterImage;
	Parms.ElementalZoneNatureImage = ElementalZoneNatureImage;
	Parms.ElementalZoneFireImage = ElementalZoneFireImage;
	Parms.MinibossAlertImage = MinibossAlertImage;
	Parms.StormAlertImage = StormAlertImage;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBrush != nullptr)
		*OutBrush = Parms.OutBrush;

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       AlertVisualTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        ()
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush                  ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionAlertIndicator_C::Config(const struct FGameplayTagContainer& AlertVisualTags, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FSlateBrush& CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Config");

	Params::UMissionAlertIndicator_C_Config_Params Parms;
	Parms.AlertVisualTags = AlertVisualTags;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush = CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionAlertIndicator_C::Update()
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Update");

	Params::UMissionAlertIndicator_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "ToggleTimer");

	Params::UMissionAlertIndicator_C_ToggleTimer_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
