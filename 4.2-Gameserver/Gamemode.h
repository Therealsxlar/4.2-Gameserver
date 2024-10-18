#pragma once

static bool ReadyToStart = false;

bool (*ReadyToStartMatch)(AFortGameModeAthena*);
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
    TArray<AActor*> WarmupActors;
    Client::GetStatics()->GetAllActorsOfClass(Client::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

    if (WarmupActors.Num() == 0)
        return false;

    if (!ReadyToStart)
    {
        ReadyToStart = true;

        UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
        Client::GetGameState()->CurrentPlaylistData = Playlist;
        Client::GetGameState()->OnRep_CurrentPlaylistData();

        InitHost = decltype(InitHost)(Client::BaseAddress() + 0x34ade0);
        PauseBeaconRequests = decltype(PauseBeaconRequests)(Client::BaseAddress() + 0xdc5a90);
        SetWorld = decltype(SetWorld)(Client::BaseAddress() + 0x21f76e0);
        InitListen = decltype(InitListen)(Client::BaseAddress() + 0x34b1c0);

        auto NewBeacon = SpawnActor<AFortOnlineBeaconHost>({});
        NewBeacon->ListenPort = 7776;

        InitHost(NewBeacon);
        PauseBeaconRequests(NewBeacon, false);
        Client::GetWorld()->NetDriver = NewBeacon->NetDriver;

        if (Client::GetWorld()->NetDriver)
        {
            auto& NetDriver = Client::GetWorld()->NetDriver;
            NetDriver->World = Client::GetWorld();
            NetDriver->NetDriverName = Client::GetString()->Conv_StringToName(L"GameNetDriver");

            FURL URL;
            URL.Port = 7777;

            Client::GetGameMode()->GameSession->MaxPlayers = 100;
            FString Err;
            InitListen(NetDriver, Client::GetWorld(), URL, true, Err);
            SetWorld(NetDriver, Client::GetWorld());

            for (int i = 0; i < Client::GetWorld()->LevelCollections.Num(); ++i)
            {
                Client::GetWorld()->LevelCollections[i].NetDriver = NetDriver;
            }

            std::cout << "Listening on Port 7777!\n";
        }

        Client::GetGameMode()->WarmupRequiredPlayerCount = 1;
        Client::GetGameState()->PlayersLeft--;
        Client::GetGameState()->OnRep_PlayersLeft();
        Client::GetGameMode()->bWorldIsReady = true;
    }

    return ReadyToStartMatch(GameMode);
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
void HandleStartingNewPlayerHook(AFortGameModeAthena* Gamemode, AFortPlayerControllerAthena* NewPlayer)
{
    auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

    NewPlayer->bHasServerFinishedLoading = true;
    NewPlayer->OnRep_bHasServerFinishedLoading();

    PlayerState->bHasStartedPlaying = true;
    PlayerState->OnRep_bHasStartedPlaying();

    NewPlayer->OverriddenBackpackSize = 5;

    return HandleStartingNewPlayer(Gamemode, NewPlayer);
}

APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
    auto PawnClass = StaticFindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
    auto NewPawn = SpawnActor<APawn>(StartSpot->K2_GetActorLocation(), StartSpot->K2_GetActorRotation(), PawnClass);

    auto FortPlayerController = Cast<AFortPlayerControllerAthena>(NewPlayer);
    for (int i = 0; i < Client::GetGameMode()->StartingItems.Num(); i++)
    {
        auto& Item = Client::GetGameMode()->StartingItems[i].Item;
        if (Item) GiveItem(FortPlayerController, Item, Client::GetGameMode()->StartingItems[i].Count);
    }

    static auto Pickaxe = StaticFindObject<UAthenaPickaxeItemDefinition>("DefaultPickaxe.DefaultPickaxe");
    auto& CosmeticLoadoutPickaxe = FortPlayerController->CustomizationLoadout;
    GiveItem(FortPlayerController, CosmeticLoadoutPickaxe.Pickaxe ? CosmeticLoadoutPickaxe.Pickaxe->WeaponDefinition : Pickaxe->WeaponDefinition, 1);

    LOG("Got the Pickaxe: " + CosmeticLoadoutPickaxe.Pickaxe->GetName()); // fr fr

    Update((AFortPlayerControllerAthena*)NewPlayer);

    return NewPawn;
}

namespace Gamemode
{
    void HookGamemode()
    {
        static auto FortGameModeAthena = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

        VirtualHook(FortGameModeAthena->Vft, 253, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
        VirtualHook(FortGameModeAthena->Vft, 199, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);
        VirtualHook(FortGameModeAthena->Vft, 193, SpawnDefaultPawnForHook);
    }
}