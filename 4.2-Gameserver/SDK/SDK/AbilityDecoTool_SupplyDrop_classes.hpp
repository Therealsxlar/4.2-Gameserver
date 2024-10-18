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

// 0x20 (0xB78 - 0xB58)
// BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
class AAbilityDecoTool_SupplyDrop_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(Transient, DuplicateTransient)
	class UClass*                                NewVar_0;                                          // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       Helper;                                            // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideTimerHandle;                                   // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityDecoTool_SupplyDrop_C");
		return Clss;
	}

	void HideMeshAndPlacement(bool bInHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void UserConstructionScript();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void Show();
	void HideFor(float InTime);
	void ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_InTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
