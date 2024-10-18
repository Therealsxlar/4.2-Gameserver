#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E8 (0x410 - 0x28)
// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                       MainNavData;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                       AbstractNavData;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCrowdManagerBase>         CrowdManagerClass;                                 // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoCreateNavigationData : 1;                     // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowClientSideNavigation : 1;                    // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickWhilePaused : 1;                              // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSupportRebuilding : 1;                            // Mask: 0x8, PropSize: 0x10x40(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInitialBuildingLocked : 1;                        // Mask: 0x10, PropSize: 0x10x40(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_158 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSkipAgentHeightCheckWhenPickingNavData : 1;       // Mask: 0x40, PropSize: 0x10x40(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_159 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavDataGatheringModeConfig       DataGatheringMode;                                 // 0x44(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bGenerateNavigationOnlyAroundNavigationInvokers : 1; // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_15A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F7C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActiveTilesUpdateInterval;                         // 0x4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                SupportedAgents;                                   // 0x50(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	float                                        DirtyAreasUpdateFreq;                              // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ANavigationData*>               NavDataSet;                                        // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ANavigationData*>               NavDataRegistrationQueue;                          // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7E[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnNavDataRegisteredEvent;                          // 0xE8(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNavigationGenerationFinishedDelegate;            // 0xF8(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7F[0xCC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFNavigationSystemRunMode         OperationMode;                                     // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F80[0x23B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationSystemV1");
		return Clss;
	}

	void UnregisterNavigationInvoker(class AActor* Invoker);
	void SimpleMoveToLocation(class AController* Controller, struct FVector& Goal);
	void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool NavigationRaycast(class UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector* HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier);
	bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	struct FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	enum class ENavigationQueryResult GetPathLength(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	enum class ENavigationQueryResult GetPathCost(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
};

// 0x8 (0x50 - 0x48)
// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                        bAutoSpawnMissingNavData : 1;                      // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F81[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationSystemModuleConfig");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class NavigationSystem.NavLinkRenderingComponent
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkRenderingComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.CrowdManagerBase
class UCrowdManagerBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdManagerBase");
		return Clss;
	}

};

// 0x30 (0x120 - 0xF0)
// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                        Pad_F82[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAttachToOwnersRoot : 1;                           // Mask: 0x1, PropSize: 0x10x114(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_15B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CachedNavParent;                                   // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavRelevantComponent");
		return Clss;
	}

	void SetNavigationRelevancy(bool bRelevant);
};

// 0xA8 (0x1C8 - 0x120)
// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_F84[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NavLinkUserId;                                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F85[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  EnabledAreaClass;                                  // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  DisabledAreaClass;                                 // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LinkRelativeStart;                                 // 0x140(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LinkRelativeEnd;                                   // 0x14C(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavLinkDirection                 LinkDirection;                                     // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F86[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bLinkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenEnabled : 1;                            // Mask: 0x2, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenDisabled : 1;                           // Mask: 0x4, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateBoxObstacle : 1;                            // Mask: 0x8, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_15C : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F87[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ObstacleOffset;                                    // 0x160(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ObstacleExtent;                                    // 0x16C(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  ObstacleAreaClass;                                 // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastRadius;                                   // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastInterval;                                 // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 BroadcastChannel;                                  // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F88[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkCustomComponent");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase
{
public:
	float                                        DefaultCost;                                       // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixedAreaEnteringCost;                             // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x3C(0x4)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F89[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavAreaMeta
class UNavAreaMeta : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavAreaMeta");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>         Areas;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                IncludeFlags;                                      // 0x38(0x4)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                ExcludeFlags;                                      // 0x3C(0x4)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationQueryFilter");
		return Clss;
	}

};

// 0x1C0 (0x4E8 - 0x328)
// Class NavigationSystem.NavigationData
class ANavigationData : public AActor
{
public:
	uint8                                        Pad_F8B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   RenderingComp;                                     // 0x330(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                        NavDataConfig;                                     // 0x338(0x68)(Protected, NativeAccessSpecifierProtected)
	uint8                                        bEnableDrawing : 1;                                // Mask: 0x1, PropSize: 0x10x3A0(0x1)(Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceRebuildOnLoad : 1;                           // Mask: 0x2, PropSize: 0x10x3A0(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanBeMainNavData : 1;                             // Mask: 0x4, PropSize: 0x10x3A0(0x1)(Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanSpawnOnRebuild : 1;                            // Mask: 0x8, PropSize: 0x10x3A0(0x1)(Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRebuildAtRuntime : 1;                             // Mask: 0x10, PropSize: 0x10x3A0(0x1)(Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_15D : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERuntimeGenerationType            RuntimeGeneration;                                 // 0x3A4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObservedPathsTickInterval;                         // 0x3A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       DataVersion;                                       // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8E[0xD0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSupportedAreaData>            SupportedAreas;                                    // 0x480(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8F[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationData");
		return Clss;
	}

};

