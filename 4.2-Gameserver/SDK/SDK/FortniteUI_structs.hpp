#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortHitPointModificationReason : uint8
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6,
};

enum class EFortBuildingInteraction : uint8
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	EFortBuildingInteraction_MAX   = 7,
};

enum class EFortBuildingHealthDisplayRule : uint8
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3,
};

enum class EFortAnimSpeed : uint8
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3,
};

enum class EFortItemCardSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	XXL                            = 6,
	EFortItemCardSize_MAX          = 7,
};

enum class ECollectionBookSectionNavTarget : uint8
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2,
};

enum class EFortFrontEndFeatureStateReason : uint8
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7,
};

enum class EFortFrontEndFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4,
};

enum class EFortFrontEndFeature : uint8
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	MAX_None                       = 9,
	EFortFrontEndFeature_MAX       = 10,
};

enum class EFortHomebaseNodePurchaseRestrictionReason : uint8
{
	PrerequisitesNotMet            = 0,
	QuestsNotComplete              = 1,
	CanNotAffordCosts              = 2,
	VaultIsOverflown               = 3,
	EFortHomebaseNodePurchaseRestrictionReason_MAX = 4,
};

enum class EFortUIFeatureStateReason : uint8
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9,
};

enum class EFortUIFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4,
};

enum class EFortUIFeature : uint8
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowHeros                      = 2,
	ShowSquads                     = 3,
	ShowArmory                     = 4,
	ShowSkillTree                  = 5,
	ShowStore                      = 6,
	ShowQuests                     = 7,
	ShowMainStore                  = 8,
	ShowContextHelpMenu            = 9,
	ShowCampaign                   = 10,
	ShowActiveBoost                = 11,
	ShowJournal                    = 12,
	ShowPartyBar                   = 13,
	ShowChatWindow                 = 14,
	ShowFriendsMenu                = 15,
	ShowObjectives                 = 16,
	ShowRatingIconsInTopbar        = 17,
	ShowAntiAddictionMessage       = 18,
	ShowMinorShutdownMessage       = 19,
	ShowHealthWarningScreen        = 20,
	ShowSimplifiedHUD              = 21,
	LargeHeaderFooterButtons       = 22,
	ShowAthenaFavoriting           = 23,
	ShowAthenaItemRandomization    = 24,
	ShowAthenaChallenges           = 25,
	ShowBattlePassFAQ              = 26,
	ShowReplays                    = 27,
	ShowProfileStatsUI             = 28,
	ShowAccountBoosts              = 29,
	ShowCustomerSupport            = 30,
	ShowGlobalChat                 = 31,
	ShowEULA                       = 32,
	ShowEndOfZoneCinematic         = 33,
	ShowOnboardingCinematics       = 34,
	ShowFounderBannerIcons         = 35,
	ShowCurrentRegionInLobby       = 36,
	EnableFoundersDailyRewards     = 37,
	EnableTwitchIntegration        = 38,
	EnableMatchmakingRegionSetting = 39,
	EnableLanguageSetting          = 40,
	EnableFriendCodeSetting        = 41,
	EnableEarlyAccessLoadingScreenBanner = 42,
	EnableAlterationModifications  = 43,
	EnableSchematicRarityUpgrade   = 44,
	Max_None                       = 45,
	EFortUIFeature_MAX             = 46,
};

enum class EFlagStatus : uint8
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2,
};

enum class EInputPriority : uint8
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7,
};

enum class EFortInputMode : uint8
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3,
};

enum class EFortUrlType : uint8
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4,
};

enum class EFortComparisonType : uint8
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4,
};

enum class EFortClampState : uint8
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3,
};

enum class EFortBuffState : uint8
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3,
};

enum class EFortStatValueDisplayType : uint8
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6,
};

enum class EFortStoreState : uint8
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PackOpen                       = 5,
	CardEnter                      = 6,
	CardBackReveal                 = 7,
	CardFlip                       = 8,
	CardFrontReveal                = 9,
	CardExit                       = 10,
	SummaryAdd                     = 11,
	PackDestroy                    = 12,
	Summary                        = 13,
	PresentChoice                  = 14,
	ChoiceMade                     = 15,
	MAX_None                       = 16,
	EFortStoreState_MAX            = 17,
};

enum class EFortItemCooldownType : uint8
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	EFortItemCooldownType_MAX      = 5,
};

enum class EFortTutorialGlowType : uint8
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3,
};

