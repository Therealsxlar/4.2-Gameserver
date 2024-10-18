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

// 0x30 (0x4C0 - 0x490)
// BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C
class AB_FDP_SentryGun_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  S_Turret_Aim_Range;                                // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AmmoMesh;                                          // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Gun;                                               // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Base;                                              // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CollisionCapsule;                                  // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_FDP_SentryGun_C");
		return Clss;
	}

	void SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp, class UMaterialInstanceDynamic* NewMID, class UTexture* CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreatePreviewMID_ReturnValue, class UTexture* CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
	void UserConstructionScript();
	void OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition);
	void ExecuteUbergraph_B_FDP_SentryGun(int32 EntryPoint, class ABuildingActor* K2Node_Event_NewBuildingActor, class UFortDecoItemDefinition* K2Node_Event_NewDecoItemDefinition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
