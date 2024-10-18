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

// 0x40 (0x8D8 - 0x898)
// WidgetBlueprintGeneratedClass MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C
class UMatchSummaryListEntryWidget_C : public UAthenaProfileStatListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      _1stPlace1;                                        // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BlueGradBaseFill;                                  // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ElimsText;                                         // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchEntryNumber;                                  // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              MatchTime;                                         // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlacementText;                                     // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               ScoreText;                                         // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchSummaryListEntryWidget_C");
		return Clss;
	}

	void Update(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue2, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMatchEndTime_ReturnValue, float CallFunc_GetStat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_GetStat_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetStat_ReturnValue2);
	void OnStatChanged();
	void ExecuteUbergraph_MatchSummaryListEntryWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
