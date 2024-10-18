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
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCancelled_AD410E224F398036F9E428A39B02B87C
struct UGAB_FlingerRoar_C_OnCancelled_AD410E224F398036F9E428A39B02B87C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnInterrupted_AD410E224F398036F9E428A39B02B87C
struct UGAB_FlingerRoar_C_OnInterrupted_AD410E224F398036F9E428A39B02B87C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnBlendOut_AD410E224F398036F9E428A39B02B87C
struct UGAB_FlingerRoar_C_OnBlendOut_AD410E224F398036F9E428A39B02B87C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCompleted_AD410E224F398036F9E428A39B02B87C
struct UGAB_FlingerRoar_C_OnCompleted_AD410E224F398036F9E428A39B02B87C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.K2_ActivateAbility
struct UGAB_FlingerRoar_C_K2_ActivateAbility_Params
{
public:
};

// 0x52 (0x52 - 0x0)
// Function GAB_FlingerRoar.GAB_FlingerRoar_C.ExecuteUbergraph_GAB_FlingerRoar
struct UGAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
