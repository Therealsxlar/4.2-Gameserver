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

// 0x18 (0x18 - 0x0)
// Function UACBase.UACNetworkComponent.SendPacketToServer
struct UUACNetworkComponent_SendPacketToServer_Params
{
public:
	uint8                                        Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Packet;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UACBase.UACNetworkComponent.SendPacketToClient
struct UUACNetworkComponent_SendPacketToClient_Params
{
public:
	uint8                                        Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Packet;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UACBase.UACNetworkComponent.SendClientHello
struct UUACNetworkComponent_SendClientHello_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
