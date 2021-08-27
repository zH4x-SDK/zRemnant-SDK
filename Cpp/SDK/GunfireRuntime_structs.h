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

// Enum GunfireRuntime.EAffiliation
enum class GunfireRuntime_EAffiliation : uint8_t
{
	EAffiliation__SuperFriendly    = 0,
	EAffiliation__Friendly         = 1,
	EAffiliation__Neutral          = 2,
	EAffiliation__Hostile          = 3,
	EAffiliation__All              = 4,
	EAffiliation__EAffiliation_MAX = 5,

};

// Enum GunfireRuntime.EAttackType
enum class GunfireRuntime_EAttackType : uint8_t
{
	EAttackType__AttackType_None   = 0,
	EAttackType__AttackType_Melee  = 1,
	EAttackType__AttackType_Ranged = 2,
	EAttackType__AttackType_MAX    = 3,

};

// Enum GunfireRuntime.EWoundedState
enum class GunfireRuntime_EWoundedState : uint8_t
{
	EWoundedState__None            = 0,
	EWoundedState__Wounded         = 1,
	EWoundedState__Reviving        = 2,
	EWoundedState__EWoundedState_MAX = 3,

};

// Enum GunfireRuntime.EInputDevice
enum class GunfireRuntime_EInputDevice : uint8_t
{
	EInputDevice__None             = 0,
	EInputDevice__KeyboardAndMouse = 1,
	EInputDevice__Gamepad          = 2,
	EInputDevice__Touch            = 3,
	EInputDevice__EInputDevice_MAX = 4,

};

// Enum GunfireRuntime.ButtonEvent
enum class GunfireRuntime_EButtonEvent : uint8_t
{
	ButtonEvent__None              = 0,
	ButtonEvent__Pressed           = 1,
	ButtonEvent__Released          = 2,
	ButtonEvent__ButtonEvent_MAX   = 3,

};

// Enum GunfireRuntime.EQuestResult
enum class GunfireRuntime_EQuestResult : uint8_t
{
	EQuestResult__Success          = 0,
	EQuestResult__Failure          = 1,
	EQuestResult__EQuestResult_MAX = 2,

};

// Enum GunfireRuntime.EMusicIntensity
enum class GunfireRuntime_EMusicIntensity : uint8_t
{
	EMusicIntensity__Ambient       = 0,
	EMusicIntensity__Tension       = 1,
	EMusicIntensity__CombatLow     = 2,
	EMusicIntensity__CombatMid     = 3,
	EMusicIntensity__CombatHigh    = 4,
	EMusicIntensity__EMusicIntensity_MAX = 5,

};

// Enum GunfireRuntime.EItemNotifyReason
enum class GunfireRuntime_EItemNotifyReason : uint8_t
{
	EItemNotifyReason__Default     = 0,
	EItemNotifyReason__PickedUp    = 1,
	EItemNotifyReason__Crafted     = 2,
	EItemNotifyReason__Reward      = 3,
	EItemNotifyReason__AccountKeeping = 4,
	EItemNotifyReason__Custom1     = 5,
	EItemNotifyReason__Custom2     = 6,
	EItemNotifyReason__Custom3     = 7,
	EItemNotifyReason__Custom4     = 8,
	EItemNotifyReason__EItemNotifyReason_MAX = 9,

};

// Enum GunfireRuntime.EHudInteractiveType
enum class GunfireRuntime_EHudInteractiveType : uint8_t
{
	EHudInteractiveType__None      = 0,
	EHudInteractiveType__InteractiveState = 1,
	EHudInteractiveType__InteractiveMashState = 2,
	EHudInteractiveType__Item      = 3,
	EHudInteractiveType__Revive    = 4,
	EHudInteractiveType__EHudInteractiveType_MAX = 5,

};

// Enum GunfireRuntime.ESpawnType
enum class GunfireRuntime_ESpawnType : uint8_t
{
	ESpawnType__All                = 0,
	ESpawnType__Actor              = 1,
	ESpawnType__Item               = 2,
	ESpawnType__Character          = 3,
	ESpawnType__UserDefined1       = 4,
	ESpawnType__UserDefined2       = 5,
	ESpawnType__UserDefined3       = 6,
	ESpawnType__UserDefined4       = 7,
	ESpawnType__UserDefined5       = 8,
	ESpawnType__EncounterParams    = 9,
	ESpawnType__ESpawnType_MAX     = 10,

};

// Enum GunfireRuntime.EAchievementUpdateType
enum class GunfireRuntime_EAchievementUpdateType : uint8_t
{
	EAchievementUpdateType__Increment = 0,
	EAchievementUpdateType__Set    = 1,
	EAchievementUpdateType__EAchievementUpdateType_MAX = 2,

};

// Enum GunfireRuntime.EActorContext
enum class GunfireRuntime_EActorContext : uint8_t
{
	EActorContext__Actor           = 0,
	EActorContext__Owner           = 1,
	EActorContext__Target          = 2,
	EActorContext__Weapon          = 3,
	EActorContext__EActorContext_MAX = 4,

};

// Enum GunfireRuntime.EActorModifierScope
enum class GunfireRuntime_EActorModifierScope : uint8_t
{
	EActorModifierScope__StatsOnly = 0,
	EActorModifierScope__Server    = 1,
	EActorModifierScope__ServerClient = 2,
	EActorModifierScope__EActorModifierScope_MAX = 3,

};

// Enum GunfireRuntime.EAdvButtonType
enum class GunfireRuntime_EAdvButtonType : uint8_t
{
	Normal                         = 0,
	radio                          = 1,
	Push                           = 2,
	EAdvButtonType_MAX             = 3,

};

// Enum GunfireRuntime.EAwarenessSignal
enum class GunfireRuntime_EAwarenessSignal : uint8_t
{
	EAwarenessSignal__Sound        = 0,
	EAwarenessSignal__Light        = 1,
	EAwarenessSignal__EAwarenessSignal_MAX = 2,

};

// Enum GunfireRuntime.EConvergeToType
enum class GunfireRuntime_EConvergeToType : uint8_t
{
	EConvergeToType__TacticalPoint = 0,
	EConvergeToType__BlackboardKey = 1,
	EConvergeToType__LocalPlayer   = 2,
	EConvergeToType__EConvergeToType_MAX = 3,

};

// Enum GunfireRuntime.EFlockingStyle
enum class GunfireRuntime_EFlockingStyle : uint8_t
{
	EFlockingStyle__ClassicMelee   = 0,
	EFlockingStyle__Slots          = 1,
	EFlockingStyle__EFlockingStyle_MAX = 2,

};

// Enum GunfireRuntime.EIntensityState
enum class GunfireRuntime_EIntensityState : uint8_t
{
	EIntensityState__BuildUp       = 0,
	EIntensityState__Peak          = 1,
	EIntensityState__PeakSustain   = 2,
	EIntensityState__Relax         = 3,
	EIntensityState__BuildUpSustain = 4,
	EIntensityState__EIntensityState_MAX = 5,

};

// Enum GunfireRuntime.EIntensityEvent
enum class GunfireRuntime_EIntensityEvent : uint8_t
{
	EIntensityEvent__Hit           = 0,
	EIntensityEvent__Wounded       = 1,
	EIntensityEvent__Death         = 2,
	EIntensityEvent__EnemyHit      = 3,
	EIntensityEvent__EnemyDeath    = 4,
	EIntensityEvent__EIntensityEvent_MAX = 5,

};

// Enum GunfireRuntime.EAIDistanceType
enum class GunfireRuntime_EAIDistanceType : uint8_t
{
	EAIDistanceType__XYZ           = 0,
	EAIDistanceType__XY            = 1,
	EAIDistanceType__Z             = 2,
	EAIDistanceType__EAIDistanceType_MAX = 3,

};

// Enum GunfireRuntime.EJumpType
enum class GunfireRuntime_EJumpType : uint8_t
{
	EJumpType__NavLink             = 0,
	EJumpType__ToTarget            = 1,
	EJumpType__ToTargetKeepFacing  = 2,
	EJumpType__EJumpType_MAX       = 3,

};

// Enum GunfireRuntime.ENavAreaFlag
enum class GunfireRuntime_ENavAreaFlag : uint8_t
{
	ENavAreaFlag__Default          = 0,
	ENavAreaFlag__Jump             = 1,
	ENavAreaFlag__Vault            = 2,
	ENavAreaFlag__Fall             = 3,
	ENavAreaFlag__VaultOn          = 4,
	ENavAreaFlag__Custom1          = 5,
	ENavAreaFlag__Custom2          = 6,
	ENavAreaFlag__Custom3          = 7,
	ENavAreaFlag__Custom4          = 8,
	ENavAreaFlag__ENavAreaFlag_MAX = 9,

};

// Enum GunfireRuntime.ENodePathStatus
enum class GunfireRuntime_ENodePathStatus : uint8_t
{
	ENodePathStatus__Idle          = 0,
	ENodePathStatus__Pathing       = 1,
	ENodePathStatus__Waiting       = 2,
	ENodePathStatus__Complete      = 3,
	ENodePathStatus__DontCare      = 4,
	ENodePathStatus__ENodePathStatus_MAX = 5,

};

// Enum GunfireRuntime.EAwarenessState
enum class GunfireRuntime_EAwarenessState : uint8_t
{
	EAwarenessState__None          = 0,
	EAwarenessState__Alert         = 1,
	EAwarenessState__Aware         = 2,
	EAwarenessState__EAwarenessState_MAX = 3,

};

// Enum GunfireRuntime.EPathState
enum class GunfireRuntime_EPathState : uint8_t
{
	EPathState__DontCare           = 0,
	EPathState__NotValid           = 1,
	EPathState__Valid              = 2,
	EPathState__EPathState_MAX     = 3,

};

// Enum GunfireRuntime.EVisState
enum class GunfireRuntime_EVisState : uint8_t
{
	EVisState__Unknown             = 0,
	EVisState__DontCare            = 1,
	EVisState__Visible             = 2,
	EVisState__NotVisible          = 3,
	EVisState__LostSight           = 4,
	EVisState__EVisState_MAX       = 5,

};

// Enum GunfireRuntime.ECombatSize
enum class GunfireRuntime_ECombatSize : uint8_t
{
	ECombatSize__Normal            = 0,
	ECombatSize__Big               = 1,
	ECombatSize__ECombatSize_MAX   = 2,

};

// Enum GunfireRuntime.EAITacticalPointType
enum class GunfireRuntime_EAITacticalPointType : uint8_t
{
	EAITacticalPointType__Invalid  = 0,
	EAITacticalPointType__LowCover = 1,
	EAITacticalPointType__CornerCoverLeft = 2,
	EAITacticalPointType__CornerCoverRight = 3,
	EAITacticalPointType__Dynamic  = 4,
	EAITacticalPointType__Custom   = 5,
	EAITacticalPointType__EAITacticalPointType_MAX = 6,

};

// Enum GunfireRuntime.EAmbientSpawnState
enum class GunfireRuntime_EAmbientSpawnState : uint8_t
{
	EAmbientSpawnState__Unloaded   = 0,
	EAmbientSpawnState__Loading    = 1,
	EAmbientSpawnState__Loaded     = 2,
	EAmbientSpawnState__Spawning   = 3,
	EAmbientSpawnState__Spawned    = 4,
	EAmbientSpawnState__EAmbientSpawnState_MAX = 5,

};

// Enum GunfireRuntime.EAngleComponent
enum class GunfireRuntime_EAngleComponent : uint8_t
{
	EAngleComponent__Yaw           = 0,
	EAngleComponent__Pitch         = 1,
	EAngleComponent__Roll          = 2,
	EAngleComponent__EAngleComponent_MAX = 3,

};

// Enum GunfireRuntime.EAngleRef
enum class GunfireRuntime_EAngleRef : uint8_t
{
	EAngleRef__Heading             = 0,
	EAngleRef__MoveDir             = 1,
	EAngleRef__InputDir            = 2,
	EAngleRef__ToTargetDir         = 3,
	EAngleRef__TacticalPointDir    = 4,
	EAngleRef__CameraDir           = 5,
	EAngleRef__WorldUp             = 6,
	EAngleRef__EAngleRef_MAX       = 7,

};

