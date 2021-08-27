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
// Classes
//---------------------------------------------------------------------------

// Class Remnant.AccountAward
// 0x0000
class UAccountAward : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AccountAward");
		return ptr;
	}



};

// Class Remnant.AccountAwardRecipe
// 0x0000
class UAccountAwardRecipe : public UCraftingRecipe_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AccountAwardRecipe");
		return ptr;
	}



};

// Class Remnant.ActionBuff
// 0x0000
class UActionBuff : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ActionBuff");
		return ptr;
	}



	void ResetTimer();
	void PauseDuration();
	void IsDurationPaused();
	void GetRemainingTime();
	void GetElapsedTimePct();
	void GetDesiredVisual();
	void ApplyTimerDelta();
};

// Class Remnant.AnimNotify_ShowLastUsedItem
// 0x0000
class UAnimNotify_ShowLastUsedItem : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AnimNotify_ShowLastUsedItem");
		return ptr;
	}



};

// Class Remnant.Armor
// 0x0000
class AArmor : public AEquipment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Armor");
		return ptr;
	}



};

// Class Remnant.Checkpoint
// 0x0000
class ACheckpoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Checkpoint");
		return ptr;
	}



	void OnFinishActivation();
	void OnEndGrab();
	void OnBeginGrab();
	void OnBeginActivation();
	void OnActivate();
	void CanCheckpointActivate();
};

// Class Remnant.DragonHeart
// 0x0000
class ADragonHeart : public AUseableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.DragonHeart");
		return ptr;
	}



	void Regenerate();
	void GetMaxCurrentQuantity();
};

// Class Remnant.EmoteAward
// 0x0000
class UEmoteAward : public UAccountAward
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EmoteAward");
		return ptr;
	}



};

// Class Remnant.Emote
// 0x0000
class UEmote : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Emote");
		return ptr;
	}



	void GetIcon();
};

// Class Remnant.EmotesComponent
// 0x0000
class UEmotesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EmotesComponent");
		return ptr;
	}



	void UnlockEmote();
	void SlotEmote();
	void ServerUpdateSlots();
	void ServerUnlockEmote();
	void RequestEmoteIcon();
	void OnLoadIcon();
	void HasEmote();
	void GetUnlockedEmotes();
	void GetEmoteForSlot();
	void ClearEmoteIcon();
	void ClearAllEmoteIcons();
};

// Class Remnant.EventRegion
// 0x0000
class AEventRegion : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EventRegion");
		return ptr;
	}



	void PlayerExit();
	void PlayerEnter();
	void OnRep_Players();
	void OnRep_Active();
	void OnDead();
	void LockEvent();
	void IsPlayerInRegion();
	void IsLocked();
	void IsLocalPlayerInRegion();
	void IsComplete();
	void IsCharacterInRegion();
	void IsActive();
	void HasLocalPlayerVisited();
	void GetFirstCharacter();
	void GetEventRegionForActor();
	void GetEventRegionContainingActor();
	void GetCharacters();
	void End();
	void CompleteEvent();
	void Begin();
};

// Class Remnant.FlashlightInstanceData
// 0x0000
class UFlashlightInstanceData : public UEquipmentInstanceData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.FlashlightInstanceData");
		return ptr;
	}



};

// Class Remnant.Flashlight
// 0x0000
class AFlashlight : public AUseableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Flashlight");
		return ptr;
	}



	void ServerToggleFlashlight();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnEndFlash();
	void OnBeginFlash();
	void LightEndOverlap();
	void LightBeginOverlap();
	void ApplyChargeDelta();
};

// Class Remnant.GameReadyCondition
// 0x0000
class UGameReadyCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GameReadyCondition");
		return ptr;
	}



};

// Class Remnant.GenericItem
// 0x0000
class AGenericItem : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GenericItem");
		return ptr;
	}



	void ValidatePickupHandled();
	void ValidateAddToInventory();
	void OnRep_CachedSpawnList();
	void OnFinishedItemInit();
	void HasMaxSpawnsForCharacter();
	void HandleAward();
};

// Class Remnant.ItemType_Throwable
// 0x0000
class UItemType_Throwable : public UItemType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemType_Throwable");
		return ptr;
	}



};

// Class Remnant.SpawnedGrenade
// 0x0000
class ASpawnedGrenade : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnedGrenade");
		return ptr;
	}



	void OnStoppedMoving();
	void OnRep_GrenadeRepData();
	void OnDetonated();
	void GetGrenadeLifeSpan();
	void GetGrenadeItemCDO();
	void Detonate();
};

// Class Remnant.Grenade
// 0x0000
class AGrenade : public AWeaponBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Grenade");
		return ptr;
	}



	void ValidateUse();
	void Throw();
	void ServerThrowPressed();
	void ServerKeyPressed();
	void OnRep_State();
	void MulticastThrown();
	void MulticastPlayThrowAnim();
	void MulticastPlayEquipAnim();
	void GetTotalGrenadeLifeSpan();
	void GetRemainingGrenadeLifeSpan();
	void GetRange();
	void GetDetonatesWhenStoppedMoving();
	void GetDamageRadius();
	void GetDamage();
	void CalculateGrenadePath();
};

