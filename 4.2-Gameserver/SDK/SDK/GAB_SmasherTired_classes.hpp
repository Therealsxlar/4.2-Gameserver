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

// 0x10 (0x920 - 0x910)
// BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C
class UGAB_SmasherTired_C : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_SmasherClearChargeEffects;                      // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherTired_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherTired(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
