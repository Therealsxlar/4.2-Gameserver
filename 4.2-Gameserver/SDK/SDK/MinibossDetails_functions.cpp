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


// Function MinibossDetails.MinibossDetails_C.StopIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMinibossDetails_C::StopIntroAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "StopIntroAnimation");

	Params::UMinibossDetails_C_StopIntroAnimation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnIntroAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinibossDetails_C::OnIntroAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnIntroAnimationFinished");

	Params::UMinibossDetails_C_OnIntroAnimationFinished_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.StopOutroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMinibossDetails_C::StopOutroAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "StopOutroAnimation");

	Params::UMinibossDetails_C_StopOutroAnimation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnOutroAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMinibossDetails_C::OnOutroAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnOutroAnimationFinished");

	Params::UMinibossDetails_C_OnOutroAnimationFinished_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.StopKillAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMinibossDetails_C::StopKillAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "StopKillAnimation");

	Params::UMinibossDetails_C_StopKillAnimation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnKillAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UMinibossDetails_C::OnKillAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnKillAnimationFinished");

	Params::UMinibossDetails_C_OnKillAnimationFinished_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinibossDetails_C::Kill(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "Kill");

	Params::UMinibossDetails_C_Kill_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinibossDetails_C::Outro(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "Outro");

	Params::UMinibossDetails_C_Outro_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinibossDetails_C::Intro(bool CallFunc_IsAnimationPlaying_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnimationPlaying_ReturnValue1)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "Intro");

	Params::UMinibossDetails_C_Intro_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.Update Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinibossDetails_C::Update_Health(float InPercent)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "Update Health");

	Params::UMinibossDetails_C_Update_Health_Params Parms;
	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.PopulateModifiers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                InModifiersArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               ()
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue1                               ()
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UMinibossDetails_C::PopulateModifiers(TArray<class FText>& InModifiersArray, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue1, class FText CallFunc_GetText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "PopulateModifiers");

	Params::UMinibossDetails_C_PopulateModifiers_Params Parms;
	Parms.InModifiersArray = InModifiersArray;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue1 = CallFunc_GetEmptyText_ReturnValue1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.InitializeMiniBossDetails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                InModifiers                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        InName                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        InUpgradeName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              InHealthPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPortrait                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      NameStyle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ModifiersStyle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            Name_Alignment                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            Modifiers_Alignment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Health_Bar_Width                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinibossDetails_C::InitializeMiniBossDetails(TArray<class FText>& InModifiers, class FText InName, class FText InUpgradeName, float InHealthPercent, bool ShowName, bool ShowPortrait, class UClass* NameStyle, class UClass* ModifiersStyle, enum class ETextJustify Name_Alignment, enum class ETextJustify Modifiers_Alignment, float Health_Bar_Width, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "InitializeMiniBossDetails");

	Params::UMinibossDetails_C_InitializeMiniBossDetails_Params Parms;
	Parms.InModifiers = InModifiers;
	Parms.InName = InName;
	Parms.InUpgradeName = InUpgradeName;
	Parms.InHealthPercent = InHealthPercent;
	Parms.ShowName = ShowName;
	Parms.ShowPortrait = ShowPortrait;
	Parms.NameStyle = NameStyle;
	Parms.ModifiersStyle = ModifiersStyle;
	Parms.Name_Alignment = Name_Alignment;
	Parms.Modifiers_Alignment = Modifiers_Alignment;
	Parms.Health_Bar_Width = Health_Bar_Width;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnTargetChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMinibossDetails_C::OnTargetChanged()
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnTargetChanged");

	Params::UMinibossDetails_C_OnTargetChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnTargetHealthChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMinibossDetails_C::OnTargetHealthChanged()
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnTargetHealthChanged");

	Params::UMinibossDetails_C_OnTargetHealthChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnTargetDied
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMinibossDetails_C::OnTargetDied()
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnTargetDied");

	Params::UMinibossDetails_C_OnTargetDied_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.OnTargetDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMinibossDetails_C::OnTargetDestroyed()
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "OnTargetDestroyed");

	Params::UMinibossDetails_C_OnTargetDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinibossDetails.MinibossDetails_C.ExecuteUbergraph_MinibossDetails
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHUDTargetHealthPercentage_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHUDTargetHealthPercentage_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHUDTargetUpgradeDisplayName_ReturnValue              ()
// class FText                        CallFunc_GetHUDTargetDisplayName_ReturnValue                     ()
// TArray<class FText>                CallFunc_GetHUDTargetDisplayModifiers_ReturnValue                (ZeroConstructor, ReferenceParm)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinibossDetails_C::ExecuteUbergraph_MinibossDetails(int32 EntryPoint, float CallFunc_GetHUDTargetHealthPercentage_ReturnValue, float CallFunc_GetHUDTargetHealthPercentage_ReturnValue1, class FText CallFunc_GetHUDTargetUpgradeDisplayName_ReturnValue, class FText CallFunc_GetHUDTargetDisplayName_ReturnValue, TArray<class FText>& CallFunc_GetHUDTargetDisplayModifiers_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("MinibossDetails_C", "ExecuteUbergraph_MinibossDetails");

	Params::UMinibossDetails_C_ExecuteUbergraph_MinibossDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDTargetHealthPercentage_ReturnValue = CallFunc_GetHUDTargetHealthPercentage_ReturnValue;
	Parms.CallFunc_GetHUDTargetHealthPercentage_ReturnValue1 = CallFunc_GetHUDTargetHealthPercentage_ReturnValue1;
	Parms.CallFunc_GetHUDTargetUpgradeDisplayName_ReturnValue = CallFunc_GetHUDTargetUpgradeDisplayName_ReturnValue;
	Parms.CallFunc_GetHUDTargetDisplayName_ReturnValue = CallFunc_GetHUDTargetDisplayName_ReturnValue;
	Parms.CallFunc_GetHUDTargetDisplayModifiers_ReturnValue = CallFunc_GetHUDTargetDisplayModifiers_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue1 = CallFunc_Conv_InterfaceToObject_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