// Enum GunfireRuntime.ENotifyOptimizationType
enum class GunfireRuntime_ENotifyOptimizationType : uint8_t
{
	ENotifyOptimizationType__None  = 0,
	ENotifyOptimizationType__Queued = 1,
	ENotifyOptimizationType__ENotifyOptimizationType_MAX = 2,

};

// Enum GunfireRuntime.EAwarenessSource
enum class GunfireRuntime_EAwarenessSource : uint8_t
{
	EAwarenessSource__Us           = 0,
	EAwarenessSource__Target       = 1,
	EAwarenessSource__EAwarenessSource_MAX = 2,

};

// Enum GunfireRuntime.EAnimImpactTraceDirection
enum class GunfireRuntime_EAnimImpactTraceDirection : uint8_t
{
	EAnimImpactTraceDirection__Down = 0,
	EAnimImpactTraceDirection__Forward = 1,
	EAnimImpactTraceDirection__EAnimImpactTraceDirection_MAX = 2,

};

// Enum GunfireRuntime.EAnimImpactType
enum class GunfireRuntime_EAnimImpactType : uint8_t
{
	EAnimImpactType__Foot          = 0,
	EAnimImpactType__FootSprint    = 1,
	EAnimImpactType__Hand          = 2,
	EAnimImpactType__HandSprint    = 3,
	EAnimImpactType__Land          = 4,
	EAnimImpactType__Body          = 5,
	EAnimImpactType__Slam          = 6,
	EAnimImpactType__EAnimImpactType_MAX = 7,

};

// Enum GunfireRuntime.EAssetCachePreloadMethod
enum class GunfireRuntime_EAssetCachePreloadMethod : uint8_t
{
	EAssetCachePreloadMethod__OnGameInstanceInit = 0,
	EAssetCachePreloadMethod__OnPostLogin = 1,
	EAssetCachePreloadMethod__OnPostLoad = 2,
	EAssetCachePreloadMethod__Blueprint = 3,
	EAssetCachePreloadMethod__EAssetCachePreloadMethod_MAX = 4,

};

// Enum GunfireRuntime.EBreakableState
enum class GunfireRuntime_EBreakableState : uint8_t
{
	EBreakableState__Unbroken      = 0,
	EBreakableState__Breaking      = 1,
	EBreakableState__Broken        = 2,
	EBreakableState__EBreakableState_MAX = 3,

};

// Enum GunfireRuntime.ButtonState
enum class GunfireRuntime_EButtonState : uint8_t
{
	ButtonState__Pressed           = 0,
	ButtonState__Released          = 1,
	ButtonState__Down              = 2,
	ButtonState__Up                = 3,
	ButtonState__ButtonState_MAX   = 4,

};

// Enum GunfireRuntime.ECincematicMode
enum class GunfireRuntime_ECincematicMode : uint8_t
{
	ECincematicMode__None          = 0,
	ECincematicMode__Complete      = 1,
	ECincematicMode__ECincematicMode_MAX = 2,

};

// Enum GunfireRuntime.CharacterFacing
enum class GunfireRuntime_ECharacterFacing : uint8_t
{
	CharacterFacing__MoveDir       = 0,
	CharacterFacing__Camera        = 1,
	CharacterFacing__Target        = 2,
	CharacterFacing__TargetOnly    = 3,
	CharacterFacing__TargetOnStart = 4,
	CharacterFacing__ImpactDirOnStart = 5,
	CharacterFacing__MoveDirOnStart = 6,
	CharacterFacing__TargetOrMoveDirOnStart = 7,
	CharacterFacing__TargetOrCameraOnStart = 8,
	CharacterFacing__RootRotation  = 9,
	CharacterFacing__TargetOrNone  = 10,
	CharacterFacing__Fixed         = 11,
	CharacterFacing__MoveDirOnStartThenTarget = 12,
	CharacterFacing__NavLinkDirection = 13,
	CharacterFacing__Velocity      = 14,
	CharacterFacing__DamageOwner   = 15,
	CharacterFacing__DamageOwnerOnStart = 16,
	CharacterFacing__CameraOnStart = 17,
	CharacterFacing__Current       = 18,
	CharacterFacing__CharacterFacing_MAX = 19,

};

// Enum GunfireRuntime.EDecalReceiverType
enum class GunfireRuntime_EDecalReceiverType : uint8_t
{
	EDecalReceiverType__Inherit    = 0,
	EDecalReceiverType__Enabled    = 1,
	EDecalReceiverType__Disabled   = 2,
	EDecalReceiverType__EDecalReceiverType_MAX = 3,

};

// Enum GunfireRuntime.ENavigationType
enum class GunfireRuntime_ENavigationType : uint8_t
{
	Unknown                        = 0,
	Ground                         = 1,
	Air                            = 2,
	Water                          = 3,
	ENavigationType_MAX            = 4,

};

// Enum GunfireRuntime.ERootMotionVelocityMethod
enum class GunfireRuntime_ERootMotionVelocityMethod : uint8_t
{
	ERootMotionVelocityMethod__RootMotionOnly = 0,
	ERootMotionVelocityMethod__IgnoreRootMotion = 1,
	ERootMotionVelocityMethod__AccumulativeRootMotion = 2,
	ERootMotionVelocityMethod__ERootMotionVelocityMethod_MAX = 3,

};

// Enum GunfireRuntime.ESpawnDelayType
enum class GunfireRuntime_ESpawnDelayType : uint8_t
{
	ESpawnDelayType__DelayedSpawn  = 0,
	ESpawnDelayType__DelayedTriggers = 1,
	ESpawnDelayType__DelayedSpawnAndTriggers = 2,
	ESpawnDelayType__Disabled      = 3,
	ESpawnDelayType__ESpawnDelayType_MAX = 4,

};

// Enum GunfireRuntime.EChargeableActivateType
enum class GunfireRuntime_EChargeableActivateType : uint8_t
{
	EChargeableActivateType__Press = 0,
	EChargeableActivateType__Hold  = 1,
	EChargeableActivateType__EChargeableActivateType_MAX = 2,

};

// Enum GunfireRuntime.EChargeState
enum class GunfireRuntime_EChargeState : uint8_t
{
	EChargeState__None             = 0,
	EChargeState__Charging         = 1,
	EChargeState__Success          = 2,
	EChargeState__Fail             = 3,
	EChargeState__EChargeState_MAX = 4,

};

// Enum GunfireRuntime.ECustomCollisionEnabled
enum class GunfireRuntime_ECustomCollisionEnabled : uint8_t
{
	ECustomCollisionEnabled__Enabled = 0,
	ECustomCollisionEnabled__Disabled = 1,
	ECustomCollisionEnabled__ECustomCollisionEnabled_MAX = 2,

};

// Enum GunfireRuntime.EFireOutExec
enum class GunfireRuntime_EFireOutExec : uint8_t
{
	EFireOutExec__Hit              = 0,
	EFireOutExec__Destroyed        = 1,
	EFireOutExec__EFireOutExec_MAX = 2,

};

// Enum GunfireRuntime.EAutoArcType
enum class GunfireRuntime_EAutoArcType : uint8_t
{
	EAutoArcType__None             = 0,
	EAutoArcType__ArcHeight        = 1,
	EAutoArcType__ArcSpeed         = 2,
	EAutoArcType__EAutoArcType_MAX = 3,

};

// Enum GunfireRuntime.CooldownScope
enum class GunfireRuntime_ECooldownScope : uint8_t
{
	CooldownScope__Local           = 0,
	CooldownScope__Target          = 1,
	CooldownScope__CooldownScope_MAX = 2,

};

// Enum GunfireRuntime.ERecipeType
enum class GunfireRuntime_ERecipeType : uint8_t
{
	ERecipeType__Craft             = 0,
	ERecipeType__Decompose         = 1,
	ERecipeType__Upgrade           = 2,
	ERecipeType__Infusion          = 3,
	ERecipeType__ERecipeType_MAX   = 4,

};

// Enum GunfireRuntime.EInvincibleHandlingMethod
enum class GunfireRuntime_EInvincibleHandlingMethod : uint8_t
{
	EInvincibleHandlingMethod__DamageFails = 0,
	EInvincibleHandlingMethod__ZeroDamage = 1,
	EInvincibleHandlingMethod__EInvincibleHandlingMethod_MAX = 2,

};

// Enum GunfireRuntime.EDeadReason
enum class GunfireRuntime_EDeadReason : uint8_t
{
	EDeadReason__Damage            = 0,
	EDeadReason__Fall              = 1,
	EDeadReason__GameSpecific1     = 2,
	EDeadReason__EDeadReason_MAX   = 3,

};

// Enum GunfireRuntime.EDamageNumbersVisibility
enum class GunfireRuntime_EDamageNumbersVisibility : uint8_t
{
	EDamageNumbersVisibility__Hidden = 0,
	EDamageNumbersVisibility__Shown = 1,
	EDamageNumbersVisibility__IgnoresPower = 2,
	EDamageNumbersVisibility__EDamageNumbersVisibility_MAX = 3,

};

// Enum GunfireRuntime.EDialogType
enum class GunfireRuntime_EDialogType : uint8_t
{
	EDialogType__Default           = 0,
	EDialogType__DialogInterrupt   = 1,
	EDialogType__DialogOption      = 2,
	EDialogType__EDialogType_MAX   = 3,

};

// Enum GunfireRuntime.EEncounterFlags
enum class GunfireRuntime_EEncounterFlags : uint8_t
{
	EEncounterFlags__ShuffleSpawns = 0,
	EEncounterFlags__EEncounterFlags_MAX = 1,

};

// Enum GunfireRuntime.EEquipAttachType
enum class GunfireRuntime_EEquipAttachType : uint8_t
{
	EEquipAttachType__Active       = 0,
	EEquipAttachType__Inactive     = 1,
	EEquipAttachType__Stowed       = 2,
	EEquipAttachType__EEquipAttachType_MAX = 3,

};

// Enum GunfireRuntime.EActionType
enum class GunfireRuntime_EActionType : uint8_t
{
	Dialog                         = 0,
	Action                         = 1,
	Flow                           = 2,
	Trigger                        = 3,
	EActionType_MAX                = 4,

};

// Enum GunfireRuntime.EDialogSpeakerGender
enum class GunfireRuntime_EDialogSpeakerGender : uint8_t
{
	EDialogSpeakerGender__Male     = 0,
	EDialogSpeakerGender__Female   = 1,
	EDialogSpeakerGender__EDialogSpeakerGender_MAX = 2,

};

// Enum GunfireRuntime.EQuestSwitchResult
enum class GunfireRuntime_EQuestSwitchResult : uint8_t
{
	EQuestSwitchResult__QuestNotStarted = 0,
	EQuestSwitchResult__QuestInProgress = 1,
	EQuestSwitchResult__QuestCompleteSuccess = 2,
	EQuestSwitchResult__QuestCompleteFailure = 3,
	EQuestSwitchResult__All        = 4,
	EQuestSwitchResult__EQuestSwitchResult_MAX = 5,

};

// Enum GunfireRuntime.EStageAction
enum class GunfireRuntime_EStageAction : uint8_t
{
	EStageAction__Push             = 0,
	EStageAction__Set              = 1,
	EStageAction__Pop              = 2,
	EStageAction__EStageAction_MAX = 3,

};

// Enum GunfireRuntime.EFallConditionCheck
enum class GunfireRuntime_EFallConditionCheck : uint8_t
{
	EFallConditionCheck__IsNotFalling = 0,
	EFallConditionCheck__IsSafeFall = 1,
	EFallConditionCheck__IsUnsafeFall = 2,
	EFallConditionCheck__IsFatalFall = 3,
	EFallConditionCheck__IsUnsafeOrFatalFall = 4,
	EFallConditionCheck__EFallConditionCheck_MAX = 5,

};

