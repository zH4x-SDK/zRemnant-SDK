#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Remnant.EModActiveState
enum class Remnant_EModActiveState : uint8_t
{
	EModActiveState__NotActive     = 0,
	EModActiveState__ActiveAction  = 1,
	EModActiveState__ActiveWeaponMode = 2,
	EModActiveState__EModActiveState_MAX = 3,

};

// Enum Remnant.EPresenceJoinResult
enum class Remnant_EPresenceJoinResult : uint8_t
{
	EPresenceJoinResult__Success   = 0,
	EPresenceJoinResult__IntroIncomplete = 1,
	EPresenceJoinResult__NoCharacters = 2,
	EPresenceJoinResult__ConnectFailed = 3,
	EPresenceJoinResult__EPresenceJoinResult_MAX = 4,

};

// Enum Remnant.EZoneTravelLock
enum class Remnant_EZoneTravelLock : uint8_t
{
	EZoneTravelLock__None          = 0,
	EZoneTravelLock__Menu          = 1,
	EZoneTravelLock__Dialog        = 2,
	EZoneTravelLock__Saving        = 3,
	EZoneTravelLock__TravelMenu    = 4,
	EZoneTravelLock__ConnectingPlayer = 5,
	EZoneTravelLock__Traveling     = 6,
	EZoneTravelLock__Proximity     = 7,
	EZoneTravelLock__Wounded       = 8,
	EZoneTravelLock__QuestInit     = 9,
	EZoneTravelLock__QuestMenu     = 10,
	EZoneTravelLock__EZoneTravelLock_MAX = 11,

};

// Enum Remnant.ETailType
enum class Remnant_ETailType : uint8_t
{
	ETailType__NoTail              = 0,
	ETailType__HalfTail            = 1,
	ETailType__FullTail            = 2,
	ETailType__ETailType_MAX       = 3,

};

// Enum Remnant.EPingType
enum class Remnant_EPingType : uint8_t
{
	EPingType__Location            = 0,
	EPingType__Item                = 1,
	EPingType__PrimaryAmmo         = 2,
	EPingType__SecondaryAmmo       = 3,
	EPingType__Quest               = 4,
	EPingType__Friendly            = 5,
	EPingType__Enemy               = 6,
	EPingType__Checkpoint          = 7,
	EPingType__EPingType_MAX       = 8,

};

// Enum Remnant.ERemnantQuestRewardType
enum class Remnant_ERemnantQuestRewardType : uint8_t
{
	ERemnantQuestRewardType__Quest = 0,
	ERemnantQuestRewardType__Objective = 1,
	ERemnantQuestRewardType__Individual = 2,
	ERemnantQuestRewardType__SharedPickup = 3,
	ERemnantQuestRewardType__ERemnantQuestRewardType_MAX = 4,

};

// Enum Remnant.EGrenadeState
enum class Remnant_EGrenadeState : uint8_t
{
	EGrenadeState__Inactive        = 0,
	EGrenadeState__Equipping       = 1,
	EGrenadeState__Equipped        = 2,
	EGrenadeState__Throwing        = 3,
	EGrenadeState__Thrown          = 4,
	EGrenadeState__EGrenadeState_MAX = 5,

};

// Enum Remnant.EGunObstructionTypes
enum class Remnant_EGunObstructionTypes : uint8_t
{
	EGunObstructionTypes__Default  = 0,
	EGunObstructionTypes__Extent   = 1,
	EGunObstructionTypes__Crouching = 2,
	EGunObstructionTypes__CrouchExtent = 3,
	EGunObstructionTypes__EGunObstructionTypes_MAX = 4,

};

// Enum Remnant.ETraitProgressionType
enum class Remnant_ETraitProgressionType : uint8_t
{
	ETraitProgressionType__LegacyProgression = 0,
	ETraitProgressionType__CharacterProgression = 1,
	ETraitProgressionType__ETraitProgressionType_MAX = 2,

};

// Enum Remnant.EDlcRequirementTypes
enum class Remnant_EDlcRequirementTypes : uint8_t
{
	EDlcRequirementTypes__None     = 0,
	EDlcRequirementTypes__DLC1     = 1,
	EDlcRequirementTypes__DLC2     = 2,
	EDlcRequirementTypes__DLC101   = 3,
	EDlcRequirementTypes__EDlcRequirementTypes_MAX = 4,

};

