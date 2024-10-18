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

// 0x18 (0x340 - 0x328)
// WidgetBlueprintGeneratedClass AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C
class UAthenaSpectatorMapPanel_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UAthenaMapLayer*                       AthenaMapLayer;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorScoreboard_C*          AthenaSpectatorScoreboard;                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorMapPanel_C");
		return Clss;
	}

	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float MapMouseScrollSpeed, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHovered_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AthenaSpectatorMapPanel(int32 EntryPoint, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
