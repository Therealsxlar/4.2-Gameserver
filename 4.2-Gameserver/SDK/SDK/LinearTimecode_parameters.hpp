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

// 0x54 (0x54 - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
public:
	struct FDropTimecode                         Timecode;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FrameNumber;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                         OutTimecode;                                       // 0x2C(0x28)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
public:
	struct FDropTimecode                         Timecode;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FrameNumber;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
{
public:
	struct FDropTimecode                         InTimecode;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
