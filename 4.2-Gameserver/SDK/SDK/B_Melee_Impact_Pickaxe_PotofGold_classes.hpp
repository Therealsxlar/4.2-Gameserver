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

// 0x8 (0xBC0 - 0xBB8)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C
class AB_Melee_Impact_Pickaxe_PotofGold_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*              P_PotofGold_Pickaxe;                               // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_PotofGold_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
