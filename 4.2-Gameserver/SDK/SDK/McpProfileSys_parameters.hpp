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

// 0x48 (0x48 - 0x0)
// Function McpProfileSys.McpProfile.UnlockProfileForWrite
struct UMcpProfile_UnlockProfileForWrite_Params
{
public:
	class FString                                Code;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDedicatedServerUrlContext            Context;                                           // 0x10(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function McpProfileSys.McpProfile.QueryPublicProfile
struct UMcpProfile_QueryPublicProfile_Params
{
public:
	struct FBaseUrlContext                       Context;                                           // 0x0(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function McpProfileSys.McpProfile.QueryProfile
struct UMcpProfile_QueryProfile_Params
{
public:
	struct FBaseUrlContext                       Context;                                           // 0x0(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function McpProfileSys.McpProfile.LockProfileForWrite
struct UMcpProfile_LockProfileForWrite_Params
{
public:
	class FString                                Code;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDedicatedServerUrlContext            Context;                                           // 0x18(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function McpProfileSys.McpProfile.DeleteProfile
struct UMcpProfile_DeleteProfile_Params
{
public:
	struct FClientUrlContext                     Context;                                           // 0x0(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function McpProfileSys.McpProfile.DeleteAllProfiles
struct UMcpProfile_DeleteAllProfiles_Params
{
public:
	struct FClientUrlContext                     Context;                                           // 0x0(0x38)(Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
