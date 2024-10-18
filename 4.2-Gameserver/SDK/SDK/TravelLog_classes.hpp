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

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass TravelLog.TravelLog_C
class UTravelLog_C : public UCommonUserWidget
{
public:
	class UScrollBox*                            ScrollBox_0;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerMatchReport*              MatchReport;                                       // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TravelLog_C");
		return Clss;
	}

	void AddTravelLogEntry(struct FAthenaTravelLogEntry& NewEntry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_ShouldDisplayText_ReturnValue, class FText CallFunc_FormatTravelLogEntry_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UTravelLogTextItem_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ResetDisplay(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAthenaTravelLogEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetMatchReport(class UAthenaPlayerMatchReport* InMatchReport, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsNullItem_Is_Null_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
