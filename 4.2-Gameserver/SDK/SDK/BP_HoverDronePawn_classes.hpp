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

// 0x4C (0x4A4 - 0x458)
// BlueprintGeneratedClass BP_HoverDronePawn.BP_HoverDronePawn_C
class ABP_HoverDronePawn_C : public AHoverDronePawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(Transient, DuplicateTransient)
	bool                                         WindAudioEnabled;                                  // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AltitudeWindAudioComp;                             // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindAudioAltMin;                                   // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindAudioAltMax;                                   // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindAudioVolMin;                                   // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindAudioVolMax;                                   // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundWindMovementLoop;                             // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundWindAltitudeLoop;                             // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentAltitudeWindVolume;                         // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MovementWindAudioComp;                             // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentMovementWindVolume;                         // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_HoverDronePawn_C");
		return Clss;
	}

	void GetWindVolumeFromAltitude(float Altitude, float* Volume, float CallFunc_MapRangeClamped_ReturnValue);
	void SetWindAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void Update_Wind_Audio();
	void ExecuteUbergraph_BP_HoverDronePawn(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, class AController* K2Node_Event_NewController, class AController* K2Node_Event_OldController, float CallFunc_GetAltitude_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_GetWindVolumeFromAltitude_Volume, float CallFunc_FInterpTo_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