// Enum Remnant.ELastSearchType
enum class Remnant_ELastSearchType : uint8_t
{
	ELastSearchType__QuickMatch    = 0,
	ELastSearchType__QuickMatchSurvival = 1,
	ELastSearchType__Browse        = 2,
	ELastSearchType__BrowseSurvival = 3,
	ELastSearchType__ELastSearchType_MAX = 4,

};

// Enum Remnant.EMatchmakingFilterType
enum class Remnant_EMatchmakingFilterType : uint8_t
{
	EMatchmakingFilterType__CampaignDifficulty = 0,
	EMatchmakingFilterType__PowerLevel = 1,
	EMatchmakingFilterType__CharacterType = 2,
	EMatchmakingFilterType__EMatchmakingFilterType_MAX = 3,

};

// Enum Remnant.EMatchmakingEvent
enum class Remnant_EMatchmakingEvent : uint8_t
{
	EMatchmakingEvent__ConnectionLost = 0,
	EMatchmakingEvent__SessionLost = 1,
	EMatchmakingEvent__SessionFull = 2,
	EMatchmakingEvent__SessionNonexistant = 3,
	EMatchmakingEvent__AlreadyInSession = 4,
	EMatchmakingEvent__GenericFailure = 5,
	EMatchmakingEvent__CreateSessionFailed = 6,
	EMatchmakingEvent__InternetLost = 7,
	EMatchmakingEvent__FailedToJoinAny = 8,
	EMatchmakingEvent__TutorialBeginMsg = 9,
	EMatchmakingEvent__TutorialEndMsg = 10,
	EMatchmakingEvent__CouldNotGetAddress = 11,
	EMatchmakingEvent__KickedFromSession = 12,
	EMatchmakingEvent__BannedFromSession = 13,
	EMatchmakingEvent__ChatRestrictions = 14,
	EMatchmakingEvent__FriendListFailed = 15,
	EMatchmakingEvent__MatchmakingUnavailable = 16,
	EMatchmakingEvent__VersionMismatch = 17,
	EMatchmakingEvent__Destroying  = 18,
	EMatchmakingEvent__ChangeSessionFailed = 19,
	EMatchmakingEvent__OfflineSessionStarted = 20,
	EMatchmakingEvent__GameModeMismatch = 21,
	EMatchmakingEvent__Deceased    = 22,
	EMatchmakingEvent__AFK         = 23,
	EMatchmakingEvent__InProgress  = 24,
	EMatchmakingEvent__MissingDLC  = 25,
	EMatchmakingEvent__MissingDLC1 = 26,
	EMatchmakingEvent__MissingDLC2 = 27,
	EMatchmakingEvent__EMatchmakingEvent_MAX = 28,

};

// Enum Remnant.ESessionType
enum class Remnant_ESessionType : uint8_t
{
	ESessionType__Public           = 0,
	ESessionType__FriendsOnly      = 1,
	ESessionType__Private          = 2,
	ESessionType__Joined           = 3,
	ESessionType__ESessionType_MAX = 4,

};

// Enum Remnant.EZoneType
enum class Remnant_EZoneType : uint8_t
{
	EZoneType__Overworld           = 0,
	EZoneType__Dungeon             = 1,
	EZoneType__EZoneType_MAX       = 2,

};

// Enum Remnant.ERemnantCharacterType
enum class Remnant_ERemnantCharacterType : uint8_t
{
	ERemnantCharacterType__Standard = 0,
	ERemnantCharacterType__Hardcore = 1,
	ERemnantCharacterType__Survival = 2,
	ERemnantCharacterType__ERemnantCharacterType_MAX = 3,

};

// Enum Remnant.ELastHostType
enum class Remnant_ELastHostType : uint8_t
{
	ELastHostType__FriendsOnly     = 0,
	ELastHostType__Public          = 1,
	ELastHostType__Offline         = 2,
	ELastHostType__ELastHostType_MAX = 3,

};

// Enum Remnant.EGender
enum class Remnant_EGender : uint8_t
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2,

};

// Enum Remnant.ERemnantDemoMode
enum class Remnant_ERemnantDemoMode : uint8_t
{
	ERemnantDemoMode__None         = 0,
	ERemnantDemoMode__GamesComFloor = 1,
	ERemnantDemoMode__GamesComPress = 2,
	ERemnantDemoMode__ERemnantDemoMode_MAX = 3,

};

