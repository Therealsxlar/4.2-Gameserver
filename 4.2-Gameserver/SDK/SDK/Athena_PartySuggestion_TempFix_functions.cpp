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


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.TempFix_TintMainBrushes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartySuggestion_TempFix_C::TempFix_TintMainBrushes(const struct FLinearColor& NewColor)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "TempFix_TintMainBrushes");

	Params::UAthena_PartySuggestion_TempFix_C_TempFix_TintMainBrushes_Params Parms;
	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetupMIDReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_PartySuggestion_TempFix_C::SetupMIDReferences(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "SetupMIDReferences");

	Params::UAthena_PartySuggestion_TempFix_C_SetupMIDReferences_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetMainMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    BorderMID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    TailMID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SparklesMID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LC_Cur_Border_L                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LC_CurBorder_R                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurMIDScalar_ShapeChange                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue1                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartySuggestion_TempFix_C::SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID, const struct FLinearColor& LC_Cur_Border_L, const struct FLinearColor& LC_CurBorder_R, float CurMIDScalar_ShapeChange, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, float CallFunc_K2_GetScalarParameterValue_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "SetMainMIDs");

	Params::UAthena_PartySuggestion_TempFix_C_SetMainMIDs_Params Parms;
	Parms.BorderMID = BorderMID;
	Parms.TailMID = TailMID;
	Parms.SparklesMID = SparklesMID;
	Parms.LC_Cur_Border_L = LC_Cur_Border_L;
	Parms.LC_CurBorder_R = LC_CurBorder_R;
	Parms.CurMIDScalar_ShapeChange = CurMIDScalar_ShapeChange;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue1 = CallFunc_K2_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitPhysAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFloatSpringState           K2Node_MakeStruct_FloatSpringState                               (NoDestructor)
// struct FFloatSpringState           K2Node_MakeStruct_FloatSpringState1                              (NoDestructor)

void UAthena_PartySuggestion_TempFix_C::InitPhysAnim(const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState, const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState1)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "InitPhysAnim");

	Params::UAthena_PartySuggestion_TempFix_C_InitPhysAnim_Params Parms;
	Parms.K2Node_MakeStruct_FloatSpringState = K2Node_MakeStruct_FloatSpringState;
	Parms.K2Node_MakeStruct_FloatSpringState1 = K2Node_MakeStruct_FloatSpringState1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::InitMIDs()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "InitMIDs");

	Params::UAthena_PartySuggestion_TempFix_C_InitMIDs_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitNewPartySuggestion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion        NewPartySuggestion                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_TempFix_C::InitNewPartySuggestion(const struct FFortPartySuggestion& NewPartySuggestion)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "InitNewPartySuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_InitNewPartySuggestion_Params Parms;
	Parms.NewPartySuggestion = NewPartySuggestion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthena_PartySuggestion_TempFix_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "OnMouseButtonDown_0");

	Params::UAthena_PartySuggestion_TempFix_C_OnMouseButtonDown_0_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::PlayOutro()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "PlayOutro");

	Params::UAthena_PartySuggestion_TempFix_C_PlayOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.DismissSuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::DismissSuggestion()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "DismissSuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_DismissSuggestion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ClobberSuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::ClobberSuggestion()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "ClobberSuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_ClobberSuggestion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ForceAcceptSuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::ForceAcceptSuggestion()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "ForceAcceptSuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_ForceAcceptSuggestion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::Construct()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "Construct");

	Params::UAthena_PartySuggestion_TempFix_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartySuggestion_TempFix_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::PlayIntro()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "PlayIntro");

	Params::UAthena_PartySuggestion_TempFix_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartySuggestion_TempFix_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "Tick");

	Params::UAthena_PartySuggestion_TempFix_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdatePartySuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion        PartySuggestionStruct                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_TempFix_C::UpdatePartySuggestion(const struct FFortPartySuggestion& PartySuggestionStruct)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "UpdatePartySuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_UpdatePartySuggestion_Params Parms;
	Parms.PartySuggestionStruct = PartySuggestionStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::UpdateDisplay()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "UpdateDisplay");

	Params::UAthena_PartySuggestion_TempFix_C_UpdateDisplay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.NewPartySuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion        Party_Suggestion_Struct                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_TempFix_C::NewPartySuggestion(const struct FFortPartySuggestion& Party_Suggestion_Struct)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "NewPartySuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_NewPartySuggestion_Params Parms;
	Parms.Party_Suggestion_Struct = Party_Suggestion_Struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.HidePartySuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::HidePartySuggestion()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "HidePartySuggestion");

	Params::UAthena_PartySuggestion_TempFix_C_HidePartySuggestion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_PartySuggestion_TempFix_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "PreConstruct");

	Params::UAthena_PartySuggestion_TempFix_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "OnUnhovered");

	Params::UAthena_PartySuggestion_TempFix_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::OnHovered()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "OnHovered");

	Params::UAthena_PartySuggestion_TempFix_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ExecuteUbergraph_Athena_PartySuggestion_TempFix
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortSocialItem*>     CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentPlatform_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_DateTimeMinValue_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPartySuggestion        K2Node_CustomEvent_PartySuggestionStruct                         ()
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFortPartySuggestion        K2Node_CustomEvent_Party_Suggestion_Struct                       ()
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select7_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select8_Default                                           ()

void UAthena_PartySuggestion_TempFix_C::ExecuteUbergraph_Athena_PartySuggestion_TempFix(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, TArray<class UFortSocialItem*>& CallFunc_Map_Values_Values, int32 Temp_int_Variable1, class UFortSocialItem* CallFunc_Array_Get_Item, const class FString& CallFunc_GetCurrentPlatform_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable4, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, float Temp_float_Variable, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, bool Temp_bool_Variable5, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable6, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable7, const struct FDateTime& CallFunc_DateTimeMinValue_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortPartySuggestion& K2Node_CustomEvent_PartySuggestionStruct, int32 K2Node_Select2_Default, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText K2Node_Select3_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFortPartySuggestion& K2Node_CustomEvent_Party_Suggestion_Struct, bool CallFunc_RandomBool_ReturnValue, int32 K2Node_Select4_Default, bool K2Node_Event_IsDesignTime, int32 K2Node_Select5_Default, int32 K2Node_Select6_Default, const struct FLinearColor& K2Node_Select7_Default, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select8_Default)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "ExecuteUbergraph_Athena_PartySuggestion_TempFix");

	Params::UAthena_PartySuggestion_TempFix_C_ExecuteUbergraph_Athena_PartySuggestion_TempFix_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurrentPlatform_ReturnValue = CallFunc_GetCurrentPlatform_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_PartySuggestionStruct = K2Node_CustomEvent_PartySuggestionStruct;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_Party_Suggestion_Struct = K2Node_CustomEvent_Party_Suggestion_Struct;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnSuggestionMouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_PartySuggestion_TempFix_C::OnSuggestionMouseDown__DelegateSignature()
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "OnSuggestionMouseDown__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_OnSuggestionMouseDown__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PartyFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_LFG_SuggestedPartyItem_C*FocusedPartyItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_PartySuggestion_TempFix_C::PartyFocused__DelegateSignature(class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem)
{
	static auto Func = Class->GetFunction("Athena_PartySuggestion_TempFix_C", "PartyFocused__DelegateSignature");

	Params::UAthena_PartySuggestion_TempFix_C_PartyFocused__DelegateSignature_Params Parms;
	Parms.FocusedPartyItem = FocusedPartyItem;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
