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
// Parameters
//---------------------------------------------------------------------------

// Function Remnant.ActionBuff.ResetTimer
struct UActionBuff_ResetTimer_Params
{
};

// Function Remnant.ActionBuff.PauseDuration
struct UActionBuff_PauseDuration_Params
{
};

// Function Remnant.ActionBuff.IsDurationPaused
struct UActionBuff_IsDurationPaused_Params
{
};

// Function Remnant.ActionBuff.GetRemainingTime
struct UActionBuff_GetRemainingTime_Params
{
};

// Function Remnant.ActionBuff.GetElapsedTimePct
struct UActionBuff_GetElapsedTimePct_Params
{
};

// Function Remnant.ActionBuff.GetDesiredVisual
struct UActionBuff_GetDesiredVisual_Params
{
};

// Function Remnant.ActionBuff.ApplyTimerDelta
struct UActionBuff_ApplyTimerDelta_Params
{
};

// Function Remnant.Checkpoint.OnFinishActivation
struct ACheckpoint_OnFinishActivation_Params
{
};

// Function Remnant.Checkpoint.OnEndGrab
struct ACheckpoint_OnEndGrab_Params
{
};

// Function Remnant.Checkpoint.OnBeginGrab
struct ACheckpoint_OnBeginGrab_Params
{
};

// Function Remnant.Checkpoint.OnBeginActivation
struct ACheckpoint_OnBeginActivation_Params
{
};

// Function Remnant.Checkpoint.OnActivate
struct ACheckpoint_OnActivate_Params
{
};

// Function Remnant.Checkpoint.CanCheckpointActivate
struct ACheckpoint_CanCheckpointActivate_Params
{
};

// Function Remnant.DragonHeart.Regenerate
struct ADragonHeart_Regenerate_Params
{
};

// Function Remnant.DragonHeart.GetMaxCurrentQuantity
struct ADragonHeart_GetMaxCurrentQuantity_Params
{
};

// Function Remnant.Emote.GetIcon
struct UEmote_GetIcon_Params
{
};

// Function Remnant.EmotesComponent.UnlockEmote
struct UEmotesComponent_UnlockEmote_Params
{
};

// Function Remnant.EmotesComponent.SlotEmote
struct UEmotesComponent_SlotEmote_Params
{
};

// Function Remnant.EmotesComponent.ServerUpdateSlots
struct UEmotesComponent_ServerUpdateSlots_Params
{
};

// Function Remnant.EmotesComponent.ServerUnlockEmote
struct UEmotesComponent_ServerUnlockEmote_Params
{
};

// Function Remnant.EmotesComponent.RequestEmoteIcon
struct UEmotesComponent_RequestEmoteIcon_Params
{
};

// Function Remnant.EmotesComponent.OnLoadIcon
struct UEmotesComponent_OnLoadIcon_Params
{
};

// Function Remnant.EmotesComponent.HasEmote
struct UEmotesComponent_HasEmote_Params
{
};

// Function Remnant.EmotesComponent.GetUnlockedEmotes
struct UEmotesComponent_GetUnlockedEmotes_Params
{
};

// Function Remnant.EmotesComponent.GetEmoteForSlot
struct UEmotesComponent_GetEmoteForSlot_Params
{
};

// Function Remnant.EmotesComponent.ClearEmoteIcon
struct UEmotesComponent_ClearEmoteIcon_Params
{
};

// Function Remnant.EmotesComponent.ClearAllEmoteIcons
struct UEmotesComponent_ClearAllEmoteIcons_Params
{
};

// Function Remnant.EventRegion.PlayerExit
struct AEventRegion_PlayerExit_Params
{
};

// Function Remnant.EventRegion.PlayerEnter
struct AEventRegion_PlayerEnter_Params
{
};

// Function Remnant.EventRegion.OnRep_Players
struct AEventRegion_OnRep_Players_Params
{
};

// Function Remnant.EventRegion.OnRep_Active
struct AEventRegion_OnRep_Active_Params
{
};

// Function Remnant.EventRegion.OnDead
struct AEventRegion_OnDead_Params
{
};

// Function Remnant.EventRegion.LockEvent
struct AEventRegion_LockEvent_Params
{
};

// Function Remnant.EventRegion.IsPlayerInRegion
struct AEventRegion_IsPlayerInRegion_Params
{
};

// Function Remnant.EventRegion.IsLocked
struct AEventRegion_IsLocked_Params
{
};

// Function Remnant.EventRegion.IsLocalPlayerInRegion
struct AEventRegion_IsLocalPlayerInRegion_Params
{
};

// Function Remnant.EventRegion.IsComplete
struct AEventRegion_IsComplete_Params
{
};

// Function Remnant.EventRegion.IsCharacterInRegion
struct AEventRegion_IsCharacterInRegion_Params
{
};

// Function Remnant.EventRegion.IsActive
struct AEventRegion_IsActive_Params
{
};

// Function Remnant.EventRegion.HasLocalPlayerVisited
struct AEventRegion_HasLocalPlayerVisited_Params
{
};

// Function Remnant.EventRegion.GetFirstCharacter
struct AEventRegion_GetFirstCharacter_Params
{
};

// Function Remnant.EventRegion.GetEventRegionForActor
struct AEventRegion_GetEventRegionForActor_Params
{
};

// Function Remnant.EventRegion.GetEventRegionContainingActor
struct AEventRegion_GetEventRegionContainingActor_Params
{
};

// Function Remnant.EventRegion.GetCharacters
struct AEventRegion_GetCharacters_Params
{
};

// Function Remnant.EventRegion.End
struct AEventRegion_End_Params
{
};

// Function Remnant.EventRegion.CompleteEvent
struct AEventRegion_CompleteEvent_Params
{
};

// Function Remnant.EventRegion.Begin
struct AEventRegion_Begin_Params
{
};

// Function Remnant.Flashlight.ServerToggleFlashlight
struct AFlashlight_ServerToggleFlashlight_Params
{
};

// Function Remnant.Flashlight.OnTurnedOn
struct AFlashlight_OnTurnedOn_Params
{
};

// Function Remnant.Flashlight.OnTurnedOff
struct AFlashlight_OnTurnedOff_Params
{
};

// Function Remnant.Flashlight.OnEndFlash
struct AFlashlight_OnEndFlash_Params
{
};

// Function Remnant.Flashlight.OnBeginFlash
struct AFlashlight_OnBeginFlash_Params
{
};

// Function Remnant.Flashlight.LightEndOverlap
struct AFlashlight_LightEndOverlap_Params
{
};

// Function Remnant.Flashlight.LightBeginOverlap
struct AFlashlight_LightBeginOverlap_Params
{
};

// Function Remnant.Flashlight.ApplyChargeDelta
struct AFlashlight_ApplyChargeDelta_Params
{
};

// Function Remnant.GenericItem.ValidatePickupHandled
struct AGenericItem_ValidatePickupHandled_Params
{
};

// Function Remnant.GenericItem.ValidateAddToInventory
struct AGenericItem_ValidateAddToInventory_Params
{
};

// Function Remnant.GenericItem.OnRep_CachedSpawnList
struct AGenericItem_OnRep_CachedSpawnList_Params
{
};

// Function Remnant.GenericItem.OnFinishedItemInit
struct AGenericItem_OnFinishedItemInit_Params
{
};

// Function Remnant.GenericItem.HasMaxSpawnsForCharacter
struct AGenericItem_HasMaxSpawnsForCharacter_Params
{
};

// Function Remnant.GenericItem.HandleAward
struct AGenericItem_HandleAward_Params
{
};

// Function Remnant.SpawnedGrenade.OnStoppedMoving
struct ASpawnedGrenade_OnStoppedMoving_Params
{
};

// Function Remnant.SpawnedGrenade.OnRep_GrenadeRepData
struct ASpawnedGrenade_OnRep_GrenadeRepData_Params
{
};

// Function Remnant.SpawnedGrenade.OnDetonated
struct ASpawnedGrenade_OnDetonated_Params
{
};

// Function Remnant.SpawnedGrenade.GetGrenadeLifeSpan
struct ASpawnedGrenade_GetGrenadeLifeSpan_Params
{
};

// Function Remnant.SpawnedGrenade.GetGrenadeItemCDO
struct ASpawnedGrenade_GetGrenadeItemCDO_Params
{
};

// Function Remnant.SpawnedGrenade.Detonate
struct ASpawnedGrenade_Detonate_Params
{
};

// Function Remnant.Grenade.ValidateUse
struct AGrenade_ValidateUse_Params
{
};

// Function Remnant.Grenade.Throw
struct AGrenade_Throw_Params
{
};

// Function Remnant.Grenade.ServerThrowPressed
struct AGrenade_ServerThrowPressed_Params
{
};

// Function Remnant.Grenade.ServerKeyPressed
struct AGrenade_ServerKeyPressed_Params
{
};

// Function Remnant.Grenade.OnRep_State
struct AGrenade_OnRep_State_Params
{
};

// Function Remnant.Grenade.MulticastThrown
struct AGrenade_MulticastThrown_Params
{
};

// Function Remnant.Grenade.MulticastPlayThrowAnim
struct AGrenade_MulticastPlayThrowAnim_Params
{
};

// Function Remnant.Grenade.MulticastPlayEquipAnim
struct AGrenade_MulticastPlayEquipAnim_Params
{
};

// Function Remnant.Grenade.GetTotalGrenadeLifeSpan
struct AGrenade_GetTotalGrenadeLifeSpan_Params
{
};

// Function Remnant.Grenade.GetRemainingGrenadeLifeSpan
struct AGrenade_GetRemainingGrenadeLifeSpan_Params
{
};

// Function Remnant.Grenade.GetRange
struct AGrenade_GetRange_Params
{
};

// Function Remnant.Grenade.GetDetonatesWhenStoppedMoving
struct AGrenade_GetDetonatesWhenStoppedMoving_Params
{
};

// Function Remnant.Grenade.GetDamageRadius
struct AGrenade_GetDamageRadius_Params
{
};

// Function Remnant.Grenade.GetDamage
struct AGrenade_GetDamage_Params
{
};

// Function Remnant.Grenade.CalculateGrenadePath
struct AGrenade_CalculateGrenadePath_Params
{
};

// Function Remnant.LootContainer.OnSpawnListLoaded
struct ALootContainer_OnSpawnListLoaded_Params
{
};

// Function Remnant.LootContainer.Generate
struct ALootContainer_Generate_Params
{
};

// Function Remnant.LootContainer.ClearItems
struct ALootContainer_ClearItems_Params
{
};

// Function Remnant.LoreItem.LoreNotify
struct ALoreItem_LoreNotify_Params
{
};

// Function Remnant.Matchmaker.UpdateSession
struct UMatchmaker_UpdateSession_Params
{
};

// Function Remnant.Matchmaker.UpdateJoinability
struct UMatchmaker_UpdateJoinability_Params
{
};

// Function Remnant.Matchmaker.StartSession
struct UMatchmaker_StartSession_Params
{
};