// Enum Remnant.ENetGameMode
enum class Remnant_ENetGameMode : uint8_t
{
	ENetGameMode__SinglePlayer     = 0,
	ENetGameMode__HostPublic       = 1,
	ENetGameMode__HostFriends      = 2,
	ENetGameMode__Join             = 3,
	ENetGameMode__ENetGameMode_MAX = 4,

};

// Enum Remnant.EWorldResetServerState
enum class Remnant_EWorldResetServerState : uint8_t
{
	EWorldResetServerState__Idle   = 0,
	EWorldResetServerState__Pending = 1,
	EWorldResetServerState__Respawning = 2,
	EWorldResetServerState__EWorldResetServerState_MAX = 3,

};

// Enum Remnant.EPingGenerationResult
enum class Remnant_EPingGenerationResult : uint8_t
{
	EPingGenerationResult__Success = 0,
	EPingGenerationResult__PingMuted = 1,
	EPingGenerationResult__GenericFailure = 2,
	EPingGenerationResult__EPingGenerationResult_MAX = 3,

};

// Enum Remnant.ETownLock
enum class Remnant_ETownLock : uint8_t
{
	ETownLock__NoLock              = 0,
	ETownLock__OnlyTown            = 1,
	ETownLock__NotInTown           = 2,
	ETownLock__ETownLock_MAX       = 3,

};

// Enum Remnant.EPingSubRequestType
enum class Remnant_EPingSubRequestType : uint8_t
{
	EPingSubRequestType__PrimaryAmmo = 0,
	EPingSubRequestType__SecondaryAmmo = 1,
	EPingSubRequestType__Assistance = 2,
	EPingSubRequestType__WorldStone = 3,
	EPingSubRequestType__ThisWay   = 4,
	EPingSubRequestType__LetsGo    = 5,
	EPingSubRequestType__EPingSubRequestType_MAX = 6,

};

// Enum Remnant.EWorldResetPlayerState
enum class Remnant_EWorldResetPlayerState : uint8_t
{
	EWorldResetPlayerState__Idle   = 0,
	EWorldResetPlayerState__FadeOutWorldDead = 1,
	EWorldResetPlayerState__FadeOutWorldRespawned = 2,
	EWorldResetPlayerState__FadeOutWorldAlive = 3,
	EWorldResetPlayerState__FadeInWorld = 4,
	EWorldResetPlayerState__WaitingForClient = 5,
	EWorldResetPlayerState__ReadyForReset = 6,
	EWorldResetPlayerState__EWorldResetPlayerState_MAX = 7,

};

// Enum Remnant.EPlayerTravelState
enum class Remnant_EPlayerTravelState : uint8_t
{
	EPlayerTravelState__Idle       = 0,
	EPlayerTravelState__PendingTravel = 1,
	EPlayerTravelState__Traveling  = 2,
	EPlayerTravelState__PostTravel = 3,
	EPlayerTravelState__WaitingForClientToBeginTravel = 4,
	EPlayerTravelState__WaitingForClientToLoad = 5,
	EPlayerTravelState__WaitingForFinishTravel = 6,
	EPlayerTravelState__LoadingDestinationZone = 7,
	EPlayerTravelState__FinalizingTravel = 8,
	EPlayerTravelState__WaitingForClient = 9,
	EPlayerTravelState__WaitingForServer = 10,
	EPlayerTravelState__WaitingForIntroQuest = 11,
	EPlayerTravelState__PendingCharSwap = 12,
	EPlayerTravelState__EPlayerTravelState_MAX = 13,

};

// Enum Remnant.ESharedPickupType
enum class Remnant_ESharedPickupType : uint8_t
{
	ESharedPickupType__NoSharedPickup = 0,
	ESharedPickupType__SharePickup = 1,
	ESharedPickupType__SharePickupAsCurrency = 2,
	ESharedPickupType__SharePickupAsCurrencySplit = 3,
	ESharedPickupType__ESharedPickupType_MAX = 4,

};

// Enum Remnant.EOnAddCheatValidationType
enum class Remnant_EOnAddCheatValidationType : uint8_t
{
	EOnAddCheatValidationType__CheckByQuantity = 0,
	EOnAddCheatValidationType__CheckByTime = 1,
	EOnAddCheatValidationType__EOnAddCheatValidationType_MAX = 2,

};

// Enum Remnant.ERemnantQuestStatus
enum class Remnant_ERemnantQuestStatus : uint8_t
{
	ERemnantQuestStatus__Unloaded  = 0,
	ERemnantQuestStatus__Loading   = 1,
	ERemnantQuestStatus__Loaded    = 2,
	ERemnantQuestStatus__Error     = 3,
	ERemnantQuestStatus__ERemnantQuestStatus_MAX = 4,

};

