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

// 0x20 (0x228 - 0x208)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C
class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_BattlePassStarsSupplemental;                    // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BattleStarSupplemental;                      // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_BattleStarInfoSupplemental;                      // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C");
		return Clss;
	}

	void SetNumOfBattlePassStars(int32 NumOfBattlePassStars);
	void ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int32 EntryPoint, int32 K2Node_CustomEvent_NumOfBattlePassStars, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
