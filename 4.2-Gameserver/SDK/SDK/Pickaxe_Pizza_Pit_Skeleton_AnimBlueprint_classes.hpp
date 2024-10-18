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

// 0x6E8 (0xAF8 - 0x410)
// AnimBlueprintGeneratedClass Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92; // 0x418(0x68)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC; // 0x480(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63; // 0x4C8(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF; // 0x510(0x48)()
	uint8                                        Pad_387A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD; // 0x560(0x590)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