// Function Remnant.Matchmaker.ShowSessionGamertagInfo
struct UMatchmaker_ShowSessionGamertagInfo_Params
{
};

// Function Remnant.Matchmaker.SetSessionJoinability
struct UMatchmaker_SetSessionJoinability_Params
{
};

// Function Remnant.Matchmaker.RequestGamerTagInfo
struct UMatchmaker_RequestGamerTagInfo_Params
{
};

// Function Remnant.Matchmaker.RejoinLastSession
struct UMatchmaker_RejoinLastSession_Params
{
};

// Function Remnant.Matchmaker.OnShowQueuedMatchmakingEventMessages
struct UMatchmaker_OnShowQueuedMatchmakingEventMessages_Params
{
};

// Function Remnant.Matchmaker.OnSessionEndedEvent
struct UMatchmaker_OnSessionEndedEvent_Params
{
};

// Function Remnant.Matchmaker.OnPlayerNameChanged
struct UMatchmaker_OnPlayerNameChanged_Params
{
};

// Function Remnant.Matchmaker.OnMainMenuLoaded
struct UMatchmaker_OnMainMenuLoaded_Params
{
};

// Function Remnant.Matchmaker.KickPlayer
struct UMatchmaker_KickPlayer_Params
{
};

// Function Remnant.Matchmaker.JoinSession
struct UMatchmaker_JoinSession_Params
{
};

// Function Remnant.Matchmaker.IsSessionJoinable
struct UMatchmaker_IsSessionJoinable_Params
{
};

// Function Remnant.Matchmaker.IsPresenceJoinURLValid
struct UMatchmaker_IsPresenceJoinURLValid_Params
{
};

// Function Remnant.Matchmaker.IsOnline
struct UMatchmaker_IsOnline_Params
{
};

// Function Remnant.Matchmaker.IsLocalCharacterSurvival
struct UMatchmaker_IsLocalCharacterSurvival_Params
{
};

// Function Remnant.Matchmaker.IsLocalCharacterHardcore
struct UMatchmaker_IsLocalCharacterHardcore_Params
{
};

// Function Remnant.Matchmaker.IsJoiningSession
struct UMatchmaker_IsJoiningSession_Params
{
};

// Function Remnant.Matchmaker.IsFindingSessions
struct UMatchmaker_IsFindingSessions_Params
{
};

// Function Remnant.Matchmaker.InviteFriend
struct UMatchmaker_InviteFriend_Params
{
};

// Function Remnant.Matchmaker.Init
struct UMatchmaker_Init_Params
{
};

// Function Remnant.Matchmaker.GetSessionStateName
struct UMatchmaker_GetSessionStateName_Params
{
};

// Function Remnant.Matchmaker.GetSessionDetails
struct UMatchmaker_GetSessionDetails_Params
{
};

// Function Remnant.Matchmaker.GetMatchmakerInstance
struct UMatchmaker_GetMatchmakerInstance_Params
{
};

// Function Remnant.Matchmaker.GetCurrentSessionDisplay
struct UMatchmaker_GetCurrentSessionDisplay_Params
{
};

// Function Remnant.Matchmaker.EndFindSessions
struct UMatchmaker_EndFindSessions_Params
{
};

// Function Remnant.Matchmaker.DestroySession
struct UMatchmaker_DestroySession_Params
{
};

// Function Remnant.Matchmaker.CreateSession
struct UMatchmaker_CreateSession_Params
{
};

// Function Remnant.Matchmaker.ChangeSession
struct UMatchmaker_ChangeSession_Params
{
};

// Function Remnant.Matchmaker.CanRejoinLastSession
struct UMatchmaker_CanRejoinLastSession_Params
{
};

// Function Remnant.Matchmaker.CanJoinSessionGameMode
struct UMatchmaker_CanJoinSessionGameMode_Params
{
};

// Function Remnant.Matchmaker.CanChangeSessiontype
struct UMatchmaker_CanChangeSessiontype_Params
{
};

// Function Remnant.Matchmaker.BeginJoinPublicGame
struct UMatchmaker_BeginJoinPublicGame_Params
{
};

// Function Remnant.Matchmaker.BeginFindSessions
struct UMatchmaker_BeginFindSessions_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionStarted
struct UMatchmakerListenerInterface_OnSessionStarted_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionsFound
struct UMatchmakerListenerInterface_OnSessionsFound_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionJoined
struct UMatchmakerListenerInterface_OnSessionJoined_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionFailed
struct UMatchmakerListenerInterface_OnSessionFailed_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionEnded
struct UMatchmakerListenerInterface_OnSessionEnded_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionCreated
struct UMatchmakerListenerInterface_OnSessionCreated_Params
{
};

// Function Remnant.PlayerStateRemnant.SetIsLocalPlayerTarget
struct APlayerStateRemnant_SetIsLocalPlayerTarget_Params
{
};

// Function Remnant.PlayerStateRemnant.ServerSetChatRestricted
struct APlayerStateRemnant_ServerSetChatRestricted_Params
{
};

// Function Remnant.PlayerStateRemnant.OnRep_Traveling
struct APlayerStateRemnant_OnRep_Traveling_Params
{
};

// Function Remnant.PlayerStateRemnant.OnRep_ChatRestricted
struct APlayerStateRemnant_OnRep_ChatRestricted_Params
{
};

// Function Remnant.PlayerStateRemnant.IsTraveling
struct APlayerStateRemnant_IsTraveling_Params
{
};

// Function Remnant.PlayerStateRemnant.IsChatRestricted
struct APlayerStateRemnant_IsChatRestricted_Params
{
};

// Function Remnant.QuestTrigger.IsLocalPlayerInRegion
struct AQuestTrigger_IsLocalPlayerInRegion_Params
{
};

// Function Remnant.QuestTrigger.GetTriggerVolume
struct AQuestTrigger_GetTriggerVolume_Params
{
};

// Function Remnant.QuestTrigger.GetCharacters
struct AQuestTrigger_GetCharacters_Params
{
};

// Function Remnant.RasterWidgetComponent.GetWidgetTexture
struct URasterWidgetComponent_GetWidgetTexture_Params
{
};

// Function Remnant.RasterWidgetComponent.ForceRedraw
struct URasterWidgetComponent_ForceRedraw_Params
{
};

// Function Remnant.RasterWidgetComponent.CreateWidgetMaterial
struct URasterWidgetComponent_CreateWidgetMaterial_Params
{
};

// Function Remnant.RemnantRangedWeapon.UseMod
struct ARemnantRangedWeapon_UseMod_Params
{
};

// Function Remnant.RemnantRangedWeapon.UseCharge
struct ARemnantRangedWeapon_UseCharge_Params
{
};

// Function Remnant.RemnantRangedWeapon.UseAllCharges
struct ARemnantRangedWeapon_UseAllCharges_Params
{
};

// Function Remnant.RemnantRangedWeapon.ShouldModCancelUse
struct ARemnantRangedWeapon_ShouldModCancelUse_Params
{
};

// Function Remnant.RemnantRangedWeapon.SetModActive
struct ARemnantRangedWeapon_SetModActive_Params
{
};

// Function Remnant.RemnantRangedWeapon.ServerUseWithAim
struct ARemnantRangedWeapon_ServerUseWithAim_Params
{
};

// Function Remnant.RemnantRangedWeapon.ServerUse
struct ARemnantRangedWeapon_ServerUse_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_Power
struct ARemnantRangedWeapon_OnRep_Power_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_ModActive
struct ARemnantRangedWeapon_OnRep_ModActive_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_Charges
struct ARemnantRangedWeapon_OnRep_Charges_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnFinishWeaponModeAnimation
struct ARemnantRangedWeapon_OnFinishWeaponModeAnimation_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnFinishUseState
struct ARemnantRangedWeapon_OnFinishUseState_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnFinishUseAnimation
struct ARemnantRangedWeapon_OnFinishUseAnimation_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnAltFireReleased
struct ARemnantRangedWeapon_OnAltFireReleased_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnAltFirePressed
struct ARemnantRangedWeapon_OnAltFirePressed_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActivateSecondary
struct ARemnantRangedWeapon_OnActivateSecondary_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActivate
struct ARemnantRangedWeapon_OnActivate_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActionRemoved
struct ARemnantRangedWeapon_OnActionRemoved_Params
{
};

// Function Remnant.RemnantRangedWeapon.MulticastUse
struct ARemnantRangedWeapon_MulticastUse_Params
{
};

// Function Remnant.RemnantRangedWeapon.IsModActive
struct ARemnantRangedWeapon_IsModActive_Params
{
};

// Function Remnant.RemnantRangedWeapon.GetWeaponMod
struct ARemnantRangedWeapon_GetWeaponMod_Params
{
};

// Function Remnant.RemnantRangedWeapon.GetPower
struct ARemnantRangedWeapon_GetPower_Params
{
};

// Function Remnant.RemnantRangedWeapon.GetModActiveState
struct ARemnantRangedWeapon_GetModActiveState_Params
{
};

// Function Remnant.RemnantRangedWeapon.GetModActiveRemainingPct
struct ARemnantRangedWeapon_GetModActiveRemainingPct_Params
{
};

// Function Remnant.RemnantRangedWeapon.GetCharges
struct ARemnantRangedWeapon_GetCharges_Params
{
};

// Function Remnant.RemnantRangedWeapon.DelayedDeactivate
struct ARemnantRangedWeapon_DelayedDeactivate_Params
{
};

// Function Remnant.RemnantBeamWeapon.SetBeamFiring_Server
struct ARemnantBeamWeapon_SetBeamFiring_Server_Params
{
};

// Function Remnant.RemnantBeamWeapon.OnRep_BeamFiring
struct ARemnantBeamWeapon_OnRep_BeamFiring_Params
{
};

// Function Remnant.RemnantBeamWeapon.OnEndBeamFX
struct ARemnantBeamWeapon_OnEndBeamFX_Params
{
};

// Function Remnant.RemnantBeamWeapon.OnBeginBeamFX
struct ARemnantBeamWeapon_OnBeginBeamFX_Params
{
};

// Function Remnant.RemnantBeamWeapon.IsBeamFiring
struct ARemnantBeamWeapon_IsBeamFiring_Params
{
};

// Function Remnant.RemnantCharacter.UpdatePlayerInfoTag
struct ARemnantCharacter_UpdatePlayerInfoTag_Params
{
};

// Function Remnant.RemnantCharacter.UpdatePersistentBuffs
struct ARemnantCharacter_UpdatePersistentBuffs_Params
{
};

// Function Remnant.RemnantCharacter.TeleportToSpawnPoint
struct ARemnantCharacter_TeleportToSpawnPoint_Params
{
};

// Function Remnant.RemnantCharacter.SetSpawnPoint
struct ARemnantCharacter_SetSpawnPoint_Params
{
};

// Function Remnant.RemnantCharacter.SetOldController
struct ARemnantCharacter_SetOldController_Params
{
};