// Enum Remnant.ERemnantQuestDebugState
enum class Remnant_ERemnantQuestDebugState : uint8_t
{
	ERemnantQuestDebugState__None  = 0,
	ERemnantQuestDebugState__Prototype = 1,
	ERemnantQuestDebugState__WorkInProgress = 2,
	ERemnantQuestDebugState__Final = 3,
	ERemnantQuestDebugState__ERemnantQuestDebugState_MAX = 4,

};

// Enum Remnant.ERemnantQuestRarity
enum class Remnant_ERemnantQuestRarity : uint8_t
{
	ERemnantQuestRarity__Common    = 0,
	ERemnantQuestRarity__Uncommon  = 1,
	ERemnantQuestRarity__Rare      = 2,
	ERemnantQuestRarity__Epic      = 3,
	ERemnantQuestRarity__Legendary = 4,
	ERemnantQuestRarity__ERemnantQuestRarity_MAX = 5,

};

// Enum Remnant.ERemnantQuestType
enum class Remnant_ERemnantQuestType : uint8_t
{
	ERemnantQuestType__Default     = 0,
	ERemnantQuestType__Root        = 1,
	ERemnantQuestType__Static      = 2,
	ERemnantQuestType__ERemnantQuestType_MAX = 3,

};

// Enum Remnant.EQuestMode
enum class Remnant_EQuestMode : uint8_t
{
	EQuestMode__Campaign           = 0,
	EQuestMode__Adventure          = 1,
	EQuestMode__Survival           = 2,
	EQuestMode__Debug              = 3,
	EQuestMode__EQuestMode_MAX     = 4,

};

// Enum Remnant.EDialogTravelLock
enum class Remnant_EDialogTravelLock : uint8_t
{
	EDialogTravelLock__None        = 0,
	EDialogTravelLock__Menu        = 1,
	EDialogTravelLock__Dialog      = 2,
	EDialogTravelLock__TravelMenu  = 3,
	EDialogTravelLock__QuestSelectMenu = 4,
	EDialogTravelLock__EDialogTravelLock_MAX = 5,

};

// Enum Remnant.EModInputMode
enum class Remnant_EModInputMode : uint8_t
{
	EModInputMode__Press           = 0,
	EModInputMode__Release         = 1,
	EModInputMode__EModInputMode_MAX = 2,

};

// Enum Remnant.EZoneStatus
enum class Remnant_EZoneStatus : uint8_t
{
	EZoneStatus__Unloaded          = 0,
	EZoneStatus__Loading           = 1,
	EZoneStatus__LoadingDynamicResources = 2,
	EZoneStatus__LoadingDynamicSubResources = 3,
	EZoneStatus__WaitingForServerLoading = 4,
	EZoneStatus__WaitingForServer  = 5,
	EZoneStatus__Loaded            = 6,
	EZoneStatus__Failed            = 7,
	EZoneStatus__EZoneStatus_MAX   = 8,

};

// Enum Remnant.EZoneLinkStatus
enum class Remnant_EZoneLinkStatus : uint8_t
{
	EZoneLinkStatus__None          = 0,
	EZoneLinkStatus__Unloaded      = 1,
	EZoneLinkStatus__Loaded        = 2,
	EZoneLinkStatus__EZoneLinkStatus_MAX = 3,

};

