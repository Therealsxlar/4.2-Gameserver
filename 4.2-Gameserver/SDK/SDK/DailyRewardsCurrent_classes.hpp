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

// 0x68 (0x288 - 0x220)
// WidgetBlueprintGeneratedClass DailyRewardsCurrent.DailyRewardsCurrent_C
class UDailyRewardsCurrent_C : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UImage*                                Flare_Backing;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortItemCard;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRarityFlare;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemName;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ScheduleText;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_LFT;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_RGT;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ScheduleName;                                      // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsClaiming;                                        // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RarityFlare_MID;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyRewardsCurrent_C");
		return Clss;
	}

	void Set_Item_Flare(const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable2, float Temp_float_Variable4, float Temp_float_Variable5, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable3, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& K2Node_Select_Default, float K2Node_Select1_Default, float K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector2D& Temp_struct_Variable3, bool Temp_bool_Variable4, const struct FVector2D& K2Node_Select4_Default, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Set_Item(class UFortItem* Item_To_Represent, int32 Quantity, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void Construct();
	void ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, class FText CallFunc_GetDisplayName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& K2Node_Select1_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
