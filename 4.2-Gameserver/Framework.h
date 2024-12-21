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

#include "Properties.h"
#include "Utils.h"

template<typename ...Args>
static void LOG(Args && ...args)
{
	std::cout << "Log: ";
	(std::cout << ... << args);
	std::cout << std::endl;
}

namespace Client
{
	static inline uintptr_t BaseAddress()
	{
		static uintptr_t BaseAddr = 0;

		if (BaseAddr == 0) BaseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

		return BaseAddr;
	}

	static inline UFortEngine* GetEngine()
	{
		static auto Engine = UObject::FindObject<UFortEngine>("FortEngine_");
		return Engine;
	}

	static inline UWorld* GetWorld()
	{
		return GetEngine()->GameViewport->World;
	}

	static inline AFortGameModeAthena* GetGameMode()
	{
		return reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
	}

	static inline AFortGameStateAthena* GetGameState()
	{
		return reinterpret_cast<AFortGameStateAthena*>(GetWorld()->GameState);
	}

	template<typename T>
	static inline T* GetDefaultObject()
	{
		return (T*)T::StaticClass()->DefaultObject;
	}

	static inline UFortKismetLibrary* GetFortKismet()
	{
		return GetDefaultObject<UFortKismetLibrary>();
	}

	static inline UGameplayStatics* GetStatics()
	{
		return GetDefaultObject<UGameplayStatics>();
	}

	static inline UKismetStringLibrary* GetString()
	{
		return GetDefaultObject<UKismetStringLibrary>();
	}

	static inline UKismetSystemLibrary* GetKismetLibrary()
	{
		return GetDefaultObject<UKismetSystemLibrary>();
	}

	static inline UKismetMathLibrary* GetMath()
	{
		return GetDefaultObject<UKismetMathLibrary>();
	}
}

namespace DispatchRequest
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
static inline T* Cast(UObject* Object)
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
	return SpawnActor<T>(Loc, Rot, Class);
}

namespace SpawnPickups
{
	AFortPickupAthena* SpawnPickup(FVector Loc, UFortItemDefinition* Def, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, bool Toss = true, int OverrideCount = -1)
	{
		AFortPickupAthena* NewPickup = SpawnActor<AFortPickupAthena>(Loc);
		NewPickup->bRandomRotation = true;
		NewPickup->PrimaryPickupItemEntry.ItemDefinition = Def;
		NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Count;
		NewPickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;
		NewPickup->OnRep_PrimaryPickupItemEntry();
		NewPickup->PawnWhoDroppedPickup = Pawn;

		if (Toss)
		{
			NewPickup->TossPickup(Loc, nullptr, -1, true);
		}

		if (Source == EFortPickupSpawnSource::Chest || Source == EFortPickupSpawnSource::AmmoBox)
		{
			NewPickup->bTossedFromContainer = true;
			NewPickup->OnRep_TossedFromContainer();
		}

		return NewPickup;
	}

	AFortPickupAthena* SpawnPickup(FVector Loc, FFortItemEntry* Entry, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, int OverrideCount = 0, bool Toss = true)
	{
		if (!Entry)
			return nullptr;

		AFortPickupAthena* NewPickup = SpawnActor<AFortPickupAthena>(Loc);
		NewPickup->bRandomRotation = true;
		NewPickup->PrimaryPickupItemEntry = *Entry;
		NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != 0 ? OverrideCount : Entry->Count;
		NewPickup->OnRep_PrimaryPickupItemEntry();
		NewPickup->PawnWhoDroppedPickup = Pawn;

		if (Toss)
		{
			NewPickup->TossPickup(Loc, nullptr, -1, true);
		}

		if (Source == EFortPickupSpawnSource::Chest || Source == EFortPickupSpawnSource::AmmoBox)
		{
			NewPickup->bTossedFromContainer = true;
			NewPickup->OnRep_TossedFromContainer();
		}

		return NewPickup;
	}
}