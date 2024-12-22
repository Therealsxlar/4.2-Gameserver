#pragma once

class Inventory
{
public:
    static void Update(AFortPlayerControllerAthena* PC, FFortItemEntry* Entry = nullptr)
    {
        if (!PC || !PC->WorldInventory) return;
        PC->WorldInventory->HandleInventoryLocalUpdate();

        return Entry ? PC->WorldInventory->Inventory.MarkItemDirty(*Entry) : PC->WorldInventory->Inventory.MarkArrayDirty();
    }

    static FFortItemEntry* FindItemEntry(AFortPlayerControllerAthena* PC, const FGuid& ItemGuid)
    {
        if (!PC || !PC->WorldInventory) return nullptr;

        auto SoReal = PC->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemGuid == ItemGuid) return &SoReal[i];

        return nullptr;
    }

    static FFortItemEntry* FindItemEntry(AFortPlayerControllerAthena* PC, UFortItemDefinition* ItemDefinition)
    {
        if (!PC || !PC->WorldInventory || !ItemDefinition) return nullptr;

        auto SoReal = PC->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemDefinition == ItemDefinition) return &SoReal[i];

        return nullptr;
    }

    static UFortWorldItem* FindItemInstance(AFortPlayerController* PC, UFortItemDefinition* Def)
    {
        auto& ItemInstancesFr = PC->WorldInventory->Inventory.ItemInstances;
        for (int i = 0; i < ItemInstancesFr.Num(); ++i)
        {
            if (ItemInstancesFr[i]->ItemEntry.ItemDefinition == Def)
            {
                return ItemInstancesFr[i];
            }
        }
        return nullptr;
    }

    static UFortWorldItem* FindItemInstanceByGUID(AFortPlayerControllerAthena* PC, const FGuid& ItemGuid)
    {
        if (!PC || !PC->WorldInventory) return nullptr;

        auto& ItemInstancesFr = PC->WorldInventory->Inventory.ItemInstances;
        for (int i = 0; i < ItemInstancesFr.Num(); ++i)
            if (ItemInstancesFr[i] && ItemInstancesFr[i]->ItemEntry.ItemGuid == ItemGuid) return ItemInstancesFr[i];

        return nullptr;
    }

    static void ModifiedEntry(AFortPlayerControllerAthena* PC, FFortItemEntry& Entry)
    {
        auto& ItemInstancesFr = PC->WorldInventory->Inventory.ItemInstances;
        for (size_t i = 0; i < ItemInstancesFr.Num(); ++i)
        {
            if (ItemInstancesFr[i]->ItemEntry.ItemGuid == Entry.ItemGuid)
            {
                ItemInstancesFr[i]->ItemEntry = Entry;
                break;
            }
        }
    }

    static void Remove(AFortPlayerController* PC, FGuid Guid)
    {
        auto& SoReal = PC->WorldInventory->Inventory.ReplicatedEntries;
        for (size_t i = 0; i < SoReal.Num(); ++i)
        {
            if (SoReal[i].ItemGuid == Guid)
            {
                SoReal.Remove(i);
                break;
            }
        }

        auto& ItemInstancesFr = PC->WorldInventory->Inventory.ItemInstances;
        for (size_t i = 0; i < ItemInstancesFr.Num(); ++i)
        {
            if (!ItemInstancesFr[i])
            {
                continue;
            }
            if (ItemInstancesFr[i]->ItemEntry.ItemGuid == Guid)
            {
                ItemInstancesFr.Remove(i);
                break;
            }
        }

        Update((AFortPlayerControllerAthena*)PC, nullptr);
    }

    static void Remove(AFortPlayerController* PC, UFortItemDefinition* Def, int Count = 1)
    {
        auto& SoReal = PC->WorldInventory->Inventory.ReplicatedEntries;
        for (size_t i = 0; i < SoReal.Num(); ++i)
        {
            if (SoReal[i].ItemDefinition == Def)
            {
                SoReal[i].Count -= Count;
                if (SoReal[i].Count <= 0)
                {
                    Remove(PC, SoReal[i].ItemGuid);
                    break;
                }
                ModifiedEntry((AFortPlayerControllerAthena*)(PC), SoReal[i]);
                Update((AFortPlayerControllerAthena*)(PC), &SoReal[i]);
                break;
            }
        }
    }

    static void GiveItem(AFortPlayerControllerAthena* PC, UFortItemDefinition* ItemDefinition, int32 Count = 1, int32 Level = 0)
    {
        if (!PC || !PC->WorldInventory || !ItemDefinition || Count <= 0) return;

        auto& Inventory = PC->WorldInventory->Inventory;

        FFortItemEntry* ExistingEntry = FindItemEntry(PC, ItemDefinition);

        if (ExistingEntry) {
            ExistingEntry->Count += Count;
            Inventory.MarkItemDirty(*ExistingEntry);
            Update(PC, ExistingEntry);
            return;
        }

        if (UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDefinition->CreateTemporaryItemInstanceBP(Count, Level))) {
            NewItem->SetOwningControllerForTemporaryItem(PC);
            Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
            Inventory.ItemInstances.Add(NewItem);
            Update(PC, &NewItem->ItemEntry);
        }
    }

public:
    static void InitializeHooks()
    {

    }
};