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

// 0x8 (0xAA0 - 0xA98)
// BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C
class UGAB_SmasherDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherDeath_C");
		return Clss;
	}

	void ExecuteUbergraph_GAB_SmasherDeath(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