// Class Remnant.RemnantAnimInstance
// 0x0000
class URemnantAnimInstance : public UAnimInstanceGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantAnimInstance");
		return ptr;
	}



};

// Class Remnant.GunnerAnimInstance
// 0x0000
class UGunnerAnimInstance : public URemnantAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GunnerAnimInstance");
		return ptr;
	}



};

// Class Remnant.GunObstructionCondition
// 0x0000
class UGunObstructionCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GunObstructionCondition");
		return ptr;
	}



};

// Class Remnant.ItemAward
// 0x0000
class UItemAward : public UAccountAward
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemAward");
		return ptr;
	}



};

// Class Remnant.ItemCategory_Quest
// 0x0000
class UItemCategory_Quest : public UItemCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemCategory_Quest");
		return ptr;
	}



};

// Class Remnant.ItemCategory_PlayerQuest
// 0x0000
class UItemCategory_PlayerQuest : public UItemCategory_Quest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemCategory_PlayerQuest");
		return ptr;
	}



};

// Class Remnant.LegacyTraitsComponent
// 0x0000
class ULegacyTraitsComponent : public UTraitsComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LegacyTraitsComponent");
		return ptr;
	}



};

// Class Remnant.LootContainer
// 0x0000
class ALootContainer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LootContainer");
		return ptr;
	}



	void OnSpawnListLoaded();
	void Generate();
	void ClearItems();
};

// Class Remnant.LoreItem
// 0x0000
class ALoreItem : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LoreItem");
		return ptr;
	}



	void LoreNotify();
};

// Class Remnant.Matchmaker
// 0x0000
class UMatchmaker : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Matchmaker");
		return ptr;
	}



	void UpdateSession();
	void UpdateJoinability();
	void StartSession();
	void ShowSessionGamertagInfo();
	void SetSessionJoinability();
	void RequestGamerTagInfo();
	void RejoinLastSession();
	void OnShowQueuedMatchmakingEventMessages();
	void OnSessionEndedEvent();
	void OnPlayerNameChanged();
	void OnMainMenuLoaded();
	void KickPlayer();
	void JoinSession();
	void IsSessionJoinable();
	void IsPresenceJoinURLValid();
	void IsOnline();
	void IsLocalCharacterSurvival();
	void IsLocalCharacterHardcore();
	void IsJoiningSession();
	void IsFindingSessions();
	void InviteFriend();
	void Init();
	void GetSessionStateName();
	void GetSessionDetails();
	void GetMatchmakerInstance();
	void GetCurrentSessionDisplay();
	void EndFindSessions();
	void DestroySession();
	void CreateSession();
	void ChangeSession();
	void CanRejoinLastSession();
	void CanJoinSessionGameMode();
	void CanChangeSessiontype();
	void BeginJoinPublicGame();
	void BeginFindSessions();
};

// Class Remnant.MatchmakerListenerInterface
// 0x0000
class UMatchmakerListenerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.MatchmakerListenerInterface");
		return ptr;
	}



	void OnSessionStarted();
	void OnSessionsFound();
	void OnSessionJoined();
	void OnSessionFailed();
	void OnSessionEnded();
	void OnSessionCreated();
};

// Class Remnant.MinimapThumbnail
// 0x0000
class AMinimapThumbnail : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.MinimapThumbnail");
		return ptr;
	}



};

// Class Remnant.PlayersNearbyCondition
// 0x0000
class UPlayersNearbyCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayersNearbyCondition");
		return ptr;
	}



};

// Class Remnant.PlayerStateRemnant
// 0x0000
class APlayerStateRemnant : public APlayerStateGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayerStateRemnant");
		return ptr;
	}



	void SetIsLocalPlayerTarget();
	void ServerSetChatRestricted();
	void OnRep_Traveling();
	void OnRep_ChatRestricted();
	void IsTraveling();
	void IsChatRestricted();
};

// Class Remnant.PreservedUserWidget
// 0x0000
class UPreservedUserWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PreservedUserWidget");
		return ptr;
	}



};

// Class Remnant.QuestItemType
// 0x0000
class UQuestItemType : public UItemType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.QuestItemType");
		return ptr;
	}



};

// Class Remnant.QuestTrigger
// 0x0000
class AQuestTrigger : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.QuestTrigger");
		return ptr;
	}



	void IsLocalPlayerInRegion();
	void GetTriggerVolume();
	void GetCharacters();
};

// Class Remnant.RadialShortcutComponent
// 0x0000
class URadialShortcutComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RadialShortcutComponent");
		return ptr;
	}



};

// Class Remnant.Zone
// 0x0000
class UZone : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Zone");
		return ptr;
	}



};

// Class Remnant.RandomWorld
// 0x0000
class URandomWorld : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RandomWorld");
		return ptr;
	}



};

// Class Remnant.RasterWidgetComponent
// 0x0000
class URasterWidgetComponent : public UWidgetComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RasterWidgetComponent");
		return ptr;
	}



	void GetWidgetTexture();
	void ForceRedraw();
	void CreateWidgetMaterial();
};

