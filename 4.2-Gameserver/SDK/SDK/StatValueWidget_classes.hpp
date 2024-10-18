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

// 0x10 (0x230 - 0x220)
// WidgetBlueprintGeneratedClass StatValueWidget.StatValueWidget_C
class UStatValueWidget_C : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               Value;                                             // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatValueWidget_C");
		return Clss;
	}

	void OnStatChanged();
	void ExecuteUbergraph_StatValueWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
