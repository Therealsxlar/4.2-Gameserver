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

// 0x20 (0x348 - 0x328)
// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public AActor
{
public:
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Dimensions;                                        // 0x32C(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x334(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithAreaLightActor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithObjectTemplate
class UDatasmithObjectTemplate : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithObjectTemplate");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Dimensions;                                        // 0x2C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x34(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidden : 1;                                       // Mask: 0x1, PropSize: 0x10x48(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithAreaLightActorTemplate");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAssetImportData
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithAssetImportData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshImportData
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithStaticMeshImportData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshCADImportData
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithStaticMeshCADImportData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithSceneImportData
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithSceneImportData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithCADImportSceneData
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithCADImportSceneData");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<class FName, class FString>             MetaData;                                          // 0x28(0x50)(Edit, BlueprintVisible, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithAssetUserData");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                  // 0x28(0x8)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraLensSettingsTemplate  LensSettings;                                      // 0x30(0x4)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;                                     // 0x34(0x4)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;                               // 0x40(0x30)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithCineCameraComponentTemplate");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithContentBlueprintLibrary
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithContentBlueprintLibrary");
		return Clss;
	}

	class FString GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key);
	void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues);
	class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
};

// 0x58 (0x80 - 0x28)
// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UObject
{
public:
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                               // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                            // 0x29(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                             // 0x2A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy ActorConflictPolicy;                               // 0x2B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy LightConflictPolicy;                               // 0x2C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy CameraConflictPolicy;                              // 0x2D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportMaterialQuality   MaterialQuality;                                   // 0x2E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDatasmithImportBaseOptions           BaseOptions;                                       // 0x30(0x18)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithTessellationOptions         TessellationOptions;                               // 0x48(0xC)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B2[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithImportOptions");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_219 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_22B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CastShadows : 1;                                   // Mask: 0x1, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseTemperature : 1;                               // Mask: 0x2, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseIESBrightness : 1;                             // Mask: 0x4, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_21A : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_22B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Intensity;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IESBrightnessScale;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightColor;                                        // 0x3C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                  IESTexture;                                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithLightComponentTemplate");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                       IntensityUnits;                                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceRadius;                                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithPointLightComponentTemplate");
		return Clss;
	}

};

// 0x8 (0x330 - 0x328)
// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithSceneImportData*             Scene;                                             // 0x328(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithSceneActor");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        Pad_22B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentMobility                Mobility;                                          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       AttachParent;                                      // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithSceneComponentTemplate");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ESkyLightSourceType               SourceType;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CubemapResolution;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                          Cubemap;                                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithSkyLightComponentTemplate");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                        InnerConeAngle;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithSpotLightComponentTemplate");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithStaticMeshComponentTemplate");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate  SectionInfoMap;                                    // 0x28(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	int32                                        LightMapCoordinateIndex;                           // 0x78(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightMapResolution;                                // 0x7C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                     // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;                                   // 0x90(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatasmithStaticMeshTemplate");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
