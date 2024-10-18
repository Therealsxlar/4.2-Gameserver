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

// 0xD0 (0xF8 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_1F44[0xB8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0xE0(0x18)(Edit, Config, GlobalConfig, NoClear, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignificanceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
