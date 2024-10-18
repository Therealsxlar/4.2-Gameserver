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

// 0x58 (0x268 - 0x210)
// WidgetBlueprintGeneratedClass MiniPartyBar.MiniPartyBar_C
class UMiniPartyBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLocalPlayer;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LineSeparator;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                    LocalPlayer;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                    RemoteMember0;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                    RemoteMember1;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                    RemoteMember2;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bLobbyTimerShow;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLobbyStarted;                                     // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E77[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundCue_Countdown_10SecLeft;                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_Countdown_10SecTick;                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*         NewLocalPlayerWidget;                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MiniPartyBar_C");
		return Clss;
	}

	class UWidget* Get_Banners_Tooltip_Widget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortUIFeatureState Temp_byte_Variable4, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_MiniPartyBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_LocalPlayerProfileModal_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UMiniPartyMember_C*>& K2Node_MakeArray_Array, class UMiniPartyMember_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
