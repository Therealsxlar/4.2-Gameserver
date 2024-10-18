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

// 0x0 (0x92C - 0x92C)
// BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C
class UGAB_Melee_ImpactCombo_Athena_C : public UGAB_Melee_GenericCombo_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Melee_ImpactCombo_Athena_C");
		return Clss;
	}

	void K2_CommitExecute(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
