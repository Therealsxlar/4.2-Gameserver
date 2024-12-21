#pragma once

static void* (*ApplyCharacterCustomization)(void*, void*) = decltype(ApplyCharacterCustomization)(Client::BaseAddress() + 0xf5bb20);

class Player
{
    static void ServerAcknowledgePossession(AFortPlayerControllerAthena* Controller, APawn* Pawn)
    {
        Controller->AcknowledgedPawn = Pawn;

        ApplyCharacterCustomization(Controller->PlayerState, Pawn);
    }

    static void ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
    {
        if (!Controller || Controller->IsInAircraft()) return;

        auto Instance = Inventory::FindItemInstanceByGUID(Controller, ItemGuid);
        if (!Instance || !Instance->ItemEntry.ItemDefinition) return;

        if (auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn))
            if (auto WeaponDefinition = Cast<UFortWeaponItemDefinition>(Instance->ItemEntry.ItemDefinition))
                Pawn->EquipWeaponDefinition(WeaponDefinition, ItemGuid);
    }

public:
    static void InitializeHooks()
    {
        auto FortPCAthena = AFortPlayerControllerAthena::StaticClass()->DefaultObject;

        VirtualHook(FortPCAthena->Vft, 260, ServerAcknowledgePossession);
        VirtualHook(FortPCAthena->Vft, 487, ServerExecuteInventoryItem);
    }
};