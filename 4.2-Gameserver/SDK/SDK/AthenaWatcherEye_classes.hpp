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

// 0x48 (0x250 - 0x208)
// WidgetBlueprintGeneratedClass AthenaWatcherEye.AthenaWatcherEye_C
class UAthenaWatcherEye_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Mad;                                               // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Blink_New;                                         // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Surprise;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Blink;                                             // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      LookAround;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                I_Watcher;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          WatcherFinishedTransitionTimer;                    // 0x248(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaWatcherEye_C");
		return Clss;
	}

	void SpectatorAdded_Watcher();
	void Hide_Watcher();
	void Show_Watcher();
	void End_Watcher();
	void SpectatorRemoved_Watcher();
	void Begin_Watcher(bool ManySpectatorsJoining);
	void ManySpectatorsAdded_Watcher();
	void ExecuteUbergraph_AthenaWatcherEye(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetEndTime_ReturnValue1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue2, bool K2Node_CustomEvent_ManySpectatorsJoining, bool CallFunc_IsAnyAnimationPlaying_ReturnValue3, bool Temp_bool_Variable1, class UWidgetAnimation* K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWidgetAnimation* K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
