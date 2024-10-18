#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                 Signature;                                         // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2082[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSignedObject");
		return Clss;
	}

};

// 0x90 (0xE0 - 0x50)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x50(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2083[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEasingSettings             Easing;                                            // 0x58(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x90(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA0(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          PostRollFrames;                                    // 0xA4(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_20F : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2084[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xB4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0xB8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PrerollTime;                                       // 0xBC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostrollTime;                                      // 0xC0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xC4(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_210 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2085[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupportsInfiniteRange;                            // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xC9(0x2)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2086[0x15];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSection");
		return Clss;
	}

};

// 0x8 (0x58 - 0x50)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x50(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2087[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrack");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNameableTrack");
		return Clss;
	}

};

// 0x80 (0xD0 - 0x50)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x70(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              MasterTracks;                                      // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0x98(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0xA8(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                            FrameResolution;                                   // 0xB8(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                            PlayRate;                                          // 0xC0(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EUpdateClockSource                ClockSource;                                       // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2088[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	uint8                                        Pad_2089[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_208A[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverrides");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOverridesInterface
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverridesInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_208B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBuiltInEasingFunction");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_208D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingExternalCurve");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class UMovieSceneEasingFunction : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingFunction");
		return Clss;
	}

	float OnEvaluate(float Interp);
};

// 0x48 (0x70 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	class FName                                  FolderName;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildMasterTracks;                                 // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_208E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFolder");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class UMovieSceneKeyProxy : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneKeyProxy");
		return Clss;
	}

};

// 0x18 (0x70 - 0x58)
// Class MovieScene.MovieSceneSegmentCompilerTestTrack
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	bool                                         bHighPassFilter;                                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSegmentCompilerTestTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieScene.MovieSceneSegmentCompilerTestSection
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSegmentCompilerTestSection");
		return Clss;
	}

};

// 0x2F8 (0x348 - 0x50)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate         PrecompiledEvaluationTemplate;                     // 0x50(0x2F0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x340(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2090[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequence");
		return Clss;
	}

};

// 0x7B8 (0x7E0 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_2091[0x348];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlay;                                            // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayReverse;                                     // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStop;                                            // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPause;                                           // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFinished;                                        // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2092[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x3C4(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_211 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2093[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   Sequence;                                          // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                          StartTime;                                         // 0x3D8(0x4)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DurationFrames;                                    // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x3E0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2094[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x3F8(0x40)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2095[0x3A8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequencePlayer");
		return Clss;
	}

	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int32 StartFrame, int32 Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void PlayToSeconds(float TimeInSeconds);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	struct FFrameRate GetFrameRate();
	int32 GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// 0x70 (0x150 - 0xE0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xE0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2096[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   SubSequence;                                       // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                 ActorToRecord;                                     // 0x110(0x1C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2097[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetSequenceName;                                // 0x130(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        TargetPathToRecordTo;                              // 0x140(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubSection");
		return Clss;
	}

};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