// 0xA8 (0x590 - 0x4E8)
// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData
{
public:
	uint8                                        bDrawTriangleEdges : 1;                            // Mask: 0x1, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolyEdges : 1;                                // Mask: 0x2, PropSize: 0x10x4E8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFilledPolys : 1;                              // Mask: 0x4, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavMeshEdges : 1;                             // Mask: 0x8, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileBounds : 1;                               // Mask: 0x10, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPathCollidingGeometry : 1;                    // Mask: 0x20, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileLabels : 1;                               // Mask: 0x40, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolygonLabels : 1;                            // Mask: 0x80, PropSize: 0x10x4E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDefaultPolygonCost : 1;                       // Mask: 0x1, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawLabelsOnPathNodes : 1;                        // Mask: 0x2, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavLinks : 1;                                 // Mask: 0x4, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFailedNavLinks : 1;                           // Mask: 0x8, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawClusters : 1;                                 // Mask: 0x10, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctree : 1;                                   // Mask: 0x20, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctreeDetails : 1;                            // Mask: 0x40, PropSize: 0x10x4E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDistinctlyDrawTilesBeingBuilt : 1;                // Mask: 0x80, PropSize: 0x10x4E9(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavMesh : 1;                                  // Mask: 0x1, PropSize: 0x10x4EA(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F90[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawOffset;                                        // 0x4EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x1, PropSize: 0x10x4F0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TilePoolSize;                                      // 0x4F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSizeUU;                                        // 0x4F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x4FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellHeight;                                        // 0x500(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentRadius;                                       // 0x504(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentHeight;                                       // 0x508(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxHeight;                                    // 0x50C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxSlope;                                     // 0x510(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxStepHeight;                                // 0x514(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRegionArea;                                     // 0x518(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MergeRegionSize;                                   // 0x51C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSimplificationError;                            // 0x520(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimultaneousTileGenerationJobsCount;            // 0x524(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileNumberHardLimit;                               // 0x528(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefTileBits;                                   // 0x52C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefNavPolyBits;                                // 0x530(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefSaltBits;                                   // 0x534(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultDrawDistance;                               // 0x538(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxSearchNodes;                             // 0x53C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxHierarchicalSearchNodes;                 // 0x540(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x544(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x545(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F92[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegionChunkSplits;                                 // 0x548(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerChunkSplits;                                  // 0x54C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x2, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x4, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x8, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x10, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoFullyAsyncNavDataGathering : 1;                 // Mask: 0x20, PropSize: 0x10x550(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseBetterOffsetsFromCorners : 1;                  // Mask: 0x40, PropSize: 0x10x550(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStoreEmptyTileLayers : 1;                         // Mask: 0x80, PropSize: 0x10x550(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVirtualFilters : 1;                            // Mask: 0x1, PropSize: 0x10x551(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowNavLinkAsPathEnd : 1;                        // Mask: 0x2, PropSize: 0x10x551(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVoxelCache : 1;                                // Mask: 0x4, PropSize: 0x10x551(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_160 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F93[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TileSetUpdateInterval;                             // 0x554(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HeuristicScale;                                    // 0x558(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalDeviationFromGroundCompensation;           // 0x55C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F94[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastNavMesh");
		return Clss;
	}

};

// 0x0 (0x4E8 - 0x4E8)
// Class NavigationSystem.AbstractNavData
class AAbstractNavData : public ANavigationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbstractNavData");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Default
class UNavArea_Default : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Default");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_LowHeight
class UNavArea_LowHeight : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_LowHeight");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Null
class UNavArea_Null : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Null");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Obstacle
class UNavArea_Obstacle : public UNavArea
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavArea_Obstacle");
		return Clss;
	}

};

// 0x80 (0xC8 - 0x48)
// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	TSubclassOf<class UNavArea>                  Agent0Area;                                        // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent1Area;                                        // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent2Area;                                        // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent3Area;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent4Area;                                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent5Area;                                        // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent6Area;                                        // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent7Area;                                        // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent8Area;                                        // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent9Area;                                        // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent10Area;                                       // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent11Area;                                       // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent12Area;                                       // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent13Area;                                       // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent14Area;                                       // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent15Area;                                       // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavAreaMeta_SwitchByAgent");
		return Clss;
	}

};

