#include "Framework.h"
#include "NetDriver.h"
#include "Definitions.h"
#include "Properties.h"
#include "Utils.h"
#include "UE.h"

#include "Quests.h"
#include "Looting.h"
#include "Abilities.h"
#include "Inventory.h"
#include "Building.h"
#include "Gamemode.h"
#include "Player.h"

void InitializeGS()
{
    // i'll make a tutorial on how to get the offsets on my youtube soon
    // i created an offset finder i'll open-source it soon so you wont need to use IDA for these
    // YouTube: Sxlar999

    CREATEHOOK(Client::BaseAddress() + 0x249ea20, GetNetModeWorld, nullptr);
    CREATEHOOK(Client::BaseAddress() + 0x20cee10, Definitions::KickPlayer, &Definitions::KickPlayerOG);
    CREATEHOOK(Client::BaseAddress() + 0x806900, DispatchRequest::DispatchRequest, &DispatchRequest::DispatchRequestOG);
    CREATEHOOK(Client::BaseAddress() + 0x2449f70, GetMaxTickrate, nullptr);
    CREATEHOOK(Client::BaseAddress() + 0x21f8a90, TickFlush, &TickFlushOG);

    Abilities::Hook();
    Gamemode::Hook();
    Player::Hook();
    NullFuncs::Hook();
    Inventory::Hook();
    Building::Hook();

    MH_EnableHook(MH_ALL_HOOKS);
}

void InitializeTerrain()
{
    // (InitializeTerrain) - Loads the game (Must hook InitGS first always.)
    *(bool*)(Client::BaseAddress() + 0x4bf846c) = false; // GIsClient
    ((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass()->DefaultObject)->ExecuteConsoleCommand(Client::GetWorld(), L"open Athena_Terrain", nullptr);
    Client::GetEngine()->GameInstance->LocalPlayers.Remove(0);
}

void Main()
{
    AllocConsole();
    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    SetConsoleTitleA("4.2 Gameserver (Base: Sxlar) | (SDK: Sxlar - Credits: Dumper 7) | Starting Server");

    MH_Initialize();
    InitGObjects();

    StaticFindObject_ = decltype(StaticFindObject_)(__int64(Client::BaseAddress() + 0x1527580));
    StaticLoadObject_ = decltype(StaticLoadObject_)(__int64(Client::BaseAddress() + 0x1529060));

    InitializeGS();
    Sleep(5000);
    InitializeTerrain();
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(Main).detach();
    }
    return TRUE;
}

