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

// 0x2DF (0x4E7 - 0x208)
// WidgetBlueprintGeneratedClass Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C
class UAthena_PartySuggestion_TempFix_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_433;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      RequestAccepted;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      MouseHovered;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_PartyIconsDisplay_C*           Athena_PartyIconsDisplay;                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderOfDarkenedText;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonOverlay;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2isLFG;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ActionPrompt;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                I_SquiglyTail;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              O_Master;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SparklyTraingles;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_LFG_PartyFillType;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_ActionText;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_PartyName;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Status;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PartyFocused;                                      // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  CurDisplayedPlayerName;                            // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurPartySize;                                      // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCurIsLFG;                                         // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_AnimOutro;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bPartySuggestionInQueue;                           // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4400[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSuggestionMouseDown;                             // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortPartySuggestion                  NewPartyStruct;                                    // 0x310(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortPartySuggestion                  CurPartyStruct;                                    // 0x390(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsHovered;                                        // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4401[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_MainBorder_Normal;                             // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MainBorder_Normal_Tail;                        // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                     SpringState_ShapeChange;                           // 0x428(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SS_0_Stiffness;                                    // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_0_Damping;                                      // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_0_Mass;                                         // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_ShapeChange_NewVal;                         // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_ShapeChange_Target;                         // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4402[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MID_ShapeParam;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Normal;                               // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Normal_Tail;                          // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Highlight;                            // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Highlight_Tail;                       // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HighlightBorder;                               // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HighlightBorder_Tail;                          // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Cur_Border;                                    // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Cur_Tail;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_SparkleTraingles;                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_SparkleTriangles;                                // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Color_R_Param;                                 // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_InnerColorParam;                      // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_OuterColorParam;                      // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Color_L_Param;                                 // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_TriangleColor_A;                      // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                     SpringState_Scale;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Spring_Scale_NewVal;                               // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_Scale_Target;                               // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Mass;                                         // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Damping;                                      // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Stiffness;                                    // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSpringInterpAnims;                             // 0x4E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CurIsInvited;                                      // 0x4E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsActive;                                         // 0x4E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PartySuggestion_TempFix_C");
		return Clss;
	}

	void TempFix_TintMainBrushes(const struct FLinearColor& NewColor);
	void SetupMIDReferences(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4);
	void SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID, const struct FLinearColor& LC_Cur_Border_L, const struct FLinearColor& LC_CurBorder_R, float CurMIDScalar_ShapeChange, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
	void InitPhysAnim(const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState, const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState1);
	void InitMIDs();
	void InitNewPartySuggestion(const struct FFortPartySuggestion& NewPartySuggestion);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PlayOutro();
	void DismissSuggestion();
	void ClobberSuggestion();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void ForceAcceptSuggestion();
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PlayIntro();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdatePartySuggestion(const struct FFortPartySuggestion& PartySuggestionStruct);
	void UpdateDisplay();
	void NewPartySuggestion(const struct FFortPartySuggestion& Party_Suggestion_Struct);
	void HidePartySuggestion();
	void PreConstruct(bool IsDesignTime);
	void OnUnhovered();
	void OnHovered();
	void ExecuteUbergraph_Athena_PartySuggestion_TempFix(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, TArray<class UFortSocialItem*>& CallFunc_Map_Values_Values, int32 Temp_int_Variable1, class UFortSocialItem* CallFunc_Array_Get_Item, const class FString& CallFunc_GetCurrentPlatform_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable4, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, float Temp_float_Variable, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, bool Temp_bool_Variable5, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable6, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable7, const struct FDateTime& CallFunc_DateTimeMinValue_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortPartySuggestion& K2Node_CustomEvent_PartySuggestionStruct, int32 K2Node_Select2_Default, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText K2Node_Select3_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFortPartySuggestion& K2Node_CustomEvent_Party_Suggestion_Struct, bool CallFunc_RandomBool_ReturnValue, int32 K2Node_Select4_Default, bool K2Node_Event_IsDesignTime, int32 K2Node_Select5_Default, int32 K2Node_Select6_Default, const struct FLinearColor& K2Node_Select7_Default, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select8_Default);
	void OnSuggestionMouseDown__DelegateSignature();
	void PartyFocused__DelegateSignature(class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