// Function Remnant.RemnantCharacter.SetHelmetShown
struct ARemnantCharacter_SetHelmetShown_Params
{
};

// Function Remnant.RemnantCharacter.SetGrabbedCheckpoint
struct ARemnantCharacter_SetGrabbedCheckpoint_Params
{
};

// Function Remnant.RemnantCharacter.SetDeactivated
struct ARemnantCharacter_SetDeactivated_Params
{
};

// Function Remnant.RemnantCharacter.ServerSetHelmetShown
struct ARemnantCharacter_ServerSetHelmetShown_Params
{
};

// Function Remnant.RemnantCharacter.ResetAmmoInClip
struct ARemnantCharacter_ResetAmmoInClip_Params
{
};

// Function Remnant.RemnantCharacter.RemovePersistentBuff
struct ARemnantCharacter_RemovePersistentBuff_Params
{
};

// Function Remnant.RemnantCharacter.OnShowHelmetOptionChanged
struct ARemnantCharacter_OnShowHelmetOptionChanged_Params
{
};

// Function Remnant.RemnantCharacter.OnRespawnAfterDeath
struct ARemnantCharacter_OnRespawnAfterDeath_Params
{
};

// Function Remnant.RemnantCharacter.OnRep_ShowHelmet
struct ARemnantCharacter_OnRep_ShowHelmet_Params
{
};

// Function Remnant.RemnantCharacter.OnRep_GrabbedCheckpoint
struct ARemnantCharacter_OnRep_GrabbedCheckpoint_Params
{
};

// Function Remnant.RemnantCharacter.OnRep_Deactivated
struct ARemnantCharacter_OnRep_Deactivated_Params
{
};

// Function Remnant.RemnantCharacter.OnCharacterDied
struct ARemnantCharacter_OnCharacterDied_Params
{
};

// Function Remnant.RemnantCharacter.IsReviving
struct ARemnantCharacter_IsReviving_Params
{
};

// Function Remnant.RemnantCharacter.IsDead
struct ARemnantCharacter_IsDead_Params
{
};

// Function Remnant.RemnantCharacter.InitializePersistentBuffs
struct ARemnantCharacter_InitializePersistentBuffs_Params
{
};

// Function Remnant.RemnantCharacter.GetOldController
struct ARemnantCharacter_GetOldController_Params
{
};

// Function Remnant.RemnantCharacter.GetCurrentRangedWeapon
struct ARemnantCharacter_GetCurrentRangedWeapon_Params
{
};

// Function Remnant.RemnantCharacter.GetCharacterInfo
struct ARemnantCharacter_GetCharacterInfo_Params
{
};

// Function Remnant.RemnantCharacter.GetAge
struct ARemnantCharacter_GetAge_Params
{
};

// Function Remnant.RemnantCharacter.ComputePowerLevel
struct ARemnantCharacter_ComputePowerLevel_Params
{
};

// Function Remnant.RemnantCharacter.ComputeOffenseLevel
struct ARemnantCharacter_ComputeOffenseLevel_Params
{
};

// Function Remnant.RemnantCharacter.ComputeDefenseLevel
struct ARemnantCharacter_ComputeDefenseLevel_Params
{
};

// Function Remnant.RemnantCharacter.ClientTeleportToSpawnPoint
struct ARemnantCharacter_ClientTeleportToSpawnPoint_Params
{
};

// Function Remnant.RemnantCharacter.ClientTeleport
struct ARemnantCharacter_ClientTeleport_Params
{
};

// Function Remnant.RemnantCharacter.ClientSetSpawnPoint
struct ARemnantCharacter_ClientSetSpawnPoint_Params
{
};

// Function Remnant.RemnantCharacter.ClientRemoveAllPings
struct ARemnantCharacter_ClientRemoveAllPings_Params
{
};

// Function Remnant.RemnantCharacter.AddPersistentBuff
struct ARemnantCharacter_AddPersistentBuff_Params
{
};

// Function Remnant.SavedCharacter.SetSkipIntro
struct USavedCharacter_SetSkipIntro_Params
{
};

// Function Remnant.SavedCharacter.SetKey
struct USavedCharacter_SetKey_Params
{
};

// Function Remnant.SavedCharacter.SetCharacterType
struct USavedCharacter_SetCharacterType_Params
{
};

// Function Remnant.SavedCharacter.MarkValidExit
struct USavedCharacter_MarkValidExit_Params
{
};

// Function Remnant.SavedCharacter.IncrementCounter
struct USavedCharacter_IncrementCounter_Params
{
};

// Function Remnant.SavedCharacter.HasKey
struct USavedCharacter_HasKey_Params
{
};

// Function Remnant.SavedCharacter.GetCounter
struct USavedCharacter_GetCounter_Params
{
};

// Function Remnant.SavedCharacter.CheckForInvalidExit
struct USavedCharacter_CheckForInvalidExit_Params
{
};

// Function Remnant.RemnantSaveGameProfile.UpdateAccountCurrency
struct URemnantSaveGameProfile_UpdateAccountCurrency_Params
{
};

// Function Remnant.RemnantSaveGameProfile.GetAccountCurrencyForItemType
struct URemnantSaveGameProfile_GetAccountCurrencyForItemType_Params
{
};

// Function Remnant.RemnantCharacterManager.ShouldAwardHardcoreRewards
struct URemnantCharacterManager_ShouldAwardHardcoreRewards_Params
{
};

// Function Remnant.RemnantCharacterManager.SetActiveCharacter
struct URemnantCharacterManager_SetActiveCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.RestoreCharacters
struct URemnantCharacterManager_RestoreCharacters_Params
{
};

// Function Remnant.RemnantCharacterManager.ResolvePendingExit
struct URemnantCharacterManager_ResolvePendingExit_Params
{
};

// Function Remnant.RemnantCharacterManager.IsHardcore
struct URemnantCharacterManager_IsHardcore_Params
{
};

// Function Remnant.RemnantCharacterManager.IsDeceasedCharacter
struct URemnantCharacterManager_IsDeceasedCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.HasBackupCharacters
struct URemnantCharacterManager_HasBackupCharacters_Params
{
};

// Function Remnant.RemnantCharacterManager.HasActiveCharacter
struct URemnantCharacterManager_HasActiveCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.GetTransientCharacters
struct URemnantCharacterManager_GetTransientCharacters_Params
{
};

// Function Remnant.RemnantCharacterManager.GetMaxCharacterCount
struct URemnantCharacterManager_GetMaxCharacterCount_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacters
struct URemnantCharacterManager_GetCharacters_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacterManager
struct URemnantCharacterManager_GetCharacterManager_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacterInfo
struct URemnantCharacterManager_GetCharacterInfo_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacterCount
struct URemnantCharacterManager_GetCharacterCount_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacterAt
struct URemnantCharacterManager_GetCharacterAt_Params
{
};

// Function Remnant.RemnantCharacterManager.GetCharacter
struct URemnantCharacterManager_GetCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.GetActiveEquipmentVisuals
struct URemnantCharacterManager_GetActiveEquipmentVisuals_Params
{
};

// Function Remnant.RemnantCharacterManager.GetActiveCharacter
struct URemnantCharacterManager_GetActiveCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.DeleteTransientCharacters
struct URemnantCharacterManager_DeleteTransientCharacters_Params
{
};

// Function Remnant.RemnantCharacterManager.DeleteTransientCharacter
struct URemnantCharacterManager_DeleteTransientCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.DeleteCharacter
struct URemnantCharacterManager_DeleteCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.CreateTransientCharacter
struct URemnantCharacterManager_CreateTransientCharacter_Params
{
};

// Function Remnant.RemnantCharacterManager.CreateCharacter
struct URemnantCharacterManager_CreateCharacter_Params
{
};

// Function Remnant.RemnantCheatManager.UnlockAllWaypoints
struct URemnantCheatManager_UnlockAllWaypoints_Params
{
};

// Function Remnant.RemnantCheatManager.UnlockAllEmotes
struct URemnantCheatManager_UnlockAllEmotes_Params
{
};

// Function Remnant.RemnantCheatManager.TravelToQuest
struct URemnantCheatManager_TravelToQuest_Params
{
};

// Function Remnant.RemnantCheatManager.ToggleShowBlood
struct URemnantCheatManager_ToggleShowBlood_Params
{
};

// Function Remnant.RemnantCheatManager.ToggleFogOfWar
struct URemnantCheatManager_ToggleFogOfWar_Params
{
};

// Function Remnant.RemnantCheatManager.ToggleDLC
struct URemnantCheatManager_ToggleDLC_Params
{
};

// Function Remnant.RemnantCheatManager.SpawnDebugQuest
struct URemnantCheatManager_SpawnDebugQuest_Params
{
};

// Function Remnant.RemnantCheatManager.ShowMatchmakingPowerLevel
struct URemnantCheatManager_ShowMatchmakingPowerLevel_Params
{
};

// Function Remnant.RemnantCheatManager.SetDifficulty
struct URemnantCheatManager_SetDifficulty_Params
{
};

// Function Remnant.RemnantCheatManager.RaiseDifficulty
struct URemnantCheatManager_RaiseDifficulty_Params
{
};

// Function Remnant.RemnantCheatManager.LowerDifficulty
struct URemnantCheatManager_LowerDifficulty_Params
{
};

// Function Remnant.RemnantCheatManager.Joinability
struct URemnantCheatManager_Joinability_Params
{
};

// Function Remnant.RemnantCheatManager.GiveAccountAward
struct URemnantCheatManager_GiveAccountAward_Params
{
};

// Function Remnant.RemnantCheatManager.AddScrap
struct URemnantCheatManager_AddScrap_Params
{
};

// Function Remnant.RemnantCheatManager.AddExperience
struct URemnantCheatManager_AddExperience_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.UpdateMaterial
struct URemnantFogOfWarComponent_UpdateMaterial_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.SetDebugLocation
struct URemnantFogOfWarComponent_SetDebugLocation_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.LockToActor
struct URemnantFogOfWarComponent_LockToActor_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.HasDebugLocation
struct URemnantFogOfWarComponent_HasDebugLocation_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.GetLockActor
struct URemnantFogOfWarComponent_GetLockActor_Params
{
};

// Function Remnant.RemnantFogOfWarComponent.ClearDebugLocation
struct URemnantFogOfWarComponent_ClearDebugLocation_Params
{
};

// Function Remnant.RemnantGameInstance.OnOnlinePrivilegeChecked
struct URemnantGameInstance_OnOnlinePrivilegeChecked_Params
{
};

// Function Remnant.RemnantGameInstance.OnMainMenuLoaded
struct URemnantGameInstance_OnMainMenuLoaded_Params
{
};

// Function Remnant.RemnantGameInstance.OnDeviceChanged
struct URemnantGameInstance_OnDeviceChanged_Params
{
};

// Function Remnant.RemnantGameInstance.OnActiveProfileSet
struct URemnantGameInstance_OnActiveProfileSet_Params
{
};

