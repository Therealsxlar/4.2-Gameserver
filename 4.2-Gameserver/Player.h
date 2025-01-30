#pragma once

class Player
{
    static void ServerAcknowledgePossession(AFortPlayerControllerAthena* Controller, APawn* Pawn)
    {
        Controller->AcknowledgedPawn = Pawn;

        Helpers::ApplyCharacterCustomization(Controller->PlayerState, Pawn);
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

	static inline void (*ServerAttemptInteractOG)(UObject* Context, FFrame* Stack, void* Ret);
	static void ServerAttemptInteract(UObject* Context, FFrame* Stack, void* Ret)
	{
		auto Params = (Params::AFortPlayerController_ServerAttemptInteract_Params*)Stack->Locals;
		auto PC = Cast<AFortPlayerControllerAthena>(Context);

		if (!Params->ReceivingActor)
			return;

		if (Params->ReceivingActor->IsA(ABuildingContainer::StaticClass()))
		{
			auto Container = (ABuildingContainer*)Params->ReceivingActor;
			auto GetName = Container->SearchLootTierGroup;

			auto Chest = Client::GetString()->Conv_StringToName(L"Loot_Treasure");
			FVector LocToSpawnLoot = Container->K2_GetActorLocation() + Container->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 };

			if (GetName == Chest)
			{
				SpawnLootFromChest(LocToSpawnLoot, Container);
				std::cout << "Searched Chest" << std::endl;
			}

			Container->bAlreadySearched = true;
			Container->SearchBounceData.SearchAnimationCount++;
			Container->BounceContainer();
			Container->OnRep_bAlreadySearched();
		}

		return ServerAttemptInteractOG(Context, Stack, Ret);
	}

	static void ServerHandlePickup(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
	{
		if (!Pawn || !Pickup || Pickup->bPickedUp || !Pawn->Controller)
			return;

		auto* PlayerController = Cast<AFortPlayerControllerAthena>(Pawn->Controller);
		if (!PlayerController)
			return;

		auto* ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;
		int32 ItemCount = Pickup->PrimaryPickupItemEntry.Count;
		int32 LoadedAmmo = Pickup->PrimaryPickupItemEntry.LoadedAmmo;

		if (Inventory::GetQuickBars(ItemDefinition) == EFortQuickBars::Primary && Inventory::IsInventoryFull(PlayerController))
		{
			auto* CurrentWeapon = Pawn->CurrentWeapon;

			if (CurrentWeapon)
			{
				auto* CurrentWeaponItemEntry = Inventory::FindItemEntry(PlayerController, CurrentWeapon->WeaponData);
				if (CurrentWeaponItemEntry)
				{
					bool bIsCurrentWeapon = (CurrentWeaponItemEntry->ItemDefinition == ItemDefinition);
					bool bCanDropWeapon = CurrentWeapon->WeaponData->bCanBeDropped;

					if (bCanDropWeapon && (!bIsCurrentWeapon || CurrentWeaponItemEntry->ItemDefinition->MaxStackSize <= 1))
					{
						PlayerController->ServerAttemptInventoryDrop(CurrentWeaponItemEntry->ItemGuid, CurrentWeaponItemEntry->Count);
					}

					auto* NewItem = Inventory::GiveItem(PlayerController, ItemDefinition, ItemCount, LoadedAmmo, false);
					if (NewItem && !bIsCurrentWeapon && CurrentWeaponItemEntry->ItemDefinition->MaxStackSize <= 1)
					{
						PlayerController->ClientEquipItem(NewItem->ItemEntry.ItemGuid, true);
					}
				}
			}
		}
		else
		{
			if (ItemDefinition->MaxStackSize <= 1)
			{
				PlayerController->ServerAttemptInventoryDrop(Pickup->PrimaryPickupItemEntry.ItemGuid, ItemCount);
			}
			Inventory::GiveItem(PlayerController, ItemDefinition, ItemCount, LoadedAmmo, false);
		}

		Pickup->bPickedUp = true;
		Pickup->OnRep_bPickedUp();

		auto& LocData = Pickup->PickupLocationData;
		LocData.bPlayPickupSound = bPlayPickupSound;
		LocData.StartDirection = (FVector_NetQuantizeNormal)InStartDirection;
		LocData.FlyTime = 0.40f;
		LocData.PickupTarget = Pawn;
		LocData.ItemOwner = Pawn;
		LocData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
		Pickup->OnRep_PickupLocationData();

		Pawn->IncomingPickups.Add(Pickup);
	}

	static void ServerAttemptInventoryDrop(AFortPlayerControllerAthena* PC, FGuid ItemGuid, int32 Count, bool bTrash)
	{
		if (!PC || !PC->WorldInventory || Count <= 0)
		{
			return;
		}

		FFortItemEntry* Entry = Inventory::FindItemEntry(PC, ItemGuid);
		if (!Entry)
		{
			return;
		}

		if (bTrash)
		{
			Inventory::Remove(PC, ItemGuid);
			return;
		}

		if (Entry->Count >= Count)
		{
			Entry->Count -= Count;
			if (Entry->Count <= 0)
			{
				SpawnPickups::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, Count);
				Inventory::Remove(PC, ItemGuid);
			}
			else
			{
				SpawnPickups::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, Count);
				Inventory::Update(PC, Entry);
				Inventory::ModifiedEntry(PC, *Entry);
			}
		}
	}


public:
    static void Hook()
    {
        auto FortPCAthena = AFortPlayerControllerAthena::StaticClass()->DefaultObject;
		auto FortPPAthena = AFortPlayerPawnAthena::StaticClass()->DefaultObject;

        VirtualHook(FortPCAthena->Vft, 260, ServerAcknowledgePossession);
        VirtualHook(FortPCAthena->Vft, 487, ServerExecuteInventoryItem);
		VirtualHook(FortPPAthena->Vft, 407, ServerHandlePickup);
		VirtualHook(FortPCAthena->Vft, 505, ServerAttemptInventoryDrop);

		ExecHook(StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerAttemptInteract"), ServerAttemptInteract, (void**)&ServerAttemptInteractOG);
    }
};