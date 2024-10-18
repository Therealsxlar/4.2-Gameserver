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

// 0x30 (0x238 - 0x208)
// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
class UErrorLlama_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Llama;                                         // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFlippedTexture;                                   // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CurLookAt2D;                                       // 0x224(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CurInputType;                                      // 0x22C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EyeInterpSpeed;                                    // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaterialInputScale;                                // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorLlama_C");
		return Clss;
	}

	void HandleInputTypeChanged(enum class ECommonInputType NewInputType);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RandomizeColor();
	void HandleNormalizedInputDirection(const struct FVector2D& _2DInputVec);
	void ExecuteUbergraph_ErrorLlama(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, float Temp_float_Variable7, float Temp_float_Variable8, float Temp_float_Variable9, bool Temp_bool_Variable, float Temp_float_Variable10, float Temp_float_Variable11, class UCommonInputContext* CallFunc_GetContext_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetMousePositionOnPlatform_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select1_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& K2Node_CustomEvent_2DInputVec, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
