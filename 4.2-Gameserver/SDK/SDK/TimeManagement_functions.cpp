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


// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronizing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimeSynchronizationManagerHelpers::IsSynchronizing()
{
	static auto Func = Class->GetFunction("TimeSynchronizationManagerHelpers", "IsSynchronizing");

	Params::UTimeSynchronizationManagerHelpers_IsSynchronizing_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronized
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimeSynchronizationManagerHelpers::IsSynchronized()
{
	static auto Func = Class->GetFunction("TimeSynchronizationManagerHelpers", "IsSynchronized");

	Params::UTimeSynchronizationManagerHelpers_IsSynchronized_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeSynchronizationManagerHelpers.GetCurrentTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTimecode UTimeSynchronizationManagerHelpers::GetCurrentTimecode()
{
	static auto Func = Class->GetFunction("TimeSynchronizationManagerHelpers", "GetCurrentTimecode");

	Params::UTimeSynchronizationManagerHelpers_GetCurrentTimecode_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  FrameRate                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FFrameTime                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate)
{
	static auto Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_SecondsFrameRate");

	Params::UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params Parms;
	Parms.TimeInSeconds = TimeInSeconds;
	Parms.FrameRate = FrameRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime         InFrameTime                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime)
{
	static auto Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_QualifiedFrameTimeToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params Parms;
	Parms.InFrameTime = InFrameTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate)
{
	static auto Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameRateToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params Parms;
	Parms.InFrameRate = InFrameRate;

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
