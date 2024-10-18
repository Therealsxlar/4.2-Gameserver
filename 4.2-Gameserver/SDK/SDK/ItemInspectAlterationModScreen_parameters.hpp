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

// 0x88 (0x88 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
struct UItemInspectAlterationModScreen_C_UpdateColors_Params
{
public:
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_201F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x8(0x80)()
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
struct UItemInspectAlterationModScreen_C_SetupTriangles_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
struct UItemInspectAlterationModScreen_C_SetupHeaderColors_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
struct UItemInspectAlterationModScreen_C_OnAlterationModificationCompleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
struct UItemInspectAlterationModScreen_C_RefreshItemAndAlterationsBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
struct UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
