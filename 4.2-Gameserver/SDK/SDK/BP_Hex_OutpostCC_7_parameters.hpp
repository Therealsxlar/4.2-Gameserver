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
// Function BP_Hex_OutpostCC_7.BP_Hex_OutpostCC_7_C.UserConstructionScript
struct ABP_Hex_OutpostCC_7_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_OutpostCC_7.BP_Hex_OutpostCC_7_C.ReceiveBeginPlay
struct ABP_Hex_OutpostCC_7_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_OutpostCC_7.BP_Hex_OutpostCC_7_C.ActivateOutpost
struct ABP_Hex_OutpostCC_7_C_ActivateOutpost_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function BP_Hex_OutpostCC_7.BP_Hex_OutpostCC_7_C.HandleOnPlayerInfoChanged
struct ABP_Hex_OutpostCC_7_C_HandleOnPlayerInfoChanged_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_Hex_OutpostCC_7.BP_Hex_OutpostCC_7_C.ExecuteUbergraph_BP_Hex_OutpostCC_7
struct ABP_Hex_OutpostCC_7_C_ExecuteUbergraph_BP_Hex_OutpostCC_7_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5072[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UniqueId;                       // 0x18(0x28)(ConstParm, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
