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

// 0x0 (0x250 - 0x250)
// WidgetBlueprintGeneratedClass HeroSquadBonuses.HeroSquadBonuses_C
class UHeroSquadBonuses_C : public UFortHeroSquadBonusPerksWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadBonuses_C");
		return Clss;
	}

	void OnSquadSlotSelected(int32 SquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
