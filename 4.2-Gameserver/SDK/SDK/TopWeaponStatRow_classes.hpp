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

// 0x38 (0x258 - 0x220)
// WidgetBlueprintGeneratedClass TopWeaponStatRow.TopWeaponStatRow_C
class UTopWeaponStatRow_C : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      StatName;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRowEntry_C*              Weapon1;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRowEntry_C*              Weapon2;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRowEntry_C*              Weapon3;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRowEntry_C*              Weapon4;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRowEntry_C*              Weapon5;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopWeaponStatRow_C");
		return Clss;
	}

	void Update(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, TArray<class UTopWeaponStatRowEntry_C*>& K2Node_MakeArray_Array, class UTopWeaponStatRowEntry_C* CallFunc_Array_Get_Item, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, TArray<class UAthenaWeaponStatView*>& CallFunc_GetSortedWeaponViews_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaWeaponStatView* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnStatChanged();
	void ExecuteUbergraph_TopWeaponStatRow(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
