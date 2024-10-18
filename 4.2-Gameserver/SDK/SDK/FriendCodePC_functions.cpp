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


// Function FriendCodePC.FriendCodePC_C.GetCodeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeDisplayName_ReturnValue                    ()
// class FText                        CallFunc_GetFriendCodeDescription_ReturnValue                    ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFriendCodePC_C::GetCodeText(class FText* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, class FText CallFunc_GetFriendCodeDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "GetCodeText");

	Params::UFriendCodePC_C_GetCodeText_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFriendCodeDisplayName_ReturnValue = CallFunc_GetFriendCodeDisplayName_ReturnValue;
	Parms.CallFunc_GetFriendCodeDescription_ReturnValue = CallFunc_GetFriendCodeDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UFriendCodePC_C::GetFriendCodeUrl(class FString* Result, bool Temp_bool_Variable, bool CallFunc_IsTencentBuild_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "GetFriendCodeUrl");

	Params::UFriendCodePC_C_GetFriendCodeUrl_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FriendCodePC.FriendCodePC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodePC_C::Construct()
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "Construct");

	Params::UFriendCodePC_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "OnMouseEnter");

	Params::UFriendCodePC_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "OnMouseLeave");

	Params::UFriendCodePC_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodePC_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "BP_OnClicked");

	Params::UFriendCodePC_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent1                                         (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FString                      CallFunc_GetFriendCodeUrl_Result                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCodeText_Result                                      ()
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FPointerEvent& K2Node_Event_MouseEvent, const class FString& CallFunc_GetFriendCodeUrl_Result, class FText CallFunc_GetCodeText_Result, bool CallFunc_IsTencentBuild_ReturnValue)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "ExecuteUbergraph_FriendCodePC");

	Params::UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent1 = K2Node_Event_MouseEvent1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_GetFriendCodeUrl_Result = CallFunc_GetFriendCodeUrl_Result;
	Parms.CallFunc_GetCodeText_Result = CallFunc_GetCodeText_Result;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
