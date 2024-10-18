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

// 0x29 (0x241 - 0x218)
// WidgetBlueprintGeneratedClass AthenaInventoryDragVisual.AthenaInventoryDragVisual_C
class UAthenaInventoryDragVisual_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UImage*                                DropImage;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DropImageContainer;                                // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryDragVisual_C");
		return Clss;
	}

	void ShowDropIcon(enum class EAthenaDragDropAction Drop_Action, enum class EAthenaDragDropAction Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select1_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaInventoryDragVisual(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
