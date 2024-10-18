#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            AttachBindingID;                                   // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xD0 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            PathBindingID;                                     // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x38(0x90)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2120[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10xCC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10xCC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10xCC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2121[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x2C(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2122[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Scale;                                             // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2123[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2124[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2125[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5A8 (0x5A8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
struct FMovieScene3DTransformTemplateData
{
public:
	struct FMovieSceneFloatChannel               TranslationCurve;                                  // 0x0(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2126[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               RotationCurve;                                     // 0x1B0(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2127[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               ScaleCurve;                                        // 0x360(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2128[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               ManualWeight;                                      // 0x510(0x90)(NativeAccessSpecifierPublic)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2129[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTransformMask              Mask;                                              // 0x5A4(0x4)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5A8 (0x5C8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScene3DTransformTemplateData    TemplateData;                                      // 0x20(0x5A8)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey
{
public:
	struct FMovieSceneObjectBindingID            Object;                                            // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_212A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneActorReferenceKey>  KeyValues;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_212B[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xE0 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x28)(NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0x48(0x98)(NativeAccessSpecifierPrivate)
};

// 0x178 (0x178 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
struct FMovieSceneAudioSectionTemplateData
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioStartOffset;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SectionStartTimeSeconds;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AudioPitchMultiplierCurve;                         // 0x18(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AudioVolumeCurve;                                  // 0xA8(0x90)(NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttenuation;                              // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnQueueSubtitles;                                  // 0x148(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAudioFinished;                                   // 0x158(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAudioPlaybackPercent;                            // 0x168(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x178 (0x198 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneAudioSectionTemplateData   AudioData;                                         // 0x20(0x178)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2130[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionStartTime;                                  // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2131[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraAnimSectionData      SourceData;                                        // 0x20(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionStartTime;                                  // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2132[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2133[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CutTransform;                                      // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasCutTransform;                                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2134[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x18(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2135[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x290 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               Curves;                                            // 0x48(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2136[0x1B0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBlendType              BlendType;                                         // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2137[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_2138[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2139[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xB8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x20(0x80)(NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>    EventReceivers;                                    // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10xB0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10xB0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xC8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel               FadeCurve;                                         // 0x20(0x90)(NativeAccessSpecifierPrivate)
	struct FLinearColor                          FadeColor;                                         // 0xB0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10xC0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_213B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	enum class ELevelVisibility                  Visibility;                                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_213C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               ParameterCurve;                                    // 0x8(0x90)(NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x98(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               ZCurve;                                            // 0x128(0x90)(NativeAccessSpecifierPublic)
};

// 0x248 (0x248 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0x8(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x98(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x128(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x1B8(0x90)(NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	class UMaterialParameterCollection*          MPC;                                               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	int32                                        MaterialIndex;                                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_213D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x50 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x0 (0x90 - 0x90)
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
public:
};

// 0x90 (0xB0 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0x20(0x90)(NativeAccessSpecifierPublic)
};

// 0x5A8 (0x5F0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieScene3DTransformTemplateData    TemplateData;                                      // 0x48(0x5A8)(Protected, NativeAccessSpecifierProtected)
};

// 0x248 (0x290 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               ComponentCurves;                                   // 0x48(0x90)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_213E[0x1B0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumChannelsUsed;                                   // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_213F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Values;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                DefaultValue;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2140[0x67];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xE0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0x48(0x98)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xD8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerCurve;                                      // 0x48(0x88)(Protected, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2141[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xD8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneByteChannel                EnumCurve;                                         // 0x48(0x90)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xD8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneByteChannel                ByteCurve;                                         // 0x48(0x90)(Protected, NativeAccessSpecifierProtected)
};

// 0x98 (0xE0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatFunction;                                     // 0x48(0x90)(Protected, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2142[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xD0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0x48(0x88)(Protected, NativeAccessSpecifierProtected)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_214 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2143[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0x90)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0xB8 - 0xB0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0xB0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndTime;                                    // 0xB4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xD8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                            // 0x20(0xB8)(NativeAccessSpecifierPublic)
};

// 0x90 (0xB0 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel               SlomoCurve;                                        // 0x20(0x90)(NativeAccessSpecifierPrivate)
};

// 0x88 (0xA8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBoolChannel                Curve;                                             // 0x20(0x88)(Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2144[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	uint8                                        Pad_2145[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector;                                            // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector                               Vector;                                            // 0x28(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2146[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x28(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
