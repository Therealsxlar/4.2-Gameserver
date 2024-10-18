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

// 0x0 (0x28 - 0x28)
// Class McpProfileSys.McpItemAware
class UMcpItemAware : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemAware");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class McpProfileSys.McpItemDefinitionBase
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemDefinitionBase");
		return Clss;
	}

};

// 0x1B0 (0x1D8 - 0x28)
// Class McpProfileSys.McpProfile
class UMcpProfile : public UObject
{
public:
	enum class EServerClientFlag                 AllowSubscriptionToNotificationsService;           // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_224C[0xA7];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugName;                                         // 0xD0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileLockOperationPending;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileUnlockOperationPending;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMocks;                                      // 0xE2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_224D[0x1D];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ProfileId;                                         // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        ProfileRevision;                                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        FullProfileQueryQueued;                            // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldCreateInstances;                            // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProfileWriteLocked;                               // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_224E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ProfileWriteLockExpireTime;                        // 0x128(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CommandRevision;                                   // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_224F[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfile");
		return Clss;
	}

	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// 0x208 (0x230 - 0x28)
// Class McpProfileSys.McpProfileGroup
class UMcpProfileGroup : public UObject
{
public:
	uint8                                        Pad_2250[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DelayMcpResults;                                   // 0xE8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WeeklyIntervalStartDay;                            // 0xEC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileEntry>                 ProfileList;                                       // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2251[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsServer;                                         // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2252[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProfileNotificationsStompTopic;                    // 0x120(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2253[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastMcpVersion;                                    // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastContentVersion;                                // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             LocalTimeOffset;                                   // 0x190(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileHttpRequest>           PendingRequests;                                   // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIsProcessingRequestGenerator;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2254[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LockCode;                                          // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                   LockedProfiles;                                    // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                LockedProfilesString;                              // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProfileWriteLockTimeoutSecs;                       // 0x1E0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubscribedToNotifications;                        // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2255[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ApplyStashEndPoint;                                // 0x1E8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingInterceptedRequest;                        // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2256[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSendProfileCommandRevisions;                      // 0x208(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2257[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileGroup");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class McpProfileSys.McpProfileManager
class UMcpProfileManager : public UObject
{
public:
	uint8                                        Pad_2258[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProfileGroupEntry>            ServerProfileGroups;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>            ClientProfileGroups;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
