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

// 0xAB (0x2FB - 0x250)
// WidgetBlueprintGeneratedClass PowerWidget.PowerWidget_C
class UPowerWidget_C : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UImage*                                BarBG;                                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BaseRatingValue;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BuffedRatingOuterGlow;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               BuffedRatingValue;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHomebaseRatingBar_C*                  HomebaseRatingBar;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Power;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerIconGlow;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RatingBar;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        RatingValue;                                       // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        InterpDuration;                                    // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowProgress;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3142[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentRating;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CParty;                                            // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CSolo;                                             // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*         LocalPlayerWidget;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Power_Increased;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Previously_Had_Teammates;                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3143[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Power_Increased_Sound;                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDualPower;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseLargeStyle;                                     // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowGlow;                                          // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PowerWidget_C");
		return Clss;
	}

	void Check_For_Power_Change(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* GetPowerRatingTooltipWidget(int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	bool PlayerHasTeammates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Debug(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, class FText CallFunc_Conv_BoolToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetState(bool* Passthrough, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateProgress(bool IsIncreasing, float NewProgressValue, int32 NewRatingValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating1, float CallFunc_GetHomebaseRating_ProgressFraction1, bool CallFunc_GetHomebaseRating_ReturnValue1, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating1, float CallFunc_GetModifiedHomebaseRating_ProgressFraction1, bool CallFunc_GetModifiedHomebaseRating_ReturnValue1, int32 CallFunc_GetHomebaseRating_Rating2, float CallFunc_GetHomebaseRating_ProgressFraction2, bool CallFunc_GetHomebaseRating_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating2, float CallFunc_GetModifiedHomebaseRating_ProgressFraction2, bool CallFunc_GetModifiedHomebaseRating_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue);
	void Update_Rating_Value(int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating1, float CallFunc_GetHomebaseRating_ProgressFraction1, bool CallFunc_GetHomebaseRating_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1);
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_PowerWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetState_PassThrough, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool CallFunc_SetState_PassThrough1, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Power_Increased__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