enum class EFortBangSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6,
};

enum class EFortUIState : uint8
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	PvE_PostGame                   = 5,
	PvP_PostGame                   = 6,
	InGame                         = 7,
	Cinematic                      = 8,
	Athena                         = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	MAX                            = 12,
};

enum class EViewerNavigationDirection : uint8
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2,
};

enum class EGridSortKind : uint8
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5,
};

enum class ESquadSlotItemRestrictionReason : uint8
{
	VaultOverflow                  = 0,
	MissingLeadershipForHeroType   = 1,
	ReplacementWouldClearMandatorySlot = 2,
	ESquadSlotItemRestrictionReason_MAX = 3,
};

enum class ESquadSlotSortType : uint8
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5,
};

enum class EEquippedWeaponDisplay : uint8
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	EEquippedWeaponDisplay_MAX     = 4,
};

enum class EAthenaPlayerActionAlert : uint8
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	EAthenaPlayerActionAlert_MAX   = 3,
};

enum class EHealthBarType : uint8
{
	Health                         = 0,
	Shield                         = 1,
	Stamina                        = 2,
	EHealthBarType_MAX             = 3,
};

enum class ESpectatorHealthBarType : uint8
{
	Health                         = 0,
	Shield                         = 1,
	ESpectatorHealthBarType_MAX    = 2,
};

enum class EBacchusHUDStateType : uint8
{
	DoNothing                      = 0,
	Hide                           = 1,
	Show                           = 2,
	EBacchusHUDStateType_MAX       = 3,
};

enum class ESubGameFilter : uint8
{
	All                            = 0,
	SaveTheWorld                   = 1,
	BattleRoyale                   = 2,
	ESubGameFilter_MAX             = 3,
};

enum class EFortPlayerControllerProcessing : uint8
{
	NoPlayerControllerProcessing   = 0,
	LetPlayerControllerProcessFirst = 1,
	HandleAllInput                 = 2,
	EFortPlayerControllerProcessing_MAX = 3,
};

enum class EFortAlterationOptionType : uint8
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3,
};

enum class EFortAlterationWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3,
};

enum class ECollectionBookRewardStatus : uint8
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3,
};

enum class ECollectionBookPrimaryNavTarget : uint8
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2,
};

enum class EFortDefenderSlotType : uint8
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3,
};

enum class EFortExpeditionListSort : uint8
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3,
};

enum class EFrontEndRewardType : uint8
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	EFrontEndRewardType_MAX        = 9,
};

enum class EFortUIGameFeedbackType : uint8
{
	Bug                            = 0,
	Comment                        = 1,
	Player                         = 2,
	EFortUIGameFeedbackType_MAX    = 3,
};

enum class ESelectionState : uint8
{
	Unselected                     = 0,
	Selected                       = 1,
	CannotGift                     = 2,
	ESelectionState_MAX            = 3,
};

enum class ENameStatus : uint8
{
	Valid                          = 0,
	TooShort                       = 1,
	TooLong                        = 2,
	ContainsInvalidCharacter       = 3,
	ENameStatus_MAX                = 4,
};

enum class EFortSupportPerkWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3,
};

enum class ECenterPopupMessageStateEnum : uint8
{
	NotVisible                     = 0,
	WaitingForMatchDelayCountDown  = 1,
	WaitingForOutpostOwner         = 2,
	WaitingForPlayers              = 3,
	ECenterPopupMessageStateEnum_MAX = 4,
};

enum class EConversionControlKeyRequest : uint8
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3,
};

enum class EItemRecyclingWarning : uint8
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	HighTier                       = 2,
	CanSlotInCollectionBook        = 3,
	EItemRecyclingWarning_MAX      = 4,
};

enum class EItemDisassembleRestrictionReason : uint8
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2,
};

enum class EItemRecyclingRestrictionReason : uint8
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	EItemRecyclingRestrictionReason_MAX = 5,
};

enum class EVaultItemLimitStatus : uint8
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4,
};

enum class EFortItemCountStyle : uint8
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3,
};

enum class EFortItemInspectionMode : uint8
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	UpgradeRarity                  = 5,
	EFortItemInspectionMode_MAX    = 6,
};

enum class EFortItemManagementMode : uint8
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3,
};

enum class EFortItemViewRotationMode : uint8
{
	None                           = 0,
	BoundsPivot                    = 1,
	World                          = 2,
	Relative                       = 3,
	EFortItemViewRotationMode_MAX  = 4,
};

