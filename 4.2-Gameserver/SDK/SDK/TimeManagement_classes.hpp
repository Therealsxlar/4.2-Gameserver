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

// 0x8 (0x30 - 0x28)
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                            FixedFrameRate;                                    // 0x28(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeSynchronizationManagerHelpers
class UTimeSynchronizationManagerHelpers : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizationManagerHelpers");
		return Clss;
	}

	bool IsSynchronizing();
	bool IsSynchronized();
	struct FTimecode GetCurrentTimecode();
};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");
		return Clss;
	}

	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate);
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime);
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate);
};

// 0x10 (0x38 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2471[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfExtraBufferedFrame;                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeDelay;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2472[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizationSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
