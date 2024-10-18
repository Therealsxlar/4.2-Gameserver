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

// 0x30 (0x280 - 0x250)
// WidgetBlueprintGeneratedClass AthenaTeamCountWidget.AthenaTeamCountWidget_C
class UAthenaTeamCountWidget_C : public UAthenaTeamAliveCountBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_3;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TeamContainer;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TeamInfoBox;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamCountWidget_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void SetTeamSlotData(int32 TeamIdx, struct FAthenaTeamCountSlotData& TeamSlotData);
	void ExecuteUbergraph_AthenaTeamCountWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 K2Node_Event_TeamIdx, const struct FAthenaTeamCountSlotData& K2Node_Event_TeamSlotData, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAthenaTeamCountSlot_C* K2Node_DynamicCast_AsAthena_Team_Count_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FAthenaTeamCountSlotData& K2Node_MakeStruct_AthenaTeamCountSlotData1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable1, class UAthenaTeamCountSlot_C* CallFunc_Create_ReturnValue1, class UPanelSlot* CallFunc_AddChild_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
