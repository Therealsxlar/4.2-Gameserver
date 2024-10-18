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

// 0xB0 (0x330 - 0x280)
// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
class UTabVideoOptions_C : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UResolutionScaleSlider_C*              _3DResolution;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Anti_Aliasing;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    DisplayResolution;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Effects;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    FrameRateLimit;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    MotionBlur;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             PostProcessing;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Quality;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Shadows;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ShowFPS;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ShowGrass;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Textures;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             ViewDistance;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VSync;                                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    WindowMode;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabVideoOptions_C");
		return Clss;
	}

	void UpdateOverallQualityLevel(int32 CallFunc_GetOverallQualityLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Initialize_Display_Resolutions(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& CallFunc_GetPossibleDisplayResolutions_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1);
	void Update_Data(bool Reset_Quality_Selector, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, bool CallFunc_IsBROnly_ReturnValue, int32 CallFunc_GetCurrentFPS_ReturnValue, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, int32 CallFunc_GetCurrentWindowMode_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_GetShowFPS_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_GetShowGrass_ReturnValue, bool CallFunc_GetMotionBlur_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1, int32 CallFunc_Conv_BoolToInt_ReturnValue2, bool CallFunc_GetUseVsync_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue3, int32 CallFunc_GetPostProcessQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue);
	void Initialize_Data(const TArray<class FText>& NewLocalVar_0, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText CallFunc_MakeLiteralText_ReturnValue9, TArray<class FText>& CallFunc_GetPossibleFPS_ReturnValue, TArray<class FText>& CallFunc_GetPossibleWindowModes_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue10, class FText CallFunc_MakeLiteralText_ReturnValue11, TArray<class FText>& K2Node_MakeArray_Array4, TArray<class FText>& K2Node_MakeArray_Array5, class FText CallFunc_MakeLiteralText_ReturnValue12, TArray<class FText>& K2Node_MakeArray_Array6, TArray<class FText>& K2Node_MakeArray_Array7, TArray<class FText>& K2Node_MakeArray_Array8, TArray<class FText>& K2Node_MakeArray_Array9, TArray<class FText>& K2Node_MakeArray_Array10, TArray<class FText>& K2Node_MakeArray_Array11, TArray<class FText>& K2Node_MakeArray_Array12, class FText CallFunc_MakeLiteralText_ReturnValue13, TArray<class FText>& K2Node_MakeArray_Array13, class FText CallFunc_MakeLiteralText_ReturnValue14, TArray<class FText>& K2Node_MakeArray_Array14, class FText CallFunc_MakeLiteralText_ReturnValue15, TArray<class FText>& K2Node_MakeArray_Array15, class FText CallFunc_MakeLiteralText_ReturnValue16, TArray<class FText>& K2Node_MakeArray_Array16, class FText CallFunc_MakeLiteralText_ReturnValue17, TArray<class FText>& K2Node_MakeArray_Array17, class FText CallFunc_MakeLiteralText_ReturnValue18);
	void Shadows_Changed(int32 Tab_Id);
	void Anti_Aliasing_Changed(int32 Tab_Id);
	void Textures_Changed(int32 Tab_Id);
	void Post_Processing_Changed(int32 Tab_Id);
	void Effects_Changed(int32 Tab_Id);
	void Quality_Changed(int32 Tab_Id);
	void UpdateOptionsTab();
	void Window_Mode__Changed(int32 Selected_Index);
	void CustomEvent_22(int32 Selected_Index);
	void CustomEvent_23(int32 Selected_Index);
	void View_Distance_Changed(int32 Tab_Id);
	void Construct();
	void CenterOnTab();
	void VSync_Changed(int32 Selected_Index);
	void Motion_Blur_Changed(int32 Selected_Index);
	void CustomEvent(int32 Selected_Index);
	void CustomEvent_1(int32 Selected_Index);
	void PreConstruct(bool IsDesignTime);
	void _3D_Resolution_Changed(float Slider_Value);
	void OnGameUserSettingsUINeedsUpdate();
	void Destruct();
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, int32 K2Node_CustomEvent_Tab_Id6, int32 K2Node_CustomEvent_Tab_Id5, int32 K2Node_CustomEvent_Tab_Id4, int32 K2Node_CustomEvent_Tab_Id3, int32 K2Node_CustomEvent_Tab_Id2, int32 K2Node_CustomEvent_Tab_Id1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_CustomEvent_Selected_Index6, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index5, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_CustomEvent_Selected_Index4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, int32 K2Node_CustomEvent_Tab_Id, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, int32 K2Node_CustomEvent_Selected_Index3, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index2, bool CallFunc_Conv_IntToBool_ReturnValue1, int32 K2Node_CustomEvent_Selected_Index1, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_CustomEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsAthena_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue, float K2Node_CustomEvent_Slider_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, int32 CallFunc_GetCurrentWindowMode_ReturnValue);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
