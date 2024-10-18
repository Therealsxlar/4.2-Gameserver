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

// 0x0 (0x28 - 0x28)
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReconstructorBase");
		return Clss;
	}

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};

// 0x50 (0x5B0 - 0x560)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2559[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x568(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshReconstructorBase*                MeshReconstructor;                                 // 0x570(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableCollision;                                  // 0x578(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_255A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBodySetup*>                    BodySetups;                                        // 0x580(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_255B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MRMeshComponent");
		return Clss;
	}

	class UMeshReconstructorBase* GetReconstructor();
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
