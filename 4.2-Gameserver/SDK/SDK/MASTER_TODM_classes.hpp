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

// 0x1CD (0xD8D - 0xBC0)
// BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C
class AMASTER_TODM_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC0(0x8)(Transient, DuplicateTransient)
	class UPostProcessComponent*                 HeavySSAO_Postprocess;                             // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0xBD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0xBDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0xBE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0xBE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0xBE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    New_Storm_Timeline;                                // 0xBF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0xBF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0xBFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0xC00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0xC04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FlashLightning;                                    // 0xC08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindSpeed;                                         // 0xC10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomWeatherWaitTime;                             // 0xC14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentAmountOfRandomWeatherTimeLeft;              // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewWeatherLerpAmount;                              // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindStrength;                                      // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FutureWindStrength;                                // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FutureWindSpeed;                                   // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPickNewWindConditions;                            // 0xC2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightningStrength;                                 // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThreatCloudStormAmount;                            // 0xC34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRainWithStorms;                                 // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Play_a_Particle_Effect_Near_the_players_Feet;      // 0xC39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WindEffects_Should_be_Active;                      // 0xC3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Storm_Foot_Particle_Outdoor;                       // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Storm_Foot_Particle_While_on_Terrain;              // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Storm_Foot_Particle_Indoor;                        // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Storm_Foot_Particle_While_NOT_on_Terrain;          // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Storm_Wind_Strength;                               // 0xC60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Generate_Foliage_Wind_Gusts;                       // 0xC64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LightningStrikeTimerHandle;                        // 0xC68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          PreviousDirectionalLightColor;                     // 0xC70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Lightning_Flash_Color;                             // 0xC80(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lightning_Flash_Timeline_Min;                      // 0xC90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lightning_Flash_Timeline_Max;                      // 0xC94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogMorningColor;                             // 0xC98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogMorningLitColor;                          // 0xCA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningDistance;                          // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningDiffuseAmount;                     // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningEmissiveAmount;                    // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitLength;                         // 0xCC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitRotation;                       // 0xCC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitOffset;                         // 0xCCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogDayColor;                                 // 0xCD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogDayLitColor;                              // 0xCE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayDistance;                              // 0xCF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayDiffuseAmount;                         // 0xCF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayEmissiveAmount;                        // 0xCF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitLength;                             // 0xCFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitRotation;                           // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitOffset;                             // 0xD04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogEveningColor;                             // 0xD08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogEveningLitColor;                          // 0xD18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningDistance;                          // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningDiffuseAmount;                     // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningEmissiveAmount;                    // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitLength;                         // 0xD34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitRotation;                       // 0xD38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitOffset;                         // 0xD3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogNightColor;                               // 0xD40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogNightLitColor;                            // 0xD50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightDistance;                            // 0xD60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightDiffuseAmount;                       // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightEmissiveAmount;                      // 0xD68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitLength;                           // 0xD6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitRotation;                         // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitOffset;                           // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        World_Border_Cloud_Base_Color_Brightness;          // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          World_Border_Cloud_Sub_Surface_Color_and_Opacity;  // 0xD7C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableCometDynamicPlacement;                       // 0xD8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MASTER_TODM_C");
		return Clss;
	}

	void EmptyTransform(struct FTransform* Transform, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void SetHeavySSAO(float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void UserConstructionScript(float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, float CallFunc_FClamp_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue5, const struct FLinearColor& CallFunc_MakeColor_ReturnValue4, const struct FLinearColor& CallFunc_MakeColor_ReturnValue5, float CallFunc_FClamp_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_FClamp_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue7, const struct FLinearColor& CallFunc_MakeColor_ReturnValue6, const struct FLinearColor& CallFunc_MakeColor_ReturnValue7);
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ReceiveBeginPlay();
	void EnableHDRRendering();
	void UpdateSSAO();
	void DisableLightAndFog(bool Enable);
	void ExecuteUbergraph_MASTER_TODM(int32 EntryPoint, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Square_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetStormStrength_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue4, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_FClamp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue7, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue2, float CallFunc_FClamp_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FLinearColor& CallFunc_MakeColor_ReturnValue3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue4, float CallFunc_FClamp_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue10, float CallFunc_FClamp_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue11, const struct FLinearColor& CallFunc_MakeColor_ReturnValue5, const struct FLinearColor& CallFunc_MakeColor_ReturnValue6, float CallFunc_FClamp_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_FClamp_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue13, const struct FLinearColor& CallFunc_MakeColor_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, bool K2Node_CustomEvent_Enable, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue10);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
