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

// 0x8 (0x910 - 0x908)
// BlueprintGeneratedClass GAB_BecomeChest.GAB_BecomeChest_C
class UGAB_BecomeChest_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_BecomeChest_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_BecomeChest(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