// Class Remnant.RemnantArchetype
// 0x0000
class URemnantArchetype : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantArchetype");
		return ptr;
	}



};

// Class Remnant.RemnantRangedWeapon
// 0x0000
class ARemnantRangedWeapon : public ARangedWeapon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantRangedWeapon");
		return ptr;
	}



	void UseMod();
	void UseCharge();
	void UseAllCharges();
	void ShouldModCancelUse();
	void SetModActive();
	void ServerUseWithAim();
	void ServerUse();
	void OnRep_Power();
	void OnRep_ModActive();
	void OnRep_Charges();
	void OnFinishWeaponModeAnimation();
	void OnFinishUseState();
	void OnFinishUseAnimation();
	void OnAltFireReleased();
	void OnAltFirePressed();
	void OnActivateSecondary();
	void OnActivate();
	void OnActionRemoved();
	void MulticastUse();
	void IsModActive();
	void GetWeaponMod();
	void GetPower();
	void GetModActiveState();
	void GetModActiveRemainingPct();
	void GetCharges();
	void DelayedDeactivate();
};

// Class Remnant.RemnantBeamWeapon
// 0x0000
class ARemnantBeamWeapon : public ARemnantRangedWeapon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantBeamWeapon");
		return ptr;
	}



	void SetBeamFiring_Server();
	void OnRep_BeamFiring();
	void OnEndBeamFX();
	void OnBeginBeamFX();
	void IsBeamFiring();
};

// Class Remnant.RemnantCharacter
// 0x0000
class ARemnantCharacter : public APlayerGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacter");
		return ptr;
	}



	void UpdatePlayerInfoTag();
	void UpdatePersistentBuffs();
	void TeleportToSpawnPoint();
	void SetSpawnPoint();
	void SetOldController();
	void SetHelmetShown();
	void SetGrabbedCheckpoint();
	void SetDeactivated();
	void ServerSetHelmetShown();
	void ResetAmmoInClip();
	void RemovePersistentBuff();
	void OnShowHelmetOptionChanged();
	void OnRespawnAfterDeath();
	void OnRep_ShowHelmet();
	void OnRep_GrabbedCheckpoint();
	void OnRep_Deactivated();
	void OnCharacterDied();
	void IsReviving();
	void IsDead();
	void InitializePersistentBuffs();
	void GetOldController();
	void GetCurrentRangedWeapon();
	void GetCharacterInfo();
	void GetAge();
	void ComputePowerLevel();
	void ComputeOffenseLevel();
	void ComputeDefenseLevel();
	void ClientTeleportToSpawnPoint();
	void ClientTeleport();
	void ClientSetSpawnPoint();
	void ClientRemoveAllPings();
	void AddPersistentBuff();
};

// Class Remnant.SavedCharacter
// 0x0000
class USavedCharacter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SavedCharacter");
		return ptr;
	}



	void SetSkipIntro();
	void SetKey();
	void SetCharacterType();
	void MarkValidExit();
	void IncrementCounter();
	void HasKey();
	void GetCounter();
	void CheckForInvalidExit();
};

// Class Remnant.RemnantSaveGameProfile
// 0x0000
class URemnantSaveGameProfile : public USaveGameProfile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSaveGameProfile");
		return ptr;
	}



	void UpdateAccountCurrency();
	void GetAccountCurrencyForItemType();
};

// Class Remnant.RemnantCharacterManager
// 0x0000
class URemnantCharacterManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacterManager");
		return ptr;
	}



	void ShouldAwardHardcoreRewards();
	void SetActiveCharacter();
	void RestoreCharacters();
	void ResolvePendingExit();
	void IsHardcore();
	void IsDeceasedCharacter();
	void HasBackupCharacters();
	void HasActiveCharacter();
	void GetTransientCharacters();
	void GetMaxCharacterCount();
	void GetCharacters();
	void GetCharacterManager();
	void GetCharacterInfo();
	void GetCharacterCount();
	void GetCharacterAt();
	void GetCharacter();
	void GetActiveEquipmentVisuals();
	void GetActiveCharacter();
	void DeleteTransientCharacters();
	void DeleteTransientCharacter();
	void DeleteCharacter();
	void CreateTransientCharacter();
	void CreateCharacter();
};

// Class Remnant.RemnantCharacterSettings
// 0x0000
class URemnantCharacterSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacterSettings");
		return ptr;
	}



};

// Class Remnant.RemnantCheatManager
// 0x0000
class URemnantCheatManager : public UCheatManagerGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCheatManager");
		return ptr;
	}



	void UnlockAllWaypoints();
	void UnlockAllEmotes();
	void TravelToQuest();
	void ToggleShowBlood();
	void ToggleFogOfWar();
	void ToggleDLC();
	void SpawnDebugQuest();
	void ShowMatchmakingPowerLevel();
	void SetDifficulty();
	void RaiseDifficulty();
	void LowerDifficulty();
	void Joinability();
	void GiveAccountAward();
	void AddScrap();
	void AddExperience();
};

