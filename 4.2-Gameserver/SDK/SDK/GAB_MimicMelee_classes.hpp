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

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass GAB_MimicMelee.GAB_MimicMelee_C
class UGAB_MimicMelee_C : public UGAB_HuskMelee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_MimicMelee_C");
		return Clss;
	}

	void GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data);
	void ExecuteUbergraph_GAB_MimicMelee(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_Target_Data, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
