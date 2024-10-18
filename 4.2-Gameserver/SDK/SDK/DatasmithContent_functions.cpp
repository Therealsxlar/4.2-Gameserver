#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key)
{
	static auto Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValueForKey");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params Parms;
	Parms.Object = Object;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringToMatch                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutKeys                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
{
	static auto Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataKeysAndValuesForValue");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params Parms;
	Parms.Object = Object;
	Parms.StringToMatch = StringToMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutKeys != nullptr)
		*OutKeys = Parms.OutKeys;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDatasmithAssetUserData*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(class UObject* Object)
{
	static auto Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserData");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params Parms;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
