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

// 0xE0 (0x1D0 - 0xF0)
// Class UACBase.UACNetworkComponent
class UUACNetworkComponent : public UActorComponent
{
public:
	int32                                        PlayerID;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F[0xDC];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UACNetworkComponent");
		return Clss;
	}

	void SendPacketToServer(uint8 Type, TArray<uint8>& Packet);
	void SendPacketToClient(uint8 Type, TArray<uint8>& Packet);
	void SendClientHello();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