// Enum GunfireRuntime.EAutoFocusTraversal
enum class GunfireRuntime_EAutoFocusTraversal : uint8_t
{
	EAutoFocusTraversal__None      = 0,
	EAutoFocusTraversal__Auto      = 1,
	EAutoFocusTraversal__EAutoFocusTraversal_MAX = 2,

};

// Enum GunfireRuntime.EFadeDirection
enum class GunfireRuntime_EFadeDirection : uint8_t
{
	EFadeDirection__FD_In          = 0,
	EFadeDirection__FD_Out         = 1,
	EFadeDirection__FD_MAX         = 2,

};

// Enum GunfireRuntime.EInputConflictGroup
enum class GunfireRuntime_EInputConflictGroup : uint8_t
{
	EInputConflictGroup__Gameplay  = 0,
	EInputConflictGroup__UI        = 1,
	EInputConflictGroup__EInputConflictGroup_MAX = 2,

};

// Enum GunfireRuntime.ESettingsPlatforms
enum class GunfireRuntime_ESettingsPlatforms : uint8_t
{
	ESettingsPlatforms__PC         = 0,
	ESettingsPlatforms__XboxOne    = 1,
	ESettingsPlatforms__XboxOneX   = 2,
	ESettingsPlatforms__PS4        = 3,
	ESettingsPlatforms__PS4Pro     = 4,
	ESettingsPlatforms__PCExcludingEpic = 5,
	ESettingsPlatforms__XboxOneSeries = 6,
	ESettingsPlatforms__PS5        = 7,
	ESettingsPlatforms__ESettingsPlatforms_MAX = 8,

};

// Enum GunfireRuntime.ELocalizationLanguage
enum class GunfireRuntime_ELocalizationLanguage : uint8_t
{
	ELocalizationLanguage__en      = 0,
	ELocalizationLanguage__es      = 1,
	ELocalizationLanguage__de      = 2,
	ELocalizationLanguage__fr      = 3,
	ELocalizationLanguage__ja      = 4,
	ELocalizationLanguage__ko      = 5,
	ELocalizationLanguage__zh      = 6,
	ELocalizationLanguage__ar      = 7,
	ELocalizationLanguage__fa      = 8,
	ELocalizationLanguage__it      = 9,
	ELocalizationLanguage__pl      = 10,
	ELocalizationLanguage__ru      = 11,
	ELocalizationLanguage__pt      = 12,
	ELocalizationLanguage__ELocalizationLanguage_MAX = 13,

};

// Enum GunfireRuntime.EBuildType
enum class GunfireRuntime_EBuildType : uint8_t
{
	EBuildType__Debug              = 0,
	EBuildType__Development        = 1,
	EBuildType__Test               = 2,
	EBuildType__Shipping           = 3,
	EBuildType__EBuildType_MAX     = 4,

};

// Enum GunfireRuntime.EPlatform
enum class GunfireRuntime_EPlatform : uint8_t
{
	EPlatform__Unknown             = 0,
	EPlatform__PC                  = 1,
	EPlatform__XboxOne             = 2,
	EPlatform__XboxOneS            = 3,
	EPlatform__XboxOneX            = 4,
	EPlatform__PS4                 = 5,
	EPlatform__PS4Pro              = 6,
	EPlatform__PS5                 = 7,
	EPlatform__XboxSeriesS         = 8,
	EPlatform__XboxSeriesX         = 9,
	EPlatform__EPlatform_MAX       = 10,

};

// Enum GunfireRuntime.ELevelContextFallback
enum class GunfireRuntime_ELevelContextFallback : uint8_t
{
	ELevelContextFallback__Instigator = 0,
	ELevelContextFallback__Root    = 1,
	ELevelContextFallback__WorldContext = 2,
	ELevelContextFallback__Owner   = 3,
	ELevelContextFallback__ELevelContextFallback_MAX = 4,

};

// Enum GunfireRuntime.EMsgCategory
enum class GunfireRuntime_EMsgCategory : uint8_t
{
	EMsgCategory__Loading          = 0,
	EMsgCategory__PreRuntime       = 1,
	EMsgCategory__Runtime          = 2,
	EMsgCategory__EMsgCategory_MAX = 3,

};

// Enum GunfireRuntime.EMsgSeverity
enum class GunfireRuntime_EMsgSeverity : uint8_t
{
	EMsgSeverity__Fatal            = 0,
	EMsgSeverity__Error            = 1,
	EMsgSeverity__Warning          = 2,
	EMsgSeverity__Info             = 3,
	EMsgSeverity__EMsgSeverity_MAX = 4,

};

// Enum GunfireRuntime.ECullCategory
enum class GunfireRuntime_ECullCategory : uint8_t
{
	ECullCategory__Tracers         = 0,
	ECullCategory__SoundsAttached  = 1,
	ECullCategory__EmitterAttached = 2,
	ECullCategory__EmitterAtLocation = 3,
	ECullCategory__ImpactEffect    = 4,
	ECullCategory__Decal           = 5,
	ECullCategory__ECullCategory_MAX = 6,

};

// Enum GunfireRuntime.EAmbientPriorityPolicy
enum class GunfireRuntime_EAmbientPriorityPolicy : uint8_t
{
	EAmbientPriorityPolicy__FullyNested = 0,
	EAmbientPriorityPolicy__ManualLevelDepth = 1,
	EAmbientPriorityPolicy__EAmbientPriorityPolicy_MAX = 2,

};

// Enum GunfireRuntime.ERedloadInteractiveMode
enum class GunfireRuntime_ERedloadInteractiveMode : uint8_t
{
	ERedloadInteractiveMode__Actors = 0,
	ERedloadInteractiveMode__MashableActors = 1,
	ERedloadInteractiveMode__Items = 2,
	ERedloadInteractiveMode__Revive = 3,
	ERedloadInteractiveMode__ERedloadInteractiveMode_MAX = 4,

};

// Enum GunfireRuntime.EHitPauseMode
enum class GunfireRuntime_EHitPauseMode : uint8_t
{
	EHitPauseMode__AnyDamage       = 0,
	EHitPauseMode__DamagedCharactersOnly = 1,
	EHitPauseMode__EHitPauseMode_MAX = 2,

};

// Enum GunfireRuntime.EHeuristicBoundsShape
enum class GunfireRuntime_EHeuristicBoundsShape : uint8_t
{
	EHeuristicBoundsShape__Disc    = 0,
	EHeuristicBoundsShape__Box     = 1,
	EHeuristicBoundsShape__EHeuristicBoundsShape_MAX = 2,

};

// Enum GunfireRuntime.EHeuristicBoundsTraceResult
enum class GunfireRuntime_EHeuristicBoundsTraceResult : uint8_t
{
	EHeuristicBoundsTraceResult__Fail_OutOfRange = 0,
	EHeuristicBoundsTraceResult__Fail_OutsideFoV = 1,
	EHeuristicBoundsTraceResult__Fail_OutsideBounds = 2,
	EHeuristicBoundsTraceResult__Success = 3,
	EHeuristicBoundsTraceResult__EHeuristicBoundsTraceResult_MAX = 4,

};

// Enum GunfireRuntime.EHeuristicBoundsPanelAlignment
enum class GunfireRuntime_EHeuristicBoundsPanelAlignment : uint8_t
{
	EHeuristicBoundsPanelAlignment__TopLeft = 0,
	EHeuristicBoundsPanelAlignment__Top = 1,
	EHeuristicBoundsPanelAlignment__TopRight = 2,
	EHeuristicBoundsPanelAlignment__Right = 3,
	EHeuristicBoundsPanelAlignment__BottomRight = 4,
	EHeuristicBoundsPanelAlignment__Bottom = 5,
	EHeuristicBoundsPanelAlignment__BottomLeft = 6,
	EHeuristicBoundsPanelAlignment__Left = 7,
	EHeuristicBoundsPanelAlignment__Center = 8,
	EHeuristicBoundsPanelAlignment__EHeuristicBoundsPanelAlignment_MAX = 9,

};

// Enum GunfireRuntime.EHitReactionInsertRule
enum class GunfireRuntime_EHitReactionInsertRule : uint8_t
{
	EHitReactionInsertRule__Above  = 0,
	EHitReactionInsertRule__Below  = 1,
	EHitReactionInsertRule__EHitReactionInsertRule_MAX = 2,

};

// Enum GunfireRuntime.EHitResult
enum class GunfireRuntime_EHitResult : uint8_t
{
	EHitResult__Hit                = 0,
	EHitResult__Evade              = 1,
	EHitResult__Block              = 2,
	EHitResult__EHitResult_MAX     = 3,

};

// Enum GunfireRuntime.HitReactionType
enum class GunfireRuntime_EHitReactionType : uint8_t
{
	HitReactionType__Flinch        = 0,
	HitReactionType__Impact        = 1,
	HitReactionType__HitLocationDestroyed = 2,
	HitReactionType__KnockBack     = 3,
	HitReactionType__Death         = 4,
	HitReactionType__DeathKnockBack = 5,
	HitReactionType__None          = 6,
	HitReactionType__HitReactionType_MAX = 7,

};

// Enum GunfireRuntime.EImpactEffectEvent
enum class GunfireRuntime_EImpactEffectEvent : uint8_t
{
	Animation_Blocking             = 0,
	Animation_Water                = 1,
	Animation_Editor               = 2,
	Melee_Environment              = 3,
	Melee_Impact                   = 4,
	Ragdoll                        = 5,
	Combat_Block                   = 6,
	Combat_Trace                   = 7,
	Combat_Projectile              = 8,
	Combat_AOE                     = 9,
	EImpactEffectEvent_MAX         = 10,

};

// Enum GunfireRuntime.InputFilterMethod
enum class GunfireRuntime_EInputFilterMethod : uint8_t
{
	InputFilterMethod__Both        = 0,
	InputFilterMethod__ControllerOnly = 1,
	InputFilterMethod__KeyboardOnly = 2,
	InputFilterMethod__InputFilterMethod_MAX = 3,

};

// Enum GunfireRuntime.ShiftButtonType
enum class GunfireRuntime_EShiftButtonType : uint8_t
{
	ShiftButtonType__ShiftKey      = 0,
	ShiftButtonType__MultiKey      = 1,
	ShiftButtonType__ShiftButtonType_MAX = 2,

};

// Enum GunfireRuntime.EInspectableConditionCheck
enum class GunfireRuntime_EInspectableConditionCheck : uint8_t
{
	EInspectableConditionCheck__IsOccupied = 0,
	EInspectableConditionCheck__IsInTransition = 1,
	EInspectableConditionCheck__IsInteractingActorLocal = 2,
	EInspectableConditionCheck__EInspectableConditionCheck_MAX = 3,

};

// Enum GunfireRuntime.EInspectStatType
enum class GunfireRuntime_EInspectStatType : uint8_t
{
	EInspectStatType__Standard     = 0,
	EInspectStatType__Modifier     = 1,
	EInspectStatType__PerSecond    = 2,
	EInspectStatType__Scalar       = 3,
	EInspectStatType__Seconds      = 4,
	EInspectStatType__Requirement  = 5,
	EInspectStatType__Affinity     = 6,
	EInspectStatType__Custom       = 7,
	EInspectStatType__Bar          = 8,
	EInspectStatType__EInspectStatType_MAX = 9,

};

// Enum GunfireRuntime.EInteractiveResult
enum class GunfireRuntime_EInteractiveResult : uint8_t
{
	EInteractiveResult__NoResult   = 0,
	EInteractiveResult__Success    = 1,
	EInteractiveResult__Failure    = 2,
	EInteractiveResult__EInteractiveResult_MAX = 3,

};

// Enum GunfireRuntime.EAnchorFaceOtherMethod
enum class GunfireRuntime_EAnchorFaceOtherMethod : uint8_t
{
	EAnchorFaceOtherMethod__Instant = 0,
	EAnchorFaceOtherMethod__InstantTeleportPhysics = 1,
	EAnchorFaceOtherMethod__UseConvergeTime = 2,
	EAnchorFaceOtherMethod__EAnchorFaceOtherMethod_MAX = 3,

};

