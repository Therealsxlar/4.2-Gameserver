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

// 0x160 (0xCB8 - 0xB58)
// BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C
class AAbilityDecoTool_AirStrike_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    FiringRangeSubBuilding3;                           // 0xB68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PowerLevel;                                        // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAirStrikeLeveledPatterns             DONOTEDIT_LeveledAirStrikeArrays;                  // 0xB90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Current_Air_Strike_Sub_Tier_Selection;             // 0xBA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Level_Max;                                 // 0xBA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Current_Unprocessed_Positions_Array;               // 0xBA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                       Position_Array_Cleaned_of_duplicates;              // 0xBB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                Duplicate_Positions;                               // 0xBC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                Double_Entries;                                    // 0xBD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Spacing_Between_the_Impacts;                       // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Old_Power_Level;                                   // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pattern_Needs_to_change;                           // 0xBFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ACA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_BombUpgrade1;                                   // 0xC00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombUpgrade2;                                   // 0xC20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombUpgrade3;                                   // 0xC40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombUpgrade4;                                   // 0xC60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombUpgrade5;                                   // 0xC80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Onboarding;                                        // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ACB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortDecoHelper*                       Helper;                                            // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideTimerHandle;                                   // 0xCB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityDecoTool_AirStrike_C");
		return Clss;
	}

	void HideMeshAndPlacement(bool InHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void PopulatePositionArrays(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Array_Index_Variable4, bool CallFunc_Less_IntInt_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1, int32 CallFunc_Array_Get_Item4, const struct FVector& CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue4, const struct FAirStrikesPatterns& CallFunc_Array_Get_Item6, const struct FStrikePatternVectorStruct& CallFunc_Array_Get_Item7);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void PassInfo(int32 Power_Level);
	void HideFor(float InTime);
	void Show();
	void ExecuteUbergraph_AbilityDecoTool_AirStrike(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, bool CallFunc_IsValid_ReturnValue, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike, bool K2Node_DynamicCast_bSuccess, const struct FAirStrikesPatterns& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue, int32 K2Node_CustomEvent_Power_Level, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, bool Temp_bool_Variable1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable2, int32 Temp_int_Variable4, float K2Node_CustomEvent_InTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable5, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, int32 K2Node_Select2_Default, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