enum class EFortKeybindForcedHoldStatus : uint8
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3,
};

enum class EFortLegacySlateWidget : uint8
{
	None                           = 0,
	Minimap                        = 1,
	DefaultObjective               = 2,
	AthenaMiniMap                  = 3,
	MAX                            = 4,
};

enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2,
};

enum class EFortMaterialProgressBarSectionColorNumber : uint8
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2,
};

enum class EFortMaterialProgressBarSection : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5,
};

enum class EFortMissionActivationWidgetState : uint8
{
	Default                        = 0,
	StartObjectiveInstigator       = 1,
	StartObjectiveRecepient        = 2,
	IncreaseDifficultyInstigator   = 3,
	IncreaseDifficultyRecepient    = 4,
	Invalid                        = 5,
	EFortMissionActivationWidgetState_MAX = 6,
};

enum class EFortFortMobileShareButtonOS : uint8
{
	Android                        = 0,
	iOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2,
};

enum class EModalContainerSlot : uint8
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4,
};

enum class EFortMtxStoreOfferType : uint8
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Max_None                       = 2,
	EFortMtxStoreOfferType_MAX     = 3,
};

enum class EFortNodePrerequisiteConnector : uint8
{
	ANDConnector                   = 0,
	ORConnector                    = 1,
	EFortNodePrerequisiteConnector_MAX = 2,
};

enum class EFortPerksWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3,
};

enum class ESaveProfileForBanners : int32
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2,
};

enum class EItemRefundability : uint8
{
	NotRefundable                  = 0,
	Refundable                     = 1,
	AlreadyRefunded                = 2,
	EItemRefundability_MAX         = 3,
};

enum class EQuestMapScreenMode : uint8
{
	MainCampaign                   = 0,
	Event                          = 1,
	EQuestMapScreenMode_MAX        = 2,
};

enum class ERedeemCodeFailureReason : uint8
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5,
};

enum class EFortRewardItemType : uint8
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4,
};

enum class ESkillTreePageType : uint8
{
	Basic                          = 0,
	Research                       = 1,
	Event                          = 2,
	ESkillTreePageType_MAX         = 3,
};

enum class ESocialImportPanelType : uint8
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2,
};

enum class EFortSquadSlottingRestrictionReason : uint8
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	EFortSquadSlottingRestrictionReason_MAX = 4,
};

enum class EPauseType : uint8
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4,
};

enum class ECardPackPurchaseError : uint8
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5,
};

enum class EFortStoreTransition : uint8
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1,
};

enum class EFortUISurvivorSquadMatchType : uint8
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4,
};

enum class EFortControlType : uint8
{
	CameraAndMovement              = 0,
	Picking                        = 1,
	EFortControlType_MAX           = 2,
};

enum class EFortTouchControlRegion : uint8
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4,
};

enum class EFortReturnToFrontendBehavior : uint8
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5,
};

enum class EFortUINavigationOp : uint8
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9,
};

enum class EFortLoginAccountType : uint8
{
	None                           = 0,
	EpicAccount                    = 1,
	Facebook                       = 2,
	Google                         = 3,
	PSN                            = 4,
	XBLive                         = 5,
	EFortLoginAccountType_MAX      = 6,
};

enum class EFortSocialPanelTab : uint8
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3,
};

enum class EFortSocialPanelType : uint8
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2,
};

enum class EModalContainerSize : uint8
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4,
};

enum class ENotificationType : uint8
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2,
};

enum class ENotificationResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3,
};