// Enum GunfireRuntime.EInteractArcValidationType
enum class GunfireRuntime_EInteractArcValidationType : uint8_t
{
	EInteractArcValidationType__Ignore = 0,
	EInteractArcValidationType__AngleOnly = 1,
	EInteractArcValidationType__AngleAndPosition = 2,
	EInteractArcValidationType__FacingOnly = 3,
	EInteractArcValidationType__PositionOnly = 4,
	EInteractArcValidationType__FacingAndPosition = 5,
	EInteractArcValidationType__EInteractArcValidationType_MAX = 6,

};

// Enum GunfireRuntime.EInteractiveType
enum class GunfireRuntime_EInteractiveType : uint8_t
{
	EInteractiveType__Info         = 0,
	EInteractiveType__Action       = 1,
	EInteractiveType__Event        = 2,
	EInteractiveType__EInteractiveType_MAX = 3,

};

// Enum GunfireRuntime.EInteractiveInitiator
enum class GunfireRuntime_EInteractiveInitiator : uint8_t
{
	EInteractiveInitiator__Us      = 0,
	EInteractiveInitiator__Other   = 1,
	EInteractiveInitiator__EInteractiveInitiator_MAX = 2,

};

// Enum GunfireRuntime.EInventoryAccess
enum class GunfireRuntime_EInventoryAccess : uint8_t
{
	EInventoryAccess__Private      = 0,
	EInventoryAccess__Public       = 1,
	EInventoryAccess__EInventoryAccess_MAX = 2,

};

// Enum GunfireRuntime.EDropState
enum class GunfireRuntime_EDropState : uint8_t
{
	EDropState__Idle               = 0,
	EDropState__Dropping           = 1,
	EDropState__Bounce             = 2,
	EDropState__SecondBounce       = 3,
	EDropState__EDropState_MAX     = 4,

};

// Enum GunfireRuntime.EItemGenTableType
enum class GunfireRuntime_EItemGenTableType : uint8_t
{
	EItemGenTableType__Standard    = 0,
	EItemGenTableType__IndividualChance = 1,
	EItemGenTableType__EItemGenTableType_MAX = 2,

};

// Enum GunfireRuntime.EItemQuerySortMethod
enum class GunfireRuntime_EItemQuerySortMethod : uint8_t
{
	EItemQuerySortMethod__Unsorted = 0,
	EItemQuerySortMethod__Sort     = 1,
	EItemQuerySortMethod__SortPrioritizeEquipped = 2,
	EItemQuerySortMethod__SortPrioritizeHtLPrice = 3,
	EItemQuerySortMethod__SortPrioritizeLtHPrice = 4,
	EItemQuerySortMethod__EItemQuerySortMethod_MAX = 5,

};

// Enum GunfireRuntime.ELastAttackCondition
enum class GunfireRuntime_ELastAttackCondition : uint8_t
{
	ELastAttackCondition__AttackHitCharacter = 0,
	ELastAttackCondition__AttackHitEnvironment = 1,
	ELastAttackCondition__AttackWasBlocked = 2,
	ELastAttackCondition__AttackWasBlockCountered = 3,
	ELastAttackCondition__AttackWasEvaded = 4,
	ELastAttackCondition__ELastAttackCondition_MAX = 5,

};

// Enum GunfireRuntime.ELedgeGrabType
enum class GunfireRuntime_ELedgeGrabType : uint8_t
{
	ELedgeGrabType__Solid          = 0,
	ELedgeGrabType__Inset          = 1,
	ELedgeGrabType__Hanging        = 2,
	ELedgeGrabType__Cling          = 3,
	ELedgeGrabType__ELedgeGrabType_MAX = 4,

};

// Enum GunfireRuntime.EPlayableVisibleState
enum class GunfireRuntime_EPlayableVisibleState : uint8_t
{
	EPlayableVisibleState__None    = 0,
	EPlayableVisibleState__Show    = 1,
	EPlayableVisibleState__Hide    = 2,
	EPlayableVisibleState__EPlayableVisibleState_MAX = 3,

};

// Enum GunfireRuntime.EPlayableLoadState
enum class GunfireRuntime_EPlayableLoadState : uint8_t
{
	EPlayableLoadState__None       = 0,
	EPlayableLoadState__Preload    = 1,
	EPlayableLoadState__Load       = 2,
	EPlayableLoadState__Unload     = 3,
	EPlayableLoadState__UnloadAndRemove = 4,
	EPlayableLoadState__EPlayableLoadState_MAX = 5,

};

// Enum GunfireRuntime.ELevelVisibilityState
enum class GunfireRuntime_ELevelVisibilityState : uint8_t
{
	ELevelVisibilityState__Hidden  = 0,
	ELevelVisibilityState__Shown   = 1,
	ELevelVisibilityState__Showing = 2,
	ELevelVisibilityState__Hiding  = 3,
	ELevelVisibilityState__ELevelVisibilityState_MAX = 4,

};

// Enum GunfireRuntime.ELevelLoadState
enum class GunfireRuntime_ELevelLoadState : uint8_t
{
	ELevelLoadState__Unloaded      = 0,
	ELevelLoadState__LoadRequested = 1,
	ELevelLoadState__Loaded        = 2,
	ELevelLoadState__Loading       = 3,
	ELevelLoadState__Unloading     = 4,
	ELevelLoadState__PreUnloaded   = 5,
	ELevelLoadState__ELevelLoadState_MAX = 6,

};

// Enum GunfireRuntime.ELevelTransition
enum class GunfireRuntime_ELevelTransition : uint8_t
{
	ELevelTransition__Load         = 0,
	ELevelTransition__Unload       = 1,
	ELevelTransition__Show         = 2,
	ELevelTransition__Hide         = 3,
	ELevelTransition__Remove       = 4,
	ELevelTransition__ELevelTransition_MAX = 5,

};

// Enum GunfireRuntime.ELODVolumeFilterType
enum class GunfireRuntime_ELODVolumeFilterType : uint8_t
{
	ELODVolumeFilterType__SubString = 0,
	ELODVolumeFilterType__Class    = 1,
	ELODVolumeFilterType__Reference = 2,
	ELODVolumeFilterType__ELODVolumeFilterType_MAX = 3,

};

// Enum GunfireRuntime.ELODVolumeFilterClass
enum class GunfireRuntime_ELODVolumeFilterClass : uint8_t
{
	ELODVolumeFilterClass__StaticMesh = 0,
	ELODVolumeFilterClass__Decal   = 1,
	ELODVolumeFilterClass__Blueprints = 2,
	ELODVolumeFilterClass__ELODVolumeFilterClass_MAX = 3,

};

// Enum GunfireRuntime.ELODVolumeRangeType
enum class GunfireRuntime_ELODVolumeRangeType : uint8_t
{
	ELODVolumeRangeType__Invalid   = 0,
	ELODVolumeRangeType__NearRange = 1,
	ELODVolumeRangeType__MidRange  = 2,
	ELODVolumeRangeType__OutOfRange = 3,
	ELODVolumeRangeType__ELODVolumeRangeType_MAX = 4,

};

// Enum GunfireRuntime.ELODVolumeVisibility
enum class GunfireRuntime_ELODVolumeVisibility : uint8_t
{
	ELODVolumeVisibility__All      = 0,
	ELODVolumeVisibility__None     = 1,
	ELODVolumeVisibility__Near     = 2,
	ELODVolumeVisibility__Distant  = 3,
	ELODVolumeVisibility__ELODVolumeVisibility_MAX = 4,

};

// Enum GunfireRuntime.ELogicalOperator
enum class GunfireRuntime_ELogicalOperator : uint8_t
{
	ELogicalOperator__And          = 0,
	ELogicalOperator__Or           = 1,
	ELogicalOperator__Xor          = 2,
	ELogicalOperator__ELogicalOperator_MAX = 3,

};

// Enum GunfireRuntime.EYesNo
enum class GunfireRuntime_EYesNo : uint8_t
{
	EYesNo__Yes                    = 0,
	EYesNo__No                     = 1,
	EYesNo__DontCare               = 2,
	EYesNo__EYesNo_MAX             = 3,

};

// Enum GunfireRuntime.CompareOp
enum class GunfireRuntime_ECompareOp : uint8_t
{
	CompareOp__GreaterThan         = 0,
	CompareOp__LessThan            = 1,
	CompareOp__GreaterThanEqual    = 2,
	CompareOp__LessThanEqual       = 3,
	CompareOp__Equal               = 4,
	CompareOp__CompareOp_MAX       = 5,

};

// Enum GunfireRuntime.EMapGenState
enum class GunfireRuntime_EMapGenState : uint8_t
{
	EMapGenState__Uninitialized    = 0,
	EMapGenState__WaitForServer    = 1,
	EMapGenState__LoadingTemplate  = 2,
	EMapGenState__Loading          = 3,
	EMapGenState__ProcessingInitialTiles = 4,
	EMapGenState__Initialized      = 5,
	EMapGenState__Failed           = 6,
	EMapGenState__EMapGenState_MAX = 7,

};

// Enum GunfireRuntime.EMiniMapStyle
enum class GunfireRuntime_EMiniMapStyle : uint8_t
{
	EMiniMapStyle__Is2D            = 0,
	EMiniMapStyle__Is3D            = 1,
	EMiniMapStyle__EMiniMapStyle_MAX = 2,

};

// Enum GunfireRuntime.EMiniMapMode
enum class GunfireRuntime_EMiniMapMode : uint8_t
{
	EMiniMapMode__Mini             = 0,
	EMiniMapMode__Full             = 1,
	EMiniMapMode__Hidden           = 2,
	EMiniMapMode__EMiniMapMode_MAX = 3,

};

// Enum GunfireRuntime.EMiniMapLevelRegionType
enum class GunfireRuntime_EMiniMapLevelRegionType : uint8_t
{
	EMiniMapLevelRegionType__Volume = 0,
	EMiniMapLevelRegionType__Plane = 1,
	EMiniMapLevelRegionType__EMiniMapLevelRegionType_MAX = 2,

};

// Enum GunfireRuntime.EMiniMapActorType
enum class GunfireRuntime_EMiniMapActorType : uint8_t
{
	EMiniMapActorType__Default     = 0,
	EMiniMapActorType__Indicator   = 1,
	EMiniMapActorType__EMiniMapActorType_MAX = 2,

};

// Enum GunfireRuntime.EMiniMapPanelScalingMethod
enum class GunfireRuntime_EMiniMapPanelScalingMethod : uint8_t
{
	EMiniMapPanelScalingMethod__NonUniform = 0,
	EMiniMapPanelScalingMethod__Maxima = 1,
	EMiniMapPanelScalingMethod__Minima = 2,
	EMiniMapPanelScalingMethod__EMiniMapPanelScalingMethod_MAX = 3,

};

// Enum GunfireRuntime.ECameraTurnDir
enum class GunfireRuntime_ECameraTurnDir : uint8_t
{
	ECameraTurnDir__None           = 0,
	ECameraTurnDir__Left           = 1,
	ECameraTurnDir__Right          = 2,
	ECameraTurnDir__ECameraTurnDir_MAX = 3,

};

// Enum GunfireRuntime.ECameraFollow
enum class GunfireRuntime_ECameraFollow : uint8_t
{
	ECameraFollow__Stationary      = 0,
	ECameraFollow__FollowXYZ       = 1,
	ECameraFollow__FollowZ         = 2,
	ECameraFollow__ECameraFollow_MAX = 3,

};

// Enum GunfireRuntime.EMoveInputType
enum class GunfireRuntime_EMoveInputType : uint8_t
{
	EMoveInputType__Full           = 0,
	EMoveInputType__Horizontal     = 1,
	EMoveInputType__Vertical       = 2,
	EMoveInputType__EMoveInputType_MAX = 3,

};

