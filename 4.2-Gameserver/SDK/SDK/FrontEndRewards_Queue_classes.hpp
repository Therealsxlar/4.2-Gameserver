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
// WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C
class UFrontEndRewards_Queue_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              OverlayMain;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class URewardsIcon_C*>                IconList;                                          // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        IconPadding;                                       // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IconScale;                                         // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                SlideIndexList;                                    // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          IconSlideHandle;                                   // 0x248(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        IconSlideStaggerTime;                              // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IconInitStaggerTime;                               // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          IconInitHandle;                                    // 0x258(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        InitIndex;                                         // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseIconOffset;                                    // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_Queue_C");
		return Clss;
	}

	void TickIconInit(class URewardsIcon_C* CurrentIcon, int32 ArrayElement, int32 ArrayIndex, const TArray<int32>& TempIndexListCopy, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void StartInitAnimation(bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SlideIcon(class URewardsIcon_C* Icon, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1);
	void StartDequeueAnimation(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void TickIconSlide(class URewardsIcon_C* CurrentIcon, int32 ArrayElement, int32 ArrayIndex, const TArray<int32>& TempIndexListCopy, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class URewardsIcon_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue1);
	void HandleIconHideAnimationFinished(class URewardsIcon_C* Icon);
	void PopIcon(class URewardsIcon_C** OutIcon, class URewardsIcon_C* RetVal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_Array_Get_Item1);
	void RandomizeDesignView(class URewardsIcon_C* CallFunc_QueueReward_OutIcon, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CloneIconList(TArray<class URewardsIcon_C*>* IconListClone, const TArray<class URewardsIcon_C*>& OutIconListClone, int32 Temp_int_Variable, class URewardsIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ClearQueue(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URewardsIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DequeueReward(class UFortRewardNotificationData** OutReward, class UFortRewardNotificationData* RetVal, class URewardsIcon_C* CallFunc_PopIcon_OutIcon, bool CallFunc_IsValid_ReturnValue);
	void QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon, class URewardsIcon_C* NewIconWidget, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class URewardsIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_FrontEndRewards_Queue(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
