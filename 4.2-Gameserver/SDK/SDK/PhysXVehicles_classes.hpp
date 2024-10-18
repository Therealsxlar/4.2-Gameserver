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

// 0x168 (0x2F0 - 0x188)
// Class PhysXVehicles.WheeledVehicleMovementComponent
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        Pad_21B2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDeprecatedSpringOffsetMode : 1;                   // Mask: 0x1, PropSize: 0x10x190(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_215 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWheelSetup>                   WheelSetups;                                       // 0x198(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisWidth;                                      // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisHeight;                                     // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseAsBrake;                                   // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DragArea;                                          // 0x1BC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedMaxEngineSpeed;                           // 0x1C0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEngineRPM;                                      // 0x1C4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDragMagnitude;                                // 0x1C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0x1CC(0xC)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoad;                             // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoadFiltered;                     // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoad;                             // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoadFiltered;                     // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdLongitudinalSpeed;                        // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowForwardSpeedSubStepCount;                       // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighForwardSpeedSubStepCount;                      // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVehicleWheel*>                 Wheels;                                            // 0x1F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B6[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseRVOAvoidance : 1;                              // Mask: 0x1, PropSize: 0x10x220(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_216 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RVOAvoidanceRadius;                                // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOAvoidanceHeight;                                // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidanceConsiderationRadius;                      // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOSteeringStep;                                   // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOThrottleStep;                                   // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvoidanceUID;                                      // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     AvoidanceGroup;                                    // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToAvoid;                                     // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToIgnore;                                    // 0x244(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        AvoidanceWeight;                                   // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendingLaunchVelocity;                             // 0x24C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedVehicleState               ReplicatedState;                                   // 0x258(0x14)(Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_21B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RawSteeringInput;                                  // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawThrottleInput;                                  // 0x274(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawBrakeInput;                                     // 0x278(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawHandbrakeInput : 1;                            // Mask: 0x1, PropSize: 0x10x27C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearUpInput : 1;                               // Mask: 0x2, PropSize: 0x10x27C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearDownInput : 1;                             // Mask: 0x4, PropSize: 0x10x27C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_217 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SteeringInput;                                     // 0x280(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrottleInput;                                     // 0x284(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakeInput;                                        // 0x288(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeInput;                                    // 0x28C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdleBrakeInput;                                    // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StopThreshold;                                     // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WrongDirectionThreshold;                           // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     ThrottleInputRate;                                 // 0x29C(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     BrakeInputRate;                                    // 0x2A4(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     HandbrakeInputRate;                                // 0x2AC(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     SteeringInputRate;                                 // 0x2B4(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        bWasAvoidanceUpdated : 1;                          // Mask: 0x1, PropSize: 0x10x2BC(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_218 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21BA[0x2B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           OverrideController;                                // 0x2E8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicleMovementComponent");
		return Clss;
	}

	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int32 GroupFlags);
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int32 GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int32 GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
	bool GetUseAutoGears();
	int32 GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int32 GetCurrentGear();
};

// 0x0 (0x2F0 - 0x2F0)
// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimpleWheeledVehicleMovementComponent");
		return Clss;
	}

	void SetSteerAngle(float SteerAngle, int32 WheelIndex);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
};

// 0x20 (0x50 - 0x30)
// Class PhysXVehicles.TireConfig
class UTireConfig : public UDataAsset
{
public:
	float                                        FrictionScale;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTireConfigMaterialFriction>   TireFrictionScales;                                // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TireConfig");
		return Clss;
	}

};

// 0x618 (0x970 - 0x358)
// Class PhysXVehicles.VehicleAnimInstance
class UVehicleAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_21BD[0x608];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UWheeledVehicleMovementComponent*      WheeledVehicleMovementComponent;                   // 0x960(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21BE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleAnimInstance");
		return Clss;
	}

	class AWheeledVehicle* GetVehicle();
};

// 0xC8 (0xF0 - 0x28)
// Class PhysXVehicles.VehicleWheel
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                           CollisionMesh;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDontCreateShape;                                  // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdjustCollisionSize;                          // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeRadius;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeWidth;                                        // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampingRate;                                       // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteerAngle;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByHandbrake;                              // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTireType*                             TireType;                                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTireConfig*                           TireConfig;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffMaxLoad;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffValue;                                     // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongStiffValue;                                    // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionForceOffset;                             // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxRaise;                                // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxDrop;                                 // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionNaturalFrequency;                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionDampingRatio;                            // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWheelSweepType                   SweepType;                                         // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBrakeTorque;                                    // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHandBrakeTorque;                                // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWheeledVehicleMovementComponent*      VehicleSim;                                        // 0x98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongSlip;                                     // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatSlip;                                      // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugNormalizedTireLoad;                           // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugWheelTorque;                                  // 0xB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongForce;                                    // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatForce;                                     // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldLocation;                                       // 0xCC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xD8(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C4[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleWheel");
		return Clss;
	}

	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// 0x10 (0x398 - 0x388)
// Class PhysXVehicles.WheeledVehicle
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*      VehicleMovement;                                   // 0x390(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicle");
		return Clss;
	}

};

// 0x160 (0x450 - 0x2F0)
// Class PhysXVehicles.WheeledVehicleMovementComponent4W
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                    EngineSetup;                                       // 0x2F0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferential4WData            DifferentialSetup;                                 // 0x380(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleTransmissionData              TransmissionSetup;                                 // 0x3A0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SteeringCurve;                                     // 0x3D0(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        AckermannAccuracy;                                 // 0x448(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicleMovementComponent4W");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
