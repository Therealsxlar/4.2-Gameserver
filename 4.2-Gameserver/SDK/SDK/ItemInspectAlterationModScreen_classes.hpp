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

// 0xB8 (0x438 - 0x380)
// WidgetBlueprintGeneratedClass ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C
class UItemInspectAlterationModScreen_C : public UFortAlterationModScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(Transient, DuplicateTransient)
	class UImage*                                FrameConnector;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderGrid;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriangleMaterial;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RarityBorderMID;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   RarityData;                                        // 0x3B0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              Triangles_Material;                                // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectAlterationModScreen_C");
		return Clss;
	}

	void UpdateColors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void SetupTriangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetupHeaderColors(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnAlterationModificationCompleted();
	void RefreshItemAndAlterationsBP();
	void ExecuteUbergraph_ItemInspectAlterationModScreen(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
