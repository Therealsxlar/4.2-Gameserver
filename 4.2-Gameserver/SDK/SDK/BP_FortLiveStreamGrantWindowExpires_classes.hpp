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

// 0x104 (0x314 - 0x210)
// WidgetBlueprintGeneratedClass BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C
class UBP_FortLiveStreamGrantWindowExpires_C : public UFortLiveStreamGrantWindowExpires
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeExpirationText;                                // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border;                                            // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpirationText;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StreamImage;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           StreamBrush;                                       // 0x240(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTimespan                             SimulatedTimespan;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  StreamTimerExpired;                                // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  StreamTimerStarted;                                // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          SimulatedExpirationTimerHandle;                    // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        CurrentName;                                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalNames;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Viewers;                                           // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        SecondsToDisplayName;                              // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortLiveStreamGrantWindowExpires_C");
		return Clss;
	}

	class UWidget* GetToolTipWidget_0(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Clean_Up_Name_Text();
	void Update_Name_Text(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item);
	void Update_Expiration_Text(struct FTimespan& Timespan, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue1, float CallFunc_FMax_ReturnValue, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue);
	void Set_Stream_Brush(struct FSlateBrush& InBrush);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLiveStreamingQuestWindowStarts_Event_0(float Seconds);
	void OnLiveStreamingQuestWindowEnds_Event_0();
	void OnLiveStreamingQuestWindowSelectedViewers_Event_0(TArray<class FText>& Names);
	void HandleSimulateExpirationTimer();
	void OnAnimation_Finished();
	void Handle_Wait_Between_Names();
	void TextFadedOut();
	void ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, float K2Node_CustomEvent_Seconds, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class FText>& K2Node_CustomEvent_Names, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimespan& CallFunc_Subtract_TimespanTimespan_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, float CallFunc_GetBroadcasterGrantWindowSecondsRemaining_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void StreamTimerStarted__DelegateSignature();
	void StreamTimerExpired__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
