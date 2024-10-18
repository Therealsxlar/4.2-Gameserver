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

// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass Announcement_Layout.Announcement_Layout_C
class UAnnouncement_Layout_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              AnnouncementRoot;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionFocusWidget_C*                 MissionFocusWidget;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                AnnouncementWidget_Basic;                          // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announcement_Layout_C");
		return Clss;
	}

	void CreateAnnouncementWidget(class UClass* NewWidgetClass, bool ForceCreateUI, class UFortAnnouncementWidget** NewWidget, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue1, class UFortAnnouncementWidget* K2Node_DynamicCast_AsFort_Announcement_Widget, bool K2Node_DynamicCast_bSuccess, class UFortAnnouncementWidget* K2Node_DynamicCast_AsFort_Announcement_Widget1, bool K2Node_DynamicCast_bSuccess1);
	void SwapAnnouncementUIContent(class AFortClientAnnouncement* NewAnnouncement, class AFortClientAnnouncement_Basic* K2Node_DynamicCast_AsFort_Client_Announcement_Basic, bool K2Node_DynamicCast_bSuccess, class UFortAnnouncementWidget* CallFunc_CreateAnnouncementWidget_NewWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void OnStartNewAnnouncement(class AFortClientAnnouncement* NewAnnouncement);
	void Destruct();
	void ExecuteUbergraph_Announcement_Layout(int32 EntryPoint, class AFortClientAnnouncement* K2Node_CustomEvent_NewAnnouncement, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UFortTutorialContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