// Enum GunfireRuntime.ENavModifierGunfireShape
enum class GunfireRuntime_ENavModifierGunfireShape : uint8_t
{
	ENavModifierGunfireShape__Box  = 0,
	ENavModifierGunfireShape__Cylinder = 1,
	ENavModifierGunfireShape__ENavModifierGunfireShape_MAX = 2,

};

// Enum GunfireRuntime.ETrackingMode
enum class GunfireRuntime_ETrackingMode : uint8_t
{
	ETrackingMode__LookTargets     = 0,
	ETrackingMode__Viewpoint       = 1,
	ETrackingMode__ETrackingMode_MAX = 2,

};

// Enum GunfireRuntime.ELookTargetType
enum class GunfireRuntime_ELookTargetType : uint8_t
{
	ELookTargetType__Simple        = 0,
	ELookTargetType__OnlyIfTargeted = 1,
	ELookTargetType__OnlyWithLOS   = 2,
	ELookTargetType__ELookTargetType_MAX = 3,

};

// Enum GunfireRuntime.EGroundCheckType
enum class GunfireRuntime_EGroundCheckType : uint8_t
{
	EGroundCheckType__OnGround     = 0,
	EGroundCheckType__NearGround   = 1,
	EGroundCheckType__EGroundCheckType_MAX = 2,

};

// Enum GunfireRuntime.EPhysicsBoundsForceType
enum class GunfireRuntime_EPhysicsBoundsForceType : uint8_t
{
	EPhysicsBoundsForceType__Push  = 0,
	EPhysicsBoundsForceType__Pull  = 1,
	EPhysicsBoundsForceType__EPhysicsBoundsForceType_MAX = 2,

};

// Enum GunfireRuntime.EPhysicsBoundsForceDirection
enum class GunfireRuntime_EPhysicsBoundsForceDirection : uint8_t
{
	EPhysicsBoundsForceDirection__X = 0,
	EPhysicsBoundsForceDirection__Y = 1,
	EPhysicsBoundsForceDirection__Z = 2,
	EPhysicsBoundsForceDirection__EPhysicsBoundsForceDirection_MAX = 3,

};

// Enum GunfireRuntime.EPositionSource
enum class GunfireRuntime_EPositionSource : uint8_t
{
	EPositionSource__Target        = 0,
	EPositionSource__Property      = 1,
	EPositionSource__Blackboard    = 2,
	EPositionSource__EPositionSource_MAX = 3,

};

// Enum GunfireRuntime.EExperienceReason
enum class GunfireRuntime_EExperienceReason : uint8_t
{
	EExperienceReason__Default     = 0,
	EExperienceReason__Kill        = 1,
	EExperienceReason__Reward      = 2,
	EExperienceReason__EExperienceReason_MAX = 3,

};

// Enum GunfireRuntime.EProjectileBounceMode
enum class GunfireRuntime_EProjectileBounceMode : uint8_t
{
	EProjectileBounceMode__DoFullSimulation = 0,
	EProjectileBounceMode__StopAfterValidHit = 1,
	EProjectileBounceMode__StopAfterHitTarget = 2,
	EProjectileBounceMode__EProjectileBounceMode_MAX = 3,

};

// Enum GunfireRuntime.EProjectileSimMode
enum class GunfireRuntime_EProjectileSimMode : uint8_t
{
	EProjectileSimMode__HitsOnly   = 0,
	EProjectileSimMode__HitsAndOverlaps = 1,
	EProjectileSimMode__HitsAndOverlapsForcePawn = 2,
	EProjectileSimMode__EProjectileSimMode_MAX = 3,

};

// Enum GunfireRuntime.EQuestEntityOwnerContext
enum class GunfireRuntime_EQuestEntityOwnerContext : uint8_t
{
	EQuestEntityOwnerContext__Quest = 0,
	EQuestEntityOwnerContext__Actor = 1,
	EQuestEntityOwnerContext__EQuestEntityOwnerContext_MAX = 2,

};

// Enum GunfireRuntime.EQuestEventTreeType
enum class GunfireRuntime_EQuestEventTreeType : uint8_t
{
	EQuestEventTreeType__Default   = 0,
	EQuestEventTreeType__Interrupt = 1,
	EQuestEventTreeType__DialogOption = 2,
	EQuestEventTreeType__EQuestEventTreeType_MAX = 3,

};

// Enum GunfireRuntime.EQuestState
enum class GunfireRuntime_EQuestState : uint8_t
{
	EQuestState__None              = 0,
	EQuestState__Active            = 1,
	EQuestState__Complete          = 2,
	EQuestState__EQuestState_MAX   = 3,

};

// Enum GunfireRuntime.ERangedWeaponTrajectoryMode
enum class GunfireRuntime_ERangedWeaponTrajectoryMode : uint8_t
{
	ERangedWeaponTrajectoryMode__Socket = 0,
	ERangedWeaponTrajectoryMode__SocketToAimTarget = 1,
	ERangedWeaponTrajectoryMode__Camera = 2,
	ERangedWeaponTrajectoryMode__ERangedWeaponTrajectoryMode_MAX = 3,

};

// Enum GunfireRuntime.EResourceDistribution
enum class GunfireRuntime_EResourceDistribution : uint8_t
{
	EResourceDistribution__Quantity = 0,
	EResourceDistribution__Per10Tiles = 1,
	EResourceDistribution__Per100SpawnPoints = 2,
	EResourceDistribution__EResourceDistribution_MAX = 3,

};

// Enum GunfireRuntime.EReticulePieceDisableMode
enum class GunfireRuntime_EReticulePieceDisableMode : uint8_t
{
	EReticulePieceDisableMode__Always = 0,
	EReticulePieceDisableMode__WithConditions = 1,
	EReticulePieceDisableMode__Never = 2,
	EReticulePieceDisableMode__OnlyWhileDisabled = 3,
	EReticulePieceDisableMode__EReticulePieceDisableMode_MAX = 4,

};

// Enum GunfireRuntime.EReticuleAlignment
enum class GunfireRuntime_EReticuleAlignment : uint8_t
{
	EReticuleAlignment__Outside    = 0,
	EReticuleAlignment__Centered   = 1,
	EReticuleAlignment__EReticuleAlignment_MAX = 2,

};

// Enum GunfireRuntime.ESilhouetteVisibility
enum class GunfireRuntime_ESilhouetteVisibility : uint8_t
{
	ESilhouetteVisibility__WhenNotVisible = 0,
	ESilhouetteVisibility__WhenVisible = 1,
	ESilhouetteVisibility__Always  = 2,
	ESilhouetteVisibility__ESilhouetteVisibility_MAX = 3,

};

// Enum GunfireRuntime.ESilhouetteType
enum class GunfireRuntime_ESilhouetteType : uint8_t
{
	ESilhouetteType__Default       = 0,
	ESilhouetteType__Wounded       = 1,
	ESilhouetteType__ESilhouetteType_MAX = 2,

};

// Enum GunfireRuntime.ESpawnPointType
enum class GunfireRuntime_ESpawnPointType : uint8_t
{
	ESpawnPointType__Player        = 0,
	ESpawnPointType__Enemy         = 1,
	ESpawnPointType__ESpawnPointType_MAX = 2,

};

// Enum GunfireRuntime.ESpawnTableType
enum class GunfireRuntime_ESpawnTableType : uint8_t
{
	ESpawnTableType__List          = 0,
	ESpawnTableType__Table         = 1,
	ESpawnTableType__TableGroup    = 2,
	ESpawnTableType__IndividualChance = 3,
	ESpawnTableType__ESpawnTableType_MAX = 4,

};

// Enum GunfireRuntime.ESpawnThrottling
enum class GunfireRuntime_ESpawnThrottling : uint8_t
{
	ESpawnThrottling__NoThrottling = 0,
	ESpawnThrottling__ThrottleWeightOnPlayers = 1,
	ESpawnThrottling__ThrottleWeightFromAllSpawns = 2,
	ESpawnThrottling__ThrottleWeightFromEncounter = 3,
	ESpawnThrottling__ESpawnThrottling_MAX = 4,

};

// Enum GunfireRuntime.ESpawnFrom
enum class GunfireRuntime_ESpawnFrom : uint8_t
{
	ESpawnFrom__Random             = 0,
	ESpawnFrom__Cardinal           = 1,
	ESpawnFrom__Front              = 2,
	ESpawnFrom__Behind             = 3,
	ESpawnFrom__ESpawnFrom_MAX     = 4,

};

// Enum GunfireRuntime.ESpawnVisibility
enum class GunfireRuntime_ESpawnVisibility : uint8_t
{
	ESpawnVisibility__DontCare     = 0,
	ESpawnVisibility__OutOfSight   = 1,
	ESpawnVisibility__InView       = 2,
	ESpawnVisibility__InFieldOfView_OutOfSight = 3,
	ESpawnVisibility__ESpawnVisibility_MAX = 4,

};

// Enum GunfireRuntime.ESpawnFlags
enum class GunfireRuntime_ESpawnFlags : uint8_t
{
	ESpawnFlags__NavMesh           = 0,
	ESpawnFlags__NavAccessible     = 1,
	ESpawnFlags__OutOfSight        = 2,
	ESpawnFlags__InView            = 3,
	ESpawnFlags__InFieldOfView     = 4,
	ESpawnFlags__ESpawnFlags_MAX   = 5,

};

// Enum GunfireRuntime.ESplineAttachType
enum class GunfireRuntime_ESplineAttachType : uint8_t
{
	ESplineAttachType__LocationOnly = 0,
	ESplineAttachType__RotationOnly = 1,
	ESplineAttachType__LocationAndRotation = 2,
	ESplineAttachType__ESplineAttachType_MAX = 3,

};

// Enum GunfireRuntime.ESplineMovementDirection
enum class GunfireRuntime_ESplineMovementDirection : uint8_t
{
	ESplineMovementDirection__Forward = 0,
	ESplineMovementDirection__Backward = 1,
	ESplineMovementDirection__ESplineMovementDirection_MAX = 2,

};

// Enum GunfireRuntime.ESplineAttachmentRule
enum class GunfireRuntime_ESplineAttachmentRule : uint8_t
{
	ESplineAttachmentRule__Start   = 0,
	ESplineAttachmentRule__End     = 1,
	ESplineAttachmentRule__Closest = 2,
	ESplineAttachmentRule__CustomTime = 3,
	ESplineAttachmentRule__ESplineAttachmentRule_MAX = 4,

};

// Enum GunfireRuntime.ESwimmingStateMethod
enum class GunfireRuntime_ESwimmingStateMethod : uint8_t
{
	ESwimmingStateMethod__CurrentState = 0,
	ESwimmingStateMethod__Calculated = 1,
	ESwimmingStateMethod__ESwimmingStateMethod_MAX = 2,

};

// Enum GunfireRuntime.ESwimmingType
enum class GunfireRuntime_ESwimmingType : uint8_t
{
	ESwimmingType__Surface         = 0,
	ESwimmingType__Underwater      = 1,
	ESwimmingType__None            = 2,
	ESwimmingType__ESwimmingType_MAX = 3,

};

// Enum GunfireRuntime.ETagLocation
enum class GunfireRuntime_ETagLocation : uint8_t
{
	ETagLocation__Character        = 0,
	ETagLocation__Anim             = 1,
	ETagLocation__ETagLocation_MAX = 2,

};

// Enum GunfireRuntime.ETargetType
enum class GunfireRuntime_ETargetType : uint8_t
{
	ETargetType__Any               = 0,
	ETargetType__Camera            = 1,
	ETargetType__ETargetType_MAX   = 2,

};

// Enum GunfireRuntime.EAdhesionActivateMode
enum class GunfireRuntime_EAdhesionActivateMode : uint8_t
{
	EAdhesionActivateMode__Always  = 0,
	EAdhesionActivateMode__CameraInput = 1,
	EAdhesionActivateMode__CameraOrMoveInput = 2,
	EAdhesionActivateMode__EAdhesionActivateMode_MAX = 3,

};