// 0x68 (0xD8 - 0x70)
// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase
{
public:
	uint8                                        Pad_F95[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavCollisionCylinder>         CylinderCollision;                                 // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>              BoxCollision;                                      // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherConvexGeometry : 1;                         // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F96[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavCollision");
		return Clss;
	}

};

// 0x0 (0x4E8 - 0x4E8)
// Class NavigationSystem.NavigationGraph
class ANavigationGraph : public ANavigationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraph");
		return Clss;
	}

};

// 0x0 (0x328 - 0x328)
// Class NavigationSystem.NavigationGraphNode
class ANavigationGraphNode : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraphNode");
		return Clss;
	}

};

// 0x28 (0x260 - 0x238)
// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                         Node;                                              // 0x238(0x18)(NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         NextNodeComponent;                                 // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         PrevNodeComponent;                                 // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationGraphNodeComponent");
		return Clss;
	}

};

// 0x8 (0xF8 - 0xF0)
// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                        TileGenerationRadius;                              // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileRemovalRadius;                                 // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationInvokerComponent");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class NavigationSystem.NavigationPath
class UNavigationPath : public UObject
{
public:
	UMulticastDelegateProperty_                  PathUpdatedNotifier;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENavigationOptionFlag             RecalculateOnInvalidation;                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F98[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationPath");
		return Clss;
	}

	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	class FString GetDebugString();
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavigationPathGenerator
class UNavigationPathGenerator : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationPathGenerator");
		return Clss;
	}

};

// 0xE8 (0x410 - 0x328)
// Class NavigationSystem.NavigationTestingActor
class ANavigationTestingActor : public AActor
{
public:
	uint8                                        Pad_F99[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*           InvokerComponent;                                  // 0x340(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bActAsNavigationInvoker : 1;                       // Mask: 0x1, PropSize: 0x10x348(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_161 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F9A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x350(0x30)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               QueryingExtent;                                    // 0x380(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       MyNavData;                                         // 0x390(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ProjectedLocation;                                 // 0x398(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectedLocationValid : 1;                       // Mask: 0x1, PropSize: 0x10x3A4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x2, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHierarchicalPathfinding : 1;                   // Mask: 0x4, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherDetailedInfo : 1;                           // Mask: 0x8, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDistanceToWall : 1;                           // Mask: 0x10, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowNodePool : 1;                                 // Mask: 0x20, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowBestPath : 1;                                 // Mask: 0x40, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDiffWithPreviousStep : 1;                     // Mask: 0x80, PropSize: 0x10x3A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x1, PropSize: 0x10x3A5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_162 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F9C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavCostDisplay                   CostDisplayMode;                                   // 0x3A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextCanvasOffset;                                  // 0x3AC(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x3B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x3B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathSearchOutOfNodes : 1;                         // Mask: 0x4, PropSize: 0x10x3B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_163 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PathfindingTime;                                   // 0x3B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathCost;                                          // 0x3BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathfindingSteps;                                  // 0x3C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationTestingActor*               OtherActor;                                        // 0x3C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x3D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShowStepIndex;                                     // 0x3D8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetFromCornersDistance;                         // 0x3DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA0[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavigationTestingActor");
		return Clss;
	}

};

// 0x20 (0x580 - 0x560)
// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_FA1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavigationLink>               Links;                                             // 0x568(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkCustomInterface
class UNavLinkCustomInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkCustomInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkHostInterface
class UNavLinkHostInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkHostInterface");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class NavigationSystem.NavLinkTrivial
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavLinkTrivial");
		return Clss;
	}

};

// 0x8 (0x368 - 0x360)
// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x360(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavMeshBoundsVolume");
		return Clss;
	}

};

// 0x10 (0x570 - 0x560)
// Class NavigationSystem.NavMeshRenderingComponent
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_FA4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavMeshRenderingComponent");
		return Clss;
	}

};

// 0x28 (0x148 - 0x120)
// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FailsafeExtent;                                    // 0x128(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeAgentHeight : 1;                           // Mask: 0x1, PropSize: 0x10x134(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA5[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavModifierComponent");
		return Clss;
	}

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x10 (0x370 - 0x360)
// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume
{
public:
	uint8                                        Pad_FA6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavModifierVolume");
		return Clss;
	}

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavNodeInterface
class UNavNodeInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavNodeInterface");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class NavigationSystem.NavTestRenderingComponent
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NavTestRenderingComponent");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.RecastFilter_UseDefaultArea
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastFilter_UseDefaultArea");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class NavigationSystem.RecastNavMeshDataChunk
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	uint8                                        Pad_FA7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RecastNavMeshDataChunk");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
