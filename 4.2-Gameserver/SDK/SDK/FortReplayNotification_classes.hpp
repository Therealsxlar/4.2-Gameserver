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
// WidgetBlueprintGeneratedClass FortReplayNotification.FortReplayNotification_C
class UFortReplayNotification_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Border;                                            // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Notification;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        TimeToDisplay;                                     // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInterpSpeed;                                   // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFading;                                          // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RemainingTime;                                     // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  FullyVisible;                                      // 0x238(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FullyHidden;                                       // 0x250(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GameOnly;                                          // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ReplayOnly;                                        // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESlateVisibility                  PendingVisibility;                                 // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayNotification_C");
		return Clss;
	}

	void GetVisibilityText(enum class EHudVisibilityState Visibility, class FText* Text, enum class EHudVisibilityState Temp_byte_Variable, class FText K2Node_Select_Default);
	void IsVisibilityNotification(class FText Notification, bool* IsVisibilityNotification, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void SetNotificationVisibility(enum class ESlateVisibility Visibility, class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsVisibilityNotification_IsVisibilityNotification, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TickRemainingTime(float DeltaTime, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void StartFading();
	void TickFade(float DeltaTime, class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsVisibilityNotification_IsVisibilityNotification, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void ShowNotification(class FText NotificationText, bool CallFunc_IsVisibilityNotification_IsVisibilityNotification, class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisibilityNotification_IsVisibilityNotification1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_FortReplayNotification(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
