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

// 0x88 (0x2D0 - 0x248)
// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
class UPlayerBanner_C : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UImage*                                BannerImage;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      LoadGuard;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SurroundImage;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      SurroundLoadGuard;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseLargeTexture;                                  // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3151[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwnerNetID;                                        // 0x278(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CurrentBannerColorId;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldUseIconRepresentation;                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3152[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentBannerIconId;                               // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SurroundEnabled;                                   // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3153[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceConstant*>     BannerSurroundMats;                                // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerBanner_C");
		return Clss;
	}

	void UnbindDelegates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortMcpContext* CallFunc_GetContext_ReturnValue1);
	void SetupSurround(const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetBannerIconAndColorFromProfile(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, bool CallFunc_SetBannerImage_Success);
	void SetBannerIconAndColor(class FName IconId, class FName ColorId);
	void ToggleBannerMask(bool Enable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, float K2Node_Select_Default);
	void RefreshSurround(int32 Level, const struct FAthenaSeasonBannerLevel& CallFunc_GetSeasonBannerInfo_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnSurroundIconLoaded(class UObject* LoadedObject, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void EnableSurround();
	void ClearBannerState();
	void OnBannerIconLoaded(class UObject* LoadedObject, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1);
	void SetBannerColorId(class FName InBannerColorId, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID1, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1);
	void SetBannerIconId(class FName InBannerIconId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UObject> K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue1);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void Destruct();
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool CallFunc_SetBannerImage_Success, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