// Function Remnant.RemnantGameInstance.IsDemo
struct URemnantGameInstance_IsDemo_Params
{
};

// Function Remnant.RemnantGameInstance.GetDemoMode
struct URemnantGameInstance_GetDemoMode_Params
{
};

// Function Remnant.RemnantGameInstance.DoJoinViaPresence
struct URemnantGameInstance_DoJoinViaPresence_Params
{
};

// Function Remnant.RemnantGameInstance.DoAuth
struct URemnantGameInstance_DoAuth_Params
{
};

// Function Remnant.RemnantGameInstance.CheckConnectionStatusChanges
struct URemnantGameInstance_CheckConnectionStatusChanges_Params
{
};

// Function Remnant.RemnantGameMode.TravelToZone
struct ARemnantGameMode_TravelToZone_Params
{
};

// Function Remnant.RemnantGameMode.TravelToLastCheckpoint
struct ARemnantGameMode_TravelToLastCheckpoint_Params
{
};

// Function Remnant.RemnantGameMode.SetPostDeathScreenTime
struct ARemnantGameMode_SetPostDeathScreenTime_Params
{
};

// Function Remnant.RemnantGameMode.SetAsRootCheckpoint
struct ARemnantGameMode_SetAsRootCheckpoint_Params
{
};

// Function Remnant.RemnantGameMode.SetAsRespawnZoneLink
struct ARemnantGameMode_SetAsRespawnZoneLink_Params
{
};

// Function Remnant.RemnantGameMode.OnFullGameAvailable
struct ARemnantGameMode_OnFullGameAvailable_Params
{
};

// Function Remnant.RemnantGameMode.IsEveryoneEntitled
struct ARemnantGameMode_IsEveryoneEntitled_Params
{
};

// Function Remnant.RemnantGameMode.IncrementAllPlayersBossCounters
struct ARemnantGameMode_IncrementAllPlayersBossCounters_Params
{
};

// Function Remnant.RemnantGameMode.GetRespawnZoneLink
struct ARemnantGameMode_GetRespawnZoneLink_Params
{
};

// Function Remnant.RemnantGameMode.ActivateCheckpoint
struct ARemnantGameMode_ActivateCheckpoint_Params
{
};

// Function Remnant.RemnantGameState.OnRep_ZoneTravelState
struct ARemnantGameState_OnRep_ZoneTravelState_Params
{
};

// Function Remnant.RemnantGameState.OnRep_ActivatedCheckpoint
struct ARemnantGameState_OnRep_ActivatedCheckpoint_Params
{
};

// Function Remnant.RemnantGameState.IsZoneTravelPending
struct ARemnantGameState_IsZoneTravelPending_Params
{
};

// Function Remnant.RemnantGameState.IsZoneTravelAvailable
struct ARemnantGameState_IsZoneTravelAvailable_Params
{
};

// Function Remnant.RemnantGameState.GetActivatedCheckpoint
struct ARemnantGameState_GetActivatedCheckpoint_Params
{
};

// Function Remnant.RemnantHUD.ShouldShowSubtitles
struct ARemnantHUD_ShouldShowSubtitles_Params
{
};

// Function Remnant.RemnantHUD.ShouldShowHealthBars
struct ARemnantHUD_ShouldShowHealthBars_Params
{
};

// Function Remnant.RemnantHUD.OnStopPendingTravel
struct ARemnantHUD_OnStopPendingTravel_Params
{
};

// Function Remnant.RemnantHUD.OnStartPendingTravel
struct ARemnantHUD_OnStartPendingTravel_Params
{
};

// Function Remnant.RemnantHUD.HasInvalidDialog
struct ARemnantHUD_HasInvalidDialog_Params
{
};

// Function Remnant.RemnantMiniMapDisplayActor.OnFogOfWarChanged
struct ARemnantMiniMapDisplayActor_OnFogOfWarChanged_Params
{
};

// Function Remnant.RemnantMiniMapDisplayActor.IsAnyMiniMapDisplayed
struct ARemnantMiniMapDisplayActor_IsAnyMiniMapDisplayed_Params
{
};

// Function Remnant.RemnantMiniMapWidget.UpdateWidgetVisibility
struct URemnantMiniMapWidget_UpdateWidgetVisibility_Params
{
};

// Function Remnant.RemnantMiniMapWidget.ShouldIgnoreFogOfWar
struct URemnantMiniMapWidget_ShouldIgnoreFogOfWar_Params
{
};

// Function Remnant.RemnantMiniMapWidget.SetVisibleFromLevel
struct URemnantMiniMapWidget_SetVisibleFromLevel_Params
{
};

// Function Remnant.RemnantMiniMapWidget.IsWidgetVisible
struct URemnantMiniMapWidget_IsWidgetVisible_Params
{
};

// Function Remnant.RemnantPingActor.SetPingDetails
struct ARemnantPingActor_SetPingDetails_Params
{
};

// Function Remnant.RemnantPingActor.OnCinematicEvent
struct ARemnantPingActor_OnCinematicEvent_Params
{
};

// Function Remnant.PingSubContext.IsValidForPingType
struct UPingSubContext_IsValidForPingType_Params
{
};

// Function Remnant.RemnantPingManager.IsCharacterOnVOCooldown
struct URemnantPingManager_IsCharacterOnVOCooldown_Params
{
};

// Function Remnant.RemnantPingManager.IsCharacterOnPingCooldown
struct URemnantPingManager_IsCharacterOnPingCooldown_Params
{
};

// Function Remnant.RemnantPingManager.GetRemainingCharacterPingCooldown
struct URemnantPingManager_GetRemainingCharacterPingCooldown_Params
{
};

// Function Remnant.RemnantPingManager.GetPingManager
struct URemnantPingManager_GetPingManager_Params
{
};

// Function Remnant.RemnantPingManager.GetPingFromCharacter
struct URemnantPingManager_GetPingFromCharacter_Params
{
};

// Function Remnant.RemnantPingManager.GetCurrentPings
struct URemnantPingManager_GetCurrentPings_Params
{
};

// Function Remnant.RemnantPingManager.Client_UpdateCharacterPing
struct URemnantPingManager_Client_UpdateCharacterPing_Params
{
};

// Function Remnant.RemnantPingManager.Client_MarkPlayerSoloPing
struct URemnantPingManager_Client_MarkPlayerSoloPing_Params
{
};

// Function Remnant.RemnantPlayerController.UpdatePlayState
struct ARemnantPlayerController_UpdatePlayState_Params
{
};

// Function Remnant.RemnantPlayerController.UpdatePerformanceLevel
struct ARemnantPlayerController_UpdatePerformanceLevel_Params
{
};

// Function Remnant.RemnantPlayerController.TravelPlayerTo
struct ARemnantPlayerController_TravelPlayerTo_Params
{
};

// Function Remnant.RemnantPlayerController.SwapCharacter
struct ARemnantPlayerController_SwapCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.SetReadyToTravel
struct ARemnantPlayerController_SetReadyToTravel_Params
{
};

// Function Remnant.RemnantPlayerController.SetIntroComplete
struct ARemnantPlayerController_SetIntroComplete_Params
{
};

// Function Remnant.RemnantPlayerController.ServerWorldResetComplete
struct ARemnantPlayerController_ServerWorldResetComplete_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUpdateUsingMultiplayerFeatures
struct ARemnantPlayerController_ServerUpdateUsingMultiplayerFeatures_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUpdateLicensedContent
struct ARemnantPlayerController_ServerUpdateLicensedContent_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUnlockItemAward
struct ARemnantPlayerController_ServerUnlockItemAward_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUnlockAccountCurrency
struct ARemnantPlayerController_ServerUnlockAccountCurrency_Params
{
};

// Function Remnant.RemnantPlayerController.ServerStreamSwapCharacter
struct ARemnantPlayerController_ServerStreamSwapCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.ServerStreamCharacterFinalize
struct ARemnantPlayerController_ServerStreamCharacterFinalize_Params
{
};

// Function Remnant.RemnantPlayerController.ServerStreamCharacter
struct ARemnantPlayerController_ServerStreamCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.ServerSetCurrentLock
struct ARemnantPlayerController_ServerSetCurrentLock_Params
{
};

// Function Remnant.RemnantPlayerController.ServerRespawnSwappedCharacter
struct ARemnantPlayerController_ServerRespawnSwappedCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.ServerRemoveTravelState
struct ARemnantPlayerController_ServerRemoveTravelState_Params
{
};

// Function Remnant.RemnantPlayerController.ServerRemoveItem
struct ARemnantPlayerController_ServerRemoveItem_Params
{
};

// Function Remnant.RemnantPlayerController.ServerReliableCameraLocationUpdate
struct ARemnantPlayerController_ServerReliableCameraLocationUpdate_Params
{
};

// Function Remnant.RemnantPlayerController.ServerReadyToTravel
struct ARemnantPlayerController_ServerReadyToTravel_Params
{
};

// Function Remnant.RemnantPlayerController.ServerReadyForWorldReset
struct ARemnantPlayerController_ServerReadyForWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.ServerHandleSkipIntro
struct ARemnantPlayerController_ServerHandleSkipIntro_Params
{
};

// Function Remnant.RemnantPlayerController.ServerGiveItem
struct ARemnantPlayerController_ServerGiveItem_Params
{
};

// Function Remnant.RemnantPlayerController.ServerFinalizeStreamSwapCharacter
struct ARemnantPlayerController_ServerFinalizeStreamSwapCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.ServerDestinationZoneLoaded
struct ARemnantPlayerController_ServerDestinationZoneLoaded_Params
{
};

// Function Remnant.RemnantPlayerController.ServerClearWaitingForZones
struct ARemnantPlayerController_ServerClearWaitingForZones_Params
{
};

// Function Remnant.RemnantPlayerController.ServerBeginPlay
struct ARemnantPlayerController_ServerBeginPlay_Params
{
};

// Function Remnant.RemnantPlayerController.ServerAddExperience
struct ARemnantPlayerController_ServerAddExperience_Params
{
};

// Function Remnant.RemnantPlayerController.Respawn
struct ARemnantPlayerController_Respawn_Params
{
};

// Function Remnant.RemnantPlayerController.RemoveAccountAwardListener
struct ARemnantPlayerController_RemoveAccountAwardListener_Params
{
};

// Function Remnant.RemnantPlayerController.RefreshAccountAwards
struct ARemnantPlayerController_RefreshAccountAwards_Params
{
};

// Function Remnant.RemnantPlayerController.QueueValidClientSoftInventoryChange
struct ARemnantPlayerController_QueueValidClientSoftInventoryChange_Params
{
};

// Function Remnant.RemnantPlayerController.QueueValidClientInventoryChange
struct ARemnantPlayerController_QueueValidClientInventoryChange_Params
{
};

// Function Remnant.RemnantPlayerController.QueueManualQuestReward
struct ARemnantPlayerController_QueueManualQuestReward_Params
{
};

// Function Remnant.RemnantPlayerController.OnSessionDisconnected
struct ARemnantPlayerController_OnSessionDisconnected_Params
{
};

