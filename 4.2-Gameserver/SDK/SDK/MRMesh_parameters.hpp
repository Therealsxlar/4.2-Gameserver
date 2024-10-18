#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMeshReconstructorBase_StopReconstruction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMeshReconstructorBase_StartReconstruction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMeshReconstructorBase_PauseReconstruction_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMRMeshConfiguration                  ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2558[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MRMeshComponent.GetReconstructor
struct UMRMeshComponent_GetReconstructor_Params
{
public:
	class UMeshReconstructorBase*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MRMeshComponent.ConnectReconstructor
struct UMRMeshComponent_ConnectReconstructor_Params
{
public:
	class UMeshReconstructorBase*                Reconstructor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
