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

// 0x78 (0x2B0 - 0x238)
// Class LinearTimecode.LinearTimecodeComponent
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                         DropTimecode;                                      // 0x240(0x28)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTimecodeChange;                                  // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D0[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinearTimecodeComponent");
		return Clss;
	}

	void SetDropTimecodeFrameNumber(struct FDropTimecode& Timecode, int32 FrameNumber, struct FDropTimecode* OutTimecode);
	void GetDropTimeCodeFrameNumber(struct FDropTimecode& Timecode, int32* FrameNumber);
	int32 GetDropFrameNumber();
};

// 0x0 (0x28 - 0x28)
// Class LinearTimecode.DropTimecodeToStringConversion
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DropTimecodeToStringConversion");
		return Clss;
	}

	class FString Conv_DropTimecodeToString(struct FDropTimecode& InTimecode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
