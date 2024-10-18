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

// 0x4C (0x728 - 0x6DC)
// BlueprintGeneratedClass BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C
class ABP_Hex_Outpost_Theater4_C : public ABP_Hex_PARENT_C
{
public:
	uint8                                        Pad_5068[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  FlagLight;                                         // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Tip;                                               // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MeshCommandCenterFlag;                             // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Outpost_Core;                                   // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BannerMID;                                         // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Hex_Outpost_Theater4_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ActivateOutpost();
	void HandleOnPlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId);
	void ExecuteUbergraph_BP_Hex_Outpost_Theater4(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
