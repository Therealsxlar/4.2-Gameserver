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


// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutTag                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGA_Commando_FragGrenade_WithTrajectory_C*K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTT_Commando_FragGrenade_C::GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Commando_FragGrenade_C", "GetApplicationTag");

	Params::UTT_Commando_FragGrenade_C_GetApplicationTag_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory = K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTag != nullptr)
		*OutTag = Parms.OutTag;

	return Parms.ReturnValue;

}


// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Commando_FragGrenade_WithTrajectory_C*K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        K2Node_Select1_Default                                           ()
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()

bool UTT_Commando_FragGrenade_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText Temp_text_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, bool Temp_bool_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText K2Node_Select1_Default, int32 CallFunc_MakeLiteralInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, bool Temp_bool_Variable2, class FText K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("TT_Commando_FragGrenade_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory = K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Commando_FragGrenade_WithTrajectory_C*K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Commando_FragGrenade_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Commando_FragGrenade_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory = K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
