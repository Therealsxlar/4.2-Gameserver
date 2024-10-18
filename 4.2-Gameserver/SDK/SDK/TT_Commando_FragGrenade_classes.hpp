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
// BlueprintGeneratedClass TT_Commando_FragGrenade.TT_Commando_FragGrenade_C
class UTT_Commando_FragGrenade_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Commando_FragGrenade_C");
		return Clss;
	}

	bool GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText Temp_text_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, bool Temp_bool_Variable1, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText K2Node_Select1_Default, int32 CallFunc_MakeLiteralInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, bool Temp_bool_Variable2, class FText K2Node_Select2_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
