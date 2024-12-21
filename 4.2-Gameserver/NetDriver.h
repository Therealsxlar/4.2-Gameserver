#pragma once

// Mister E Person.

enum class ENetMode
{
    Standalone,
    DedicatedServer,
    ListenServer,
    Client,
    MAX,
};

ENetMode NetMode = ENetMode::DedicatedServer;

ENetMode GetNetModeWorld() { return NetMode; }

float GetMaxTickrate() { return 30.f; }

static inline bool (*InitHost)(AOnlineBeacon* Beacon);
static inline void* (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause);
static inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
static inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);

static inline void (*TickFlushOG)(UNetDriver*);
static void TickFlush(UNetDriver* NetDriver)
{
    if (auto* ReplicationDriver = NetDriver->ReplicationDriver)
        reinterpret_cast<void(*)(UObject*)>(ReplicationDriver->Vft[0x53])(ReplicationDriver);

    if (GetAsyncKeyState(VK_F7) & 1)
    {
        if (Client::GetGameState()->GamePhase >= EAthenaGamePhase::Aircraft)
        {
            LOG("Aircraft was already started!!!");
            return;
        }

        Client::GetKismetLibrary()->ExecuteConsoleCommand(Client::GetWorld(), L"startaircraft", nullptr);
    }

    return TickFlushOG(NetDriver);
}