// Class Remnant.RemnantDifficultyScalingComponent
// 0x0000
class URemnantDifficultyScalingComponent : public UDifficultyScalingComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantDifficultyScalingComponent");
		return ptr;
	}



};

// Class Remnant.RemnantFlyCameraState
// 0x0000
class URemnantFlyCameraState : public UFlyCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantFlyCameraState");
		return ptr;
	}



};

// Class Remnant.RemnantFogOfWarComponent
// 0x0000
class URemnantFogOfWarComponent : public UFogOfWarComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantFogOfWarComponent");
		return ptr;
	}



	void UpdateMaterial();
	void SetDebugLocation();
	void LockToActor();
	void HasDebugLocation();
	void GetLockActor();
	void ClearDebugLocation();
};

// Class Remnant.RemnantGameInstance
// 0x0000
class URemnantGameInstance : public UGameInstanceGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameInstance");
		return ptr;
	}



	void OnOnlinePrivilegeChecked();
	void OnMainMenuLoaded();
	void OnDeviceChanged();
	void OnActiveProfileSet();
	void IsDemo();
	void GetDemoMode();
	void DoJoinViaPresence();
	void DoAuth();
	void CheckConnectionStatusChanges();
};

// Class Remnant.RemnantGameMode
// 0x0000
class ARemnantGameMode : public AGameModeGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameMode");
		return ptr;
	}



	void TravelToZone();
	void TravelToLastCheckpoint();
	void SetPostDeathScreenTime();
	void SetAsRootCheckpoint();
	void SetAsRespawnZoneLink();
	void OnFullGameAvailable();
	void IsEveryoneEntitled();
	void IncrementAllPlayersBossCounters();
	void GetRespawnZoneLink();
	void ActivateCheckpoint();
};

// Class Remnant.RemnantGameSession
// 0x0000
class ARemnantGameSession : public AGameSession
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameSession");
		return ptr;
	}



};

// Class Remnant.RemnantGameState
// 0x0000
class ARemnantGameState : public AGameStateGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameState");
		return ptr;
	}



	void OnRep_ZoneTravelState();
	void OnRep_ActivatedCheckpoint();
	void IsZoneTravelPending();
	void IsZoneTravelAvailable();
	void GetActivatedCheckpoint();
};

// Class Remnant.RemnantGameType
// 0x0000
class URemnantGameType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameType");
		return ptr;
	}



};

// Class Remnant.RemnantHUD
// 0x0000
class ARemnantHUD : public AUIHud
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantHUD");
		return ptr;
	}



	void ShouldShowSubtitles();
	void ShouldShowHealthBars();
	void OnStopPendingTravel();
	void OnStartPendingTravel();
	void HasInvalidDialog();
};

// Class Remnant.RemnantMapGenComponent
// 0x0000
class URemnantMapGenComponent : public UMapGenComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMapGenComponent");
		return ptr;
	}



};

// Class Remnant.RemnantMeleeWeapon
// 0x0000
class ARemnantMeleeWeapon : public AMeleeWeapon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMeleeWeapon");
		return ptr;
	}



};

// Class Remnant.RemnantMiniMapDisplayActor
// 0x0000
class ARemnantMiniMapDisplayActor : public AMiniMapDisplayActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapDisplayActor");
		return ptr;
	}



	void OnFogOfWarChanged();
	void IsAnyMiniMapDisplayed();
};

// Class Remnant.RemnantMiniMapLevelRegion
// 0x0000
class ARemnantMiniMapLevelRegion : public AMiniMapLevelRegion
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapLevelRegion");
		return ptr;
	}



};

// Class Remnant.RemnantMiniMapWidget
// 0x0000
class URemnantMiniMapWidget : public UMiniMapWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapWidget");
		return ptr;
	}



	void UpdateWidgetVisibility();
	void ShouldIgnoreFogOfWar();
	void SetVisibleFromLevel();
	void IsWidgetVisible();
};

// Class Remnant.RemnantPingActor
// 0x0000
class ARemnantPingActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPingActor");
		return ptr;
	}



	void SetPingDetails();
	void OnCinematicEvent();
};

// Class Remnant.PingSubContext
// 0x0000
class UPingSubContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingSubContext");
		return ptr;
	}



	void IsValidForPingType();
};

// Class Remnant.PingEmoteSubContext
// 0x0000
class UPingEmoteSubContext : public UPingSubContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingEmoteSubContext");
		return ptr;
	}



};

// Class Remnant.PingRequestSubContext
// 0x0000
class UPingRequestSubContext : public UPingSubContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingRequestSubContext");
		return ptr;
	}



};

// Class Remnant.RemnantPingManager
// 0x0000
class URemnantPingManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPingManager");
		return ptr;
	}



	void IsCharacterOnVOCooldown();
	void IsCharacterOnPingCooldown();
	void GetRemainingCharacterPingCooldown();
	void GetPingManager();
	void GetPingFromCharacter();
	void GetCurrentPings();
	void Client_UpdateCharacterPing();
	void Client_MarkPlayerSoloPing();
};

