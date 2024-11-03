#include "Framework.h"
#include "NetDriver.h"
#include "Properties.h"
#include "Utils.h"

#include "Abilities.h"
#include "Inventory.h"
#include "Gamemode.h"
#include "Player.h"

#include "Hooking.h"

using namespace std;

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("4.2 Gameserver (Base: Sxlar) | (SDK: Sxlar - Credits: Dumper 7)");

    MH_Initialize();
    InitGObjects();

    StaticFindObject_ = decltype(StaticFindObject_)(__int64(Client::BaseAddress() + 0x1527580));
    StaticLoadObject_ = decltype(StaticLoadObject_)(__int64(Client::BaseAddress() + 0x1529060));

    Hooking::InitializeGameserver();
    Sleep(5000);
    Hooking::InitializeTerrain();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    }
    return TRUE;
}

