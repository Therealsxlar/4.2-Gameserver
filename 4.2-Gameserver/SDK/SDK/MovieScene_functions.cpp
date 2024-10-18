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


// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Interp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static auto Func = Class->GetFunction("MovieSceneEasingFunction", "OnEvaluate");

	Params::UMovieSceneEasingFunction_OnEvaluate_Params Parms;
	Parms.Interp = Interp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Stop()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");

	Params::UMovieSceneSequencePlayer_Stop_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");

	Params::UMovieSceneSequencePlayer_SetTimeRange_Params Parms;
	Parms.StartTime = StartTime;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::UMovieSceneSequencePlayer_SetPlayRate_Params Parms;
	Parms.PlayRate = PlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewEndTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackRange");

	Params::UMovieSceneSequencePlayer_SetPlaybackRange_Params Parms;
	Parms.NewStartTime = NewStartTime;
	Parms.NewEndTime = NewEndTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_SetPlaybackPosition_Params Parms;
	Parms.NewPlaybackPosition = NewPlaybackPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameRate                  FrameRate                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRate");

	Params::UMovieSceneSequencePlayer_SetFrameRate_Params Parms;
	Parms.FrameRate = FrameRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetFrameRange(int32 StartFrame, int32 Duration)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");

	Params::UMovieSceneSequencePlayer_SetFrameRange_Params Parms;
	Parms.StartFrame = StartFrame;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDisableCameraCuts                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_SetDisableCameraCuts_Params Parms;
	Parms.bInDisableCameraCuts = bInDisableCameraCuts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToSeconds");

	Params::UMovieSceneSequencePlayer_ScrubToSeconds_Params Parms;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToFrame");

	Params::UMovieSceneSequencePlayer_ScrubToFrame_Params Parms;
	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Scrub()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Scrub");

	Params::UMovieSceneSequencePlayer_Scrub_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToSeconds");

	Params::UMovieSceneSequencePlayer_PlayToSeconds_Params Parms;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToFrame");

	Params::UMovieSceneSequencePlayer_PlayToFrame_Params Parms;
	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");

	Params::UMovieSceneSequencePlayer_PlayReverse_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::UMovieSceneSequencePlayer_PlayLooping_Params Parms;
	Parms.NumLoops = NumLoops;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Play()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");

	Params::UMovieSceneSequencePlayer_Play_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Pause()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");

	Params::UMovieSceneSequencePlayer_Pause_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToSeconds");

	Params::UMovieSceneSequencePlayer_JumpToSeconds_Params Parms;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToPosition");

	Params::UMovieSceneSequencePlayer_JumpToPosition_Params Parms;
	Parms.NewPlaybackPosition = NewPlaybackPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToFrame");

	Params::UMovieSceneSequencePlayer_JumpToFrame_Params Parms;
	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::UMovieSceneSequencePlayer_IsPlaying_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPaused()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPaused");

	Params::UMovieSceneSequencePlayer_IsPaused_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GoToEndAndStop");

	Params::UMovieSceneSequencePlayer_GoToEndAndStop_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetStartTime");

	Params::UMovieSceneSequencePlayer_GetStartTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::UMovieSceneSequencePlayer_GetPlayRate_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackStart");

	Params::UMovieSceneSequencePlayer_GetPlaybackStart_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_GetPlaybackPosition_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackEnd");

	Params::UMovieSceneSequencePlayer_GetPlaybackEnd_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetLength()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetLength");

	Params::UMovieSceneSequencePlayer_GetLength_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameRate                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameRate");

	Params::UMovieSceneSequencePlayer_GetFrameRate_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSequencePlayer::GetFrameDuration()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameDuration");

	Params::UMovieSceneSequencePlayer_GetFrameDuration_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetEndTime");

	Params::UMovieSceneSequencePlayer_GetEndTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDuration");

	Params::UMovieSceneSequencePlayer_GetDuration_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_GetDisableCameraCuts_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetCurrentTime");

	Params::UMovieSceneSequencePlayer_GetCurrentTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetBoundObjects");

	Params::UMovieSceneSequencePlayer_GetBoundObjects_Params Parms;
	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");

	Params::UMovieSceneSequencePlayer_ChangePlaybackDirection_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