// Class Remnant.RemnantPlayerController
// 0x0000
class ARemnantPlayerController : public APlayerControllerGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPlayerController");
		return ptr;
	}



	void UpdatePlayState();
	void UpdatePerformanceLevel();
	void TravelPlayerTo();
	void SwapCharacter();
	void SetReadyToTravel();
	void SetIntroComplete();
	void ServerWorldResetComplete();
	void ServerUpdateUsingMultiplayerFeatures();
	void ServerUpdateLicensedContent();
	void ServerUnlockItemAward();
	void ServerUnlockAccountCurrency();
	void ServerStreamSwapCharacter();
	void ServerStreamCharacterFinalize();
	void ServerStreamCharacter();
	void ServerSetCurrentLock();
	void ServerRespawnSwappedCharacter();
	void ServerRemoveTravelState();
	void ServerRemoveItem();
	void ServerReliableCameraLocationUpdate();
	void ServerReadyToTravel();
	void ServerReadyForWorldReset();
	void ServerHandleSkipIntro();
	void ServerGiveItem();
	void ServerFinalizeStreamSwapCharacter();
	void ServerDestinationZoneLoaded();
	void ServerClearWaitingForZones();
	void ServerBeginPlay();
	void ServerAddExperience();
	void Respawn();
	void RemoveAccountAwardListener();
	void RefreshAccountAwards();
	void QueueValidClientSoftInventoryChange();
	void QueueValidClientInventoryChange();
	void QueueManualQuestReward();
	void OnSessionDisconnected();
	void OnServerFinalizeTravel();
	void OnReadyToTravel();
	void OnPlayStateChanged();
	void OnPlayInEditor();
	void OnPlayerDied();
	void OnFinishWorldReset();
	void OnFinishTravelLoad();
	void OnFinishTravel();
	void OnFinishPlayStateTransition();
	void OnDeceased();
	void OnBeginWorldReset();
	void OnBeginTravel();
	void NetUpdateActiveCharacter();
	void MarkRevived();
	void IsPlayerDead();
	void IsIntroQuestDisabled();
	void IsIntroQuestComplete();
	void HasServerBegunPlay();
	void HasLicense();
	void HasGivenLicenses();
	void HandleSkipIntro();
	void GiveQuestRewards();
	void GiveAccountAward();
	void GetTimeSinceLastInput();
	void GetTargetZoneLink();
	void GetRelevantInventoryComponentForItemType();
	void GetRelevantInventoryComponentForItem();
	void GetPlayerInventory();
	void GetCurrentZone();
	void GetCurrentTravelLock();
	void GetCurrentOrDeadPawn();
	void GatherPing();
	void EnableWidgetComponentInteraction();
	void ComputePowerLevel();
	void ComputeItemLevel();
	void ClientUpdateUsingMultiplayerFeatures();
	void ClientUpdateFogOfWar();
	void ClientUpdateAchievement();
	void ClientSetWaitingForZones();
	void ClientSetMusicState();
	void ClientOnSessionChanged();
	void ClientNotifyQuestReward();
	void ClientLoadDestinationZone();
	void ClientIncrementBossCounter();
	void ClientHandleDeceased();
	void ClientGiveAccountAward();
	void ClientFinishWorldReset();
	void ClientFinishTravel();
	void ClientBeginWorldReset();
	void ClientBeginTravel();
	void ClearTravelLock();
	void ClearPawn();
	void ClearDeadPawn();
	void ClearCachedArchetype();
	void CanRespawnPlayers();
	void BroadcastPing();
	void BroadcastFinishedLevelSequence();
	void BroadcastEmote();
	void BroadcastClientFinishedLevelSequence();
	void AwardArchetype();
	void AttemptPing();
	void ApplyTravelLock();
	void AddAccountAwardListener();
};

// Class Remnant.PlayStateEffect_TeleportPause
// 0x0000
class UPlayStateEffect_TeleportPause : public UPlayStateEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayStateEffect_TeleportPause");
		return ptr;
	}



};

// Class Remnant.RemnantPlayerInventoryComponent
// 0x0000
class URemnantPlayerInventoryComponent : public UInventoryComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPlayerInventoryComponent");
		return ptr;
	}



	void ServerOnClientExceptionUpdate();
	void OnTrackedInstanceDataChanged();
	void ModifyLevelForNewItem();
	void MarkClientSoftInventoryChangeValid();
	void MarkClientInventoryChangeValid();
	void IsItemCheatProtected();
	void IsCheatValidationEnabled();
	void GetLevelForNewItem();
	void ClientValidationTimeOut();
	void AddProtectionTimeOut();
};

// Class Remnant.RemnantProgressionComponent
// 0x0000
class URemnantProgressionComponent : public UProgressionComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantProgressionComponent");
		return ptr;
	}



	void ServerAddExperience();
	void ClientAddProgressionTimeOut();
	void AddProtectionTimeOut();
};