// Enum GunfireRuntime.ETPSAimType
enum class GunfireRuntime_ETPSAimType : uint8_t
{
	ETPSAimType__None              = 0,
	ETPSAimType__Aim               = 1,
	ETPSAimType__Scope             = 2,
	ETPSAimType__ETPSAimType_MAX   = 3,

};

// Enum GunfireRuntime.ETPSCameraOrientation
enum class GunfireRuntime_ETPSCameraOrientation : uint8_t
{
	ETPSCameraOrientation__Undefined = 0,
	ETPSCameraOrientation__Left    = 1,
	ETPSCameraOrientation__Right   = 2,
	ETPSCameraOrientation__ETPSCameraOrientation_MAX = 3,

};

// Enum GunfireRuntime.EMapGenAttributeScope
enum class GunfireRuntime_EMapGenAttributeScope : uint8_t
{
	EMapGenAttributeScope__Tile    = 0,
	EMapGenAttributeScope__Region  = 1,
	EMapGenAttributeScope__World   = 2,
	EMapGenAttributeScope__EMapGenAttributeScope_MAX = 3,

};

// Enum GunfireRuntime.ETileDirection
enum class GunfireRuntime_ETileDirection : uint8_t
{
	ETileDirection__None           = 0,
	ETileDirection__North          = 1,
	ETileDirection__East           = 2,
	ETileDirection__South          = 3,
	ETileDirection__West           = 4,
	ETileDirection__ETileDirection_MAX = 5,

};

// Enum GunfireRuntime.ETileFlags
enum class GunfireRuntime_ETileFlags : uint8_t
{
	ETileFlags__AllowSpawns        = 0,
	ETileFlags__AllowQuests        = 1,
	ETileFlags__NoNavValidate      = 2,
	ETileFlags__ETileFlags_MAX     = 3,

};

// Enum GunfireRuntime.ETileLODType
enum class GunfireRuntime_ETileLODType : uint8_t
{
	ETileLODType__None             = 0,
	ETileLODType__Near             = 1,
	ETileLODType__Distant          = 2,
	ETileLODType__ETileLODType_MAX = 3,

};

// Enum GunfireRuntime.ETweenRoot
enum class GunfireRuntime_ETweenRoot : uint8_t
{
	ETweenRoot__ActorPosition      = 0,
	ETweenRoot__RootNodePosition   = 1,
	ETweenRoot__ETweenRoot_MAX     = 2,

};

// Enum GunfireRuntime.EEaseType
enum class GunfireRuntime_EEaseType : uint8_t
{
	EEaseType__EaseIn              = 0,
	EEaseType__EaseOut             = 1,
	EEaseType__EaseInOut           = 2,
	EEaseType__EEaseType_MAX       = 3,

};

// Enum GunfireRuntime.EDialogBeginMethod
enum class GunfireRuntime_EDialogBeginMethod : uint8_t
{
	EDialogBeginMethod__AddDuplicates = 0,
	EDialogBeginMethod__AddIfNotOnTop = 1,
	EDialogBeginMethod__AddIfNotOnStack = 2,
	EDialogBeginMethod__EDialogBeginMethod_MAX = 3,

};

// Enum GunfireRuntime.EDialogLocation
enum class GunfireRuntime_EDialogLocation : uint8_t
{
	EDialogLocation__None          = 0,
	EDialogLocation__Center        = 1,
	EDialogLocation__CameraCenter  = 2,
	EDialogLocation__HMDAnchor     = 3,
	EDialogLocation__EDialogLocation_MAX = 4,

};

// Enum GunfireRuntime.EDisabledWeaponVisuals
enum class GunfireRuntime_EDisabledWeaponVisuals : uint8_t
{
	EDisabledWeaponVisuals__ShowDefaultReticule = 0,
	EDisabledWeaponVisuals__ShowReticule = 1,
	EDisabledWeaponVisuals__ShowReticuleWithDisabledColor = 2,
	EDisabledWeaponVisuals__EDisabledWeaponVisuals_MAX = 3,

};

// Enum GunfireRuntime.EUIEaseType
enum class GunfireRuntime_EUIEaseType : uint8_t
{
	EUIEaseType__EaseIn            = 0,
	EUIEaseType__EaseOut           = 1,
	EUIEaseType__EaseInOut         = 2,
	EUIEaseType__SmoothCD          = 3,
	EUIEaseType__EUIEaseType_MAX   = 4,

};

// Enum GunfireRuntime.EUsableActivationType
enum class GunfireRuntime_EUsableActivationType : uint8_t
{
	EUsableActivationType__Press   = 0,
	EUsableActivationType__PressAndNoHold = 1,
	EUsableActivationType__Hold    = 2,
	EUsableActivationType__EUsableActivationType_MAX = 3,

};

// Enum GunfireRuntime.EVarType
enum class GunfireRuntime_EVarType : uint8_t
{
	EVarType__Bool                 = 0,
	EVarType__Number               = 1,
	EVarType__Name                 = 2,
	EVarType__Object               = 3,
	EVarType__EVarType_MAX         = 4,

};

// Enum GunfireRuntime.EBlackboardVariableType
enum class GunfireRuntime_EBlackboardVariableType : uint8_t
{
	EBlackboardVariableType__Object = 0,
	EBlackboardVariableType__Class = 1,
	EBlackboardVariableType__Int   = 2,
	EBlackboardVariableType__Float = 3,
	EBlackboardVariableType__Bool  = 4,
	EBlackboardVariableType__String = 5,
	EBlackboardVariableType__Name  = 6,
	EBlackboardVariableType__EBlackboardVariableType_MAX = 7,

};

// Enum GunfireRuntime.EVaultType
enum class GunfireRuntime_EVaultType : uint8_t
{
	EVaultType__VaultOver          = 0,
	EVaultType__VaultUp            = 1,
	EVaultType__EVaultType_MAX     = 2,

};

// Enum GunfireRuntime.EVelocityType
enum class GunfireRuntime_EVelocityType : uint8_t
{
	EVelocityType__Full            = 0,
	EVelocityType__Horizontal      = 1,
	EVelocityType__Vertical        = 2,
	EVelocityType__EVelocityType_MAX = 3,

};

// Enum GunfireRuntime.EParamApply
enum class GunfireRuntime_EParamApply : uint8_t
{
	EParamApply__ApplyOnAdd        = 0,
	EParamApply__ApplyOnRemove     = 1,
	EParamApply__ApplyOnAddAndReverseOnRemove = 2,
	EParamApply__EParamApply_MAX   = 3,

};

// Enum GunfireRuntime.EVisualMaterialParameterType
enum class GunfireRuntime_EVisualMaterialParameterType : uint8_t
{
	EVisualMaterialParameterType__Scalar = 0,
	EVisualMaterialParameterType__Color = 1,
	EVisualMaterialParameterType__Texture = 2,
	EVisualMaterialParameterType__Tween = 3,
	EVisualMaterialParameterType__EVisualMaterialParameterType_MAX = 4,

};

// Enum GunfireRuntime.EVitalityInitialValue
enum class GunfireRuntime_EVitalityInitialValue : uint8_t
{
	EVitalityInitialValue__Zero    = 0,
	EVitalityInitialValue__Max     = 1,

};

// Enum GunfireRuntime.EWallCheckType
enum class GunfireRuntime_EWallCheckType : uint8_t
{
	EWallCheckType__Full           = 0,
	EWallCheckType__Horizontal     = 1,
	EWallCheckType__Vertical       = 2,
	EWallCheckType__None           = 3,
	EWallCheckType__EWallCheckType_MAX = 4,

};

// Enum GunfireRuntime.EWaterSurfaceDirection
enum class GunfireRuntime_EWaterSurfaceDirection : uint8_t
{
	EWaterSurfaceDirection__On     = 0,
	EWaterSurfaceDirection__Above  = 1,
	EWaterSurfaceDirection__Below  = 2,
	EWaterSurfaceDirection__EWaterSurfaceDirection_MAX = 3,

};

// Enum GunfireRuntime.EWaterSurfaceTraversalType
enum class GunfireRuntime_EWaterSurfaceTraversalType : uint8_t
{
	EWaterSurfaceTraversalType__Emerge = 0,
	EWaterSurfaceTraversalType__Submerge = 1,
	EWaterSurfaceTraversalType__EWaterSurfaceTraversalType_MAX = 2,

};

// Enum GunfireRuntime.EWeaponAffinityType
enum class GunfireRuntime_EWeaponAffinityType : uint8_t
{
	EWeaponAffinityType__Bonus     = 0,
	EWeaponAffinityType__Modifier  = 1,
	EWeaponAffinityType__EWeaponAffinityType_MAX = 2,

};

// Enum GunfireRuntime.EEffectSpawnDirection
enum class GunfireRuntime_EEffectSpawnDirection : uint8_t
{
	EEffectSpawnDirection__ImpactNormal = 0,
	EEffectSpawnDirection__PhantomDirection = 1,
	EEffectSpawnDirection__NegativePhantomDirection = 2,
	EEffectSpawnDirection__RandomDirection = 3,
	EEffectSpawnDirection__SpecificDirection = 4,
	EEffectSpawnDirection__EEffectSpawnDirection_MAX = 5,

};

