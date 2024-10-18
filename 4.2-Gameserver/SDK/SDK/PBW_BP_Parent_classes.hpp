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

// 0x18 (0xC60 - 0xC48)
// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
class APBW_BP_Parent_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(Transient, DuplicateTransient)
	TArray<class UStaticMesh*>                   StaticMeshAlternateArray;                          // 0xC50(0x10)(Edit, BlueprintVisible, ZeroConstructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBW_BP_Parent_C");
		return Clss;
	}

	void OnRep_Random_Chance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBW_BP_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
