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

// 0x208 (0x230 - 0x28)
// Class Hotfix.OnlineHotfixManager
class UOnlineHotfixManager : public UObject
{
public:
	uint8                                        Pad_21EF[0x1C8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OssName;                                           // 0x1F0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HotfixManagerClassName;                            // 0x200(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugPrefix;                                       // 0x210(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       AssetsHotfixedFromIniFiles;                        // 0x220(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineHotfixManager");
		return Clss;
	}

	void StartHotfixProcess();
};

// 0xF0 (0x118 - 0x28)
// Class Hotfix.UpdateManager
class UUpdateManager : public UObject
{
public:
	uint8                                        Pad_21F0[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HotfixCheckCompleteDelay;                          // 0x88(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckCompleteDelay;                          // 0x8C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HotfixAvailabilityCheckCompleteDelay;              // 0x90(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckAvailabilityCompleteDelay;              // 0x94(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AppSuspendedUpdateCheckTimeSeconds;                // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F1[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlatformEnvironmentDetected;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialUpdateFinished;                            // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckHotfixAvailabilityOnly;                      // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EUpdateState                      CurrentUpdateState;                                // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WorstNumFilesPendingLoadViewed;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPatchCheckResult                 LastPatchCheckResult;                              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHotfixResult                     LastHotfixResult;                                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F2[0x2E];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastUpdateCheck;                                   // 0xE0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUpdateCompletionStatus           LastCompletionResult;                              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F4[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 UpdateStateEnum;                                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                 UpdateCompletionEnum;                              // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UpdateManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
