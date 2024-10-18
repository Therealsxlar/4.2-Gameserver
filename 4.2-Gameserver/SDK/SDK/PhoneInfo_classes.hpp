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

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass PhoneInfo.PhoneInfo_C
class UPhoneInfo_C : public UBacchusHUDElement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UImage*                                BatteryIcon;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTime;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                          Battery_0;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Battery_25;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Battery_50;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Battery_75;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Battery_100;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhoneInfo_C");
		return Clss;
	}

	void ClockTimerUpdate(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetLocalTime_Hours, int32 CallFunc_GetLocalTime_Minutes, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BatteryTimerUpdate(float Float, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput, float CallFunc_GetBatteryLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2);
	void Construct();
	void On_Low_Perf_Mode(bool bInLowPerformanceMode);
	void ExecuteUbergraph_PhoneInfo(int32 EntryPoint, bool K2Node_CustomEvent_bInLowPerformanceMode, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetInLowPerformanceMode_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
