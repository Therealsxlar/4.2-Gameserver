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

// 0x1 (0x1 - 0x0)
// Function CommonInput.CommonInputContext.SetGamepadInputType
struct UCommonInputContext_SetGamepadInputType_Params
{
public:
	enum class ECommonGamepadType                InGamepadInputType;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonInput.CommonInputContext.SetCurrentInputType
struct UCommonInputContext_SetCurrentInputType_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonInput.CommonInputContext.IsUsingPointerInput
struct UCommonInputContext_IsUsingPointerInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature
struct UCommonInputContext_InputMethodChangedDelegate__DelegateSignature_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonInput.CommonInputContext.GetCurrentInputType
struct UCommonInputContext_GetCurrentInputType_Params
{
public:
	enum class ECommonInputType                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonInput.CommonInputContext.GetCurrentGamepadType
struct UCommonInputContext_GetCurrentGamepadType_Params
{
public:
	enum class ECommonGamepadType                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
