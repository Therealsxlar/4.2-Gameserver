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

// 0x10 (0xEB8 - 0xEA8)
// BlueprintGeneratedClass B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C
class AB_Pistol_SixShooter_Athena_C : public AB_Pistol_Generic_C
{
public:
	class UStaticMeshComponent*                  Reload_QuickReload;                                // 0xEA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_SixShooter_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