// Class Remnant.RemnantQuest
// 0x0000
class ARemnantQuest : public AQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuest");
		return ptr;
	}



	void OnRep_Status();
	void IsLoaded();
	void HasLastCheckpoint();
	void GiveRewardToPlayerController();
	void GiveRewardToPlayer();
	void GiveReward();
	void GetRootQuest();
	void GetQuestInventory();
	void GetObjectQuestValue();
	void GetLevel();
	void GetLastCheckpoint();
	void GetBiomeName();
	void GetAutoJoinZoneLinks();
	void DeactivateQuest();
	void AddQuestLootTags();
	void ActivateQuest();
};

// Class Remnant.RemnantQuestComponent
// 0x0000
class URemnantQuestComponent : public UQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestComponent");
		return ptr;
	}



	void IsZoneLoaded();
	void GetZone();
	void GetUniqueName();
	void GetRootQuest();
	void GetRemnantQuest();
	void GetQuestZone();
	void GetQuestTile();
	void GetQuestEntity();
	void DebugTravelTo();
	void DebugCanTravelTo();
};

// Class Remnant.RemnantQuestAIDirector
// 0x0000
class URemnantQuestAIDirector : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestAIDirector");
		return ptr;
	}



	void StopAllGroups();
	void SetSpawnTable();
	void OnEncounterGroupRemoved();
	void OnEncounterGroupActorSpawned();
	void OnEncounterGroupActorDead();
	void HasActiveSpawns();
	void GetTotalSpawns();
	void EventPlayerExit();
	void EventPlayerEnter();
	void EventEncounterEvent();
};

// Class Remnant.LootSourceInterface
// 0x0000
class ULootSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LootSourceInterface");
		return ptr;
	}



	void OverrideLootTable();
};

// Class Remnant.RemnantQuestEntity
// 0x0000
class URemnantQuestEntity : public UQuestEntity
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEntity");
		return ptr;
	}



	void ZoneUnloaded();
	void SetFactionAffiliation();
	void SetFaction();
	void ResetSpawns();
	void ReactivateSpawns();
	void OnSpawnListLoaded();
	void OnDead();
	void OnActorRegistered();
	void OnActorDestroyed();
	void OnActorDead();
	void GetZone();
	void GetRootQuest();
	void GetRemnantQuest();
	void GetQuestZone();
	void GetQuestTile();
	void GetNumSpawns();
	void GetActors();
};

// Class Remnant.RemnantQuestEntityDialog
// 0x0000
class URemnantQuestEntityDialog : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEntityDialog");
		return ptr;
	}



	void OnActorSpawned();
};

// Class Remnant.RemnantQuestEventRegion
// 0x0000
class URemnantQuestEventRegion : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEventRegion");
		return ptr;
	}



	void SetMusicState();
	void OnActorRegistered();
	void LockEvent();
	void IsEventRegionActive();
	void IsComplete();
	void GetPlayersInRegion();
	void GetNumPlayersInRegion();
	void GetFirstPlayerInRegion();
	void GetEventRegion();
	void GetAggroGroup();
	void EventPlayerExit();
	void EventPlayerEnter();
	void EventOnEnd();
	void EventOnBegin();
	void End();
	void CompleteEvent();
	void Begin();
};

// Class Remnant.RemnantQuestLink
// 0x0000
class URemnantQuestLink : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestLink");
		return ptr;
	}



	void OnLinkDeactivated();
	void OnLinkActivated();
};

// Class Remnant.RemnantQuestManager
// 0x0000
class URemnantQuestManager : public UQuestManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestManager");
		return ptr;
	}



	void SortQuestList();
	void IsQuestValid();
	void GetRootQuests();
	void GetRootQuestForSlot();
	void GetRegisteredRootQuestsForMode();
	void GetRegisteredRootQuests();
	void GetRegisteredQuests();
	void GetRegisteredQuestByID();
	void GetQuestsForActor();
	void GetLicenseForSoftQuest();
	void GetCurrentQuestObjective();
	void GetActiveRootQuest();
	void DestroyRootQuest();
	void CreateRootQuest();
	void ActivateRootQuest();
};

// Class Remnant.RemnantQuestSubQuest
// 0x0000
class URemnantQuestSubQuest : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestSubQuest");
		return ptr;
	}



	void SubQuestComplete();
	void OnLinkDeactivated();
	void OnLinkActivated();
	void GetSubQuest();
};

// Class Remnant.RemnantQuestTile
// 0x0000
class URemnantQuestTile : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestTile");
		return ptr;
	}



	void SetTileActive();
	void GetZoneLink();
	void GetTileCoord();
	void GetTileAttribute();
};

// Class Remnant.RemnantQuestTrigger
// 0x0000
class URemnantQuestTrigger : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestTrigger");
		return ptr;
	}



	void OnActorRegistered();
	void GetTrigger();
	void GetPlayersInTrigger();
	void GetNumPlayersInTrigger();
	void EventPlayerExit();
	void EventPlayerEnter();
};

// Class Remnant.RemnantQuestWaveEncounter
// 0x0000
class URemnantQuestWaveEncounter : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestWaveEncounter");
		return ptr;
	}



	void WaveComplete();
	void Stop();
	void SpawnWave();
	void Resume();
	void Pause();
	void IsQuestWaveActive();
	void EventPlayerExit();
	void EventPlayerEnter();
	void EventOnEnd();
	void Begin();
};