enum class EFortInventoryContext : uint8
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortFocusedBuildingInfo
struct FFortFocusedBuildingInfo
{
public:
	bool                                         bIsInteractable;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBePlayerEdited;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IndicatorRelativeLocation;                         // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingHealthDisplayRule    HealthDisplayRule;                                 // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHealth;                                         // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAnyTrapAttached;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTrapAttachedFacingPlayer;                       // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPreviewTrapAttached;                            // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A57[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachedTrapMaxDurability;                         // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentLevel;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingInteraction          InteractionType;                                   // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InteractionCost;                                   // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpgradeBonus;                                      // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortResourceType                 BuildingMaterial;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHostile;                                        // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A59[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ContextualText;                                    // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x11 (0x11 - 0x0)
// ScriptStruct FortniteUI.FortHUDState
struct FFortHUDState
{
public:
	bool                                         bInBuildMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCombatMode;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEditMode;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsParachuteOpen;                                  // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFreeFalling;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLockedBus;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInUnlockedBus;                                    // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnTargeting;                                      // 0x7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnUsingScopeTargeting;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanTarget;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanUseScopeTargeting;                           // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanUseSecondaryAbility;                         // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanOpenChute;                                     // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouching;                                        // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDBNO;                                             // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsControllingRCPawn;                              // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInVehicle;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.FortTabButtonLabelInfo
struct FFortTabButtonLabelInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconBrush;                                         // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteUI.FortTabListRegistrationInfo
struct FFortTabListRegistrationInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedInZone;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x10(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonUserWidget>         TabContentType;                                    // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               CreatedTabContentWidget;                           // 0xC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortUIStatStyle
struct FFortUIStatStyle
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HighestText;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimalNotableValue;                               // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortItemFilterDefinition
struct FFortItemFilterDefinition
{
public:
	uint8                                        Pad_2A5C[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemSorterDefinition
struct FFortItemSorterDefinition
{
public:
	uint8                                        Pad_2A5D[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x668 (0x670 - 0x8)
// ScriptStruct FortniteUI.FortNodeStyleData
struct FFortNodeStyleData : public FTableRowBase
{
public:
	struct FFortMultiSizeBrush                   ActiveBrush;                                       // 0x8(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   InactiveBrush;                                     // 0x338(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                          PreviewMediaSource;                                // 0x668(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortLastMissionInfo
struct FFortLastMissionInfo
{
public:
	class FText                                  TheaterName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionName;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Difficulty;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortBackendVersion
struct FFortBackendVersion
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                App;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModuleName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Branch;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildDate;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerDate;                                        // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Build;                                             // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Changelist;                                        // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverridePropertiesVersion;                         // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIFeatureStruct
struct FFortUIFeatureStruct
{
public:
	enum class EFortUIFeatureState               CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureStateReason         ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortDisplayAttribute
struct FFortDisplayAttribute
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HoverText;                                         // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        NumericValue;                                      // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x6C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x6D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortClampState                   ClampState;                                        // 0x6E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortComparisonType               ComparisonType;                                    // 0x6F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
struct FFortAttributeModifierDisplayData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierType;                                      // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x28(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x68(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct FortniteUI.FortStateStyle
struct FFortStateStyle
{
public:
	struct FFortMultiSizeBrush                   Brush;                                             // 0x0(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortErrorInfo
struct FFortErrorInfo
{
public:
	class FText                                  Operation;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A61[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.UINavigationData
struct FUINavigationData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UObject*                               ObjectData;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IdData;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntData;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A62[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.GridSortKey
struct FGridSortKey
{
public:
	float                                        Number;                                            // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortReceivedItemLootInfo
struct FFortReceivedItemLootInfo
{
public:
	class UFortItemDefinition*                   ItemDef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TemplateId;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             GeneratedItemInstance;                             // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SquadSlotSortTypes
struct FSquadSlotSortTypes
{
public:
	TArray<enum class ESquadSlotSortType>        SortTypes;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.LeaderboardFilter
struct FLeaderboardFilter
{
public:
	class UDataTable*                            LeaderboardDisplayData;                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A65[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
struct FAthenaPlaylistLeaderboardData
{
public:
	class FName                                  StatId;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  StatDisplayName;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                BaseGameplayTag;                                   // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGlobal;                                         // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A66[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteUI.AthenaLeaderboardData
struct FAthenaLeaderboardData : public FTableRowBase
{
public:
	enum class EFortAthenaPlaylist               Playlist;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAthenaPlaylistLeaderboardData> Stats;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.StatGroupData
struct FStatGroupData
{
public:
	class FText                                  GroupName;                                         // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Group;                                             // 0x18(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartValue;                                        // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartOrigionalValue;                               // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A68[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.AthenaReplayBrowserMatchStats
struct FAthenaReplayBrowserMatchStats
{
public:
	int32                                        Hits;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Headshots;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Revives;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageTaken;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamagePlayers;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageStructures;                                  // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChestsOpened;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Distance;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialsGathered;                                 // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialsUsed;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
struct FAthenaReplayBrowserRowData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Date;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mode;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPlayers;                                        // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Kills;                                             // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Views;                                             // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Assists;                                           // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Accuracy;                                          // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOld;                                             // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAthenaReplayBrowserMatchStats        MatchStats;                                        // 0x50(0x28)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsSaved;                                          // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCorrupt;                                        // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6A[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.AthenaTeamCountSlotData
struct FAthenaTeamCountSlotData
{
public:
	class FText                                  TeamNameText;                                      // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TeamCountText;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsMyTeam;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.BackgroundColors
struct FBackgroundColors
{
public:
	struct FLinearColor                          Color_0;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color_1;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GridColor;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.AthenaBossHealthData
struct FAthenaBossHealthData
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowShields;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthMax;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Shields;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShieldsMax;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.AthenaNews
struct FAthenaNews
{
public:
	uint8                                        Pad_2A6D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsEntry
struct FAthenaNewsEntry
{
public:
	uint8                                        Pad_2A6E[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.CharacterRanges
struct FCharacterRanges
{
public:
	TArray<int32>                                Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                SinglePoints;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ExcludedPoints;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsItemData
struct FFortDailyRewardsItemData
{
public:
	class UFortItem*                             RewardItem;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardDay;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCurrentReward;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsClaimed;                                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
struct FFortDailyRewardsScheduleData
{
public:
	class FText                                  ScheduleTitle;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleDescription;                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleItemDescription;                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleEpicItemDescription;                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        WeekOffset;                                        // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardsGiven;                                      // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardsAllowed;                                    // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortDailyRewardsItemData>     CalendarItems;                                     // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortDailyRewardsItemData>     HighValueItems;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ClaimedToday;                                      // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsData
struct FFortDailyRewardsData
{
public:
	int32                                        CurrentLoginDays;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanClaim;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortDailyRewardsScheduleData> Schedules;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.ExpeditionTabInfo
struct FExpeditionTabInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x8(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ConsumedCriteriaData
struct FConsumedCriteriaData
{
public:
	float                                        PowerMod;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CriteriaNames;                                     // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
struct FFortFrontEndFeatureStruct
{
public:
	enum class EFortFrontEndFeatureState         CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureState         ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureStateReason   ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A74[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortMissionRewardInfo
struct FFortMissionRewardInfo
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMissionAlertReward;                             // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A75[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// ScriptStruct FortniteUI.FortMissionDetails
struct FFortMissionDetails
{
public:
	enum class EFortTheaterMapTileType           TileType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionName;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionDescription;                                // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsGroupContent;                                   // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMissionGenerator*                 MissionDefinition;                                 // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ZoneName;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ZoneDescription;                                   // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RegionThemeName;                                   // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       RegionThemeIcon;                                   // 0xA8(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRewardInfo>        MissionRewards;                                    // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                             AvailableTime;                                     // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredBaseRating;                                // 0x100(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendedBaseRating;                             // 0x104(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentDifficultyLevel;                            // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentAccountLevel;                               // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootLevel;                                         // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideConningText;                              // 0x114(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ConningOverrideText;                               // 0x118(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCloudSaveItemDefinition*          AssociatedCloudSaveItemDefinition;                 // 0x140(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                 // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          Objectives;                                        // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.AttributeRequirement
struct FAttributeRequirement
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequirementsMet;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A79[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.BuildingRequirements
struct FBuildingRequirements
{
public:
	int32                                        RequiredAccountLevel;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentAccountLevel;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeRequirement>         AttributeRequirements;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RequiredPower;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPower;                                      // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredManufacturing;                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentManufacturing;                              // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.HeroStat
struct FHeroStat
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCategory;                                       // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.EmptyHeroSlot
struct FEmptyHeroSlot
{
public:
	class UFortHeroType*                         Type;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAvailable;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMale;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFemale;                                        // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.HeroUIData
struct FHeroUIData
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        XPRequirementForCurrentLevel;                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XPRequirementForNextLevel;                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredXPToLevelUp;                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMaxHeroLevel;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteUI.FortHeroNamesData
struct FFortHeroNamesData : public FTableRowBase
{
public:
	class FString                                FirstName;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastName;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortItemDelta
struct FFortItemDelta
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseAmount;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaAmount;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x388 (0x388 - 0x0)
// ScriptStruct FortniteUI.FortBasicMissionInfo
struct FFortBasicMissionInfo
{
public:
	class FText                                  MissionName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   MissionIcons;                                      // 0x18(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TheaterName;                                       // 0x348(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0x360(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                          EndOfMissionMediaSource;                           // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEndOfMissionVideo;                            // 0x380(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.FortKillerVisualInfo
struct FFortKillerVisualInfo
{
public:
	struct FSlateBrush                           KillerBrush;                                       // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  KillerName;                                        // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
struct FItemDefinitionChangedStruct
{
public:
	UMulticastDelegateProperty_                  ChangeDelegate;                                    // 0x0(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortItemListFilter
struct FFortItemListFilter
{
public:
	class FString                                SearchText;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              FilterType;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInStorageVault;                                   // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeVaultOverflow;                             // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
struct FFortItemCard_StackCountBlock_Configuration
{
public:
	bool                                         bShowShorthandStackCount;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UCommonTextStyle>        TextStyle;                                         // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
struct FFortItemCard_XXS_ItemInstance_Configuration
{
public:
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
struct FFortItemCard_XS_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
struct FFortItemCard_PowerRatingBlock_Configuration
{
public:
	uint8                                        Pad_2A81[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CustomRatingInternalPadding;                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             CustomRatingIconSize;                              // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        CustomRatingTextStyle;                             // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ComparisonIndicatorSize;                           // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PowerRatingIconBrush;                              // 0x50(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PowerRatingTextStyle;                              // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
struct FFortItemCard_DurabilityMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
struct FFortItemCard_XS_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x140(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x170(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A82[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
struct FFortItemCard_DetailAreaBorder_Configuration
{
public:
	float                                        MinimumHeight;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x18(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AvailableUpgradeIconSize;                          // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
struct FFortItemCard_S_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
struct FFortItemCard_TierMeter_Configuration
{
public:
	struct FVector2D                             PipSize;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterPipPadding;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
struct FFortItemCard_S_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x128(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x180(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x18C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x1B0 - 0x50)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PersonnelPowerRatingIconBrush;                     // 0x50(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PersonnelPowerRatingTextStyle;                     // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SchematicPowerRatingIconBrush;                     // 0x100(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        SchematicPowerRatingTextStyle;                     // 0x188(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
struct FFortItemCard_NameplateBorder_Configuration
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x10(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
public:
	struct FVector2D                             IconConstraints;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
struct FFortItemCard_LevelMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x1C8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x27C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x284(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x28C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x2A0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x2B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2B8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A83[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
struct FFortItemCard_M_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
struct FFortItemCard_M_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x128(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x174(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x17C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x18C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x198(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A84[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x1C8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x27C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x284(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x28C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x2A0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x2B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2B8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A85[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
struct FFortItemCard_L_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
struct FFortItemCard_L_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x128(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x174(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x17C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x18C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x198(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A86[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x1C8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x27C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x284(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x28C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x2A0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x2B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2B8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A87[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
struct FFortItemCard_XL_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
struct FFortItemCard_XL_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x128(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x174(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x17C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x18C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x198(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A88[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x350 (0x350 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x1C8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        ItemNameTextStyle;                                 // 0x260(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x298(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x29C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x2A4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x2AC(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RarityNameTextLeftPadding;                         // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UCommonTextStyle>        RarityNameTextStyle;                               // 0x2C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClassIconImageLeftPadding;                         // 0x2F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x2F4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenClassIconAndName;                    // 0x2FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        ClassNameTextStyle;                                // 0x300(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x328(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x32C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               IconSlotOverNameplatePadding;                      // 0x338(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSlotOverNameplateSize;                         // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortItemEntryPreviewData
struct FFortItemEntryPreviewData
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           InspectMode;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
struct FFortMaterialProgressBarSectionStyle
{
public:
	bool                                         bGradientBar;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BarParamName;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorOneParamName;                              // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorTwoParamName;                              // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorOne;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorTwo;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
struct FFortMaterialProgressBarSectionInfo
{
public:
	struct FFortMaterialProgressBarSectionStyle  SectionStyle;                                      // 0x0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteUI.FortModalContainerSizeEntry
struct FFortModalContainerSizeEntry
{
public:
	float                                        AbsoluteWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopPercent;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiddlePercent;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BottomPercent;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalPadding;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalPadding;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContentPadding;                                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMtxGradient
struct FFortMtxGradient
{
public:
	struct FLinearColor                          Start;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Stop;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortMtxDetailsAttribute
struct FFortMtxDetailsAttribute
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteUI.NodeTypeData
struct FNodeTypeData : public FTableRowBase
{
public:
	enum class EFortHomebaseNodeDisplayType      NodeType;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortBaseCanvasNode>       UIClass;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortCanvasProperties
struct FFortCanvasProperties
{
public:
	struct FMargin                               Reserves;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMouseAutoPan;                                     // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActiveAreaPercent;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxZoom;                                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinZoom;                                           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomIncrement;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectorThickness;                                // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorOwnedColor;                               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorPurchasableColor;                         // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorNonPurchasableColor;                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorTowardsSelectedColor;                     // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              BackgroundMaterial;                                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6B0 (0x6B0 - 0x0)
// ScriptStruct FortniteUI.FortUINodePrerequisite
struct FFortUINodePrerequisite
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortNodeStyleData                    Style;                                             // 0x18(0x670)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsNodePage;                                       // 0x688(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinRequiredNodesInPage;                            // 0x68C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OwnedNodesInPage;                                  // 0x690(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NodeType;                                          // 0x698(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortUIPerk
struct FFortUIPerk
{
public:
	struct FFortSpecializationSlot               SpecializationSlot;                                // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortHero*                             Hero;                                              // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportBonusType;                                  // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTierPerk;                                       // 0x92(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x93(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolutionBranch;                                // 0x95(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A91[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortUIPerkTier
struct FFortUIPerkTier
{
public:
	class UFortHeroSpecialization*               HeroSpecialization;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             CurrentHero;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A93[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortPickerTemporaryWheel
struct FFortPickerTemporaryWheel
{
public:
	uint8                                        Pad_2A94[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItemDefinition*>           Items;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.RadialOptionData
struct FRadialOptionData
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x18(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0xC0 - 0xA0)
// ScriptStruct FortniteUI.SquadQuickChatOptionData
struct FSquadQuickChatOptionData : public FRadialOptionData
{
public:
	struct FAthenaQuickChatActiveEntry           ChatEntry;                                         // 0xA0(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A95[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.ItemDefOptionData
struct FItemDefOptionData : public FRadialOptionData
{
public:
	class UObject*                               ItemDef;                                           // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.EmoteOptionData
struct FEmoteOptionData : public FRadialOptionData
{
public:
	class FName                                  EmoteCommand;                                      // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xB8 - 0xA0)
// ScriptStruct FortniteUI.MapNoteOptionData
struct FMapNoteOptionData : public FRadialOptionData
{
public:
	class FText                                  MapNoteText;                                       // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xB8 - 0xA0)
// ScriptStruct FortniteUI.SquadChatOptionData
struct FSquadChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xB8 - 0xA0)
// ScriptStruct FortniteUI.ChatOptionData
struct FChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xB8 - 0xA0)
// ScriptStruct FortniteUI.ItemCategoryOptionData
struct FItemCategoryOptionData : public FRadialOptionData
{
public:
	class FString                                TemplatePrefix;                                    // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildingAttachmentType           BuildingAttachmentType;                            // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A96[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xB8 - 0xA0)
// ScriptStruct FortniteUI.BuildingOptionData
struct FBuildingOptionData : public FRadialOptionData
{
public:
	class FString                                ClassSuffix;                                       // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClassMirrored;                                     // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A97[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.BuildingCategoryOptionData
struct FBuildingCategoryOptionData : public FRadialOptionData
{
public:
	enum class EFortBuildingType                 BuildingType;                                      // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A98[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.PlatformSupportDesc
struct FPlatformSupportDesc
{
public:
	class FText                                  DisableDesc;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class EFortLoginAccountType             AccountType;                                       // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A99[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct FortniteUI.FortRichTextStyleData
struct FFortRichTextStyleData : public FTableRowBase
{
public:
	struct FTextBlockStyle                       TextStyle;                                         // 0x8(0x1E0)(Edit, NativeAccessSpecifierPublic)
	bool                                         bHyperlinkStyle;                                   // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct FortniteUI.FortSkillTreeCanvasStyle
struct FFortSkillTreeCanvasStyle
{
public:
	float                                        ConnectorThickness;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorOwnedColor;                               // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorPurchasableColor;                         // 0x14(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectorNonPurchasableColor;                      // 0x24(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct FortniteUI.FortSkillTreeNodeDisplayData
struct FFortSkillTreeNodeDisplayData
{
public:
	struct FFortMultiSizeBrush                   Icon;                                              // 0x0(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                          PreviewVideoMediaSource;                           // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
struct FFortLandingPageDefenderSummaryInfo
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
struct FFortAttributeModifierAccumulation
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.OpenedCardPack
struct FOpenedCardPack
{
public:
	class UFortCardPackItemDefinition*           CardPackDefinition;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayLevel;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.Card
struct FCard
{
public:
	int32                                        QuantityReceived;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPauseType                        PauseType;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.CardPackOffer
struct FCardPackOffer
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MtxPrice;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SaleText;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItemDefinition*            CurrencyType;                                      // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityRemaining;                                 // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimedOffer;                                       // 0x64(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCatalogMeta                      OfferMetaData;                                     // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
struct FFortSurvivorSquadSlottingFeedbackData
{
public:
	bool                                         HadLeaderMatch;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasLeaderMatch;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, int32>             PreviousSetBonusCounts;                            // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, int32>             CurrentSetBonusCounts;                             // 0x58(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PreviousPersonalityMatchCount;                     // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPersonalityMatchCount;                      // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x340 (0x340 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
public:
	int32                                        NumPersonalityMatches;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNonLeaderSquadMembers;                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HavePersonalityIcons;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   PersonalityIcons;                                  // 0x10(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    FortAttribute;                                     // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FortAttributeValue;                                // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    FortTeamAttribute;                                 // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeamFortAttributeValue;                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SquadPowerValue;                                   // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FortAttributeName;                                 // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
struct FFortUISurvivorSquadStatMatch
{
public:
	struct FFortMultiSizeBrush                   Icons;                                             // 0x0(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MagnitudeText;                                     // 0x330(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AttributeDisplayName;                              // 0x348(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumMembersMeetingCriteria;                         // 0x360(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMembersRequired;                                // 0x364(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUISurvivorSquadMatchType     MatchType;                                         // 0x368(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    PreviewEffect;                                     // 0x369(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortSwipeDetector
struct FFortSwipeDetector
{
public:
	struct FVector2D                             SwipeThreshold;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA6[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.TouchMove
struct FTouchMove
{
public:
	uint8                                        Pad_2AA7[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
struct FFortItemTransformFilterTabLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class EFortInventoryFilter>      ItemFilters;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortItemType                     ItemType;                                          // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIcon
struct FPlatformPrefixIcon
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PrefixIcon;                                        // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIconList
struct FPlatformPrefixIconList
{
public:
	TArray<struct FPlatformPrefixIcon>           PlatformPrefixIcons;                               // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationOperation
struct FFortUINavigationOperation
{
public:
	enum class EFortUINavigationOp               Operation;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SquadId;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PageId;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    Feature;                                           // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      ItemManagementFilter;                              // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationRequest
struct FFortUINavigationRequest
{
public:
	TArray<struct FFortUINavigationOperation>    Operations;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.UINavigationEntry
struct FUINavigationEntry
{
public:
	struct FUINavigationData                     Data;                                              // 0x0(0x30)(NativeAccessSpecifierPublic)
	UDelegateProperty_                           NavigateToDelegate;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           NavigateFromDelegate;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct FortniteUI.FortUIXpInfo
struct FFortUIXpInfo
{
public:
	int32                                        InitialLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialDisplayXp;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortExperienceDelta                  ChangeInXp;                                        // 0x8(0x24)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.ContentPushState
struct FContentPushState
{
public:
	bool                                         bHideHeader;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct FortniteUI.FortHealthyGamingData
struct FFortHealthyGamingData : public FTableRowBase
{
public:
	float                                        HealthWarningToastInterval;                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HealthWarningToastDescriptionFormat;               // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HealthWarningScreenText;                           // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  GameplayRestrictionText;                           // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        GameplayRestrictionWarningTimeOffset;              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AntiAddictionTotalDescriptionFormat;               // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerTimeLimitSystem;                         // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UTexture2D>>     RatingIcons;                                       // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x330 (0x338 - 0x8)
// ScriptStruct FortniteUI.FortSquadIconData
struct FFortSquadIconData : public FTableRowBase
{
public:
	struct FFortMultiSizeBrush                   Brush;                                             // 0x8(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortDisplayModifier
struct FFortDisplayModifier
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x31(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PanZoomFingerState
struct FPanZoomFingerState
{
public:
	uint8                                        Pad_2AB0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
