#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHeroSquadBonus_C*           K2Node_DynamicCast_AsHero_Squad_Bonus1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonuses_C::OnSquadSlotSelected(int32 SquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("HeroSquadBonuses_C", "OnSquadSlotSelected");

	Params::UHeroSquadBonuses_C_OnSquadSlotSelected_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus = K2Node_DynamicCast_AsHero_Squad_Bonus;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.K2Node_DynamicCast_AsHero_Squad_Bonus1 = K2Node_DynamicCast_AsHero_Squad_Bonus1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
