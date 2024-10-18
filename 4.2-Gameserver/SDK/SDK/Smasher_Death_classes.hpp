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
// BlueprintGeneratedClass Smasher_Death.Smasher_Death_C
class USmasher_Death_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Smasher_Death_C");
		return Clss;
	}

	void Trigger_Death_Effect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