// Class Remnant.ZoneDef
// 0x0000
class UZoneDef : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneDef");
		return ptr;
	}



};

// Class Remnant.RemnantQuestZone
// 0x0000
class URemnantQuestZone : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestZone");
		return ptr;
	}



	void ZoneUnloaded();
	void ZoneLoaded();
	void TravelToParent();
	void SetSpawnTableOverride();
	void PlayerExitedZone();
	void PlayerEnteredZone();
	void ParentMapLoaded();
	void MapLoaded();
};

// Class Remnant.RemnantQuestZoneLink
// 0x0000
class URemnantQuestZoneLink : public URemnantQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestZoneLink");
		return ptr;
	}



	void MulticastSetLinkActive();
	void MapLoaded();
	void DestinationZoneLoaded();
	void DestinationMapLoaded();
	void DeactivateWaypoint();
	void ActivateWaypoint();
};

// Class Remnant.RemnantSaveGame
// 0x0000
class URemnantSaveGame : public USaveGameWorld
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSaveGame");
		return ptr;
	}



};

// Class Remnant.RemnantSequencerManager
// 0x0000
class URemnantSequencerManager : public USequencerManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSequencerManager");
		return ptr;
	}



};

// Class Remnant.RemnantSettings
// 0x0000
class URemnantSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSettings");
		return ptr;
	}



};

// Class Remnant.RemnantSilhouetteComponent
// 0x0000
class URemnantSilhouetteComponent : public USilhouetteComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSilhouetteComponent");
		return ptr;
	}



};

// Class Remnant.RemnantSkyboxManager
// 0x0000
class URemnantSkyboxManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSkyboxManager");
		return ptr;
	}



	void RegisterSkyboxModifierVolume();
	void RefreshModifierVolumes();
	void OnPlayerExitVolume();
	void OnPlayerEnterVolume();
	void IsPlayerInAnyModifierVolumes();
	void InitSkyboxManager();
	void GetInstance();
};

// Class Remnant.RemnantSpawnFilterManager
// 0x0000
class URemnantSpawnFilterManager : public USpawnFilterManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSpawnFilterManager");
		return ptr;
	}



	void GetManagerInstance();
};

// Class Remnant.RemnantSpectatorPawn
// 0x0000
class ARemnantSpectatorPawn : public ASpectatorPawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSpectatorPawn");
		return ptr;
	}



	void OnValidTarget();
	void OnTargetUnavailable();
	void OnSpectateTarget();
	void OnLeaveTarget();
	void OnInvalidTarget();
	void OnFinishTravel();
	void IsValidTarget();
	void GetNumAvailableTargets();
	void GetCurrentTarget();
};

// Class Remnant.RemnantStateCameraComponent
// 0x0000
class URemnantStateCameraComponent : public UStateCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantStateCameraComponent");
		return ptr;
	}



};

// Class Remnant.RemnantTrait
// 0x0000
class URemnantTrait : public UTrait
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantTrait");
		return ptr;
	}



};

// Class Remnant.RemnantTraitsComponent
// 0x0000
class URemnantTraitsComponent : public UTraitsComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantTraitsComponent");
		return ptr;
	}



	void ServerAddTraitPoints();
	void MarkClientTraitPointChangeValid();
	void GetTraitsForLevel();
	void GetTraitLevelBands();
	void GetTraitByLevelAndCategory();
	void GetTotalAvailableTraits();
	void GetNumAvailableTraits();
	void ClientTraitPointTimeOut();
	void ClientTraitLevelTimeOut();
	void ClientSpentTraitPointTimeOut();
};

// Class Remnant.RemnantUIActor
// 0x0000
class ARemnantUIActor : public AUIActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantUIActor");
		return ptr;
	}



};

// Class Remnant.RemnantUtil
// 0x0000
class URemnantUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantUtil");
		return ptr;
	}



	void IsGameSessionReady();
	void GetGameSeed();
	void GetBaseZoneLinkByLabel();
	void GetBaseZoneLink();
	void GetBaseZoneID();
	void GetBaseZoneActor();
	void CanPlayerExitGame();
};

// Class Remnant.RemnantWeaponMod
// 0x0000
class ARemnantWeaponMod : public AEquipmentMod
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantWeaponMod");
		return ptr;
	}



	void ShowReticule();
	void SetMinHoldTime();
	void OnUse();
	void OnStartCustomIdle();
	void OnSecondaryActivate();
	void OnPreviewStart();
	void OnPreviewEnd();
	void OnPreFireEnd();
	void OnPreFireBegin();
	void OnPreActivate();
	void OnFireEnd();
	void OnFireBegin();
	void OnFire();
	void OnFinishLoadingAssets();
	void OnEndUse();
	void OnEndCustomIdle();
	void OnDeactivate();
	void OnChargesChanged();
	void OnCharacterHitTarget();
	void OnBeginUse();
	void OnActivate();
	void ModifyModPower();
	void IsUseState();
	void IsPreviewing();
	void GetWeapon();
	void GetUseState();
	void GetModAssetAsClass();
	void GetModAsset();
	void GetModActiveRemainingPct();
	void GetClientAimVector();
	void CanUse();
	void CanDeactivateMod();
	void CalculateClientAimVector();
	void AreAssetsLoaded();
	void ApplyDamageInfoToModPower();
	void AddModPower();
};

