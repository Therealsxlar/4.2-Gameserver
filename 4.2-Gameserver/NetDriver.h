#pragma once

enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

constexpr ENetMode NetMode = ENetMode::NM_DedicatedServer;

static ENetMode GetNetModeWorld() { return NetMode; }

float GetMaxTickrateHook(void* a1, float a2, char a3) { return 30.f; }

static bool (*InitHost)(AOnlineBeacon* Beacon);
static void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);

static void (*TickFlush)(UNetDriver*);
static void TickFlushHook(UNetDriver* NetDriver)
{
	if (auto ReplicationDriver = NetDriver->ReplicationDriver)
		reinterpret_cast<void(*)(UObject*)>(ReplicationDriver->Vft[0x53])(ReplicationDriver);

	if (GetAsyncKeyState(VK_F7) & 1) // bus automatically starts this is for if you do not wanna wait
	{
		if (Client::GetGameState()->GamePhase >= EAthenaGamePhase::Aircraft)
		{
			LOG("aircraft was already started");
			return;
		}

		Client::GetKismetLibrary()->ExecuteConsoleCommand(Client::GetWorld(), L"startaircraft", nullptr);
	}

	return TickFlush(NetDriver);
}