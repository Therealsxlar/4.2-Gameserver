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

// 0x1F (0x258 - 0x239)
// WidgetBlueprintGeneratedClass ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C
class UItemReceivedBattlePassPromiseHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	uint8                                        Pad_4EE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      BodyMessageWidget;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedBattlePassPromiseHeader_C");
		return Clss;
	}

	void UpdateSeasonText(bool IsDesignTime, int32 SeasonNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
