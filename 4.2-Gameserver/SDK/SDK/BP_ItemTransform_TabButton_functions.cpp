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


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EConversionControlKeyRequestCallFunc_Get_Tab_Id_as_Request_Type_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetUnseenTransformKeys_TransformKeys                    (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State_Internal(enum class EConversionControlKeyRequest CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetUnseenTransformKeys_TransformKeys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Refresh Bang State Internal");

	Params::UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal_Params Parms;
	Parms.CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue = CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUnseenTransformKeys_TransformKeys = CallFunc_GetUnseenTransformKeys_TransformKeys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EConversionControlKeyRequestReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EConversionControlKeyRequest UBP_ItemTransform_TabButton_C::Get_Tab_Id_as_Request_Type(bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Get Tab Id as Request Type");

	Params::UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params Parms;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_TabButton_C::Set_Tab_Id(class FName TabId)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Tab Id");

	Params::UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Refresh Bang State");

	Params::UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ItemTransform_TabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Icon");

	Params::UBP_ItemTransform_TabButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_TabButton_C::Set_Text(class FText ButtonText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Text");

	Params::UBP_ItemTransform_TabButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnCurrentTextStyleChanged");

	Params::UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "PreConstruct");

	Params::UBP_ItemTransform_TabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTransform_TabButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "SetTabLabelInfo");

	Params::UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::Construct()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Construct");

	Params::UBP_ItemTransform_TabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "BP_OnSelected");

	Params::UBP_ItemTransform_TabButton_C_BP_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "BP_OnDeselected");

	Params::UBP_ItemTransform_TabButton_C_BP_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "BP_OnHovered");

	Params::UBP_ItemTransform_TabButton_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "BP_OnUnhovered");

	Params::UBP_ItemTransform_TabButton_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor3                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor4                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor5                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor6                                    ()

void UBP_ItemTransform_TabButton_C::ExecuteUbergraph_BP_ItemTransform_TabButton(int32 EntryPoint, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, bool K2Node_Event_IsDesignTime, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, const struct FSlateColor& K2Node_MakeStruct_SlateColor4, const struct FSlateColor& K2Node_MakeStruct_SlateColor5, const struct FSlateColor& K2Node_MakeStruct_SlateColor6)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "ExecuteUbergraph_BP_ItemTransform_TabButton");

	Params::UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_MakeStruct_SlateColor3 = K2Node_MakeStruct_SlateColor3;
	Parms.K2Node_MakeStruct_SlateColor4 = K2Node_MakeStruct_SlateColor4;
	Parms.K2Node_MakeStruct_SlateColor5 = K2Node_MakeStruct_SlateColor5;
	Parms.K2Node_MakeStruct_SlateColor6 = K2Node_MakeStruct_SlateColor6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