// Class Remnant.ShowLastEquipmentDecorator
// 0x0000
class UShowLastEquipmentDecorator : public UShowEquipmentAbstractDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ShowLastEquipmentDecorator");
		return ptr;
	}



};

// Class Remnant.SpawnFilterAccountAward
// 0x0000
class USpawnFilterAccountAward : public USpawnFilterElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnFilterAccountAward");
		return ptr;
	}



};

// Class Remnant.SpawnFilterTrait
// 0x0000
class USpawnFilterTrait : public USpawnFilterElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnFilterTrait");
		return ptr;
	}



};

// Class Remnant.SpawnTableAccountAward
// 0x0000
class USpawnTableAccountAward : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableAccountAward");
		return ptr;
	}



};

// Class Remnant.SpawnTableAchievement
// 0x0000
class USpawnTableAchievement : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableAchievement");
		return ptr;
	}



};

// Class Remnant.SpawnTableCharacterMod
// 0x0000
class USpawnTableCharacterMod : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableCharacterMod");
		return ptr;
	}



};

// Class Remnant.SpawnTableExperience
// 0x0000
class USpawnTableExperience : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableExperience");
		return ptr;
	}



};

// Class Remnant.SpawnTableSmartAmmo
// 0x0000
class USpawnTableSmartAmmo : public USpawnTableElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableSmartAmmo");
		return ptr;
	}



};

// Class Remnant.SpawnTableTrait
// 0x0000
class USpawnTableTrait : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableTrait");
		return ptr;
	}



};

// Class Remnant.SpectatorTargetComponent
// 0x0000
class USpectatorTargetComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpectatorTargetComponent");
		return ptr;
	}



	void OnSpectatorTargetUnavailable();
};

// Class Remnant.UtilityItemInstanceData
// 0x0000
class UUtilityItemInstanceData : public UItemInstanceData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.UtilityItemInstanceData");
		return ptr;
	}



};

// Class Remnant.UtilityItem
// 0x0000
class AUtilityItem : public AUseableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.UtilityItem");
		return ptr;
	}



	void UseCharge();
	void Recharge();
	void GetCooldownPct();
	void GetCharges();
};

// Class Remnant.WorldGenVisualizer
// 0x0000
class AWorldGenVisualizer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldGenVisualizer");
		return ptr;
	}



};

// Class Remnant.WorldResetInterface
// 0x0000
class UWorldResetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldResetInterface");
		return ptr;
	}



	void OnWorldReset();
	void OnNotifyAllWorldReset();
};

// Class Remnant.WorldResetUtil
// 0x0000
class UWorldResetUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldResetUtil");
		return ptr;
	}



	void IsWorldResetInProgress();
	void GetWorldResetColorIndex();
};

// Class Remnant.ZoneActor
// 0x0000
class AZoneActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneActor");
		return ptr;
	}



	void UpdateLevelScaling();
	void UnloadZone();
	void OnResourcesLoad();
	void OnRep_ServerState();
	void OnRep_Level();
	void OnMapGenInitialized();
	void OnMapGenFullyLoaded();
	void OnMapGenFailed();
	void OnFinalizeLoad();
	void LoadZone();
	void IsLoaded();
	void IsFullyUnloaded();
	void IsChildZone();
	void HasFailedLoad();
	void GetZoneStatus();
	void GetZoneLevel();
	void GetUniqueName();
	void GetTOD();
	void GetQuest();
	void GetParentZone();
	void GetItemLevel();
	void ContainsActor();
};

// Class Remnant.ZoneManager
// 0x0000
class UZoneManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneManager");
		return ptr;
	}



	void UnlockAllWaypoints();
	void GetZoneForSlot();
	void GetZoneForActor();
	void GetZoneByNameID();
	void GetZoneByID();
	void GetInstance();
	void GetBiomeForActor();
	void DestroyZone();
	void CreateZone();
};

// Class Remnant.ZoneLinkComponent
// 0x0000
class UZoneLinkComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneLinkComponent");
		return ptr;
	}



	void TravelToWaypoint();
	void TravelToDestinationZone();
	void OnRep_NameID();
	void OnRep_IsRespawnZoneLink();
	void IsWaypoint();
	void IsRespawnZoneLink();
	void IsLinkActive();
	void IsDestinationZoneLoaded();
	void HasBeenUsed();
	void GetType();
	void GetSpawnPoint();
	void GetLinkInfo();
	void GetDestinationZone();
	void GetAccessibleWaypoints();
	void ActivateLink();
};

// Class Remnant.ZoneRegion
// 0x0000
class AZoneRegion : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneRegion");
		return ptr;
	}



	void OnRegionExit();
	void OnRegionEnter();
	void Contains();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
