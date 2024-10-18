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

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C
class UAthenaSpectatorHitPointBar_C : public UAthenaSpectatorHitPointBarBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class USimpleMaterialProgressBar_C*          ProgressBarDelta;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          ProgressBarFill;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorHitPointBar_C");
		return Clss;
	}

	void UpdateDBNOState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateBarDelta();
	void UpdateBarFill();
	void InitializeBar(const struct FLinearColor& Temp_struct_Variable, enum class ESpectatorHealthBarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class ESpectatorHealthBarType Temp_byte_Variable1, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, enum class ESpectatorHealthBarType Temp_byte_Variable2, const struct FLinearColor& Temp_struct_Variable5, const struct FLinearColor& Temp_struct_Variable6, const struct FLinearColor& Temp_struct_Variable7, enum class ESpectatorHealthBarType Temp_byte_Variable3, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default);
	void OnValueCurrentChanged();
	void OnValueLastChanged();
	void OnDBNOChanged();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaSpectatorHitPointBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
