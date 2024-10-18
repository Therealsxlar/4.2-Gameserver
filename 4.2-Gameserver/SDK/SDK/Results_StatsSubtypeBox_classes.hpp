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

// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass Results_StatsSubtypeBox.Results_StatsSubtypeBox_C
class UResults_StatsSubtypeBox_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UBasicGradientFill_C*                  GradientBackground;                                // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageType;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextType;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_422C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            TotalTypeTexture;                                  // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TotalTypeColor;                                    // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_StatsSubtypeBox_C");
		return Clss;
	}

	void InitializeScoreType(class UTexture2D* Texture, const struct FLinearColor& Color, class FText Text, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FFortScoreStylingInfo& CallFunc_GetScoreStylingData_ScoreStylingInfo, bool CallFunc_GetScoreStylingData_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Results_StatsSubtypeBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
