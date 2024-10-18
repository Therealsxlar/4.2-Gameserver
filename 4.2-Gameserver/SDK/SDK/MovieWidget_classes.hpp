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

// 0x40 (0x280 - 0x240)
// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
class UMovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UImage*                                Video_Image;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Video_ScaleBox;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Shouldloop;                                        // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AutoPlay;                                          // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MaintainAspectRatio;                               // 0x25A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4B34[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMediaReadyToPlay;                                // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnMediaFailedToOpen;                               // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieWidget_C");
		return Clss;
	}

	void SetDelayedContentValues(bool Temp_bool_Variable, enum class EStretch Temp_byte_Variable, enum class EStretch Temp_byte_Variable1, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, enum class EStretch K2Node_Select_Default, bool CallFunc_SetLooping_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue);
	void Play(bool ShouldRewind);
	void StopPlaying();
	void Init(class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, bool CallFunc_SetMediaSource_ReturnValue, bool CallFunc_SetMediaSource_ReturnValue1, bool CallFunc_HasPlayerForSource_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Destruct();
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void ExecuteUbergraph_MovieWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnMediaFailedToOpen__DelegateSignature();
	void OnMediaReadyToPlay__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
