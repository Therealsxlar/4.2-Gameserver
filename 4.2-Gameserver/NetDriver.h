#pragma once

enum class ENetMode
{
    Standalone,
    DedicatedServer,
    ListenServer,
    Client,
    MAX,
};

constexpr ENetMode NetMode = ENetMode::DedicatedServer;

static ENetMode GetNetModeWorld() { return NetMode; }

float GetMaxTickrate(void* a1, float a2, char a3) { return 30.f; }

static bool (*InitHost)(AOnlineBeacon* Beacon);
static void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);

static void (*TickFlushOG)(UNetDriver*);
static void TickFlush(UNetDriver* NetDriver)
{
    if (auto* ReplicationDriver = NetDriver->ReplicationDriver)
        reinterpret_cast<void(*)(UObject*)>(ReplicationDriver->Vft[0x53])(ReplicationDriver);

    if (GetAsyncKeyState(VK_F7) & 1)
    {
        if (Client::GetGameState()->GamePhase >= EAthenaGamePhase::Aircraft)
        {
            LOG("Aircraft was already started");
            return;
        }

        Client::GetKismetLibrary()->ExecuteConsoleCommand(Client::GetWorld(), L"startaircraft", nullptr);
    }

    TickFlushOG(NetDriver);
}