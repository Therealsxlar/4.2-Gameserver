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

// 0x10 (0x218 - 0x208)
// WidgetBlueprintGeneratedClass FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C
class UFortReplayCameraSelectionMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          CameraList;                                        // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayCameraSelectionMenu_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_FortReplayCameraSelectionMenu(int32 EntryPoint, class FText Temp_text_Variable, class UFortReplayCameraOption_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, enum class ESpectatorCameraType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
