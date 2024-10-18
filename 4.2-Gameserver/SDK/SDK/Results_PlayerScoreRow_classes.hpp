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

// 0x89 (0x299 - 0x210)
// WidgetBlueprintGeneratedClass Results_PlayerScoreRow.Results_PlayerScoreRow_C
class UResults_PlayerScoreRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UBasicGradientFill_C*                  BasicGradientFill;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCapLeft;                                      // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCapRight;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCenter;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextHomeBasePower;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreBuilding;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreCombat;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreMission;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreTotal;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScoreUtility;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          PlayerNameColor;                                   // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LocalPlayerNameColor;                              // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLocalPlayer;                                    // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_PlayerScoreRow_C");
		return Clss;
	}

	void InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void InitializePlayerName(class UFortUIScoreReport* ScoreReport, int32 ScoreReportReferece, const class FString& CallFunc_GetPlayerPlatform_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue);
	void InitializeScores(class UFortUIScoreReport* InScoreReport, int32 InScoreReportIndex, const TArray<class UCommonNumericTextBlock*>& TextScoresOrdered, const TArray<enum class EFortUIScoreType>& ScoreTypesOrdered, int32 ScoreReportIndex, class UFortUIScoreReport* ScoreReport, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, TArray<enum class EFortUIScoreType>& K2Node_MakeArray_Array1, enum class EFortUIScoreType CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void InitializeBackground(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize(class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIDFromScoreReportIndex_OutUniqueNetIdRepl, bool CallFunc_IsLocalPlayer_ReturnValue);
	void Manual_Pre_Construct(bool bIsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Results_PlayerScoreRow(int32 EntryPoint, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue1, int32 CallFunc_RandomInteger_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_bIsDesignTime, bool CallFunc_RandomBool_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
