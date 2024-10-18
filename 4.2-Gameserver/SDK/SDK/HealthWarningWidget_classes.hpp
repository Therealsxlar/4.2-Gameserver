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

// 0x48 (0x370 - 0x328)
// WidgetBlueprintGeneratedClass HealthWarningWidget.HealthWarningWidget_C
class UHealthWarningWidget_C : public UFortHealthWarningBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FinishingAnim;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      CommonLazyImage_0;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  HealthWarningCompleted;                            // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShowTimer;                                         // 0x358(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                               IconPadding;                                       // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HealthWarningWidget_C");
		return Clss;
	}

	void HandleShowTimerComplete();
	void ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint);
	void HealthWarningCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
