#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct UMovieSceneEasingFunction_OnEvaluate_Params
{
public:
	float                                        Interp;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieSceneSequencePlayer_Stop_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieSceneSequencePlayer_SetTimeRange_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UMovieSceneSequencePlayer_SetPlaybackRange_Params
{
public:
	float                                        NewStartTime;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewEndTime;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
public:
	float                                        NewPlaybackPosition;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieSceneSequencePlayer_SetFrameRate_Params
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieSceneSequencePlayer_SetFrameRange_Params
{
public:
	int32                                        StartFrame;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
public:
	bool                                         bInDisableCameraCuts;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieSceneSequencePlayer_ScrubToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UMovieSceneSequencePlayer_Scrub_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieSceneSequencePlayer_PlayToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieSceneSequencePlayer_PlayToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieSceneSequencePlayer_PlayReverse_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
public:
	int32                                        NumLoops;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieSceneSequencePlayer_Play_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieSceneSequencePlayer_Pause_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieSceneSequencePlayer_JumpToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
struct UMovieSceneSequencePlayer_JumpToPosition_Params
{
public:
	float                                        NewPlaybackPosition;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieSceneSequencePlayer_JumpToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieSceneSequencePlayer_GetStartTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UMovieSceneSequencePlayer_GetPlaybackStart_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UMovieSceneSequencePlayer_GetPlaybackPosition_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UMovieSceneSequencePlayer_GetPlaybackEnd_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UMovieSceneSequencePlayer_GetLength_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieSceneSequencePlayer_GetFrameRate_Params
{
public:
	struct FFrameRate                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieSceneSequencePlayer_GetFrameDuration_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieSceneSequencePlayer_GetEndTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieSceneSequencePlayer_GetDuration_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieSceneSequencePlayer_GetCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
