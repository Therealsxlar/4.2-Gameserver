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


// Function CommonInput.CommonInputContext.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonGamepadType      InGamepadInputType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputContext::SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType)
{
	static auto Func = Class->GetFunction("CommonInputContext", "SetGamepadInputType");

	Params::UCommonInputContext_SetGamepadInputType_Params Parms;
	Parms.InGamepadInputType = InGamepadInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonInput.CommonInputContext.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputContext::SetCurrentInputType(enum class ECommonInputType NewInputType)
{
	static auto Func = Class->GetFunction("CommonInputContext", "SetCurrentInputType");

	Params::UCommonInputContext_SetCurrentInputType_Params Parms;
	Parms.NewInputType = NewInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function CommonInput.CommonInputContext.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputContext::IsUsingPointerInput()
{
	static auto Func = Class->GetFunction("CommonInputContext", "IsUsingPointerInput");

	Params::UCommonInputContext_IsUsingPointerInput_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputContext::InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType)
{
	static auto Func = Class->GetFunction("CommonInputContext", "InputMethodChangedDelegate__DelegateSignature");

	Params::UCommonInputContext_InputMethodChangedDelegate__DelegateSignature_Params Parms;
	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonInput.CommonInputContext.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputContext::GetCurrentInputType()
{
	static auto Func = Class->GetFunction("CommonInputContext", "GetCurrentInputType");

	Params::UCommonInputContext_GetCurrentInputType_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputContext.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonGamepadType      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonGamepadType UCommonInputContext::GetCurrentGamepadType()
{
	static auto Func = Class->GetFunction("CommonInputContext", "GetCurrentGamepadType");

	Params::UCommonInputContext_GetCurrentGamepadType_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
