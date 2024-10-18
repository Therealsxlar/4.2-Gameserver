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

// 0x44 (0x8CC - 0x888)
// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
class UTimelineMarker_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	class UImage*                                MarkerIcon;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        RelativeTime;                                      // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortReplayEventType              EventType;                                         // 0x89C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3624[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           HoveredColor;                                      // 0x8A0(0x28)(Edit, BlueprintVisible)
	int32                                        EventIndex;                                        // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimelineMarker_C");
		return Clss;
	}

	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void ExecuteUbergraph_TimelineMarker(int32 EntryPoint, enum class EFortReplayEventType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
