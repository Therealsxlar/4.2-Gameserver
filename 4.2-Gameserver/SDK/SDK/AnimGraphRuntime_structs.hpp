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

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESplineBoneAxis : uint8
{
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	ERBFDistanceMethod_MAX         = 3,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFFunctionType_MAX           = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x118 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x68(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xC8(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_380[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x128 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
public:
	float                                        X;                                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       BlendSpace;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendFilter                          BlendFilter;                                       // 0x80(0x90)(Protected, NativeAccessSpecifierProtected)
	TArray<struct FBlendSampleData>              BlendSampleDataCache;                              // 0x110(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                       PreviousBlendSpace;                                // 0x120(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xE8 (0x210 - 0x128)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x128(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLODEnabled;                                     // 0x144(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtLocation;                                    // 0x148(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceSocketName;                                  // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PivotSocketName;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketAxis;                                        // 0x168(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        SocketBoneReference;                               // 0x178(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            SocketLocalTransform;                              // 0x190(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        PivotSocketBoneReference;                          // 0x1C0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_385[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PivotSocketLocalTransform;                         // 0x1E0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5C (0x5C - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearAxesMin;                                     // 0x4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearAxesMax;                                     // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConeAngle;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularXAngle;                                     // 0x24(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularYAngle;                                     // 0x28(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularZAngle;                                     // 0x2C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMin;                                  // 0x30(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMax;                                  // 0x3C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AngularTarget;                                     // 0x4C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearFullyLocked;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlaneTransform;                                    // 0x20(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SphereLocalOffset;                                 // 0x18(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitRadius;                                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x268 (0x380 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x120(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bChain;                                            // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoundBone;                                         // 0x140(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEnd;                                          // 0x158(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtents;                                        // 0x170(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalJointOffset;                                  // 0x17C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearSpring;                                     // 0x18C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAngularSpring;                                    // 0x18D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearSpringConstant;                              // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularSpringConstant;                             // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWindWasEnabled;                                   // 0x199(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindScale;                                         // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideLinearDamping;                            // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearDampingOverride;                             // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAngularDamping;                           // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngularDampingOverride;                            // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAngularBias;                              // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngularBiasOverride;                               // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoUpdate;                                         // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoEval;                                           // 0x1B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSolverIterationsPreUpdate;                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x1C4(0x5C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUsePlanarLimit;                                   // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSphericalLimits;                               // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x240(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereCollisionRadius;                             // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x258(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397[0x11C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x118 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x75(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x78(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xD8(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_399[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LimitMax;                                          // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        Bone;                                              // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x138 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>            AngularRangeLimits;                                // 0x118(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       AngularOffsets;                                    // 0x128(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBlendTranslation;                                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRotation;                                    // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendScale;                                       // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xA0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlendBoneByChannelEntry>      BoneDefinitions;                                   // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InternalBlendAlpha;                                // 0x84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBIsRelevant;                                      // 0x88(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlendBoneByChannelEntry>      ValidBoneEntries;                                  // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x98 (0xC8 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendTime;                                         // 0x40(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendType;                                         // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                         BlendProfile;                                      // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlphaBlend>                   Blends;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                RemainingBlendTimes;                               // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LastActiveChildIndex;                              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlendSampleData>              PerBoneSampleData;                                 // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bResetChildOnActivation;                           // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
	bool                                         bActiveValue;                                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
	TArray<int32>                                EnumToPoseIndex;                                   // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        ActiveEnumValue;                                   // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
	int32                                        ActiveChildIndex;                                  // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x130 - 0x128)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x190 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentType                    SourceComponent;                                   // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DrivingCurve;                                      // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRange;                                         // 0x144(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangeMin;                                          // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParameterName;                                     // 0x160(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x168(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentType                    TargetComponent;                                   // 0x180(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x1, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x2, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x4, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x8, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x10, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x20, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x40, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x80, PropSize: 0x10x184(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x1, PropSize: 0x10x185(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          TransformType;                                     // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  PerAxis;                                           // 0x1A(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x160 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraint>                   ConstraintSetup;                                   // 0x130(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ConstraintWeights;                                 // 0x140(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x150 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0x14A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0x14B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x158 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0x14A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0x14B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationMultiplier;                             // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationMultiplier;                                // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xE8 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAttachedParent;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyCurves;                                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF[0xAE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x68 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceBinding;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CurveSource;                                       // 0x58(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.SocketReference
struct FSocketReference
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.BoneSocketTarget
struct FBoneSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneReference;                                     // 0x8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSocketReference                      SocketReference;                                   // 0x20(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x220 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_3B3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0x120(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        EffectorTransformBone;                             // 0x158(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x170(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        TipBone;                                           // 0x1D8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x1F0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebugDraw;                                  // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x190 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandFK;                                        // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightHandIK;                                       // 0x148(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandIK;                                        // 0x160(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0x178(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HandFKWeight;                                      // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xE0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x48(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x58(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x68(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceRotationBlend;                           // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x7A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRelevantPoses;                                 // 0x7B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPerBoneBlendWeight>           PerBoneBlendWeights;                               // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 SkeletonGuid;                                      // 0x90(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 VirtualBoneGuid;                                   // 0xA0(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B8[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRotationAngle;                                  // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableKneeTwistCorrection;                        // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_3BB[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x148 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0x120(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKData>                LegsData;                                          // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_3BD[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_3BE[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x240 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LookAtBone;                                        // 0x130(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LookAtSocket;                                      // 0x148(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                     LookAtTarget;                                      // 0x150(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x1B0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisOption                       LookAtAxis;                                        // 0x1BC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomLookAtAxis;                                  // 0x1C0(0xC)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                 LookAt_Axis;                                       // 0x1CC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0x1DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisOption                       LookUpAxis;                                        // 0x1DD(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomLookUpAxis;                                  // 0x1E0(0xC)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                 LookUp_Axis;                                       // 0x1EC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookAtClamp;                                       // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolationTime;                                 // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x68 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceAdditive;                                // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x160 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x130(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x13C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x148(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x155(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x156(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x157(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x30(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CurveValues;                                       // 0x50(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DesiredAlphas;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAdditiveNode;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeAlpha;                                   // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x158 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToRefPose;                                // 0x131(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0x134(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x140(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x14C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xA0 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xC8 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0xA0(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseWeight;                                        // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  Function;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeightThreshold;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
public:
	struct FVector                               TargetTranslation;                                 // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
public:
	TArray<struct FPoseDriverTransform>          BoneTransforms;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TargetScale;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            CustomCurve;                                       // 0x28(0x70)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DrivenName;                                        // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x178 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0xA0(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                SourceBones;                                       // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOnlyDriveSelectedBones;                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                OnlyDriveBones;                                    // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EvalSpaceBone;                                     // 0xE0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRBFParams                            RBFParams;                                         // 0xF8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x109(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPoseDriverTarget>             PoseTargets;                                       // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0x120(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0x138(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverType                   Type;                                              // 0x139(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadialScaling;                                     // 0x13C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xB0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	enum class ESnapshotSourceMode               Mode;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SnapshotName;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                         Snapshot;                                          // 0x40(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
public:
	bool                                         bShuffleMode;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
	enum class ERefPoseType                      RefPoseType;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x48 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_Root
struct FAnimNode_Root : public FAnimNode_Base
{
public:
	struct FPoseLink                             Result;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xE0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  PitchScaleBiasClamp;                               // 0x50(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  YawScaleBiasClamp;                                 // 0x8C(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MeshToComponent;                                   // 0xC8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ActualPitch;                                       // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualYaw;                                         // 0xD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x150 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x14D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x200 - 0x128)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x128(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLODEnabled;                                     // 0x144(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x145(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x14C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x154(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x160(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x1C0(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xB8 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultChainLength;                                // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        ChainStartBone;                                    // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEndBone;                                      // 0x68(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x84(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x98(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBoneIndicesCached;                                // 0xA0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x70 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplicitTime;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLoop;                                       // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToExplicitTime;                           // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitialized;                                    // 0x6D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RefSkeletonIndex;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x2B8 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCalculateSpline;                              // 0x149(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PointCount;                                        // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ControlPoints;                                     // 0x150(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistStart;                                        // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistEnd;                                          // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           TwistBlend;                                        // 0x170(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E8[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplineCurves                         BoneSpline;                                        // 0x220(0x60)(NativeAccessSpecifierPrivate)
	float                                        OriginalSplineLength;                              // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSplineIKCachedBoneData>       CachedBoneReferences;                              // 0x288(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                CachedBoneLengths;                                 // 0x298(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FQuat>                         CachedOffsetRotations;                             // 0x2A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x68 (0x180 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLimitDisplacement;                                // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDisplacement;                                   // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringStiffness;                                   // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDamping;                                     // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorResetThresh;                                  // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZSpring;                                        // 0x144(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateX;                                       // 0x145(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateY;                                       // 0x146(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateZ;                                       // 0x147(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateX;                                          // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateY;                                          // 0x149(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateZ;                                          // 0x14A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB[0x35];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x178 (0x290 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TrailBone;                                         // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             ChainBoneAxis;                                     // 0x134(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertChainBoneAxis;                              // 0x135(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrailRelaxation;                                   // 0x138(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x140(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        RelaxationSpeedScale;                              // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  RelaxationSpeedScaleInputProcessor;                // 0x1BC(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLimitStretch;                                     // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchLimit;                                      // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FakeVelocity;                                      // 0x200(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorSpaceFakeVel;                                // 0x20C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BaseJoint;                                         // 0x210(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 Axis;                                              // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x1A0 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0x118(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0x140(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0x168(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimCurveParam                       Curve;                                             // 0x188(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x270 - 0x118)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0x118(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x130(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartStretchRatio;                                 // 0x134(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStretchScale;                                   // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StretchLimits;                                     // 0x13C(0x8)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x1, PropSize: 0x10x144(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x2, PropSize: 0x10x144(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_E : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3F4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EffectorSpaceBoneName;                             // 0x150(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EffectorLocation;                                  // 0x158(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x170(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               JointTargetLocation;                               // 0x1D4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  JointTargetSpaceBoneName;                          // 0x1E0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     JointTarget;                                       // 0x1F0(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAllowTwist;                                       // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAxis                                 TwistAxis;                                         // 0x254(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bNoTwist;                                          // 0x264(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x120 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x78(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xD8(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InternalBlendAlpha;                                // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAIsRelevant;                                      // 0x118(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBIsRelevant;                                      // 0x119(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetChildOnActivation;                           // 0x11A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3FD[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x250 (0x830 - 0x5E0)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3FE[0x250];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x88 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : public FRBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            CustomCurve;                                       // 0x18(0x70)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