// Enum GunfireRuntime.EWeaponPhantomType
enum class GunfireRuntime_EWeaponPhantomType : uint8_t
{
	EWeaponPhantomType__Dynamic    = 0,
	EWeaponPhantomType__Discrete   = 1,
	EWeaponPhantomType__EWeaponPhantomType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GunfireRuntime.DamageInfo
// 0x0000
struct FDamageInfo : public FDamageEvent
{

};

// ScriptStruct GunfireRuntime.DamageInfoVariable
// 0x0000
struct FDamageInfoVariable
{

};

// ScriptStruct GunfireRuntime.ContextualDialogResponse
// 0x0000
struct FContextualDialogResponse : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.ItemSocketSlot
// 0x0000
struct FItemSocketSlot
{

};

// ScriptStruct GunfireRuntime.ReceptacleSlot
// 0x0000
struct FReceptacleSlot
{

};

// ScriptStruct GunfireRuntime.TutorialPrompt
// 0x0000
struct FTutorialPrompt : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.SequencerPlayerSettings
// 0x0000
struct FSequencerPlayerSettings
{

};

// ScriptStruct GunfireRuntime.EventTreeStage
// 0x0000
struct FEventTreeStage
{

};

// ScriptStruct GunfireRuntime.EventTreeAttrib
// 0x0000
struct FEventTreeAttrib
{

};

// ScriptStruct GunfireRuntime.TileCoord
// 0x0000
struct FTileCoord
{

};

// ScriptStruct GunfireRuntime.HudInteractive
// 0x0000
struct FHudInteractive
{

};

// ScriptStruct GunfireRuntime.SpawnList
// 0x0000
struct FSpawnList
{

};

// ScriptStruct GunfireRuntime.SpawnEntry
// 0x0000
struct FSpawnEntry
{

};

// ScriptStruct GunfireRuntime.StatData
// 0x0000
struct FStatData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.AchievementId
// 0x0000
struct FAchievementId
{

};

// ScriptStruct GunfireRuntime.ActorStateDecorators
// 0x0000
struct FActorStateDecorators
{

};

// ScriptStruct GunfireRuntime.ActorStateID
// 0x0000
struct FActorStateID
{

};

// ScriptStruct GunfireRuntime.AdvButtonStyle
// 0x0000
struct FAdvButtonStyle : public FSlateWidgetStyle
{

};

// ScriptStruct GunfireRuntime.FontStyleConfigEntry
// 0x0000
struct FFontStyleConfigEntry
{

};

// ScriptStruct GunfireRuntime.OwnedAIData
// 0x0000
struct FOwnedAIData
{

};

// ScriptStruct GunfireRuntime.SpawnPointList
// 0x0000
struct FSpawnPointList
{

};

// ScriptStruct GunfireRuntime.SpawnPointTransform
// 0x0000
struct FSpawnPointTransform
{

};

// ScriptStruct GunfireRuntime.AINavigationLink
// 0x0000
struct FAINavigationLink : public FNavigationLinkBase
{

};

// ScriptStruct GunfireRuntime.SpawnGenerator
// 0x0000
struct FSpawnGenerator
{

};

// ScriptStruct GunfireRuntime.EncounterGroup
// 0x0000
struct FEncounterGroup
{

};

// ScriptStruct GunfireRuntime.AIDirectorPlayer
// 0x0000
struct FAIDirectorPlayer
{

};

// ScriptStruct GunfireRuntime.AIDirectorParams
// 0x0000
struct FAIDirectorParams : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.EnvQueryQuery
// 0x0000
struct FEnvQueryQuery : public FEQSParametrizedQueryExecutionRequest
{

};

// ScriptStruct GunfireRuntime.RelevantActor
// 0x0000
struct FRelevantActor
{

};

// ScriptStruct GunfireRuntime.AITacticalPoint
// 0x0000
struct FAITacticalPoint
{

};

// ScriptStruct GunfireRuntime.AmbientAudioChannel
// 0x0000
struct FAmbientAudioChannel
{

};

// ScriptStruct GunfireRuntime.AmbientSoundMix
// 0x0000
struct FAmbientSoundMix
{

};

// ScriptStruct GunfireRuntime.TileAmbientSpawns
// 0x0000
struct FTileAmbientSpawns
{

};

// ScriptStruct GunfireRuntime.TileAmbientSpawnRegion
// 0x0000
struct FTileAmbientSpawnRegion
{

};

// ScriptStruct GunfireRuntime.AmbientSpawn
// 0x0000
struct FAmbientSpawn
{

};

// ScriptStruct GunfireRuntime.AnimationHandle
// 0x0000
struct FAnimationHandle
{

};

// ScriptStruct GunfireRuntime.AnimationID
// 0x0000
struct FAnimationID
{

};

// ScriptStruct GunfireRuntime.AnimationEntry
// 0x0000
struct FAnimationEntry
{

};

// ScriptStruct GunfireRuntime.GunfireAnimInstanceProxy
// 0x0000
struct FGunfireAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct GunfireRuntime.LegIkEffector
// 0x0000
struct FLegIkEffector
{

};

// ScriptStruct GunfireRuntime.AnimationLayer
// 0x0000
struct FAnimationLayer
{

};

// ScriptStruct GunfireRuntime.AnimNode_3DBlend
// 0x0000
struct FAnimNode_3DBlend : public FAnimNode_Base
{

};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID
// 0x0000
struct FAnimNode_BlendByAnimationID : public FAnimNode_Base
{

};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID_Anim
// 0x0000
struct FAnimNode_BlendByAnimationID_Anim
{

};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimSetAnim
// 0x0000
struct FAnimNode_PlayAnimSetAnim : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID_Animation
// 0x0000
struct FAnimNode_BlendByAnimationID_Animation
{

};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimTags
// 0x0000
struct FAnimNode_BlendByAnimTags : public FAnimNode_Base
{

};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimTags_Entry
// 0x0000
struct FAnimNode_BlendByAnimTags_Entry
{

};

// ScriptStruct GunfireRuntime.AnimNode_CompositeBlendSpacePlayer
// 0x0000
struct FAnimNode_CompositeBlendSpacePlayer : public FAnimNode_Base
{

};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimByAnimTags
// 0x0000
struct FAnimNode_PlayAnimByAnimTags : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimByAnimTags_AnimEntry
// 0x0000
struct FAnimNode_PlayAnimByAnimTags_AnimEntry
{

};

// ScriptStruct GunfireRuntime.AnimNode_RandomBlend
// 0x0000
struct FAnimNode_RandomBlend : public FAnimNode_BlendListBase
{

};

// ScriptStruct GunfireRuntime.TagParticleEffectPair
// 0x0000
struct FTagParticleEffectPair
{

};

// ScriptStruct GunfireRuntime.Attribute
// 0x0000
struct FAttribute
{

};

// ScriptStruct GunfireRuntime.AttributeLevel
// 0x0000
struct FAttributeLevel
{

};

// ScriptStruct GunfireRuntime.AudioState
// 0x0000
struct FAudioState
{

};

// ScriptStruct GunfireRuntime.WorldSound
// 0x0000
struct FWorldSound
{

};

// ScriptStruct GunfireRuntime.CustomCameraBlend
// 0x0000
struct FCustomCameraBlend
{

};

// ScriptStruct GunfireRuntime.ChallengeRank
// 0x0000
struct FChallengeRank
{

};

// ScriptStruct GunfireRuntime.ChallengeInstance
// 0x0000
struct FChallengeInstance
{

};

// ScriptStruct GunfireRuntime.ChallengeRankInstance
// 0x0000
struct FChallengeRankInstance
{

};

// ScriptStruct GunfireRuntime.ActiveRagdollInfo
// 0x0000
struct FActiveRagdollInfo
{

};

// ScriptStruct GunfireRuntime.Cooldown
// 0x0000
struct FCooldown : public FStatData
{

};

// ScriptStruct GunfireRuntime.CharacterData
// 0x0000
struct FCharacterData : public FStatData
{

};

// ScriptStruct GunfireRuntime.CheatCommands
// 0x0000
struct FCheatCommands
{

};

// ScriptStruct GunfireRuntime.CheatCommandDetails
// 0x0000
struct FCheatCommandDetails
{

};

// ScriptStruct GunfireRuntime.CheatInputAction
// 0x0000
struct FCheatInputAction
{

};

// ScriptStruct GunfireRuntime.AttachedChild
// 0x0000
struct FAttachedChild
{

};

// ScriptStruct GunfireRuntime.ProjectileParams
// 0x0000
struct FProjectileParams
{

};

// ScriptStruct GunfireRuntime.TargetingColorParams
// 0x0000
struct FTargetingColorParams
{

};

// ScriptStruct GunfireRuntime.ReplicatedHits
// 0x0000
struct FReplicatedHits
{

};

// ScriptStruct GunfireRuntime.Conditions
// 0x0000
struct FConditions
{

};

// ScriptStruct GunfireRuntime.RecipeInfo
// 0x0000
struct FRecipeInfo
{

};

// ScriptStruct GunfireRuntime.IngredientInfo
// 0x0000
struct FIngredientInfo
{

};

// ScriptStruct GunfireRuntime.Recipe
// 0x0000
struct FRecipe : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.RecipeList
// 0x0000
struct FRecipeList
{

};

// ScriptStruct GunfireRuntime.DeployableAttributes
// 0x0000
struct FDeployableAttributes
{

};

// ScriptStruct GunfireRuntime.Dialog
// 0x0000
struct FDialog
{

};

// ScriptStruct GunfireRuntime.DialogInfo
// 0x0000
struct FDialogInfo
{

};

// ScriptStruct GunfireRuntime.DialogOption
// 0x0000
struct FDialogOption
{

};

// ScriptStruct GunfireRuntime.DialogTokenValuePair
// 0x0000
struct FDialogTokenValuePair
{

};

// ScriptStruct GunfireRuntime.DifficultyScalingData
// 0x0000
struct FDifficultyScalingData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.DissolveMaterial
// 0x0000
struct FDissolveMaterial
{

};

// ScriptStruct GunfireRuntime.EncounterSpawn
// 0x0000
struct FEncounterSpawn
{

};

// ScriptStruct GunfireRuntime.EquipmentMods
// 0x0000
struct FEquipmentMods
{

};

// ScriptStruct GunfireRuntime.EquipmentModData
// 0x0000
struct FEquipmentModData
{

};

// ScriptStruct GunfireRuntime.EquipmentModSlot
// 0x0000
struct FEquipmentModSlot
{

};

// ScriptStruct GunfireRuntime.EquipmentAttachment
// 0x0000
struct FEquipmentAttachment
{

};

// ScriptStruct GunfireRuntime.ColorMapping
// 0x0000
struct FColorMapping
{

};

// ScriptStruct GunfireRuntime.EventTreeContext
// 0x0000
struct FEventTreeContext
{

};

// ScriptStruct GunfireRuntime.EventTreeNodeCondition
// 0x0000
struct FEventTreeNodeCondition
{

};

// ScriptStruct GunfireRuntime.NodeDisplayData
// 0x0000
struct FNodeDisplayData
{

};

// ScriptStruct GunfireRuntime.FactionDamageTracker
// 0x0000
struct FFactionDamageTracker
{

};

// ScriptStruct GunfireRuntime.FactionOverride
// 0x0000
struct FFactionOverride
{

};

// ScriptStruct GunfireRuntime.FactionAffiliation
// 0x0000
struct FFactionAffiliation
{

};

// ScriptStruct GunfireRuntime.TabFocusInfo
// 0x0000
struct FTabFocusInfo
{

};

// ScriptStruct GunfireRuntime.TabGroup
// 0x0000
struct FTabGroup
{

};

// ScriptStruct GunfireRuntime.FocusInfo
// 0x0000
struct FFocusInfo
{

};

// ScriptStruct GunfireRuntime.VisitedCoordinates
// 0x0000
struct FVisitedCoordinates
{

};

// ScriptStruct GunfireRuntime.VisibleCoordinate
// 0x0000
struct FVisibleCoordinate
{

};

// ScriptStruct GunfireRuntime.MultiplayerScalingData
// 0x0000
struct FMultiplayerScalingData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.EnumCVDUserSettingEntry
// 0x0000
struct FEnumCVDUserSettingEntry
{

};

// ScriptStruct GunfireRuntime.EnumUserSettingEntry
// 0x0000
struct FEnumUserSettingEntry
{

};

// ScriptStruct GunfireRuntime.CachedMaterialState
// 0x0000
struct FCachedMaterialState
{

};

// ScriptStruct GunfireRuntime.ActorQueryResult
// 0x0000
struct FActorQueryResult
{

};

// ScriptStruct GunfireRuntime.ActorQueryFilter
// 0x0000
struct FActorQueryFilter
{

};

// ScriptStruct GunfireRuntime.SimplePoolPrecache
// 0x0000
struct FSimplePoolPrecache
{

};

// ScriptStruct GunfireRuntime.HeuristicBoundsTraceParams
// 0x0000
struct FHeuristicBoundsTraceParams
{

};

// ScriptStruct GunfireRuntime.HeuristicBoundsHitResult
// 0x0000
struct FHeuristicBoundsHitResult
{

};

// ScriptStruct GunfireRuntime.HitLocationInfo
// 0x0000
struct FHitLocationInfo
{

};

// ScriptStruct GunfireRuntime.ImpactFX
// 0x0000
struct FImpactFX
{

};

// ScriptStruct GunfireRuntime.ImpactFXDecalCurves
// 0x0000
struct FImpactFXDecalCurves
{

};

// ScriptStruct GunfireRuntime.RebindedInputAxis
// 0x0000
struct FRebindedInputAxis
{

};

// ScriptStruct GunfireRuntime.RebindedInputAction
// 0x0000
struct FRebindedInputAction
{

};

// ScriptStruct GunfireRuntime.GenericInput
// 0x0000
struct FGenericInput
{

};

// ScriptStruct GunfireRuntime.InputButton
// 0x0000
struct FInputButton
{

};

// ScriptStruct GunfireRuntime.InputActivity
// 0x0000
struct FInputActivity
{

};

// ScriptStruct GunfireRuntime.InspectInfo
// 0x0000
struct FInspectInfo
{

};

// ScriptStruct GunfireRuntime.InspectMod
// 0x0000
struct FInspectMod
{

};

// ScriptStruct GunfireRuntime.InspectStat
// 0x0000
struct FInspectStat
{

};

// ScriptStruct GunfireRuntime.StatInfo
// 0x0000
struct FStatInfo
{

};

// ScriptStruct GunfireRuntime.InterpolatedSoundClassAdjuster
// 0x0000
struct FInterpolatedSoundClassAdjuster
{

};

// ScriptStruct GunfireRuntime.InventoryScalingInfo
// 0x0000
struct FInventoryScalingInfo
{

};

// ScriptStruct GunfireRuntime.InventoryResult
// 0x0000
struct FInventoryResult
{

};

// ScriptStruct GunfireRuntime.EquipmentSlot
// 0x0000
struct FEquipmentSlot
{

};

// ScriptStruct GunfireRuntime.EquipmentAttachPointOverride
// 0x0000
struct FEquipmentAttachPointOverride
{

};

// ScriptStruct GunfireRuntime.InventoryItem
// 0x0000
struct FInventoryItem
{

};

// ScriptStruct GunfireRuntime.ItemGenRequest
// 0x0000
struct FItemGenRequest
{

};

// ScriptStruct GunfireRuntime.ItemGenResult
// 0x0000
struct FItemGenResult
{

};

// ScriptStruct GunfireRuntime.ItemQueryResult
// 0x0000
struct FItemQueryResult
{

};

// ScriptStruct GunfireRuntime.ItemQueryFilter
// 0x0000
struct FItemQueryFilter
{

};

// ScriptStruct GunfireRuntime.ItemStatInfo
// 0x0000
struct FItemStatInfo
{

};

// ScriptStruct GunfireRuntime.LevelInstanceStatus
// 0x0000
struct FLevelInstanceStatus
{

};

// ScriptStruct GunfireRuntime.LevelInstanceInfo
// 0x0000
struct FLevelInstanceInfo
{

};

// ScriptStruct GunfireRuntime.LODVolumeSubFilter
// 0x0000
struct FLODVolumeSubFilter
{

};

// ScriptStruct GunfireRuntime.LODVolumeDistanceFilter
// 0x0000
struct FLODVolumeDistanceFilter : public FLODVolumeSubFilter
{

};

// ScriptStruct GunfireRuntime.LODVolumeInfo
// 0x0000
struct FLODVolumeInfo
{

};

// ScriptStruct GunfireRuntime.MapSettings
// 0x0000
struct FMapSettings
{

};

// ScriptStruct GunfireRuntime.MiniMapActorRef
// 0x0000
struct FMiniMapActorRef
{

};

// ScriptStruct GunfireRuntime.TransformWithSnapResults
// 0x0000
struct FTransformWithSnapResults
{

};

// ScriptStruct GunfireRuntime.MiniMapEntry
// 0x0000
struct FMiniMapEntry
{

};

// ScriptStruct GunfireRuntime.MiniMapMeshMapIndex
// 0x0000
struct FMiniMapMeshMapIndex : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.MiniMapActorInfo
// 0x0000
struct FMiniMapActorInfo
{

};

// ScriptStruct GunfireRuntime.MovieSceneDialogSectionTemplate
// 0x0000
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct GunfireRuntime.MovieSceneDialogSectionTemplateData
// 0x0000
struct FMovieSceneDialogSectionTemplateData
{

};

// ScriptStruct GunfireRuntime.MovieSceneEventTreeSectionData
// 0x0000
struct FMovieSceneEventTreeSectionData : public FMovieSceneChannel
{

};

// ScriptStruct GunfireRuntime.EventTreePayload
// 0x0000
struct FEventTreePayload
{

};

// ScriptStruct GunfireRuntime.MovieSceneEventTreeSectionTemplate
// 0x0000
struct FMovieSceneEventTreeSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct GunfireRuntime.MovieSceneSoundSetSectionTemplate
// 0x0000
struct FMovieSceneSoundSetSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct GunfireRuntime.MovieSceneSoundSetSectionTemplateData
// 0x0000
struct FMovieSceneSoundSetSectionTemplateData
{

};

// ScriptStruct GunfireRuntime.ActiveMusicSet
// 0x0000
struct FActiveMusicSet
{

};

// ScriptStruct GunfireRuntime.MusicStinger
// 0x0000
struct FMusicStinger
{

};

// ScriptStruct GunfireRuntime.MusicState
// 0x0000
struct FMusicState
{

};

// ScriptStruct GunfireRuntime.LookTarget
// 0x0000
struct FLookTarget
{

};

// ScriptStruct GunfireRuntime.PerNodePathSharingData
// 0x0000
struct FPerNodePathSharingData
{

};

// ScriptStruct GunfireRuntime.PhysicsImpactSoundInfo
// 0x0000
struct FPhysicsImpactSoundInfo
{

};

// ScriptStruct GunfireRuntime.CachedPhysicsComponent
// 0x0000
struct FCachedPhysicsComponent
{

};

// ScriptStruct GunfireRuntime.PlayStateContext
// 0x0000
struct FPlayStateContext
{

};

// ScriptStruct GunfireRuntime.PositionValue
// 0x0000
struct FPositionValue
{

};

// ScriptStruct GunfireRuntime.ExperienceData
// 0x0000
struct FExperienceData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.ProjectileVisualizationContext
// 0x0000
struct FProjectileVisualizationContext
{

};

// ScriptStruct GunfireRuntime.ProjectileVisualizationParams
// 0x0000
struct FProjectileVisualizationParams
{

};

// ScriptStruct GunfireRuntime.QuestEntityEventTree
// 0x0000
struct FQuestEntityEventTree
{

};

// ScriptStruct GunfireRuntime.QuestDebugProperty
// 0x0000
struct FQuestDebugProperty
{

};

// ScriptStruct GunfireRuntime.RangedWeaponMode
// 0x0000
struct FRangedWeaponMode
{

};

// ScriptStruct GunfireRuntime.WeaponStatData
// 0x0000
struct FWeaponStatData : public FStatData
{

};

// ScriptStruct GunfireRuntime.RangedWeaponData
// 0x0000
struct FRangedWeaponData : public FWeaponStatData
{

};

// ScriptStruct GunfireRuntime.CustomWeaponSpread
// 0x0000
struct FCustomWeaponSpread
{

};

// ScriptStruct GunfireRuntime.ReplicatedLocation
// 0x0000
struct FReplicatedLocation
{

};

// ScriptStruct GunfireRuntime.ReplicatedTrace
// 0x0000
struct FReplicatedTrace : public FReplicatedLocation
{

};

// ScriptStruct GunfireRuntime.ReplicatedHit
// 0x0000
struct FReplicatedHit : public FReplicatedTrace
{

};

// ScriptStruct GunfireRuntime.ReplicatedMovementInfo
// 0x0000
struct FReplicatedMovementInfo
{

};

// ScriptStruct GunfireRuntime.TileResources
// 0x0000
struct FTileResources
{

};

// ScriptStruct GunfireRuntime.ResourceType
// 0x0000
struct FResourceType
{

};

// ScriptStruct GunfireRuntime.RuleData
// 0x0000
struct FRuleData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.LevelSequencePossession
// 0x0000
struct FLevelSequencePossession
{

};

// ScriptStruct GunfireRuntime.QueuedSpawn
// 0x0000
struct FQueuedSpawn
{

};

// ScriptStruct GunfireRuntime.SpawnPointInfo
// 0x0000
struct FSpawnPointInfo
{

};

// ScriptStruct GunfireRuntime.SpawnedActor
// 0x0000
struct FSpawnedActor
{

};

// ScriptStruct GunfireRuntime.InteractiveInfo
// 0x0000
struct FInteractiveInfo
{

};

// ScriptStruct GunfireRuntime.StateID
// 0x0000
struct FStateID
{

};

// ScriptStruct GunfireRuntime.StateMachineSubobjectArray
// 0x0000
struct FStateMachineSubobjectArray
{

};

// ScriptStruct GunfireRuntime.StateMachineSubobjectArrayElement
// 0x0000
struct FStateMachineSubobjectArrayElement
{

};

// ScriptStruct GunfireRuntime.StatDecoratorStat
// 0x0000
struct FStatDecoratorStat
{

};

// ScriptStruct GunfireRuntime.StatValue
// 0x0000
struct FStatValue
{

};

// ScriptStruct GunfireRuntime.SubtitleInfo
// 0x0000
struct FSubtitleInfo
{

};

// ScriptStruct GunfireRuntime.SurfaceOrientFeeler
// 0x0000
struct FSurfaceOrientFeeler
{

};

// ScriptStruct GunfireRuntime.TargetAlignRequest
// 0x0000
struct FTargetAlignRequest
{

};

// ScriptStruct GunfireRuntime.TargetTraceParams
// 0x0000
struct FTargetTraceParams
{

};

// ScriptStruct GunfireRuntime.TileSpawnList
// 0x0000
struct FTileSpawnList
{

};

// ScriptStruct GunfireRuntime.TileBase
// 0x0000
struct FTileBase
{

};

// ScriptStruct GunfireRuntime.Tile
// 0x0000
struct FTile : public FTileBase
{

};

// ScriptStruct GunfireRuntime.MapGenAttribute
// 0x0000
struct FMapGenAttribute
{

};

// ScriptStruct GunfireRuntime.TileEdges
// 0x0000
struct FTileEdges
{

};

// ScriptStruct GunfireRuntime.TimeDilationEffectHandle
// 0x0000
struct FTimeDilationEffectHandle
{

};

// ScriptStruct GunfireRuntime.TraitSlot
// 0x0000
struct FTraitSlot
{

};

// ScriptStruct GunfireRuntime.TraitInfo
// 0x0000
struct FTraitInfo
{

};

// ScriptStruct GunfireRuntime.TraitPointsPerLevelData
// 0x0000
struct FTraitPointsPerLevelData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.DamageNumberParameters
// 0x0000
struct FDamageNumberParameters
{

};

// ScriptStruct GunfireRuntime.VariableInfo
// 0x0000
struct FVariableInfo
{

};

// ScriptStruct GunfireRuntime.BlackboardObjectValue
// 0x0000
struct FBlackboardObjectValue
{

};

// ScriptStruct GunfireRuntime.BlackboardClassValue
// 0x0000
struct FBlackboardClassValue
{

};

// ScriptStruct GunfireRuntime.BlackboardStringValue
// 0x0000
struct FBlackboardStringValue
{

};

// ScriptStruct GunfireRuntime.BlackboardBoolValue
// 0x0000
struct FBlackboardBoolValue
{

};

// ScriptStruct GunfireRuntime.BlackboardNumValue
// 0x0000
struct FBlackboardNumValue
{

};

// ScriptStruct GunfireRuntime.RandomStaticMesh
// 0x0000
struct FRandomStaticMesh
{

};

// ScriptStruct GunfireRuntime.VisualMaterialParam
// 0x0000
struct FVisualMaterialParam
{

};

// ScriptStruct GunfireRuntime.VisualMaterialReplacement
// 0x0000
struct FVisualMaterialReplacement
{

};

// ScriptStruct GunfireRuntime.RandomSkinMesh
// 0x0000
struct FRandomSkinMesh
{

};

// ScriptStruct GunfireRuntime.VisualSceneComponent
// 0x0000
struct FVisualSceneComponent
{

};

// ScriptStruct GunfireRuntime.VisualSlot
// 0x0000
struct FVisualSlot
{

};

// ScriptStruct GunfireRuntime.WaterFXOverride
// 0x0000
struct FWaterFXOverride
{

};

// ScriptStruct GunfireRuntime.WaterFXEntry
// 0x0000
struct FWaterFXEntry
{

};

// ScriptStruct GunfireRuntime.WeaponAffinity
// 0x0000
struct FWeaponAffinity
{

};

// ScriptStruct GunfireRuntime.WeaponPhantomProvider
// 0x0000
struct FWeaponPhantomProvider
{

};

// ScriptStruct GunfireRuntime.ActiveWeaponPhantom
// 0x0000
struct FActiveWeaponPhantom
{

};

// ScriptStruct GunfireRuntime.PhantomKeyframe
// 0x0000
struct FPhantomKeyframe
{

};

// ScriptStruct GunfireRuntime.WeaponPhantomShape
// 0x0000
struct FWeaponPhantomShape
{

};

// ScriptStruct GunfireRuntime.WorldSoundList
// 0x0000
struct FWorldSoundList
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
