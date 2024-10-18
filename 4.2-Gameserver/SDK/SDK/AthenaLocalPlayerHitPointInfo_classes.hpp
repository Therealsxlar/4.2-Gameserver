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

// 0x18 (0x250 - 0x238)
// WidgetBlueprintGeneratedClass AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C
class UAthenaLocalPlayerHitPointInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UAthenaHitPointBar_C*                  HitPointBarHealth;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHitPointBar_C*                  HitPointBarShield;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLocalPlayerHitPointInfo_C");
		return Clss;
	}

	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	void Construct();
	void ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint, bool CallFunc_IsBROnly_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
