#pragma once

static bool bInitialize = false;
static bool bSetupPlaylist = false;

bool (*ReadyToStartMatchOG)(AFortGameModeAthena*);
bool ReadyToStartMatch(AFortGameModeAthena* GameMode)
{
    if (!bSetupPlaylist) {
        bSetupPlaylist = true;

        UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>(Playlists::SoloPlaylist);
        Client::GetGameState()->CurrentPlaylistData = Playlist;
        Client::GetGameState()->OnRep_CurrentPlaylistData();

        LOG("Set Playlist!");
        Sleep(1000);
    }

    TArray<AActor*> WarmupActors;
    Client::GetStatics()->GetAllActorsOfClass(Client::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

    if (WarmupActors.Num() == 0)
        return false;

    if (!bInitialize)
    {
        bInitialize = true;

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

            SetConsoleTitleA("4.2 Gameserver | Listening on Port 7777");

            std::cout << "Listening on Port 7777!\n";
        }

        Client::GetGameMode()->WarmupRequiredPlayerCount = 1;
        Client::GetGameState()->PlayersLeft--;
        Client::GetGameState()->OnRep_PlayersLeft();
        Client::GetGameMode()->bWorldIsReady = true;
    }

    return ReadyToStartMatchOG(GameMode);
}

static void (*HandleStartingNewPlayerOG)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
void HandleStartingNewPlayer(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
    auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

    NewPlayer->bHasServerFinishedLoading = true;
    NewPlayer->OnRep_bHasServerFinishedLoading();

    PlayerState->bHasStartedPlaying = true;
    PlayerState->OnRep_bHasStartedPlaying();

    NewPlayer->OverriddenBackpackSize = 5;

    return HandleStartingNewPlayerOG(GameMode, NewPlayer);
}

APawn* SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
    auto PawnClass = StaticFindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
    auto NewPawn = SpawnActor<APawn>(StartSpot->K2_GetActorLocation(), StartSpot->K2_GetActorRotation(), PawnClass);
    auto FortPlayerController = Cast<AFortPlayerControllerAthena>(NewPlayer);

    auto PlayerState = (AFortPlayerState*)NewPlayer->PlayerState;
    std::string GetPlayerName = PlayerState->GetPlayerName().ToString();

    for (int i = 0; i < Client::GetGameMode()->StartingItems.Num(); i++)
    {
        auto& Item = Client::GetGameMode()->StartingItems[i].Item;
        if (Item) GiveItem(FortPlayerController, Item, Client::GetGameMode()->StartingItems[i].Count);
    }

    static auto Pickaxe = StaticFindObject<UAthenaPickaxeItemDefinition>("DefaultPickaxe.DefaultPickaxe");
    auto& CosmeticLoadoutPickaxe = FortPlayerController->CustomizationLoadout;
    GiveItem(FortPlayerController, CosmeticLoadoutPickaxe.Pickaxe ? CosmeticLoadoutPickaxe.Pickaxe->WeaponDefinition : Pickaxe->WeaponDefinition, 1);

    // not needed just a test
    LOG("Character: " + FortPlayerController->CustomizationLoadout.Character->GetName());
    LOG("Backpack: " + FortPlayerController->CustomizationLoadout.Backpack->GetName());
    LOG("Got the Pickaxe for: " + GetPlayerName + " " + CosmeticLoadoutPickaxe.Pickaxe->GetName());
    LOG("Glider: " + FortPlayerController->CustomizationLoadout.Glider->GetName());
    LOG("Contrail: " + FortPlayerController->CustomizationLoadout.SkyDiveContrail->GetName());

    Update((AFortPlayerControllerAthena*)NewPlayer);

    return NewPawn;
}

void (*ServerReadyToStartMatchOG)(AFortPlayerController* PlayerController);
void ServerReadyToStartMatch(AFortPlayerControllerAthena* PlayerController)
{
    if (PlayerController)
    {
        auto PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
        if (PlayerState)
        {
            GrantAbilities(PlayerState->AbilitySystemComponent);
            LOG("Abilities Granted!");
        }
    }

    return ServerReadyToStartMatchOG(PlayerController);
}

namespace GameMode
{
    void InitializeGamemode()
    {
        static auto FortGameModeAthena = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");
        auto FortPlayerControllerAthena = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

        VirtualHook(FortGameModeAthena->Vft, 253, ReadyToStartMatch, (PVOID*)&ReadyToStartMatchOG);
        VirtualHook(FortGameModeAthena->Vft, 199, HandleStartingNewPlayer, (PVOID*)&HandleStartingNewPlayerOG);
        VirtualHook(FortGameModeAthena->Vft, 193, SpawnDefaultPawnFor);
        VirtualHook(FortPlayerControllerAthena->Vft, 579, ServerReadyToStartMatch, (PVOID*)&ServerReadyToStartMatchOG);

    }
}