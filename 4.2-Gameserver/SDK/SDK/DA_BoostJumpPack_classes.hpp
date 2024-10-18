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

// 0x68 (0xBC0 - 0xB58)
// BlueprintGeneratedClass DA_BoostJumpPack.DA_BoostJumpPack_C
class ADA_BoostJumpPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0xB60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorReasonGamepad;                                // 0xB80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorCannotUse;                                    // 0xBA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_BoostJumpPack_C");
		return Clss;
	}

	void IsOnGround(bool* bOnGround, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_BoostJumpPack(int32 EntryPoint, bool Temp_bool_Variable, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayTagContainer& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
