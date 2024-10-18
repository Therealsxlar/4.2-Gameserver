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


// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode               Timecode                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDropTimecode               OutTimecode                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::SetDropTimecodeFrameNumber(struct FDropTimecode& Timecode, int32 FrameNumber, struct FDropTimecode* OutTimecode)
{
	static auto Func = Class->GetFunction("LinearTimecodeComponent", "SetDropTimecodeFrameNumber");

	Params::ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params Parms;
	Parms.Timecode = Timecode;
	Parms.FrameNumber = FrameNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutTimecode != nullptr)
		*OutTimecode = Parms.OutTimecode;

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode               Timecode                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              FrameNumber                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(struct FDropTimecode& Timecode, int32* FrameNumber)
{
	static auto Func = Class->GetFunction("LinearTimecodeComponent", "GetDropTimeCodeFrameNumber");

	Params::ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params Parms;
	Parms.Timecode = Timecode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (FrameNumber != nullptr)
		*FrameNumber = Parms.FrameNumber;

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULinearTimecodeComponent::GetDropFrameNumber()
{
	static auto Func = Class->GetFunction("LinearTimecodeComponent", "GetDropFrameNumber");

	Params::ULinearTimecodeComponent_GetDropFrameNumber_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDropTimecode               InTimecode                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDropTimecodeToStringConversion::Conv_DropTimecodeToString(struct FDropTimecode& InTimecode)
{
	static auto Func = Class->GetFunction("DropTimecodeToStringConversion", "Conv_DropTimecodeToString");

	Params::UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params Parms;
	Parms.InTimecode = InTimecode;

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
