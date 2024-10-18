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

// 0xB0 (0x2C0 - 0x210)
// WidgetBlueprintGeneratedClass Results_TeamScoreRow.Results_TeamScoreRow_C
class UResults_TeamScoreRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkipToFinalState;                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Absorb;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             Score1;                                            // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             Score2;                                            // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             Score3;                                            // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             Score4;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreBox_C*               TeamScore;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextAfterScore1;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextAfterScore2;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextAfterScore3;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextAfterScore4;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4832[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UResults_PlayerScoreBox_C*>     ScoreBoxes;                                        // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  CountUpFinished;                                   // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PlayRate;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4833[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CountDownFinished;                                 // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UCommonNumericTextBlock*>       ResidualScoreTexts;                                // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeamScoreRow_C");
		return Clss;
	}

	void ShowValidResidualScores(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item1, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SkipToFinalState();
	void SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate, class UCommonNumericTextBlock* CurrentResidualScoreText, int32 CurrentScoreReportIndex, class UResults_PlayerScoreBox_C* CurrentScoreBox, class UFortUIScoreReport* ScoreReport, int32 BestScore, class UResults_PlayerScoreBox_C* ScoreBoxBest, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<int32>& CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Get_Item2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCommonNumericTextBlock* CallFunc_Array_Get_Item3, int32 CallFunc_GetPlayerCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UResults_PlayerScoreBox_C*>& K2Node_MakeArray_Array1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Intro_Sequence();
	void BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Up_Sequence();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature();
	void Count_Down_Sequence();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature();
	void Stop_Count_Down_Absorption();
	void ExecuteUbergraph_Results_TeamScoreRow(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue5, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, bool CallFunc_BooleanOR_ReturnValue6, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue7);
	void CountDownFinished__DelegateSignature();
	void CountUpFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
