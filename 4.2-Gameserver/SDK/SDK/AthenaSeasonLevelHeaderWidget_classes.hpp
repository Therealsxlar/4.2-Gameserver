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

// 0x18 (0x240 - 0x228)
// WidgetBlueprintGeneratedClass AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C
class UAthenaSeasonLevelHeaderWidget_C : public USeasonPassLevelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      HeaderNumber;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PaidHeaderBorder;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonLevelHeaderWidget_C");
		return Clss;
	}

	void OnSetup();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void ExecuteUbergraph_AthenaSeasonLevelHeaderWidget(int32 EntryPoint, bool K2Node_Event_FreeUnlocked, bool K2Node_Event_PaidUnlocked, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable2, class UClass* K2Node_Select_Default, class UClass* Temp_class_Variable3, bool Temp_bool_Variable1, class UClass* K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
