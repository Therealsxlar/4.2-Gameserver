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

// 0x19 (0x221 - 0x208)
// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
class UXpReasonFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              Feed;                                              // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StaticFeed;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Animating;                                         // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpReasonFeed_C");
		return Clss;
	}

	void ShowAllXpRewards(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void SetXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAthenaMatchXpReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UXpReasonFeedItem_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue);
	void Play_Xp_Reward(struct FAthenaMatchXpReward& Reward);
	void Reset_Feed();
	void Destruct();
	void ExecuteUbergraph_XpReasonFeed(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UXpReasonFeedItem_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, const struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
