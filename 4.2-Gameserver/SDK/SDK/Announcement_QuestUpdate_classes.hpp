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

// 0x10 (0x228 - 0x218)
// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
class UAnnouncement_QuestUpdate_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UQuestUpdateEntry_C*                   QuestUpdateEntry;                                  // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announcement_QuestUpdate_C");
		return Clss;
	}

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class UQuestUpdateEntry_C* K2Node_CustomEvent_UpdateWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortClientAnnouncement* K2Node_Event_Announcement, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnReceiveQuestUpdate_Success);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