// Enum Remnant.EZoneLinkType
enum class Remnant_EZoneLinkType : uint8_t
{
	EZoneLinkType__Link            = 0,
	EZoneLinkType__Checkpoint      = 1,
	EZoneLinkType__Waypoint        = 2,
	EZoneLinkType__EZoneLinkType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Remnant.EventRegionCharacter
// 0x0000
struct FEventRegionCharacter
{

};

// ScriptStruct Remnant.ZoneTravelState
// 0x0000
struct FZoneTravelState
{

};

// ScriptStruct Remnant.ActionPing
// 0x0000
struct FActionPing
{

};

// ScriptStruct Remnant.RemnantQuestReward
// 0x0000
struct FRemnantQuestReward
{

};

// ScriptStruct Remnant.RemnantQuestRewardItem
// 0x0000
struct FRemnantQuestRewardItem
{

};

// ScriptStruct Remnant.PersistentBuff
// 0x0000
struct FPersistentBuff
{

};

// ScriptStruct Remnant.EmoteIconState
// 0x0000
struct FEmoteIconState
{

};

// ScriptStruct Remnant.SpawnedGrenadeRepData
// 0x0000
struct FSpawnedGrenadeRepData
{

};

// ScriptStruct Remnant.GunObstructionParameters
// 0x0000
struct FGunObstructionParameters
{

};

// ScriptStruct Remnant.LootContainerItem
// 0x0000
struct FLootContainerItem
{

};

// ScriptStruct Remnant.LorePage
// 0x0000
struct FLorePage
{

};

// ScriptStruct Remnant.SessionFriendDetails
// 0x0000
struct FSessionFriendDetails
{

};

// ScriptStruct Remnant.SessionDetails
// 0x0000
struct FSessionDetails
{

};

// ScriptStruct Remnant.RadialShortcut
// 0x0000
struct FRadialShortcut
{

};

// ScriptStruct Remnant.ZoneConnection
// 0x0000
struct FZoneConnection
{

};

// ScriptStruct Remnant.ArchetypeStartingTrait
// 0x0000
struct FArchetypeStartingTrait
{

};

// ScriptStruct Remnant.AccountCurrencyInstance
// 0x0000
struct FAccountCurrencyInstance
{

};

// ScriptStruct Remnant.AccountAwardInstance
// 0x0000
struct FAccountAwardInstance
{

};

// ScriptStruct Remnant.SavedEquipmentVisual
// 0x0000
struct FSavedEquipmentVisual
{

};

// ScriptStruct Remnant.PrimaryPingInfo
// 0x0000
struct FPrimaryPingInfo
{

};

// ScriptStruct Remnant.RemnantClientInventoryChangeInfo
// 0x0000
struct FRemnantClientInventoryChangeInfo
{

};

// ScriptStruct Remnant.BookPage
// 0x0000
struct FBookPage
{

};

// ScriptStruct Remnant.ClientValidatedItemInfo
// 0x0000
struct FClientValidatedItemInfo
{

};

// ScriptStruct Remnant.AddedItemTypeTimeStamp
// 0x0000
struct FAddedItemTypeTimeStamp
{

};

// ScriptStruct Remnant.ValidationTrackedItemParams
// 0x0000
struct FValidationTrackedItemParams
{

};

// ScriptStruct Remnant.CheatProtectedItemParams
// 0x0000
struct FCheatProtectedItemParams
{

};

// ScriptStruct Remnant.AutoUpgradeableItem
// 0x0000
struct FAutoUpgradeableItem
{

};

// ScriptStruct Remnant.ProgressionValidationInfo
// 0x0000
struct FProgressionValidationInfo
{

};

// ScriptStruct Remnant.RemnantQuestEntityInfo
// 0x0000
struct FRemnantQuestEntityInfo
{

};

// ScriptStruct Remnant.RemnantQuestEntry
// 0x0000
struct FRemnantQuestEntry
{

};

// ScriptStruct Remnant.QuestTileDependency
// 0x0000
struct FQuestTileDependency
{

};

// ScriptStruct Remnant.EncounterWave
// 0x0000
struct FEncounterWave
{

};

// ScriptStruct Remnant.SkyboxModifierVolumeInfo
// 0x0000
struct FSkyboxModifierVolumeInfo
{

};

// ScriptStruct Remnant.RemnantCharacterStatData
// 0x0000
struct FRemnantCharacterStatData : public FStatData
{

};

// ScriptStruct Remnant.SpentTraitPointValidationInfo
// 0x0000
struct FSpentTraitPointValidationInfo
{

};

// ScriptStruct Remnant.TraitValidationInfo
// 0x0000
struct FTraitValidationInfo
{

};

// ScriptStruct Remnant.TraitPointValidationInfo
// 0x0000
struct FTraitPointValidationInfo
{

};

// ScriptStruct Remnant.LoadableModAsset
// 0x0000
struct FLoadableModAsset
{

};

// ScriptStruct Remnant.SmartAmmo
// 0x0000
struct FSmartAmmo
{

};

// ScriptStruct Remnant.ZoneTileDef
// 0x0000
struct FZoneTileDef
{

};

// ScriptStruct Remnant.ZoneState
// 0x0000
struct FZoneState
{

};

// ScriptStruct Remnant.ZoneLinkInfo
// 0x0000
struct FZoneLinkInfo
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
