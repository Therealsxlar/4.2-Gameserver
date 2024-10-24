#pragma once

static void* (*ApplyCharacterCustomization)(void*, void*) = decltype(ApplyCharacterCustomization)(Client::BaseAddress() + 0xf5bb20);
void ServerAcknowlegePossession(AFortPlayerControllerAthena* Controller, APawn* Pawn)
{
    Controller->AcknowledgedPawn = Pawn;

    ApplyCharacterCustomization(Controller->PlayerState, Pawn);
}

void ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
{
    if (!Controller || Controller->IsInAircraft()) return;

    auto* Instance = FindItemInstanceByGUID(Controller, ItemGuid);
    if (!Instance || !Instance->ItemEntry.ItemDefinition) return;

    if (auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn))
        if (auto WeaponDefinition = Cast<UFortWeaponItemDefinition>(Instance->ItemEntry.ItemDefinition))
            Pawn->EquipWeaponDefinition(WeaponDefinition, ItemGuid);
}

namespace Player
{
    void InitializePlayer()
    {
        auto FortPlayerControllerAthena = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

        VirtualHook(FortPlayerControllerAthena->Vft, 260, ServerAcknowlegePossession);
        VirtualHook(FortPlayerControllerAthena->Vft, 487, ServerExecuteInventoryItem);
    }
}