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

// 0x48 (0x250 - 0x208)
// WidgetBlueprintGeneratedClass Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C
class UAthena_LFG_SuggestedPartyItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     B_InviteButton;                                    // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         B_InviteButtonContainer;                           // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                I_LeaderImage;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_PartyName;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PartyFocused;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_LFG_SuggestedPartyItem_C");
		return Clss;
	}

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void UpdatePartyItemSelection(bool IsSelected);
	void ExecuteUbergraph_Athena_LFG_SuggestedPartyItem(int32 EntryPoint, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class FText Temp_text_Variable4, class FText Temp_text_Variable5, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select2_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFocusEvent& K2Node_Event_InFocusEvent, class FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsSelected, enum class ESlateVisibility K2Node_Select3_Default);
	void PartyFocused__DelegateSignature(class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
