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

// 0x40 (0x8C0 - 0x880)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0x880(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2474[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraActor");
		return Clss;
	}

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0xD8 (0x8B8 - 0x7E0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x7E0(0xC)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0x7EC(0x14)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x800(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x83C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0x840(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2475[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           FocusPlaneVisualizationMesh;                       // 0x850(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterial*                             FocusPlaneVisualizationMaterial;                   // 0x858(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  DebugFocusPlaneComponent;                          // 0x860(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              DebugFocusPlaneMID;                                // 0x868(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x870(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x880(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPresetName;                         // 0x890(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultLensPresetName;                             // 0x8A0(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFocalLength;                            // 0x8B0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFStop;                                  // 0x8B4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraComponent");
		return Clss;
	}

	void SetLensPresetByName(const class FString& InPresetName);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	float GetVerticalFieldOfView();
	class FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	class FString GetFilmbackPresetName();
};

// 0x30 (0x358 - 0x328)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneYaw;                                          // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneArmLength;                                    // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountPitch;                                   // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountYaw;                                     // 0x335(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2476[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x338(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneYawControl;                                   // 0x340(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CranePitchControl;                                 // 0x348(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneCameraMount;                                  // 0x350(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Crane");
		return Clss;
	}

};

// 0x20 (0x348 - 0x328)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2477[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x330(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                      RailSplineComponent;                               // 0x338(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       RailCameraMount;                                   // 0x340(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Rail");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
