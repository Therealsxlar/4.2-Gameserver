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

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass TT_Constructor_BullRush.TT_Constructor_BullRush_C
class UTT_Constructor_BullRush_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Constructor_BullRush_C");
		return Clss;
	}

	bool GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Constructor_BullRush_C* K2Node_DynamicCast_AsGA_Constructor_Bull_Rush, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText K2Node_Select_Default, class FText Temp_text_Variable3, bool Temp_bool_Variable1, class FText Temp_text_Variable4, class FText K2Node_Select1_Default, class FText Temp_text_Variable5, bool Temp_bool_Variable2, class FText K2Node_Select2_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Constructor_BullRush_C* K2Node_DynamicCast_AsGA_Constructor_Bull_Rush, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