// Function Remnant.RemnantPlayerController.OnServerFinalizeTravel
struct ARemnantPlayerController_OnServerFinalizeTravel_Params
{
};

// Function Remnant.RemnantPlayerController.OnReadyToTravel
struct ARemnantPlayerController_OnReadyToTravel_Params
{
};

// Function Remnant.RemnantPlayerController.OnPlayStateChanged
struct ARemnantPlayerController_OnPlayStateChanged_Params
{
};

// Function Remnant.RemnantPlayerController.OnPlayInEditor
struct ARemnantPlayerController_OnPlayInEditor_Params
{
};

// Function Remnant.RemnantPlayerController.OnPlayerDied
struct ARemnantPlayerController_OnPlayerDied_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishWorldReset
struct ARemnantPlayerController_OnFinishWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishTravelLoad
struct ARemnantPlayerController_OnFinishTravelLoad_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishTravel
struct ARemnantPlayerController_OnFinishTravel_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishPlayStateTransition
struct ARemnantPlayerController_OnFinishPlayStateTransition_Params
{
};

// Function Remnant.RemnantPlayerController.OnDeceased
struct ARemnantPlayerController_OnDeceased_Params
{
};

// Function Remnant.RemnantPlayerController.OnBeginWorldReset
struct ARemnantPlayerController_OnBeginWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.OnBeginTravel
struct ARemnantPlayerController_OnBeginTravel_Params
{
};

// Function Remnant.RemnantPlayerController.NetUpdateActiveCharacter
struct ARemnantPlayerController_NetUpdateActiveCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.MarkRevived
struct ARemnantPlayerController_MarkRevived_Params
{
};

// Function Remnant.RemnantPlayerController.IsPlayerDead
struct ARemnantPlayerController_IsPlayerDead_Params
{
};

// Function Remnant.RemnantPlayerController.IsIntroQuestDisabled
struct ARemnantPlayerController_IsIntroQuestDisabled_Params
{
};

// Function Remnant.RemnantPlayerController.IsIntroQuestComplete
struct ARemnantPlayerController_IsIntroQuestComplete_Params
{
};

// Function Remnant.RemnantPlayerController.HasServerBegunPlay
struct ARemnantPlayerController_HasServerBegunPlay_Params
{
};

// Function Remnant.RemnantPlayerController.HasLicense
struct ARemnantPlayerController_HasLicense_Params
{
};

// Function Remnant.RemnantPlayerController.HasGivenLicenses
struct ARemnantPlayerController_HasGivenLicenses_Params
{
};

// Function Remnant.RemnantPlayerController.HandleSkipIntro
struct ARemnantPlayerController_HandleSkipIntro_Params
{
};

// Function Remnant.RemnantPlayerController.GiveQuestRewards
struct ARemnantPlayerController_GiveQuestRewards_Params
{
};

// Function Remnant.RemnantPlayerController.GiveAccountAward
struct ARemnantPlayerController_GiveAccountAward_Params
{
};

// Function Remnant.RemnantPlayerController.GetTimeSinceLastInput
struct ARemnantPlayerController_GetTimeSinceLastInput_Params
{
};

// Function Remnant.RemnantPlayerController.GetTargetZoneLink
struct ARemnantPlayerController_GetTargetZoneLink_Params
{
};

// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItemType
struct ARemnantPlayerController_GetRelevantInventoryComponentForItemType_Params
{
};

// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItem
struct ARemnantPlayerController_GetRelevantInventoryComponentForItem_Params
{
};

// Function Remnant.RemnantPlayerController.GetPlayerInventory
struct ARemnantPlayerController_GetPlayerInventory_Params
{
};

// Function Remnant.RemnantPlayerController.GetCurrentZone
struct ARemnantPlayerController_GetCurrentZone_Params
{
};

// Function Remnant.RemnantPlayerController.GetCurrentTravelLock
struct ARemnantPlayerController_GetCurrentTravelLock_Params
{
};

// Function Remnant.RemnantPlayerController.GetCurrentOrDeadPawn
struct ARemnantPlayerController_GetCurrentOrDeadPawn_Params
{
};

// Function Remnant.RemnantPlayerController.GatherPing
struct ARemnantPlayerController_GatherPing_Params
{
};

// Function Remnant.RemnantPlayerController.EnableWidgetComponentInteraction
struct ARemnantPlayerController_EnableWidgetComponentInteraction_Params
{
};

// Function Remnant.RemnantPlayerController.ComputePowerLevel
struct ARemnantPlayerController_ComputePowerLevel_Params
{
};

// Function Remnant.RemnantPlayerController.ComputeItemLevel
struct ARemnantPlayerController_ComputeItemLevel_Params
{
};

// Function Remnant.RemnantPlayerController.ClientUpdateUsingMultiplayerFeatures
struct ARemnantPlayerController_ClientUpdateUsingMultiplayerFeatures_Params
{
};

// Function Remnant.RemnantPlayerController.ClientUpdateFogOfWar
struct ARemnantPlayerController_ClientUpdateFogOfWar_Params
{
};

// Function Remnant.RemnantPlayerController.ClientUpdateAchievement
struct ARemnantPlayerController_ClientUpdateAchievement_Params
{
};

// Function Remnant.RemnantPlayerController.ClientSetWaitingForZones
struct ARemnantPlayerController_ClientSetWaitingForZones_Params
{
};

// Function Remnant.RemnantPlayerController.ClientSetMusicState
struct ARemnantPlayerController_ClientSetMusicState_Params
{
};

// Function Remnant.RemnantPlayerController.ClientOnSessionChanged
struct ARemnantPlayerController_ClientOnSessionChanged_Params
{
};

// Function Remnant.RemnantPlayerController.ClientNotifyQuestReward
struct ARemnantPlayerController_ClientNotifyQuestReward_Params
{
};

// Function Remnant.RemnantPlayerController.ClientLoadDestinationZone
struct ARemnantPlayerController_ClientLoadDestinationZone_Params
{
};

// Function Remnant.RemnantPlayerController.ClientIncrementBossCounter
struct ARemnantPlayerController_ClientIncrementBossCounter_Params
{
};

// Function Remnant.RemnantPlayerController.ClientHandleDeceased
struct ARemnantPlayerController_ClientHandleDeceased_Params
{
};

// Function Remnant.RemnantPlayerController.ClientGiveAccountAward
struct ARemnantPlayerController_ClientGiveAccountAward_Params
{
};

// Function Remnant.RemnantPlayerController.ClientFinishWorldReset
struct ARemnantPlayerController_ClientFinishWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.ClientFinishTravel
struct ARemnantPlayerController_ClientFinishTravel_Params
{
};

// Function Remnant.RemnantPlayerController.ClientBeginWorldReset
struct ARemnantPlayerController_ClientBeginWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.ClientBeginTravel
struct ARemnantPlayerController_ClientBeginTravel_Params
{
};

// Function Remnant.RemnantPlayerController.ClearTravelLock
struct ARemnantPlayerController_ClearTravelLock_Params
{
};

// Function Remnant.RemnantPlayerController.ClearPawn
struct ARemnantPlayerController_ClearPawn_Params
{
};

// Function Remnant.RemnantPlayerController.ClearDeadPawn
struct ARemnantPlayerController_ClearDeadPawn_Params
{
};

// Function Remnant.RemnantPlayerController.ClearCachedArchetype
struct ARemnantPlayerController_ClearCachedArchetype_Params
{
};

// Function Remnant.RemnantPlayerController.CanRespawnPlayers
struct ARemnantPlayerController_CanRespawnPlayers_Params
{
};

// Function Remnant.RemnantPlayerController.BroadcastPing
struct ARemnantPlayerController_BroadcastPing_Params
{
};

// Function Remnant.RemnantPlayerController.BroadcastFinishedLevelSequence
struct ARemnantPlayerController_BroadcastFinishedLevelSequence_Params
{
};

// Function Remnant.RemnantPlayerController.BroadcastEmote
struct ARemnantPlayerController_BroadcastEmote_Params
{
};

// Function Remnant.RemnantPlayerController.BroadcastClientFinishedLevelSequence
struct ARemnantPlayerController_BroadcastClientFinishedLevelSequence_Params
{
};

// Function Remnant.RemnantPlayerController.AwardArchetype
struct ARemnantPlayerController_AwardArchetype_Params
{
};

// Function Remnant.RemnantPlayerController.AttemptPing
struct ARemnantPlayerController_AttemptPing_Params
{
};

// Function Remnant.RemnantPlayerController.ApplyTravelLock
struct ARemnantPlayerController_ApplyTravelLock_Params
{
};

// Function Remnant.RemnantPlayerController.AddAccountAwardListener
struct ARemnantPlayerController_AddAccountAwardListener_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.ServerOnClientExceptionUpdate
struct URemnantPlayerInventoryComponent_ServerOnClientExceptionUpdate_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.OnTrackedInstanceDataChanged
struct URemnantPlayerInventoryComponent_OnTrackedInstanceDataChanged_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.ModifyLevelForNewItem
struct URemnantPlayerInventoryComponent_ModifyLevelForNewItem_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.MarkClientSoftInventoryChangeValid
struct URemnantPlayerInventoryComponent_MarkClientSoftInventoryChangeValid_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.MarkClientInventoryChangeValid
struct URemnantPlayerInventoryComponent_MarkClientInventoryChangeValid_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.IsItemCheatProtected
struct URemnantPlayerInventoryComponent_IsItemCheatProtected_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.IsCheatValidationEnabled
struct URemnantPlayerInventoryComponent_IsCheatValidationEnabled_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.GetLevelForNewItem
struct URemnantPlayerInventoryComponent_GetLevelForNewItem_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.ClientValidationTimeOut
struct URemnantPlayerInventoryComponent_ClientValidationTimeOut_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.AddProtectionTimeOut
struct URemnantPlayerInventoryComponent_AddProtectionTimeOut_Params
{
};

// Function Remnant.RemnantProgressionComponent.ServerAddExperience
struct URemnantProgressionComponent_ServerAddExperience_Params
{
};

// Function Remnant.RemnantProgressionComponent.ClientAddProgressionTimeOut
struct URemnantProgressionComponent_ClientAddProgressionTimeOut_Params
{
};

// Function Remnant.RemnantProgressionComponent.AddProtectionTimeOut
struct URemnantProgressionComponent_AddProtectionTimeOut_Params
{
};

// Function Remnant.RemnantQuest.OnRep_Status
struct ARemnantQuest_OnRep_Status_Params
{
};

// Function Remnant.RemnantQuest.IsLoaded
struct ARemnantQuest_IsLoaded_Params
{
};

// Function Remnant.RemnantQuest.HasLastCheckpoint
struct ARemnantQuest_HasLastCheckpoint_Params
{
};

// Function Remnant.RemnantQuest.GiveRewardToPlayerController
struct ARemnantQuest_GiveRewardToPlayerController_Params
{
};

