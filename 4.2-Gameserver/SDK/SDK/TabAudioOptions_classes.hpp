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

// 0x80 (0x2A0 - 0x220)
// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
class UTabAudioOptions_C : public UFortAudioOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class URotatorSelector_C*                    AllowGameVolumeWhenMinimized;                      // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  ChatVolume;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  CinematicsVolume;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  DialogVolume;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  MusicVolume;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    Quality;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  SoundFXVolume;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    Subtitles;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChat3DEnable;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChatDevice;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChatEnable;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChatPushToTalk;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          VoiceChatDevices;                                  // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAudioOptions_C");
		return Clss;
	}

	void FindVoiceChatDeviceIndex(int32* FoundDeviceIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetVoiceChatInputDevice_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GatherVoiceChatDevices(class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_GetAvailableVoiceChatInputDevices_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void UpdateVoiceOptionsVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESubGame Temp_byte_Variable6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsPS4Platform_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default);
	void InitializeData(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, TArray<class FText>& K2Node_MakeArray_Array1, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, TArray<class FText>& K2Node_MakeArray_Array2, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, TArray<class FText>& K2Node_MakeArray_Array3, class FText CallFunc_MakeLiteralText_ReturnValue9, bool CallFunc_ShowQuality_ReturnValue, bool CallFunc_ShowAllowGameVolumeWhenMinimized_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue10, TArray<class FText>& K2Node_MakeArray_Array4, class FText CallFunc_MakeLiteralText_ReturnValue11, class FText CallFunc_MakeLiteralText_ReturnValue12, TArray<class FText>& K2Node_MakeArray_Array5, class FText CallFunc_MakeLiteralText_ReturnValue13);
	void Update_Data(int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable2, int32 Temp_int_Variable4, int32 Temp_int_Variable5, bool Temp_bool_Variable3, int32 Temp_int_Variable6, int32 Temp_int_Variable7, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GetAllowGameVolumeWhenMinimized_ReturnValue, float CallFunc_GetCinematicsVolume_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, bool CallFunc_IsConsolePlatform_ReturnValue, int32 CallFunc_FindVoiceChatDeviceIndex_FoundDeviceIndex, class FText K2Node_Select_Default, bool CallFunc_GetVoiceChat3DEnabled_ReturnValue, bool CallFunc_GetVoiceChatPTTEnabled_ReturnValue, int32 K2Node_Select1_Default, int32 K2Node_Select2_Default, bool CallFunc_GetVoiceChatEnabled_ReturnValue, int32 K2Node_Select3_Default, int32 CallFunc_GetQuality_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, bool Temp_bool_Variable4, bool CallFunc_GetSubtitlesEnabled_ReturnValue, int32 K2Node_Select4_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_GetChatVolumeValue_ReturnValue, float CallFunc_GetDialogVolumeValue_ReturnValue, float CallFunc_GetSoundFXVolumeValue_ReturnValue, float CallFunc_GetMusicVolumeValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText CallFunc_MakeLiteralText_ReturnValue9, class FText CallFunc_MakeLiteralText_ReturnValue10);
	void Construct();
	void UpdateOptionsTab();
	void BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature(float Slider_Value);
	void CenterOnTab();
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_TabAudioOptions(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value4, float K2Node_ComponentBoundEvent_Slider_Value3, float K2Node_ComponentBoundEvent_Slider_Value2, float K2Node_ComponentBoundEvent_Slider_Value1, int32 K2Node_ComponentBoundEvent_Selected_Index6, bool CallFunc_Conv_IntToBool_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index5, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index3, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 K2Node_ComponentBoundEvent_Selected_Index2, bool CallFunc_Conv_IntToBool_ReturnValue4, int32 K2Node_ComponentBoundEvent_Selected_Index1, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
