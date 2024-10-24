#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <array>
#include <bitset>
#include <thread>
#include <set>
#include <intrin.h>
#include <numeric>
#include <algorithm>
#include <map>

#include "minhook/MinHook.h"
#pragma comment(lib, "minhook/minhook.lib")

#include "SDK/SDK.hpp"
using namespace SDK;

#include "Includes.h"
#include "Configuration.h"

static void LOG(std::string Message)
{
	std::cout << "Log: " << Message << "\n";
}

namespace Client
{
	static __forceinline uintptr_t BaseAddress()
	{
		static uintptr_t BaseAddr = 0;

		if (BaseAddr == 0) BaseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

		return BaseAddr;
	}

	static UFortEngine* GetEngine()
	{
		static auto Engine = UObject::FindObject<UFortEngine>("FortEngine_");
		return Engine;
	}

	static __forceinline UWorld* GetWorld()
	{
		return GetEngine()->GameViewport->World;
	}

	inline AFortGameModeAthena* GetGameMode()
	{
		return reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
	}

	inline AFortGameStateAthena* GetGameState()
	{
		return reinterpret_cast<AFortGameStateAthena*>(GetWorld()->GameState);
	}

	template<typename T>
	T* GetDefaultObject()
	{
		return (T*)T::StaticClass()->DefaultObject;
	}

	UFortKismetLibrary* GetFortKismet()
	{
		return GetDefaultObject<UFortKismetLibrary>();
	}

	UGameplayStatics* GetStatics()
	{
		return GetDefaultObject<UGameplayStatics>();
	}

	UKismetStringLibrary* GetString()
	{
		return GetDefaultObject<UKismetStringLibrary>();
	}

	UKismetSystemLibrary* GetKismetLibrary()
	{
		return GetDefaultObject<UKismetSystemLibrary>();
	}

	UKismetMathLibrary* GetMath()
	{
		return GetDefaultObject<UKismetMathLibrary>();
	}
}

namespace Player
{
	static __int64 (*DispatchRequestOG)(__int64, __int64*, int);
	static __int64 DispatchRequest(__int64 a1, __int64* a2, int a3)
	{
		*(int*)(__int64(a2) + 0x28) = 3;

		return DispatchRequestOG(a1, a2, 3);
	}
}

namespace Memory
{
	void NullFunction(uintptr_t Func)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = 0xC3;

		DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}
}

template <typename T>
__forceinline T* Cast(UObject* Object)
{
	if (Object && Object->IsA(T::StaticClass()))
	{
		return (T*)Object;
	}

	return nullptr;
}

template <class T>
T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
{
	FQuat Quat{};
	FTransform Transform{};

	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
	auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = Scale3D;
	Transform.Translation = Location;

	auto Actor = Client::GetStatics()->BeginSpawningActorFromClass(Client::GetWorld(), Class, Transform, false, nullptr);
	if (Actor)
		Client::GetStatics()->FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}

template<typename T>
T* Actors(UClass* Class = T::StaticClass(), FVector Loc = {}, FRotator Rot = {}, AActor* Owner = nullptr)
{
	return SpawnActor<T>(Loc, Rot, Class); // yeah this works fine (helps with alot of stuff ig)
}