// Function Remnant.RemnantQuest.GiveRewardToPlayer
struct ARemnantQuest_GiveRewardToPlayer_Params
{
};

// Function Remnant.RemnantQuest.GiveReward
struct ARemnantQuest_GiveReward_Params
{
};

// Function Remnant.RemnantQuest.GetRootQuest
struct ARemnantQuest_GetRootQuest_Params
{
};

// Function Remnant.RemnantQuest.GetQuestInventory
struct ARemnantQuest_GetQuestInventory_Params
{
};

// Function Remnant.RemnantQuest.GetObjectQuestValue
struct ARemnantQuest_GetObjectQuestValue_Params
{
};

// Function Remnant.RemnantQuest.GetLevel
struct ARemnantQuest_GetLevel_Params
{
};

// Function Remnant.RemnantQuest.GetLastCheckpoint
struct ARemnantQuest_GetLastCheckpoint_Params
{
};

// Function Remnant.RemnantQuest.GetBiomeName
struct ARemnantQuest_GetBiomeName_Params
{
};

// Function Remnant.RemnantQuest.GetAutoJoinZoneLinks
struct ARemnantQuest_GetAutoJoinZoneLinks_Params
{
};

// Function Remnant.RemnantQuest.DeactivateQuest
struct ARemnantQuest_DeactivateQuest_Params
{
};

// Function Remnant.RemnantQuest.AddQuestLootTags
struct ARemnantQuest_AddQuestLootTags_Params
{
};

// Function Remnant.RemnantQuest.ActivateQuest
struct ARemnantQuest_ActivateQuest_Params
{
};

// Function Remnant.RemnantQuestComponent.IsZoneLoaded
struct URemnantQuestComponent_IsZoneLoaded_Params
{
};

// Function Remnant.RemnantQuestComponent.GetZone
struct URemnantQuestComponent_GetZone_Params
{
};

// Function Remnant.RemnantQuestComponent.GetUniqueName
struct URemnantQuestComponent_GetUniqueName_Params
{
};

// Function Remnant.RemnantQuestComponent.GetRootQuest
struct URemnantQuestComponent_GetRootQuest_Params
{
};

// Function Remnant.RemnantQuestComponent.GetRemnantQuest
struct URemnantQuestComponent_GetRemnantQuest_Params
{
};

// Function Remnant.RemnantQuestComponent.GetQuestZone
struct URemnantQuestComponent_GetQuestZone_Params
{
};

// Function Remnant.RemnantQuestComponent.GetQuestTile
struct URemnantQuestComponent_GetQuestTile_Params
{
};

// Function Remnant.RemnantQuestComponent.GetQuestEntity
struct URemnantQuestComponent_GetQuestEntity_Params
{
};

// Function Remnant.RemnantQuestComponent.DebugTravelTo
struct URemnantQuestComponent_DebugTravelTo_Params
{
};

// Function Remnant.RemnantQuestComponent.DebugCanTravelTo
struct URemnantQuestComponent_DebugCanTravelTo_Params
{
};

// Function Remnant.RemnantQuestAIDirector.StopAllGroups
struct URemnantQuestAIDirector_StopAllGroups_Params
{
};

// Function Remnant.RemnantQuestAIDirector.SetSpawnTable
struct URemnantQuestAIDirector_SetSpawnTable_Params
{
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupRemoved
struct URemnantQuestAIDirector_OnEncounterGroupRemoved_Params
{
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorSpawned
struct URemnantQuestAIDirector_OnEncounterGroupActorSpawned_Params
{
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorDead
struct URemnantQuestAIDirector_OnEncounterGroupActorDead_Params
{
};

// Function Remnant.RemnantQuestAIDirector.HasActiveSpawns
struct URemnantQuestAIDirector_HasActiveSpawns_Params
{
};

// Function Remnant.RemnantQuestAIDirector.GetTotalSpawns
struct URemnantQuestAIDirector_GetTotalSpawns_Params
{
};

// Function Remnant.RemnantQuestAIDirector.EventPlayerExit
struct URemnantQuestAIDirector_EventPlayerExit_Params
{
};

// Function Remnant.RemnantQuestAIDirector.EventPlayerEnter
struct URemnantQuestAIDirector_EventPlayerEnter_Params
{
};

// Function Remnant.RemnantQuestAIDirector.EventEncounterEvent
struct URemnantQuestAIDirector_EventEncounterEvent_Params
{
};

// Function Remnant.LootSourceInterface.OverrideLootTable
struct ULootSourceInterface_OverrideLootTable_Params
{
};

// Function Remnant.RemnantQuestEntity.ZoneUnloaded
struct URemnantQuestEntity_ZoneUnloaded_Params
{
};

// Function Remnant.RemnantQuestEntity.SetFactionAffiliation
struct URemnantQuestEntity_SetFactionAffiliation_Params
{
};

// Function Remnant.RemnantQuestEntity.SetFaction
struct URemnantQuestEntity_SetFaction_Params
{
};

// Function Remnant.RemnantQuestEntity.ResetSpawns
struct URemnantQuestEntity_ResetSpawns_Params
{
};

// Function Remnant.RemnantQuestEntity.ReactivateSpawns
struct URemnantQuestEntity_ReactivateSpawns_Params
{
};

// Function Remnant.RemnantQuestEntity.OnSpawnListLoaded
struct URemnantQuestEntity_OnSpawnListLoaded_Params
{
};

// Function Remnant.RemnantQuestEntity.OnDead
struct URemnantQuestEntity_OnDead_Params
{
};

// Function Remnant.RemnantQuestEntity.OnActorRegistered
struct URemnantQuestEntity_OnActorRegistered_Params
{
};

// Function Remnant.RemnantQuestEntity.OnActorDestroyed
struct URemnantQuestEntity_OnActorDestroyed_Params
{
};

// Function Remnant.RemnantQuestEntity.OnActorDead
struct URemnantQuestEntity_OnActorDead_Params
{
};

// Function Remnant.RemnantQuestEntity.GetZone
struct URemnantQuestEntity_GetZone_Params
{
};

// Function Remnant.RemnantQuestEntity.GetRootQuest
struct URemnantQuestEntity_GetRootQuest_Params
{
};

// Function Remnant.RemnantQuestEntity.GetRemnantQuest
struct URemnantQuestEntity_GetRemnantQuest_Params
{
};

// Function Remnant.RemnantQuestEntity.GetQuestZone
struct URemnantQuestEntity_GetQuestZone_Params
{
};

// Function Remnant.RemnantQuestEntity.GetQuestTile
struct URemnantQuestEntity_GetQuestTile_Params
{
};

// Function Remnant.RemnantQuestEntity.GetNumSpawns
struct URemnantQuestEntity_GetNumSpawns_Params
{
};

// Function Remnant.RemnantQuestEntity.GetActors
struct URemnantQuestEntity_GetActors_Params
{
};

// Function Remnant.RemnantQuestEntityDialog.OnActorSpawned
struct URemnantQuestEntityDialog_OnActorSpawned_Params
{
};

// Function Remnant.RemnantQuestEventRegion.SetMusicState
struct URemnantQuestEventRegion_SetMusicState_Params
{
};

// Function Remnant.RemnantQuestEventRegion.OnActorRegistered
struct URemnantQuestEventRegion_OnActorRegistered_Params
{
};

// Function Remnant.RemnantQuestEventRegion.LockEvent
struct URemnantQuestEventRegion_LockEvent_Params
{
};

// Function Remnant.RemnantQuestEventRegion.IsEventRegionActive
struct URemnantQuestEventRegion_IsEventRegionActive_Params
{
};

// Function Remnant.RemnantQuestEventRegion.IsComplete
struct URemnantQuestEventRegion_IsComplete_Params
{
};

// Function Remnant.RemnantQuestEventRegion.GetPlayersInRegion
struct URemnantQuestEventRegion_GetPlayersInRegion_Params
{
};

// Function Remnant.RemnantQuestEventRegion.GetNumPlayersInRegion
struct URemnantQuestEventRegion_GetNumPlayersInRegion_Params
{
};

// Function Remnant.RemnantQuestEventRegion.GetFirstPlayerInRegion
struct URemnantQuestEventRegion_GetFirstPlayerInRegion_Params
{
};

// Function Remnant.RemnantQuestEventRegion.GetEventRegion
struct URemnantQuestEventRegion_GetEventRegion_Params
{
};

// Function Remnant.RemnantQuestEventRegion.GetAggroGroup
struct URemnantQuestEventRegion_GetAggroGroup_Params
{
};

// Function Remnant.RemnantQuestEventRegion.EventPlayerExit
struct URemnantQuestEventRegion_EventPlayerExit_Params
{
};

// Function Remnant.RemnantQuestEventRegion.EventPlayerEnter
struct URemnantQuestEventRegion_EventPlayerEnter_Params
{
};

// Function Remnant.RemnantQuestEventRegion.EventOnEnd
struct URemnantQuestEventRegion_EventOnEnd_Params
{
};

// Function Remnant.RemnantQuestEventRegion.EventOnBegin
struct URemnantQuestEventRegion_EventOnBegin_Params
{
};

// Function Remnant.RemnantQuestEventRegion.End
struct URemnantQuestEventRegion_End_Params
{
};

// Function Remnant.RemnantQuestEventRegion.CompleteEvent
struct URemnantQuestEventRegion_CompleteEvent_Params
{
};

// Function Remnant.RemnantQuestEventRegion.Begin
struct URemnantQuestEventRegion_Begin_Params
{
};

// Function Remnant.RemnantQuestLink.OnLinkDeactivated
struct URemnantQuestLink_OnLinkDeactivated_Params
{
};

// Function Remnant.RemnantQuestLink.OnLinkActivated
struct URemnantQuestLink_OnLinkActivated_Params
{
};

// Function Remnant.RemnantQuestManager.SortQuestList
struct URemnantQuestManager_SortQuestList_Params
{
};

// Function Remnant.RemnantQuestManager.IsQuestValid
struct URemnantQuestManager_IsQuestValid_Params
{
};

// Function Remnant.RemnantQuestManager.GetRootQuests
struct URemnantQuestManager_GetRootQuests_Params
{
};

// Function Remnant.RemnantQuestManager.GetRootQuestForSlot
struct URemnantQuestManager_GetRootQuestForSlot_Params
{
};

// Function Remnant.RemnantQuestManager.GetRegisteredRootQuestsForMode
struct URemnantQuestManager_GetRegisteredRootQuestsForMode_Params
{
};

// Function Remnant.RemnantQuestManager.GetRegisteredRootQuests
struct URemnantQuestManager_GetRegisteredRootQuests_Params
{
};

// Function Remnant.RemnantQuestManager.GetRegisteredQuests
struct URemnantQuestManager_GetRegisteredQuests_Params
{
};

// Function Remnant.RemnantQuestManager.GetRegisteredQuestByID
struct URemnantQuestManager_GetRegisteredQuestByID_Params
{
};

// Function Remnant.RemnantQuestManager.GetQuestsForActor
struct URemnantQuestManager_GetQuestsForActor_Params
{
};

// Function Remnant.RemnantQuestManager.GetLicenseForSoftQuest
struct URemnantQuestManager_GetLicenseForSoftQuest_Params
{
};

// Function Remnant.RemnantQuestManager.GetCurrentQuestObjective
struct URemnantQuestManager_GetCurrentQuestObjective_Params
{
};

// Function Remnant.RemnantQuestManager.GetActiveRootQuest
struct URemnantQuestManager_GetActiveRootQuest_Params
{
};

// Function Remnant.RemnantQuestManager.DestroyRootQuest
struct URemnantQuestManager_DestroyRootQuest_Params
{
};

// Function Remnant.RemnantQuestManager.CreateRootQuest
struct URemnantQuestManager_CreateRootQuest_Params
{
};

// Function Remnant.RemnantQuestManager.ActivateRootQuest
struct URemnantQuestManager_ActivateRootQuest_Params
{
};

// Function Remnant.RemnantQuestSubQuest.SubQuestComplete
struct URemnantQuestSubQuest_SubQuestComplete_Params
{
};

// Function Remnant.RemnantQuestSubQuest.OnLinkDeactivated
struct URemnantQuestSubQuest_OnLinkDeactivated_Params
{
};

// Function Remnant.RemnantQuestSubQuest.OnLinkActivated
struct URemnantQuestSubQuest_OnLinkActivated_Params
{
};

// Function Remnant.RemnantQuestSubQuest.GetSubQuest
struct URemnantQuestSubQuest_GetSubQuest_Params
{
};

// Function Remnant.RemnantQuestTile.SetTileActive
struct URemnantQuestTile_SetTileActive_Params
{
};

// Function Remnant.RemnantQuestTile.GetZoneLink
struct URemnantQuestTile_GetZoneLink_Params
{
};

// Function Remnant.RemnantQuestTile.GetTileCoord
struct URemnantQuestTile_GetTileCoord_Params
{
};

// Function Remnant.RemnantQuestTile.GetTileAttribute
struct URemnantQuestTile_GetTileAttribute_Params
{
};

// Function Remnant.RemnantQuestTrigger.OnActorRegistered
struct URemnantQuestTrigger_OnActorRegistered_Params
{
};

// Function Remnant.RemnantQuestTrigger.GetTrigger
struct URemnantQuestTrigger_GetTrigger_Params
{
};

// Function Remnant.RemnantQuestTrigger.GetPlayersInTrigger
struct URemnantQuestTrigger_GetPlayersInTrigger_Params
{
};

// Function Remnant.RemnantQuestTrigger.GetNumPlayersInTrigger
struct URemnantQuestTrigger_GetNumPlayersInTrigger_Params
{
};

// Function Remnant.RemnantQuestTrigger.EventPlayerExit
struct URemnantQuestTrigger_EventPlayerExit_Params
{
};

// Function Remnant.RemnantQuestTrigger.EventPlayerEnter
struct URemnantQuestTrigger_EventPlayerEnter_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.WaveComplete
struct URemnantQuestWaveEncounter_WaveComplete_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Stop
struct URemnantQuestWaveEncounter_Stop_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.SpawnWave
struct URemnantQuestWaveEncounter_SpawnWave_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Resume
struct URemnantQuestWaveEncounter_Resume_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Pause
struct URemnantQuestWaveEncounter_Pause_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.IsQuestWaveActive
struct URemnantQuestWaveEncounter_IsQuestWaveActive_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.EventPlayerExit
struct URemnantQuestWaveEncounter_EventPlayerExit_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.EventPlayerEnter
struct URemnantQuestWaveEncounter_EventPlayerEnter_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.EventOnEnd
struct URemnantQuestWaveEncounter_EventOnEnd_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Begin
struct URemnantQuestWaveEncounter_Begin_Params
{
};

// Function Remnant.RemnantQuestZone.ZoneUnloaded
struct URemnantQuestZone_ZoneUnloaded_Params
{
};

// Function Remnant.RemnantQuestZone.ZoneLoaded
struct URemnantQuestZone_ZoneLoaded_Params
{
};

// Function Remnant.RemnantQuestZone.TravelToParent
struct URemnantQuestZone_TravelToParent_Params
{
};

// Function Remnant.RemnantQuestZone.SetSpawnTableOverride
struct URemnantQuestZone_SetSpawnTableOverride_Params
{
};

// Function Remnant.RemnantQuestZone.PlayerExitedZone
struct URemnantQuestZone_PlayerExitedZone_Params
{
};

// Function Remnant.RemnantQuestZone.PlayerEnteredZone
struct URemnantQuestZone_PlayerEnteredZone_Params
{
};

// Function Remnant.RemnantQuestZone.ParentMapLoaded
struct URemnantQuestZone_ParentMapLoaded_Params
{
};

// Function Remnant.RemnantQuestZone.MapLoaded
struct URemnantQuestZone_MapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.MulticastSetLinkActive
struct URemnantQuestZoneLink_MulticastSetLinkActive_Params
{
};

// Function Remnant.RemnantQuestZoneLink.MapLoaded
struct URemnantQuestZoneLink_MapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DestinationZoneLoaded
struct URemnantQuestZoneLink_DestinationZoneLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DestinationMapLoaded
struct URemnantQuestZoneLink_DestinationMapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DeactivateWaypoint
struct URemnantQuestZoneLink_DeactivateWaypoint_Params
{
};

// Function Remnant.RemnantQuestZoneLink.ActivateWaypoint
struct URemnantQuestZoneLink_ActivateWaypoint_Params
{
};

// Function Remnant.RemnantSkyboxManager.RegisterSkyboxModifierVolume
struct URemnantSkyboxManager_RegisterSkyboxModifierVolume_Params
{
};

// Function Remnant.RemnantSkyboxManager.RefreshModifierVolumes
struct URemnantSkyboxManager_RefreshModifierVolumes_Params
{
};

// Function Remnant.RemnantSkyboxManager.OnPlayerExitVolume
struct URemnantSkyboxManager_OnPlayerExitVolume_Params
{
};

// Function Remnant.RemnantSkyboxManager.OnPlayerEnterVolume
struct URemnantSkyboxManager_OnPlayerEnterVolume_Params
{
};

// Function Remnant.RemnantSkyboxManager.IsPlayerInAnyModifierVolumes
struct URemnantSkyboxManager_IsPlayerInAnyModifierVolumes_Params
{
};

// Function Remnant.RemnantSkyboxManager.InitSkyboxManager
struct URemnantSkyboxManager_InitSkyboxManager_Params
{
};

// Function Remnant.RemnantSkyboxManager.GetInstance
struct URemnantSkyboxManager_GetInstance_Params
{
};

// Function Remnant.RemnantSpawnFilterManager.GetManagerInstance
struct URemnantSpawnFilterManager_GetManagerInstance_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnValidTarget
struct ARemnantSpectatorPawn_OnValidTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnTargetUnavailable
struct ARemnantSpectatorPawn_OnTargetUnavailable_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnSpectateTarget
struct ARemnantSpectatorPawn_OnSpectateTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnLeaveTarget
struct ARemnantSpectatorPawn_OnLeaveTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnInvalidTarget
struct ARemnantSpectatorPawn_OnInvalidTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnFinishTravel
struct ARemnantSpectatorPawn_OnFinishTravel_Params
{
};

// Function Remnant.RemnantSpectatorPawn.IsValidTarget
struct ARemnantSpectatorPawn_IsValidTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.GetNumAvailableTargets
struct ARemnantSpectatorPawn_GetNumAvailableTargets_Params
{
};

// Function Remnant.RemnantSpectatorPawn.GetCurrentTarget
struct ARemnantSpectatorPawn_GetCurrentTarget_Params
{
};

// Function Remnant.RemnantTraitsComponent.ServerAddTraitPoints
struct URemnantTraitsComponent_ServerAddTraitPoints_Params
{
};

// Function Remnant.RemnantTraitsComponent.MarkClientTraitPointChangeValid
struct URemnantTraitsComponent_MarkClientTraitPointChangeValid_Params
{
};

// Function Remnant.RemnantTraitsComponent.GetTraitsForLevel
struct URemnantTraitsComponent_GetTraitsForLevel_Params
{
};

// Function Remnant.RemnantTraitsComponent.GetTraitLevelBands
struct URemnantTraitsComponent_GetTraitLevelBands_Params
{
};

// Function Remnant.RemnantTraitsComponent.GetTraitByLevelAndCategory
struct URemnantTraitsComponent_GetTraitByLevelAndCategory_Params
{
};

// Function Remnant.RemnantTraitsComponent.GetTotalAvailableTraits
struct URemnantTraitsComponent_GetTotalAvailableTraits_Params
{
};

// Function Remnant.RemnantTraitsComponent.GetNumAvailableTraits
struct URemnantTraitsComponent_GetNumAvailableTraits_Params
{
};

// Function Remnant.RemnantTraitsComponent.ClientTraitPointTimeOut
struct URemnantTraitsComponent_ClientTraitPointTimeOut_Params
{
};

// Function Remnant.RemnantTraitsComponent.ClientTraitLevelTimeOut
struct URemnantTraitsComponent_ClientTraitLevelTimeOut_Params
{
};

// Function Remnant.RemnantTraitsComponent.ClientSpentTraitPointTimeOut
struct URemnantTraitsComponent_ClientSpentTraitPointTimeOut_Params
{
};

// Function Remnant.RemnantUtil.IsGameSessionReady
struct URemnantUtil_IsGameSessionReady_Params
{
};

// Function Remnant.RemnantUtil.GetGameSeed
struct URemnantUtil_GetGameSeed_Params
{
};

// Function Remnant.RemnantUtil.GetBaseZoneLinkByLabel
struct URemnantUtil_GetBaseZoneLinkByLabel_Params
{
};

// Function Remnant.RemnantUtil.GetBaseZoneLink
struct URemnantUtil_GetBaseZoneLink_Params
{
};

// Function Remnant.RemnantUtil.GetBaseZoneID
struct URemnantUtil_GetBaseZoneID_Params
{
};

// Function Remnant.RemnantUtil.GetBaseZoneActor
struct URemnantUtil_GetBaseZoneActor_Params
{
};

// Function Remnant.RemnantUtil.CanPlayerExitGame
struct URemnantUtil_CanPlayerExitGame_Params
{
};

// Function Remnant.RemnantWeaponMod.ShowReticule
struct ARemnantWeaponMod_ShowReticule_Params
{
};

// Function Remnant.RemnantWeaponMod.SetMinHoldTime
struct ARemnantWeaponMod_SetMinHoldTime_Params
{
};

// Function Remnant.RemnantWeaponMod.OnUse
struct ARemnantWeaponMod_OnUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnStartCustomIdle
struct ARemnantWeaponMod_OnStartCustomIdle_Params
{
};

// Function Remnant.RemnantWeaponMod.OnSecondaryActivate
struct ARemnantWeaponMod_OnSecondaryActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreviewStart
struct ARemnantWeaponMod_OnPreviewStart_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreviewEnd
struct ARemnantWeaponMod_OnPreviewEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreFireEnd
struct ARemnantWeaponMod_OnPreFireEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreFireBegin
struct ARemnantWeaponMod_OnPreFireBegin_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreActivate
struct ARemnantWeaponMod_OnPreActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFireEnd
struct ARemnantWeaponMod_OnFireEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFireBegin
struct ARemnantWeaponMod_OnFireBegin_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFire
struct ARemnantWeaponMod_OnFire_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFinishLoadingAssets
struct ARemnantWeaponMod_OnFinishLoadingAssets_Params
{
};

// Function Remnant.RemnantWeaponMod.OnEndUse
struct ARemnantWeaponMod_OnEndUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnEndCustomIdle
struct ARemnantWeaponMod_OnEndCustomIdle_Params
{
};

// Function Remnant.RemnantWeaponMod.OnDeactivate
struct ARemnantWeaponMod_OnDeactivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnChargesChanged
struct ARemnantWeaponMod_OnChargesChanged_Params
{
};

// Function Remnant.RemnantWeaponMod.OnCharacterHitTarget
struct ARemnantWeaponMod_OnCharacterHitTarget_Params
{
};

// Function Remnant.RemnantWeaponMod.OnBeginUse
struct ARemnantWeaponMod_OnBeginUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnActivate
struct ARemnantWeaponMod_OnActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.ModifyModPower
struct ARemnantWeaponMod_ModifyModPower_Params
{
};

// Function Remnant.RemnantWeaponMod.IsUseState
struct ARemnantWeaponMod_IsUseState_Params
{
};

// Function Remnant.RemnantWeaponMod.IsPreviewing
struct ARemnantWeaponMod_IsPreviewing_Params
{
};

// Function Remnant.RemnantWeaponMod.GetWeapon
struct ARemnantWeaponMod_GetWeapon_Params
{
};

// Function Remnant.RemnantWeaponMod.GetUseState
struct ARemnantWeaponMod_GetUseState_Params
{
};

// Function Remnant.RemnantWeaponMod.GetModAssetAsClass
struct ARemnantWeaponMod_GetModAssetAsClass_Params
{
};

// Function Remnant.RemnantWeaponMod.GetModAsset
struct ARemnantWeaponMod_GetModAsset_Params
{
};

// Function Remnant.RemnantWeaponMod.GetModActiveRemainingPct
struct ARemnantWeaponMod_GetModActiveRemainingPct_Params
{
};

// Function Remnant.RemnantWeaponMod.GetClientAimVector
struct ARemnantWeaponMod_GetClientAimVector_Params
{
};

// Function Remnant.RemnantWeaponMod.CanUse
struct ARemnantWeaponMod_CanUse_Params
{
};

// Function Remnant.RemnantWeaponMod.CanDeactivateMod
struct ARemnantWeaponMod_CanDeactivateMod_Params
{
};

// Function Remnant.RemnantWeaponMod.CalculateClientAimVector
struct ARemnantWeaponMod_CalculateClientAimVector_Params
{
};

// Function Remnant.RemnantWeaponMod.AreAssetsLoaded
struct ARemnantWeaponMod_AreAssetsLoaded_Params
{
};

// Function Remnant.RemnantWeaponMod.ApplyDamageInfoToModPower
struct ARemnantWeaponMod_ApplyDamageInfoToModPower_Params
{
};

// Function Remnant.RemnantWeaponMod.AddModPower
struct ARemnantWeaponMod_AddModPower_Params
{
};

// Function Remnant.SpectatorTargetComponent.OnSpectatorTargetUnavailable
struct USpectatorTargetComponent_OnSpectatorTargetUnavailable_Params
{
};

// Function Remnant.UtilityItem.UseCharge
struct AUtilityItem_UseCharge_Params
{
};

// Function Remnant.UtilityItem.Recharge
struct AUtilityItem_Recharge_Params
{
};

// Function Remnant.UtilityItem.GetCooldownPct
struct AUtilityItem_GetCooldownPct_Params
{
};

// Function Remnant.UtilityItem.GetCharges
struct AUtilityItem_GetCharges_Params
{
};

// Function Remnant.WorldResetInterface.OnWorldReset
struct UWorldResetInterface_OnWorldReset_Params
{
};

// Function Remnant.WorldResetInterface.OnNotifyAllWorldReset
struct UWorldResetInterface_OnNotifyAllWorldReset_Params
{
};

// Function Remnant.WorldResetUtil.IsWorldResetInProgress
struct UWorldResetUtil_IsWorldResetInProgress_Params
{
};

// Function Remnant.WorldResetUtil.GetWorldResetColorIndex
struct UWorldResetUtil_GetWorldResetColorIndex_Params
{
};

// Function Remnant.ZoneActor.UpdateLevelScaling
struct AZoneActor_UpdateLevelScaling_Params
{
};

// Function Remnant.ZoneActor.UnloadZone
struct AZoneActor_UnloadZone_Params
{
};

// Function Remnant.ZoneActor.OnResourcesLoad
struct AZoneActor_OnResourcesLoad_Params
{
};

// Function Remnant.ZoneActor.OnRep_ServerState
struct AZoneActor_OnRep_ServerState_Params
{
};

// Function Remnant.ZoneActor.OnRep_Level
struct AZoneActor_OnRep_Level_Params
{
};

// Function Remnant.ZoneActor.OnMapGenInitialized
struct AZoneActor_OnMapGenInitialized_Params
{
};

// Function Remnant.ZoneActor.OnMapGenFullyLoaded
struct AZoneActor_OnMapGenFullyLoaded_Params
{
};

// Function Remnant.ZoneActor.OnMapGenFailed
struct AZoneActor_OnMapGenFailed_Params
{
};

// Function Remnant.ZoneActor.OnFinalizeLoad
struct AZoneActor_OnFinalizeLoad_Params
{
};

// Function Remnant.ZoneActor.LoadZone
struct AZoneActor_LoadZone_Params
{
};

// Function Remnant.ZoneActor.IsLoaded
struct AZoneActor_IsLoaded_Params
{
};

// Function Remnant.ZoneActor.IsFullyUnloaded
struct AZoneActor_IsFullyUnloaded_Params
{
};

// Function Remnant.ZoneActor.IsChildZone
struct AZoneActor_IsChildZone_Params
{
};

// Function Remnant.ZoneActor.HasFailedLoad
struct AZoneActor_HasFailedLoad_Params
{
};

// Function Remnant.ZoneActor.GetZoneStatus
struct AZoneActor_GetZoneStatus_Params
{
};

// Function Remnant.ZoneActor.GetZoneLevel
struct AZoneActor_GetZoneLevel_Params
{
};

// Function Remnant.ZoneActor.GetUniqueName
struct AZoneActor_GetUniqueName_Params
{
};

// Function Remnant.ZoneActor.GetTOD
struct AZoneActor_GetTOD_Params
{
};

// Function Remnant.ZoneActor.GetQuest
struct AZoneActor_GetQuest_Params
{
};

// Function Remnant.ZoneActor.GetParentZone
struct AZoneActor_GetParentZone_Params
{
};

// Function Remnant.ZoneActor.GetItemLevel
struct AZoneActor_GetItemLevel_Params
{
};

// Function Remnant.ZoneActor.ContainsActor
struct AZoneActor_ContainsActor_Params
{
};

// Function Remnant.ZoneManager.UnlockAllWaypoints
struct UZoneManager_UnlockAllWaypoints_Params
{
};

// Function Remnant.ZoneManager.GetZoneForSlot
struct UZoneManager_GetZoneForSlot_Params
{
};

// Function Remnant.ZoneManager.GetZoneForActor
struct UZoneManager_GetZoneForActor_Params
{
};

// Function Remnant.ZoneManager.GetZoneByNameID
struct UZoneManager_GetZoneByNameID_Params
{
};

// Function Remnant.ZoneManager.GetZoneByID
struct UZoneManager_GetZoneByID_Params
{
};

// Function Remnant.ZoneManager.GetInstance
struct UZoneManager_GetInstance_Params
{
};

// Function Remnant.ZoneManager.GetBiomeForActor
struct UZoneManager_GetBiomeForActor_Params
{
};

// Function Remnant.ZoneManager.DestroyZone
struct UZoneManager_DestroyZone_Params
{
};

// Function Remnant.ZoneManager.CreateZone
struct UZoneManager_CreateZone_Params
{
};

// Function Remnant.ZoneLinkComponent.TravelToWaypoint
struct UZoneLinkComponent_TravelToWaypoint_Params
{
};

// Function Remnant.ZoneLinkComponent.TravelToDestinationZone
struct UZoneLinkComponent_TravelToDestinationZone_Params
{
};

// Function Remnant.ZoneLinkComponent.OnRep_NameID
struct UZoneLinkComponent_OnRep_NameID_Params
{
};

// Function Remnant.ZoneLinkComponent.OnRep_IsRespawnZoneLink
struct UZoneLinkComponent_OnRep_IsRespawnZoneLink_Params
{
};

// Function Remnant.ZoneLinkComponent.IsWaypoint
struct UZoneLinkComponent_IsWaypoint_Params
{
};

// Function Remnant.ZoneLinkComponent.IsRespawnZoneLink
struct UZoneLinkComponent_IsRespawnZoneLink_Params
{
};

// Function Remnant.ZoneLinkComponent.IsLinkActive
struct UZoneLinkComponent_IsLinkActive_Params
{
};

// Function Remnant.ZoneLinkComponent.IsDestinationZoneLoaded
struct UZoneLinkComponent_IsDestinationZoneLoaded_Params
{
};

// Function Remnant.ZoneLinkComponent.HasBeenUsed
struct UZoneLinkComponent_HasBeenUsed_Params
{
};

// Function Remnant.ZoneLinkComponent.GetType
struct UZoneLinkComponent_GetType_Params
{
};

// Function Remnant.ZoneLinkComponent.GetSpawnPoint
struct UZoneLinkComponent_GetSpawnPoint_Params
{
};

// Function Remnant.ZoneLinkComponent.GetLinkInfo
struct UZoneLinkComponent_GetLinkInfo_Params
{
};

// Function Remnant.ZoneLinkComponent.GetDestinationZone
struct UZoneLinkComponent_GetDestinationZone_Params
{
};

// Function Remnant.ZoneLinkComponent.GetAccessibleWaypoints
struct UZoneLinkComponent_GetAccessibleWaypoints_Params
{
};

// Function Remnant.ZoneLinkComponent.ActivateLink
struct UZoneLinkComponent_ActivateLink_Params
{
};

// Function Remnant.ZoneRegion.OnRegionExit
struct AZoneRegion_OnRegionExit_Params
{
};

// Function Remnant.ZoneRegion.OnRegionEnter
struct AZoneRegion_OnRegionEnter_Params
{
};

// Function Remnant.ZoneRegion.Contains
struct AZoneRegion_Contains_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
