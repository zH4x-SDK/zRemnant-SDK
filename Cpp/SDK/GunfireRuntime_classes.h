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

// Class GunfireRuntime.CraftingRecipe_Base
// 0x0000
class UCraftingRecipe_Base : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CraftingRecipe_Base");
		return ptr;
	}



};

// Class GunfireRuntime.ActorModifier
// 0x0000
class UActorModifier : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorModifier");
		return ptr;
	}



	void SetOwner();
	void SetLevel();
	void ScaleStat();
	void PostComputeStats();
	void OnUnequipped();
	void OnTick();
	void OnTakeDamage();
	void OnRep_Level();
	void OnPostComputeStats();
	void OnLevelChanged();
	void OnHitTarget();
	void OnEquipped();
	void OnComputeStats();
	void OnComputeDerivedStats();
	void OnAdded();
	void NotifyTakeDamage();
	void NotifyHitTarget();
	void ModifyStat();
	void ModifyInspectInfo();
	void ModifyDamage();
	void GetStat();
	void GetOwningCharacter();
	void GetOwner();
	void GetInspectInfo();
	void FilterIncomingFallDamage();
	void FilterIncomingDamage();
	void ComputeStats();
	void ComputeDerivedStats();
};

// Class GunfireRuntime.ActionBase
// 0x0000
class UActionBase : public UActorModifier
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActionBase");
		return ptr;
	}



	void SetCause();
	void OnCinematic();
	void OnActionStop();
	void OnActionStart();
	void IsActionFinished();
	void GetTarget();
	void GetHitInfo();
	void GetDamageType();
	void GetCauseOwner();
	void GetCause();
	void GetActionComponent();
	void FireProjectile();
	void FinishAction();
	void DoInstantHit();
	void ApplyDamage();
	void AllowAction();
};

// Class GunfireRuntime.Item
// 0x0000
class AItem : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Item");
		return ptr;
	}



	void ValidateAdd();
	void SetQuantity();
	void SetLevel();
	void PreAdd();
	void PickupPreAdd();
	void OnRep_InstanceData();
	void OnPickupFailed();
	void OnPickedUp();
	void OnDropped();
	void ModifyInspectInfo();
	void InitializeLootFxForLocalPawn();
	void GetQuantity();
	void GetMaxQuantity();
	void GetLevel();
	void GetInspectInfo();
	void DropBounce();
	void Bounce();
};

// Class GunfireRuntime.Equipment
// 0x0000
class AEquipment : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Equipment");
		return ptr;
	}



	void ValidateEquip();
	void Unequip();
	void SetInputEnabled();
	void SetInHand();
	void SetAttachmentsVisible();
	void ServerSetInHand();
	void ScaleStat();
	void PostSetupInventory();
	void PostComputeStats();
	void PostComputeCharacterStats();
	void PlayAnimation();
	void OnUnequipped();
	void OnTakeDamage();
	void OnPostComputeStats();
	void OnNotInHand();
	void OnInHand();
	void OnHitTarget();
	void OnEquipped();
	void OnDetached();
	void OnDeactivated();
	void OnComputeStats();
	void OnActivated();
	void ModifyStat();
	void IsLocallyControlled();
	void IsInHand();
	void IsEquipped();
	void IsActive();
	void IsActionAllowed();
	void InstanceDataChanged();
	void GetStat();
	void GetItemID();
	void GetInventoryComponent();
	void GetHud();
	void GetEquipmentSlotIdx();
	void GetEquipmentMod();
	void GetCurrentAnimation();
	void GetCharacter();
	void GetAttachedMods();
	void Detach();
	void Deactivate();
	void ComputeStats();
	void ComputeCharacterStats();
	void Activate();
	void _NotifyTakeDamage();
	void _NotifyHitTarget();
};

// Class GunfireRuntime.UseableItem
// 0x0000
class AUseableItem : public AEquipment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UseableItem");
		return ptr;
	}



	void ValidateUse();
	void UseItem();
	void Use();
	void ServerKeyPressed();
	void RemoveItem();
	void OnUse();
	void MulticastSetState();
};

// Class GunfireRuntime.ItemInstanceData
// 0x0000
class UItemInstanceData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemInstanceData");
		return ptr;
	}



	void OnRep_InstanceData();
};

// Class GunfireRuntime.EquipmentInstanceData
// 0x0000
class UEquipmentInstanceData : public UItemInstanceData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquipmentInstanceData");
		return ptr;
	}



};

// Class GunfireRuntime.StateMachineSubobject
// 0x0000
class UStateMachineSubobject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateMachineSubobject");
		return ptr;
	}



};

// Class GunfireRuntime.Condition
// 0x0000
class UCondition : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Condition");
		return ptr;
	}



};

// Class GunfireRuntime.ItemType
// 0x0000
class UItemType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemType");
		return ptr;
	}



	void QueryRelevantItems();
	void GetRelevantInventoriesForType();
};

// Class GunfireRuntime.WeaponBase
// 0x0000
class AWeaponBase : public AEquipment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WeaponBase");
		return ptr;
	}



	void GetProcChance();
	void GetImpactEffect();
	void GetAttackSpeed();
	void ComputeDamage();
	void AttemptProc();
};

// Class GunfireRuntime.AnimInstanceGunfire
// 0x0000
class UAnimInstanceGunfire : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimInstanceGunfire");
		return ptr;
	}



	void UpdateLegIkEffector();
	void StopAnimation();
	void SetParentAnimInstance();
	void RemoveLegIkEffector();
	void RemoveChildAnimInstance();
	void RemoveAnimationTag();
	void PlayAnimationByID();
	void HasAnimationTag();
	void GetStateMachine();
	void GetMoveInputDir();
	void GetMoveDir();
	void GetMasterAnimInstance();
	void GetLegIkEffector();
	void GetHeading();
	void GetAimAngles();
	void EnableLookPoses();
	void CompareAngles();
	void AreLookPosesDisabled();
	void AddChildAnimInstance();
	void AddAnimationTag();
};

// Class GunfireRuntime.ItemCategory
// 0x0000
class UItemCategory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemCategory");
		return ptr;
	}



};

// Class GunfireRuntime.TraitsComponent
// 0x0000
class UTraitsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraitsComponent");
		return ptr;
	}



	void UnlockTrait();
	void SetTraitLevel();
	void SetAllTraitLevels();
	void ServerUnlockTrait();
	void Purchase();
	void OnRep_Traits();
	void OnRep_TraitPointsSpent();
	void OnRep_TraitPoints();
	void OnLevelUp();
	void OnComputeStats();
	void HasTraitByName();
	void HasTrait();
	void GetTraitLevel();
	void GetTotalTraitLevels();
	void GetProgression();
	void GetAvailableTraits();
	void GetAvailableTraitPoints();
	void GetAllTraits();
	void Equip();
	void CanPurchase();
	void CanEquip();
	void AddTraitPoints();
	void AddTrait();
};

// Class GunfireRuntime.PlayerStateGunfire
// 0x0000
class APlayerStateGunfire : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayerStateGunfire");
		return ptr;
	}



	void GetPlayerPawn();
	void GetPlayerCharacter();
	void GetIsTalking();
};

// Class GunfireRuntime.RangedWeapon
// 0x0000
class ARangedWeapon : public AWeaponBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RangedWeapon");
		return ptr;
	}



	void TriggerSoundAwareness();
	void ToggleScopeInput();
	void SetFireInput();
	void ServerSetState();
	void ServerFire();
	void Reload();
	void PlayMuzzleFX();
	void PlayFireAnimation();
	void OnScopeInputPressed();
	void OnReloaded();
	void OnPreFireEnd();
	void OnPreFireBegin();
	void OnFireEnd();
	void OnFireBegin();
	void OnFire();
	void OnFinishLoadingScopePostProcess();
	void OnDoubleClickScopeInputReleased();
	void OnDoubleClickScopeInputPressed();
	void MulticastSetStateNS();
	void MulticastSetState();
	void MulticastFire();
	void IsScopeInputEnabled();
	void IsReloading();
	void IsFiring();
	void IsBusy();
	void IsAimingWithScope();
	void IsAiming();
	void HasScope();
	void GetWeaponMode();
	void GetSprayCount();
	void GetScopeFOV();
	void GetRateOfFire();
	void GetRange();
	void GetRandomStream();
	void GetProjectileVisualization();
	void GetNormalizedSpread();
	void GetMuzzleObstruction();
	void GetMuzzleFXPointAndDirection();
	void GetMaxAmmo();
	void GetFalloff();
	void GetDamageScalar();
	void GetCurrentSpread();
	void GetBurstRateOfFire();
	void GetBurstCount();
	void GetAmmoPerReload();
	void GetAmmoPerClip();
	void GetAmmoInClip();
	void GetAmmo();
	void GetAimVector();
	void GetAimTargetLocation();
	void GetAimTarget();
	void FireProjectile();
	void FillClip();
	void EndUse();
	void DoInstantHit();
	void DoImpact();
	void ConsumeAmmo();
	void ClearDoubleClickTimer();
	void CanStopAiming();
	void CanReload();
	void CanFire();
	void BeginUse();
	void BeginReload();
	void ApplySpread();
	void ApplyRecoil();
	void AddAmmo();
};

// Class GunfireRuntime.CharacterGunfire
// 0x0000
class ACharacterGunfire : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CharacterGunfire");
		return ptr;
	}



	void StopWeaponPhantom();
	void StopAllWeaponPhantoms();
	void StartWeaponPhantom();
	void SortTags();
	void SetWeaponPhantomsSuspended();
	void SetTarget();
	void SetIsTargetable();
	void SetHealth();
	void SetGlobalCooldown();
	void SetFaction();
	void SetCooldown();
	void SetAimTarget();
	void ServerSetAimTarget();
	void ScaleStat();
	void RestoreAggroGroup();
	void ResetHealth();
	void ResetClothingSimulation();
	void RemoveTag();
	void ReinitializeCloth();
	void Ragdoll();
	void PostComputeStats();
	void OnRep_Target();
	void OnRep_Health();
	void OnRagdollHit();
	void OnPostComputeStats();
	void OnLocallyControlled();
	void OnGameViewportFocusChanged();
	void OnComputeStats();
	void OnCharacterStateChanged();
	void OnCharacterDead();
	void ModifyStat();
	void MarkActorHit();
	void IsWounded();
	void IsEditor();
	void IsCinematicCharacter();
	void IsAlive();
	void HitPause();
	void HasRecentlyHitActor();
	void HasAnyOverlappingDamageable();
	void GetViewRotation();
	void GetTarget();
	void GetStateMachine();
	void GetStat();
	void GetIsTargetable();
	void GetInspectStatInfo();
	void GetInspectInfo();
	void GetHealthPercentage();
	void GetHealthMax();
	void GetHealth();
	void GetCooldownPct();
	void GetCharacterInventory();
	void GetAimTarget();
	void GetAggroGroup();
	void EnableClothingSimulation();
	void DisableClothingSimulation();
	void DifficultyChanged();
	void ComputeStats();
	void ClientNotifyTakeDamage();
	void ClientNotifyHitTarget();
	void ClearAggroGroup();
	void CheckTags();
	void CheckTag();
	void CheckCooldown();
	void AreWeaponPhantomsSuspended();
	void AreCharacterOptimizationsEnabled();
	void ApplyHealthDelta();
	void AddTag();
	void AddAggroGroup();
};

// Class GunfireRuntime.PlayerGunfire
// 0x0000
class APlayerGunfire : public ACharacterGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayerGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.CheatManagerGunfire
// 0x0000
class UCheatManagerGunfire : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CheatManagerGunfire");
		return ptr;
	}



	void UnlockAllTraits();
	void ToggleSecondaryFlyCamera();
	void TogglePrimaryFlyCamera();
	void ToggleFollowPlayer();
	void TakeScreenShotWithDimensions();
	void TakeScreenShotCurrentResolutionScaled();
	void SpawnCharacter();
	void SetPlayerState();
	void SetPlayerNormalizedHealth();
	void SetKillRadius();
	void SendCommandToConsole();
	void RemoveItem();
	void OnUseDebugCommandKey();
	void OnReleaseDebugCommandKey();
	void KillNearbyEnemies();
	void IncreasePlayerLevel();
	void GiveItem();
	void GiveAllItems();
	void GetInputDescriptorForCheat();
	void GetConsoleCommands();
	void GetConsoleCommandDescription();
	void GetConsoleCommandCategories();
	void GetAllCheats();
	void ForceCrash();
	void ExecuteCheat();
	void EnablePrimaryFlyCamera();
	void DropItem();
	void DoAction();
	void ClearAllDialogs();
	void AreCheatsEnabled();
	void AddTrait();
};

// Class GunfireRuntime.DifficultyScalingComponent
// 0x0000
class UDifficultyScalingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DifficultyScalingComponent");
		return ptr;
	}



	void SetNumPlayers();
	void SetLevelOverride();
	void SetDifficultyScalingTableOverride();
	void SetDifficulty();
	void RemoveExternalStatModifier();
	void Invalidate();
	void GetSpawnQuantityScalar();
	void GetNumPlayers();
	void GetLevelForActor();
	void GetLevel();
	void GetItemLevelForActor();
	void GetItemLevel();
	void GetExperienceScalar();
	void GetEnemyHealthScalar();
	void GetEnemyDamageScalar();
	void GetDifficultyScalingComponent();
	void GetDifficulty();
	void GetCurrencyScalar();
	void ComputeStats();
	void ClearExternalStatModifiers();
	void ClearDifficultyScalingTableOverride();
	void AddExternalStatModifier();
};

// Class GunfireRuntime.CameraState
// 0x0000
class UCameraState : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CameraState");
		return ptr;
	}



	void ValidateCameraActor();
	void OnUpdate();
	void OnLeave();
	void OnEnter();
};

// Class GunfireRuntime.FlyCameraState
// 0x0000
class UFlyCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FlyCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.FogOfWarComponent
// 0x0000
class UFogOfWarComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FogOfWarComponent");
		return ptr;
	}



	void ToggeleFogOfWar();
	void ShowVisitedCoordinates();
	void SetFogOfWar();
	void Init();
	void HasFogOfWar();
	void GetWorldMaxDimension();
	void GetWorldBounds();
	void GetVisibilityAtLocation();
	void GetLocationAtCoordinate();
	void AddVisibleLocation();
};

// Class GunfireRuntime.GameInstanceGunfire
// 0x0000
class UGameInstanceGunfire : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameInstanceGunfire");
		return ptr;
	}



	void QuitToMainMenu();
	void OnShutdown();
	void OnPreQuitToMainMenu();
	void IsSaving();
	void IsInGameplay();
	void ImmediatelyFadeScreen();
	void GetLocalPlayerPawn();
	void GetInstance();
	void GetAssetCache();
	void FadeScreen();
	void CanSave();
};

// Class GunfireRuntime.GameModeGunfire
// 0x0000
class AGameModeGunfire : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameModeGunfire");
		return ptr;
	}



	void RemoveLevelInstanceByName();
	void RemoveLevelInstance();
	void OnPlayerDied();
	void GetPlayableLevelCollection();
	void GetPlayableLevelByPath();
	void GetPlayableLevelByName();
	void GetLevelInstance();
	void ApplyDamage();
	void AddPlayableLevel();
	void AddLevelInstance();
};

// Class GunfireRuntime.GameStateGunfire
// 0x0000
class AGameStateGunfire : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameStateGunfire");
		return ptr;
	}



	void StartMatch();
	void GetGunfireGameState();
};

// Class GunfireRuntime.UIHud
// 0x0000
class AUIHud : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHud");
		return ptr;
	}



	void UnloadLargeIcons();
	void SetVisibility();
	void SetDialog();
	void PushUIActor();
	void PopUIActor();
	void PawnChanged();
	void OnSetVisbility();
	void OnHudEvent();
	void OnDialogEnd();
	void OnDialogBegin();
	void LoadLargeIcons();
	void IsVisible();
	void InsertUIActor();
	void GetTopInputActor();
	void GetDialog();
	void GetCurrentDialog();
	void GetControllingPawn();
	void EndDialog();
	void EndAllDialogs();
	void BeginDialog();
	void AddUIToActorStack();
};

// Class GunfireRuntime.MapGenComponent
// 0x0000
class UMapGenComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapGenComponent");
		return ptr;
	}



	void OnStartedVisualLogger();
	void OnRep_TilesBase();
	void OnRep_MapACVClass();
	void IsTileVisited();
	void IsTileActive();
	void IsPositionInTile();
	void IsEdgeOpen();
	void GetTileSet();
	void GetTileForActor();
	void GetTileDistance();
	void GetTileAtPosition();
	void GetSpawnTagsAtPosition();
	void GetMapGenLevelForActor();
	void GetMapGenDebugState();
	void GetMapGenAttributeForActor();
	void GetMapACV();
	void GetLevelMaxSize();
	void GetLevelCenter();
	void GetLevelBounds();
	void GetAttribute();
	void FindMapGenComponentForActor();
	void AddAttribute();
};

// Class GunfireRuntime.MeleeWeapon
// 0x0000
class AMeleeWeapon : public AWeaponBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MeleeWeapon");
		return ptr;
	}



};

// Class GunfireRuntime.MiniMapDisplayActor
// 0x0000
class AMiniMapDisplayActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapDisplayActor");
		return ptr;
	}



	void WorldToMapScale();
	void WorldToMapCoord();
	void UnregisterMiniMapPanel();
	void SetOriginLocation();
	void SetOrigin();
	void SetMiniMapMode();
	void SetIsIndicator();
	void SetDisplayLevel();
	void ServerSetScale();
	void ServerSetPanOffset();
	void ServerSelect();
	void ServerScaleTo();
	void ServerPanTo();
	void ServerDeSelectAll();
	void ServerDeSelect();
	void Select();
	void ScaleTo();
	void Scale();
	void Rotate();
	void RegisterMiniMapPanel();
	void PanToActor();
	void PanTo();
	void Pan();
	void OnScale();
	void OnRotate();
	void OnRep_SelectedActors();
	void OnRemoveMiniMapActor();
	void OnPreInitMap();
	void OnPostInitMap();
	void OnPan();
	void OnMiniMapActorRemoved();
	void OnMiniMapActorLevelChanged();
	void OnMiniMapActorAdded();
	void OnAddMiniMapActor();
	void MulticastSelectDeselect();
	void MapToWorldScale();
	void MapToWorldCoord();
	void IsSelected();
	void IsActorOnMiniMap();
	void InitMap();
	void GetWidgetsForActor();
	void GetTotalBoundingBox();
	void GetSelectedActors();
	void GetSelectedActor();
	void GetMiniMapScreenWindow();
	void GetMiniMapScreenTransform();
	void GetMiniMapRefActor();
	void GetMinimapActors();
	void GetMiniMapActorFor();
	void GetLockedActor();
	void GetDisplayLevel();
	void GetActorByContext();
	void GetActor();
	void DeSelectAll();
	void DeSelect();
	void CenterToOrigin();
	void Center();
};

// Class GunfireRuntime.MiniMapLevelRegion
// 0x0000
class AMiniMapLevelRegion : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapLevelRegion");
		return ptr;
	}



	void IsInRegion();
	void GetRegionLevel();
	void AreConcurrentMiniMapLevels();
};

// Class GunfireRuntime.MiniMapWidget
// 0x0000
class UMiniMapWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapWidget");
		return ptr;
	}



	void UpdateMiniMapWidget();
	void UpdateLevelVisibility();
	void SetDynamicSize();
	void SetCullBounds();
	void OnRegisteredToPanel();
	void GetZOrder();
	void GetMiniMapRefActor();
	void GetMiniMap();
	void GetDefaultWidgetCullBounds();
	void GetContext();
};

// Class GunfireRuntime.PlayerControllerGunfire
// 0x0000
class APlayerControllerGunfire : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayerControllerGunfire");
		return ptr;
	}



	void SpectateTarget();
	void SpectatePrevPlayer();
	void SpectateNextPlayer();
	void SetGameInputEnabled();
	void ServerUnlockAllTraits();
	void ServerSpectateTarget();
	void ServerRequestTime();
	void ServerOnLevelTransition();
	void ServerDropItem();
	void ServerDoAction();
	void ServerBeginSpectate();
	void ServerAddTrait();
	void RestoreSpectateViewTarget();
	void ResetPauseRefCount();
	void RemoveCinematicListener();
	void QuitGame();
	void ProposeToSkipCutscene();
	void OnRep_SpectateTarget();
	void MulticastUnlockAchievement();
	void IsInCinematic();
	void IsGameInputEnabled();
	void GetSpectateTarget();
	void GetRelevantViewTarget();
	void GetRelevantPawn();
	void GetPlayerIdentifier();
	void ClientTimeReply();
	void BeginSpectate();
	void BeginPlaying();
	void AddCinematicListener();
};

// Class GunfireRuntime.PlayStateEffect
// 0x0000
class UPlayStateEffect : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateEffect");
		return ptr;
	}



	void TickTransition();
	void GetEditorLabel();
	void Apply();
};

// Class GunfireRuntime.InventoryComponent
// 0x0000
class UInventoryComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InventoryComponent");
		return ptr;
	}



	void UseItem();
	void UnequipItemByID();
	void UnequipItemAtSlotIndex();
	void UnequipItem();
	void ToggleActiveItem();
	void TakeItemByID();
	void TakeAll();
	void SwapItem();
	void SetQuantity();
	void SetItemLevel();
	void SetEquipmentInHandById();
	void SetEquipmentInHandByClass();
	void SetEquipmentInHand();
	void ServerUseItem();
	void ServerUnequipMod();
	void ServerUnequipItemByID();
	void ServerToggleActiveItem();
	void ServerTakeItemByID();
	void ServerTakeAll();
	void ServerSetEquipmentInHand();
	void ServerPutItemByID();
	void ServerPickupItem();
	void ServerPickupAndEquipItem();
	void ServerEquipSkin();
	void ServerEquipItemByID();
	void ServerDropItemByID();
	void ServerDetachItem();
	void RouteNotifyPickupItem();
	void RemoveItemSoft();
	void RemoveItemByID();
	void RemoveItem();
	void RemoveAllItems();
	void PutItemByID();
	void PickupItem();
	void PickupAndEquipItem();
	void OnRep_Items();
	void OnInstanceDataChanged();
	void MulticastOnInventoryChanged();
	void MarkNotNew();
	void IsInventoryItemInfiniteByType();
	void IsInventoryItemInfiniteByID();
	void IsInventoryItemInfinite();
	void IsEquippedByID();
	void IsEquipped();
	void HasNewItemInInventory();
	void HasItemSoft();
	void HasItemByType();
	void HasItem();
	void HasEquippedItemByType();
	void HasEquipmentSlot();
	void GetSellValue();
	void GetQuantity();
	void GetPreviousItem();
	void GetNextItem();
	void GetNextActiveItem();
	void GetMaxBuyableFromInfo();
	void GetItemTypeBySlotName();
	void GetItems();
	void GetItemInstanceData();
	void GetItemCount();
	void GetInventoryForItemType();
	void GetInventoryForItem();
	void GetEquippedItemBySlotName();
	void GetEquippedItem();
	void GetEquipmentSlotIndexByNameID();
	void GetEquipmentSlotIndex();
	void GetEquipmentItemID();
	void GetBuyValueFromInfo();
	void GetBuyValue();
	void GetActiveItem();
	void GetActivationTypeBySlotName();
	void FindItemByID();
	void FindItemByEquipSlotNameID();
	void FindItem();
	void EquipSkin();
	void EquipItemWithTransform();
	void EquipItemByID();
	void EquipItem();
	void DropItemByID();
	void DropItem();
	void DropAll();
	void DidActiveItemChange();
	void DetachItemByID();
	void CountItemByType();
	void ClientNotifyUpgradeItem();
	void ClientNotifyPickupItemInstance();
	void ClientNotifyPickupItem();
	void ClientNotifyInventoryFull();
	void ClientForceUseItem();
	void CanEquipItemByID();
	void CanAddItem();
	void AutoEquipItemByID();
	void AutoEquipItem();
	void AddItemSoft();
	void AddItem();
	void AddInfiniteItem();
};

// Class GunfireRuntime.ProgressionComponent
// 0x0000
class UProgressionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProgressionComponent");
		return ptr;
	}



	void SetLevel();
	void OnRep_Level();
	void OnRep_Experience();
	void OnComputeStats();
	void GetPercentageToNextLevel();
	void GetExperienceTowardsNextLevel();
	void GetExperienceToNextLevel();
	void CommitQueuedExperience();
	void ClearQueuedExperience();
	void AddExperience();
};

// Class GunfireRuntime.Quest
// 0x0000
class AQuest : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Quest");
		return ptr;
	}



	void SetObjectiveCounterMax();
	void ResetObjective();
	void ResetAllObjectives();
	void OnResetQuest();
	void OnQuestManagerReady();
	void OnQuestComplete();
	void OnPostInitializeQuest();
	void OnPostCreateQuest();
	void OnObjectivesUpdated();
	void OnObjectiveComplete();
	void OnObjectiveActivate();
	void OnInitializeQuest();
	void OnDestroyQuest();
	void OnDeinitializeQuest();
	void OnCreateQuest();
	void OnBeginQuest();
	void NotifyQuestComplete();
	void IsQuestComplete();
	void IsQuestActive();
	void IsObjectiveComplete();
	void IsObjectiveActive();
	void IncrementObjectiveCounter();
	void HasActiveObjectives();
	void GetUniqueName();
	void GetRootQuestForScope();
	void GetQuestObjectives();
	void GetQuestObjective();
	void GetParentQuest();
	void GetObjectiveCountRemaining();
	void GetObjectiveCounterMax();
	void GetObjectiveCounter();
	void CompleteQuest();
	void CompleteObjective();
	void AreAnyObjectivesActiveOrComplete();
	void ActivateObjective();
};

// Class GunfireRuntime.QuestComponent
// 0x0000
class UQuestComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestComponent");
		return ptr;
	}



	void OnResetQuest();
	void OnQuestComplete();
	void OnPostInitializeQuest();
	void OnPostCreateQuest();
	void OnObjectiveComplete();
	void OnObjectiveActivate();
	void OnInitializeQuest();
	void OnDeinitializeQuest();
	void OnCreateQuest();
	void IsQuestActive();
	void HasErrors();
	void GetDebugProperties();
	void GetDebugLabel();
	void DeactivateQuest();
	void ActivateQuest();
};

// Class GunfireRuntime.QuestEntity
// 0x0000
class UQuestEntity : public UQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestEntity");
		return ptr;
	}



	void StartEventTree();
	void IsSpawned();
	void HasEventTree();
	void GetQuest();
	void GetEventTreeByID();
	void GetActor();
	void EndDialog();
	void DialogTrigger();
	void BeginDialog();
};

// Class GunfireRuntime.QuestManager
// 0x0000
class UQuestManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestManager");
		return ptr;
	}



	void SetupQuestVariables();
	void NotifyQuestsUpdated();
	void NotifyQuestByName();
	void GetQuestByType();
	void GetInstance();
	void FindQuestsInLevel();
	void FindQuestByNameID();
	void FindQuestByID();
	void DestroyQuest();
	void AddQuest();
};

// Class GunfireRuntime.SequencerManager
// 0x0000
class USequencerManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SequencerManager");
		return ptr;
	}



	void UpdateSkipStatus();
	void SkipSequence();
	void SetupSequence_Client();
	void ProposeToSkip();
	void GetInstance();
};

// Class GunfireRuntime.SilhouetteComponent
// 0x0000
class USilhouetteComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SilhouetteComponent");
		return ptr;
	}



	void OnInventoryChanged();
};

// Class GunfireRuntime.SpawnFilterManager
// 0x0000
class USpawnFilterManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterManager");
		return ptr;
	}



	void SetSpawnFilter();
	void RemoveSpawnFilter();
	void GetInstance();
	void ClearAllSpawnFilters();
};

// Class GunfireRuntime.StateCameraComponent
// 0x0000
class UStateCameraComponent : public UCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateCameraComponent");
		return ptr;
	}



	void ToggleSecondaryFlyCamera();
	void ToggleFlyCamera();
	void SetInputEnabled();
	void SetCameraState();
	void SetAnimatedCameraFOV();
	void ResetView();
	void ResetFromCurrentView();
	void HardReset();
	void GetPlayerController();
	void GetCurrentCamera();
	void GetCharacter();
	void GetCameraTransform();
	void GetCameraRotation();
	void GetCameraLocation();
	void GetCameraActor();
	void ExitFlyCamera();
	void ExitAnimatedCamera();
	void EnterFlyCamera();
	void EnterAnimatedCamera();
	void AnimatedCameraCut();
};

// Class GunfireRuntime.Trait
// 0x0000
class UTrait : public UActorModifier
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Trait");
		return ptr;
	}



};

// Class GunfireRuntime.UIActor
// 0x0000
class AUIActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIActor");
		return ptr;
	}



	void SetWidgetText();
	void OnPushDialog();
	void OnPopDialog();
	void OnEndDialog();
	void OnDialogLayer();
	void OnBeginDialog();
	void Focus();
	void CreateInstance();
};

// Class GunfireRuntime.EquipmentMod
// 0x0000
class AEquipmentMod : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquipmentMod");
		return ptr;
	}



	void UnequipMod();
	void ScaleStat();
	void OnPostComputeStats();
	void OnDetached();
	void OnComputeStats();
	void OnAttached();
	void ModifyStat();
	void HasItemOrEquippedMod();
	void GetStat();
	void GetSlot();
	void GetPreviewInspectInfoFromInventory();
	void GetPreviewInspectInfo();
	void GetEquipment();
	void FindEquippedModInInventory();
	void EquipModFromInventory();
	void EquipMod();
};

// Class GunfireRuntime.ActorStateDecorator
// 0x0000
class UActorStateDecorator : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.ShowEquipmentAbstractDecorator
// 0x0000
class UShowEquipmentAbstractDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ShowEquipmentAbstractDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterEntry
// 0x0000
class USpawnFilterEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterEntry");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterElement
// 0x0000
class USpawnFilterElement : public USpawnFilterEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterElement");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableEntry
// 0x0000
class USpawnTableEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableEntry");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableElement
// 0x0000
class USpawnTableElement : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableElement");
		return ptr;
	}



};

// Class GunfireRuntime.AchievementHelpers
// 0x0000
class UAchievementHelpers : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementHelpers");
		return ptr;
	}



};

// Class GunfireRuntime.AchievementInfo
// 0x0000
class UAchievementInfo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementInfo");
		return ptr;
	}



};

// Class GunfireRuntime.AchievementList
// 0x0000
class UAchievementList : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementList");
		return ptr;
	}



};

// Class GunfireRuntime.AchievementUpdateCallbackProxy
// 0x0000
class UAchievementUpdateCallbackProxy : public UAchievementWriteCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementUpdateCallbackProxy");
		return ptr;
	}



};

// Class GunfireRuntime.AchievementIncrementCallbackProxy
// 0x0000
class UAchievementIncrementCallbackProxy : public UAchievementUpdateCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementIncrementCallbackProxy");
		return ptr;
	}



	void IncrementAchievementProgress();
};

// Class GunfireRuntime.AchievementSetCallbackProxy
// 0x0000
class UAchievementSetCallbackProxy : public UAchievementUpdateCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AchievementSetCallbackProxy");
		return ptr;
	}



	void SetAchievementProgress();
};

// Class GunfireRuntime.ActionComponent
// 0x0000
class UActionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActionComponent");
		return ptr;
	}



	void StopActionByType();
	void StopAction();
	void OnRep_Actions();
	void IsActionTypeRunning();
	void IsActionRunning();
	void InvokeEventOnAll();
	void InvokeEvent();
	void GetNumActionsOfType();
	void GetAllActionsOfType();
	void GetActionOfType();
	void GetActionByID();
	void DoActionInternal();
	void DoAction();
	void CanDoActionInternal();
};

// Class GunfireRuntime.ActorContextCondition
// 0x0000
class UActorContextCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorContextCondition");
		return ptr;
	}



};

// Class GunfireRuntime.ActorState
// 0x0000
class UActorState : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorState");
		return ptr;
	}



};

// Class GunfireRuntime.ActorStateTransition
// 0x0000
class UActorStateTransition : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorStateTransition");
		return ptr;
	}



};

// Class GunfireRuntime.AdvancedDecalComponent
// 0x0000
class UAdvancedDecalComponent : public UDecalComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AdvancedDecalComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AdvImage
// 0x0000
class UAdvImage : public UImage
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AdvImage");
		return ptr;
	}



	void SetNameID();
	void OnResetIconCache();
	void OnDeviceChanged();
};

// Class GunfireRuntime.AdvTextBlock
// 0x0000
class UAdvTextBlock : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AdvTextBlock");
		return ptr;
	}



	void StartTextFill();
	void SetText();
	void SetLineHeightPercentage();
	void SetCurrentPage();
	void PauseTextFill();
	void OnDeviceChanged();
	void IsTextFillPaused();
	void GetNumPages();
	void ForceRecompute();
	void ComputeDesiredSize();
	void CompleteTextFill();
	void ClearText();
};

// Class GunfireRuntime.AdvTextBlockSettings
// 0x0000
class UAdvTextBlockSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AdvTextBlockSettings");
		return ptr;
	}



};

// Class GunfireRuntime.AIAttackStateDecorator
// 0x0000
class UAIAttackStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIAttackStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIAwarenessComponent
// 0x0000
class UAIAwarenessComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIAwarenessComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AIAwarenessManager
// 0x0000
class UAIAwarenessManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIAwarenessManager");
		return ptr;
	}



	void SendAwarenessSignalSegment();
	void SendAwarenessSignal();
	void GetInstance();
};

// Class GunfireRuntime.AICharacter
// 0x0000
class AAICharacter : public ACharacterGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AICharacter");
		return ptr;
	}



	void OnRep_POIAnimationTag();
};

// Class GunfireRuntime.AITargetSelector
// 0x0000
class UAITargetSelector : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.AICharacterNearbyTargetSelector
// 0x0000
class UAICharacterNearbyTargetSelector : public UAITargetSelector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AICharacterNearbyTargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.AIGoalActor
// 0x0000
class AAIGoalActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIGoalActor");
		return ptr;
	}



};

// Class GunfireRuntime.AIControllerGunfire
// 0x0000
class AAIControllerGunfire : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIControllerGunfire");
		return ptr;
	}



	void UpdateAwareness();
	void UnlockCurrentTarget();
	void SetSpawnLocation();
	void SetRelevantActorFilterClass();
	void SetCurrentTarget();
	void SendAwarenessSignal();
	void ResetThreat();
	void ResetAwareness();
	void OnSetTacticalPoint();
	void OnFactionChanged();
	void OnClearTacticalPoint();
	void LockCurrentTarget();
	void HasLineOfSightToAnyPlayer();
	void HasLineOfSight();
	void GetThreatLeader();
	void GetTargetChangedThisFrame();
	void GetTacticalPointValid();
	void GetTacticalPoint();
	void GetPathTarget();
	void GetPathPoint();
	void GetNearbyAI();
	void GetCurrentTarget();
	void AddThreat();
	void AddPersistentTarget();
};

// Class GunfireRuntime.AIConvergeToStateDecorator
// 0x0000
class UAIConvergeToStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIConvergeToStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AICoordinator
// 0x0000
class UAICoordinator : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AICoordinator");
		return ptr;
	}



	void GetWeightForTarget();
	void GetMaxWeightForTarget();
	void GetAICoordinator();
};

// Class GunfireRuntime.AIDataContainer
// 0x0000
class UAIDataContainer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDataContainer");
		return ptr;
	}



};

// Class GunfireRuntime.AIData
// 0x0000
class AAIData : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIData");
		return ptr;
	}



};

// Class GunfireRuntime.AIDataComponent
// 0x0000
class UAIDataComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDataComponent");
		return ptr;
	}



	void SetState();
};

// Class GunfireRuntime.AIDataGenerationSettings
// 0x0000
class UAIDataGenerationSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDataGenerationSettings");
		return ptr;
	}



};

// Class GunfireRuntime.AIDataRenderingComponent
// 0x0000
class UAIDataRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDataRenderingComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AIDefaultTargetSelector
// 0x0000
class UAIDefaultTargetSelector : public UAITargetSelector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDefaultTargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.EncounterGroupInstance
// 0x0000
class UEncounterGroupInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EncounterGroupInstance");
		return ptr;
	}



};

// Class GunfireRuntime.AIDirector
// 0x0000
class UAIDirector : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDirector");
		return ptr;
	}



	void Suspend();
	void StopEncounterGroup();
	void StartEncounterGroup();
	void Resume();
	void OnNotifyHit();
	void OnEncounterEvent();
	void OnActorSpawned();
	void OnActorDead();
	void HasActiveSpawns();
	void GetAIDirectorDebugState();
	void ClearAllGroups();
};

// Class GunfireRuntime.AIDirectorSettings
// 0x0000
class AAIDirectorSettings : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDirectorSettings");
		return ptr;
	}



};

// Class GunfireRuntime.AIDistanceCondition
// 0x0000
class UAIDistanceCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIDistanceCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIEnvQueryStateDecorator
// 0x0000
class UAIEnvQueryStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIEnvQueryStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIFollowTargetStateDecorator
// 0x0000
class UAIFollowTargetStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIFollowTargetStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIHasBetterTargetCondition
// 0x0000
class UAIHasBetterTargetCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIHasBetterTargetCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIHasPatrolPathCondition
// 0x0000
class UAIHasPatrolPathCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIHasPatrolPathCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIHealTargetSelector
// 0x0000
class UAIHealTargetSelector : public UAITargetSelector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIHealTargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.AIJumpCondition
// 0x0000
class UAIJumpCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIJumpCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AnimActorState
// 0x0000
class UAnimActorState : public UActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimActorState");
		return ptr;
	}



	void UpdateMovementParams();
};

// Class GunfireRuntime.AIJumpState
// 0x0000
class UAIJumpState : public UAnimActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIJumpState");
		return ptr;
	}



	void IsAIJumpComplete();
};

// Class GunfireRuntime.AIMoveForwardStateDecorator
// 0x0000
class UAIMoveForwardStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIMoveForwardStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AimTargetCondition
// 0x0000
class UAimTargetCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AimTargetCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AINavArea
// 0x0000
class UAINavArea : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINavArea");
		return ptr;
	}



};

// Class GunfireRuntime.AINavAreaCondition
// 0x0000
class UAINavAreaCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINavAreaCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AINavLinkCondition
// 0x0000
class UAINavLinkCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINavLinkCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AINavLinkState
// 0x0000
class UAINavLinkState : public UAnimActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINavLinkState");
		return ptr;
	}



};

// Class GunfireRuntime.AINearbyPlayerTargetSelector
// 0x0000
class UAINearbyPlayerTargetSelector : public UAITargetSelector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINearbyPlayerTargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.AINodePathCondition
// 0x0000
class UAINodePathCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AINodePathCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIPathPoint
// 0x0000
class AAIPathPoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPathPoint");
		return ptr;
	}



};

// Class GunfireRuntime.AIPathResultCondition
// 0x0000
class UAIPathResultCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPathResultCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIPathStatusCondition
// 0x0000
class UAIPathStatusCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPathStatusCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIPathToStateDecorator
// 0x0000
class UAIPathToStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPathToStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIPatrolStateDecorator
// 0x0000
class UAIPatrolStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPatrolStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIPerceptionStateDecorator
// 0x0000
class UAIPerceptionStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPerceptionStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIPOIType
// 0x0000
class UAIPOIType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPOIType");
		return ptr;
	}



};

// Class GunfireRuntime.AIPointOfInterest
// 0x0000
class AAIPointOfInterest : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPointOfInterest");
		return ptr;
	}



	void SetEnabled();
	void OnValidate();
	void OnOccupied();
	void OnEndUse();
	void OnBeginUse();
	void EndUse();
	void BeginUse();
};

// Class GunfireRuntime.AIPointOfInterestManager
// 0x0000
class UAIPointOfInterestManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPointOfInterestManager");
		return ptr;
	}



	void GetInstance();
};

// Class GunfireRuntime.AIPointOfInterestComponent
// 0x0000
class UAIPointOfInterestComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPointOfInterestComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AIPOICondition
// 0x0000
class UAIPOICondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIPOICondition");
		return ptr;
	}



};

// Class GunfireRuntime.AIResurrectTargetSelector
// 0x0000
class UAIResurrectTargetSelector : public UAITargetSelector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIResurrectTargetSelector");
		return ptr;
	}



};

// Class GunfireRuntime.AIShootStateDecorator
// 0x0000
class UAIShootStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIShootStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AISpawnPointDecorator
// 0x0000
class UAISpawnPointDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AISpawnPointDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIStrafeTargetStateDecorator
// 0x0000
class UAIStrafeTargetStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIStrafeTargetStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.CombatClass
// 0x0000
class UCombatClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CombatClass");
		return ptr;
	}



};

// Class GunfireRuntime.AITacticalPointData
// 0x0000
class AAITacticalPointData : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITacticalPointData");
		return ptr;
	}



};

// Class GunfireRuntime.AICustomTacticalPoint
// 0x0000
class AAICustomTacticalPoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AICustomTacticalPoint");
		return ptr;
	}



};

// Class GunfireRuntime.AITacticalPointDebugComponent
// 0x0000
class UAITacticalPointDebugComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITacticalPointDebugComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AITacticalPointCondition
// 0x0000
class UAITacticalPointCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITacticalPointCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AITacticalPointContainerInterface
// 0x0000
class UAITacticalPointContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITacticalPointContainerInterface");
		return ptr;
	}



};

// Class GunfireRuntime.AITacticalPointManager
// 0x0000
class UAITacticalPointManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITacticalPointManager");
		return ptr;
	}



};

// Class GunfireRuntime.AITargetChangedCondition
// 0x0000
class UAITargetChangedCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITargetChangedCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AITargetCondition
// 0x0000
class UAITargetCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITargetCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AITargetSelectorStateDecorator
// 0x0000
class UAITargetSelectorStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AITargetSelectorStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIUpdateTargetStateDecorator
// 0x0000
class UAIUpdateTargetStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIUpdateTargetStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AIWanderStateDecorator
// 0x0000
class UAIWanderStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AIWanderStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AmbientAudioComponent
// 0x0000
class UAmbientAudioComponent : public UAudioComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AmbientAudioComponent");
		return ptr;
	}



};

// Class GunfireRuntime.AmbientAudioManager
// 0x0000
class UAmbientAudioManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AmbientAudioManager");
		return ptr;
	}



};

// Class GunfireRuntime.AmbientSpawnManager
// 0x0000
class UAmbientSpawnManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AmbientSpawnManager");
		return ptr;
	}



	void OnUninitialize();
	void OnSpawnListLoaded();
	void OnSetTileActive();
	void OnGenerateAmbientSpawns();
	void OnDead();
	void OnActorDestroyed();
	void OnActorDead();
	void GetNumActiveActorsOfType();
	void GetActiveCharacterCount();
};

// Class GunfireRuntime.VisualizableActor
// 0x0000
class AVisualizableActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualizableActor");
		return ptr;
	}



};

// Class GunfireRuntime.AmbientSpawnRegion
// 0x0000
class AAmbientSpawnRegion : public AVisualizableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AmbientSpawnRegion");
		return ptr;
	}



};

// Class GunfireRuntime.AngleDiffCondition
// 0x0000
class UAngleDiffCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AngleDiffCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AnimatedCameraComponent
// 0x0000
class UAnimatedCameraComponent : public UCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimatedCameraComponent");
		return ptr;
	}



	void SetCamera();
	void SetAnimatedCameraFOV();
	void RestoreCamera();
	void ExitAnimatedCamera();
	void Exit();
	void EnterAnimatedCamera();
	void Enter();
	void AnimatedCameraCut();
};

// Class GunfireRuntime.AnimatedCameraState
// 0x0000
class UAnimatedCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimatedCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.AnimationSet
// 0x0000
class UAnimationSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimationSet");
		return ptr;
	}



};

// Class GunfireRuntime.OptimizableNotifyInterface
// 0x0000
class UOptimizableNotifyInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.OptimizableNotifyInterface");
		return ptr;
	}



};

// Class GunfireRuntime.ConditionalAnimNotify
// 0x0000
class UConditionalAnimNotify : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ConditionalAnimNotify");
		return ptr;
	}



};

// Class GunfireRuntime.StateTransientAnimNotify
// 0x0000
class UStateTransientAnimNotify : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateTransientAnimNotify");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_ActionEvent
// 0x0000
class UAnimNotify_ActionEvent : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_ActionEvent");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_AnimatedCameraCut
// 0x0000
class UAnimNotify_AnimatedCameraCut : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_AnimatedCameraCut");
		return ptr;
	}



};

// Class GunfireRuntime.ConditionalAnimNotifyState
// 0x0000
class UConditionalAnimNotifyState : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ConditionalAnimNotifyState");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_AnimatedCameraCutFOVTransition
// 0x0000
class UAnimNotify_AnimatedCameraCutFOVTransition : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_AnimatedCameraCutFOVTransition");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_Awareness
// 0x0000
class UAnimNotify_Awareness : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_Awareness");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_CameraShake
// 0x0000
class UAnimNotify_CameraShake : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_CameraShake");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_CharacterEvent
// 0x0000
class UAnimNotify_CharacterEvent : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_CharacterEvent");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_DoAction
// 0x0000
class UAnimNotify_DoAction : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_DoAction");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_EnableHitLocation
// 0x0000
class UAnimNotify_EnableHitLocation : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_EnableHitLocation");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_PlayerEffect
// 0x0000
class UAnimNotify_PlayerEffect : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_PlayerEffect");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_ForceFeedback
// 0x0000
class UAnimNotify_ForceFeedback : public UAnimNotify_PlayerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_ForceFeedback");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_ImpactEffect
// 0x0000
class UAnimNotify_ImpactEffect : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_ImpactEffect");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_Impulse
// 0x0000
class UAnimNotify_Impulse : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_Impulse");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_ItemEvent
// 0x0000
class UAnimNotify_ItemEvent : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_ItemEvent");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_PlaySoundParameter
// 0x0000
class UAnimNotify_PlaySoundParameter : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_PlaySoundParameter");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_PlaySoundSetSound
// 0x0000
class UAnimNotify_PlaySoundSetSound : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_PlaySoundSetSound");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_PlayVisualSetParticleEffect
// 0x0000
class UAnimNotify_PlayVisualSetParticleEffect : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_PlayVisualSetParticleEffect");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_Ragdoll
// 0x0000
class UAnimNotify_Ragdoll : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_Ragdoll");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_ScaleGravity
// 0x0000
class UAnimNotify_ScaleGravity : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_ScaleGravity");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_SetComponentVisible
// 0x0000
class UAnimNotify_SetComponentVisible : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_SetComponentVisible");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_StateParticleEffect
// 0x0000
class UAnimNotify_StateParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_StateParticleEffect");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_StateSound
// 0x0000
class UAnimNotify_StateSound : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_StateSound");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_StowWeapon
// 0x0000
class UAnimNotify_StowWeapon : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_StowWeapon");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_TargetConverge
// 0x0000
class UAnimNotify_TargetConverge : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_TargetConverge");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_TimeDilation
// 0x0000
class UAnimNotify_TimeDilation : public UStateTransientAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_TimeDilation");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_TriggerNearbyEmitters
// 0x0000
class UAnimNotify_TriggerNearbyEmitters : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_TriggerNearbyEmitters");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotify_UpdateDynamics
// 0x0000
class UAnimNotify_UpdateDynamics : public UConditionalAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotify_UpdateDynamics");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_AnimTag
// 0x0000
class UAnimNotifyState_AnimTag : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_AnimTag");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_FaceTarget
// 0x0000
class UAnimNotifyState_FaceTarget : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_FaceTarget");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_MaterialParam
// 0x0000
class UAnimNotifyState_MaterialParam : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_MaterialParam");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_ResetLookPoses
// 0x0000
class UAnimNotifyState_ResetLookPoses : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_ResetLookPoses");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_SetClothBlend
// 0x0000
class UAnimNotifyState_SetClothBlend : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_SetClothBlend");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_SoundTag
// 0x0000
class UAnimNotifyState_SoundTag : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_SoundTag");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_StateTrail
// 0x0000
class UAnimNotifyState_StateTrail : public UAnimNotifyState_Trail
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_StateTrail");
		return ptr;
	}



};

// Class GunfireRuntime.StateTransientAnimNotifyState
// 0x0000
class UStateTransientAnimNotifyState : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateTransientAnimNotifyState");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_StateWindow
// 0x0000
class UAnimNotifyState_StateWindow : public UStateTransientAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_StateWindow");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_TagWindow
// 0x0000
class UAnimNotifyState_TagWindow : public UStateTransientAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_TagWindow");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_TargetAlign
// 0x0000
class UAnimNotifyState_TargetAlign : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_TargetAlign");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_TimeDilationState
// 0x0000
class UAnimNotifyState_TimeDilationState : public UStateTransientAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_TimeDilationState");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_VisualSetTrail
// 0x0000
class UAnimNotifyState_VisualSetTrail : public UAnimNotifyState_StateTrail
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_VisualSetTrail");
		return ptr;
	}



};

// Class GunfireRuntime.AnimNotifyState_WeaponPhantom
// 0x0000
class UAnimNotifyState_WeaponPhantom : public UConditionalAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimNotifyState_WeaponPhantom");
		return ptr;
	}



};

// Class GunfireRuntime.AnimTagStateDecorator
// 0x0000
class UAnimTagStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimTagStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.ApexCondition
// 0x0000
class UApexCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ApexCondition");
		return ptr;
	}



};

// Class GunfireRuntime.AssetCache
// 0x0000
class UAssetCache : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AssetCache");
		return ptr;
	}



	void PreloadAssets();
	void IsAssetCachedPreloaded();
	void GetInstance();
};

// Class GunfireRuntime.AttributesComponent
// 0x0000
class UAttributesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AttributesComponent");
		return ptr;
	}



	void SetAttributePoints();
	void SetAttributeLevel();
	void PreviewIncreaseAttribute();
	void PreviewDecreaseAttribute();
	void PreviewCommit();
	void OnRep_Attributes();
	void OnLevelUp();
	void OnComputeStats();
	void OnComputeDerivedStats();
	void IsPreviewing();
	void IncreaseAttribute();
	void GetPreviewStatValue();
	void GetPreviewAvailableAttributePoints();
	void GetPreviewAttributeLevel();
	void GetAvailableAttributePoints();
	void GetAttributeLevel();
	void GetAttributeCost();
	void GetAttributeByID();
	void EndPreview();
	void BeginPreview();
};

// Class GunfireRuntime.AudioStateID
// 0x0000
class UAudioStateID : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioStateID");
		return ptr;
	}



};

// Class GunfireRuntime.AudioState_Default
// 0x0000
class UAudioState_Default : public UAudioStateID
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioState_Default");
		return ptr;
	}



};

// Class GunfireRuntime.AudioCustomVolume
// 0x0000
class AAudioCustomVolume : public AAudioVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioCustomVolume");
		return ptr;
	}



	void SetState();
	void OnEndActiveVolume();
	void OnBeginActiveVolume();
	void IsActiveVolume();
};

// Class GunfireRuntime.BlockEvadeStateDecorator
// 0x0000
class UBlockEvadeStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BlockEvadeStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.BlueprintFunctionLibraryGunfire
// 0x0000
class UBlueprintFunctionLibraryGunfire : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BlueprintFunctionLibraryGunfire");
		return ptr;
	}



	void SetFadeScreenSize();
	void SetDamageInfoVariableObject();
	void SetDamageInfoVariableInt();
	void SetDamageInfoVariableFloat();
	void SetDamageInfoVariableBool();
	void GetDefaultObject();
};

// Class GunfireRuntime.BoundsStateDecorator
// 0x0000
class UBoundsStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BoundsStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.BreakableImpulseComponent
// 0x0000
class UBreakableImpulseComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BreakableImpulseComponent");
		return ptr;
	}



};

// Class GunfireRuntime.BreakableComponent
// 0x0000
class UBreakableComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BreakableComponent");
		return ptr;
	}



	void Reset();
	void OnHidePieces();
	void IsUnbroken();
	void IsBroken();
	void IsBreaking();
	void Break();
};

// Class GunfireRuntime.BTDecorator_Condition
// 0x0000
class UBTDecorator_Condition : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BTDecorator_Condition");
		return ptr;
	}



};

// Class GunfireRuntime.BTTask_SetActorState
// 0x0000
class UBTTask_SetActorState : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BTTask_SetActorState");
		return ptr;
	}



};

// Class GunfireRuntime.GroundProbeComponent
// 0x0000
class UGroundProbeComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GroundProbeComponent");
		return ptr;
	}



};

// Class GunfireRuntime.Builder
// 0x0000
class ABuilder : public AEquipment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Builder");
		return ptr;
	}



	void TryPlace();
	void ServerTryPlace();
	void ExitBuilder();
};

// Class GunfireRuntime.ButtonCondition
// 0x0000
class UButtonCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ButtonCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CameraModifier_SimulatedHMD
// 0x0000
class UCameraModifier_SimulatedHMD : public UCameraModifier
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CameraModifier_SimulatedHMD");
		return ptr;
	}



};

// Class GunfireRuntime.CameraStateDecorator
// 0x0000
class UCameraStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CameraStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.AnimatedCameraStateDecorator
// 0x0000
class UAnimatedCameraStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AnimatedCameraStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.CapsuleSizeStateDecorator
// 0x0000
class UCapsuleSizeStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CapsuleSizeStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.Challenge
// 0x0000
class UChallenge : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Challenge");
		return ptr;
	}



};

// Class GunfireRuntime.ChallengeComponent
// 0x0000
class UChallengeComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChallengeComponent");
		return ptr;
	}



	void UnlockChallenge();
	void IsChallengeComplete();
	void IncrementObjectivesFromActor();
	void IncrementObjectives();
	void GetChallengeRank();
};

// Class GunfireRuntime.ChallengeList
// 0x0000
class UChallengeList : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChallengeList");
		return ptr;
	}



};

// Class GunfireRuntime.ChallengeObjective
// 0x0000
class UChallengeObjective : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChallengeObjective");
		return ptr;
	}



};

// Class GunfireRuntime.ChallengeReward
// 0x0000
class UChallengeReward : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChallengeReward");
		return ptr;
	}



};

// Class GunfireRuntime.ChanceCondition
// 0x0000
class UChanceCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChanceCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CharacterManager
// 0x0000
class UCharacterManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CharacterManager");
		return ptr;
	}



	void KillAllCharactersForOwner();
	void GetInstance();
	void GetCharactersInAggroGroup();
	void GetCharactersForOwner();
	void DestroyAllCharactersForOwner();
};

// Class GunfireRuntime.CharacterMovementComponentGunfire
// 0x0000
class UCharacterMovementComponentGunfire : public UCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CharacterMovementComponentGunfire");
		return ptr;
	}



	void SetSwingConstraint();
	void SetNavigationType();
	void SetCanSwim();
	void Is3DNavigating();
	void GetWaterBoundsActor();
	void GetWaterBounds();
	void GetPhysicsBoundsActor();
	void GetPhysicsBounds();
	void GetNavigationType();
	void GetDebugInfo();
	void GetCurrentWaterBoundsType();
	void GetCurrentPhysicsBoundsType();
	void AddExternalVelocity();
};

// Class GunfireRuntime.SpawnPointBase
// 0x0000
class ASpawnPointBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnPointBase");
		return ptr;
	}



	void Warp();
	void SpawnActor();
	void QueueSpawnActor();
	void PreSpawn();
	void PostSpawn();
	void OnPreSpawn();
	void OnPostSpawn();
	void NotifySpawnComplete();
	void FinishSpawn();
	void BeginSpawn();
};

// Class GunfireRuntime.CharacterSpawnPoint
// 0x0000
class ACharacterSpawnPoint : public ASpawnPointBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CharacterSpawnPoint");
		return ptr;
	}



	void Spawn();
	void ResumeSpawner();
	void ResetSpawn();
	void RemoveCharacterProxy();
	void PostInitSpawnPoint();
	void PauseSpawner();
	void OnTriggerEndOverlap();
	void OnTriggerBeginOverlap();
	void OnSphereEndOverlap();
	void OnSphereBeginOverlap();
	void OnProxyDestroyed();
	void OnCharacterDestroyed();
	void OnCharacterDead();
	void GetNumAliveSpawns();
	void GetEnemyTypeOverride();
	void EnableSpawnPoint();
	void CanSpawnFromTriggers();
	void CanSpawnFromDelay();
	void CanSpawn();
	void CanRespawn();
	void AddCharacterProxy();
};

// Class GunfireRuntime.ChargeableItem
// 0x0000
class AChargeableItem : public AEquipment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChargeableItem");
		return ptr;
	}



	void ValidateUse();
	void ServerKeyReleased();
	void ServerKeyPressed();
	void RemoveItem();
	void OnRep_ChargeState();
	void OnChargeSuccess();
	void OnChargeFail();
	void OnChargeComplete();
	void OnChargeBegin();
	void IsBusy();
};

// Class GunfireRuntime.ChargeCondition
// 0x0000
class UChargeCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChargeCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CheatInputSettings
// 0x0000
class UCheatInputSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CheatInputSettings");
		return ptr;
	}



};

// Class GunfireRuntime.ChildAttachmentBroadcaster
// 0x0000
class UChildAttachmentBroadcaster : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ChildAttachmentBroadcaster");
		return ptr;
	}



};

// Class GunfireRuntime.CinematicCondition
// 0x0000
class UCinematicCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CinematicCondition");
		return ptr;
	}



};

// Class GunfireRuntime.ClampVelocityDecorator
// 0x0000
class UClampVelocityDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ClampVelocityDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.ClearLockTargetStateDecorator
// 0x0000
class UClearLockTargetStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ClearLockTargetStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.CollisionModeStateDecorator
// 0x0000
class UCollisionModeStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CollisionModeStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.CombatUtil
// 0x0000
class UCombatUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CombatUtil");
		return ptr;
	}



	void WeaponTrace();
	void SpawnOverlapImpactEffects();
	void SpawnImpactEffectsFromTrace();
	void SpawnImpactEffects();
	void SpawnImpactEffectProjectile();
	void SpawnImpactEffectAOE();
	void ResolveDamageType();
	void ResolveDamageOwner();
	void PredictLocation();
	void IsFriendly();
	void IsEnemy();
	void IsDamageable();
	void IsAlive();
	void HasDamageClass();
	void GetTargetVector();
	void GetReticuleLocation();
	void GetPlayerAimVector();
	void GetFaction();
	void GetEyePos();
	void GetChestPos();
	void GetBasePos();
	void GetAimVector();
	void GetAimPos();
	void GetAffiliation();
	void FireProjectileAsync();
	void FireProjectile();
	void CreateDamageInfoFromTarget();
	void CreateDamageInfoFromHit();
	void ComputeDamageFalloffFromDistance();
	void ComputeDamageFalloff();
	void ApplyWeaponSpread();
	void ApplyDamageInfo();
	void ApplyDamage();
	void ApplyCustomWeaponSpread();
	void AllowsWeakSpots();
	void AllowsCriticalHits();
};

// Class GunfireRuntime.CompoundState
// 0x0000
class UCompoundState : public UActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CompoundState");
		return ptr;
	}



};

// Class GunfireRuntime.ConditionList
// 0x0000
class UConditionList : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ConditionList");
		return ptr;
	}



	void EvaluateConditions();
};

// Class GunfireRuntime.RuleSet
// 0x0000
class URuleSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RuleSet");
		return ptr;
	}



};

// Class GunfireRuntime.ContextualDialogSet
// 0x0000
class UContextualDialogSet : public URuleSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ContextualDialogSet");
		return ptr;
	}



};

// Class GunfireRuntime.ContextualDialogComponent
// 0x0000
class UContextualDialogComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ContextualDialogComponent");
		return ptr;
	}



	void TriggerDialogResponseInProximity();
	void TriggerDialogResponse();
	void ServerTriggerDialogResponse();
	void OnNotifyTakeDamage();
	void OnNotifyHit();
	void OnEvent();
	void OnDialogComplete();
	void MulticastDialog();
};

// Class GunfireRuntime.CooldownCondition
// 0x0000
class UCooldownCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CooldownCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CooldownStateDecorator
// 0x0000
class UCooldownStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CooldownStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.CounterCondition
// 0x0000
class UCounterCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CounterCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CraftingRecipe
// 0x0000
class UCraftingRecipe : public UCraftingRecipe_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CraftingRecipe");
		return ptr;
	}



};

// Class GunfireRuntime.CraftingRecipeList
// 0x0000
class UCraftingRecipeList : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CraftingRecipeList");
		return ptr;
	}



};

// Class GunfireRuntime.CraftingRecipeManager
// 0x0000
class UCraftingRecipeManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CraftingRecipeManager");
		return ptr;
	}



	void GetInstance();
	void GetAllMaterials();
	void BuildRecipeList();
};

// Class GunfireRuntime.CraftingComponent
// 0x0000
class UCraftingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CraftingComponent");
		return ptr;
	}



	void UpgradeItem();
	void HasRecipesOfType();
	void HasAvailableUpgrades();
	void HasAvailableRecipes();
	void GetUpgrade();
	void GetRecipesWithIngredient();
	void GetRecipesForItem();
	void GetRecipes();
	void GetRecipeInfo();
	void CraftItem();
};

// Class GunfireRuntime.CustomCondition
// 0x0000
class UCustomCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CustomCondition");
		return ptr;
	}



};

// Class GunfireRuntime.CutsceneTransientActor
// 0x0000
class ACutsceneTransientActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.CutsceneTransientActor");
		return ptr;
	}



	void OnLevelSequence();
	void OnCinematic();
	void ForceCutscene();
};

// Class GunfireRuntime.DamageableActor
// 0x0000
class ADamageableActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageableActor");
		return ptr;
	}



	void UpdateVisualState();
	void SetHealth();
	void PostComputeStats();
	void OnRep_Health();
	void OnNotifyTakeDamage();
	void OnNotifyDead();
	void IsAlive();
	void GetNumDamageStates();
	void GetHealthPercentage();
	void GetHealthMax();
	void GetHealth();
	void GetDamageState();
	void DifficultyChanged();
	void ComputeStats();
	void ApplyHealthDelta();
};

// Class GunfireRuntime.DamageableInterface
// 0x0000
class UDamageableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageableInterface");
		return ptr;
	}



	void FilterIncomingDamage();
};

// Class GunfireRuntime.DamageInfoUtil
// 0x0000
class UDamageInfoUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageInfoUtil");
		return ptr;
	}



	void SetPower();
	void SetIsSecondaryDamage();
	void SetDamageType();
	void SetDamage();
	void ModifyDamage();
	void ModifyCrit();
};

// Class GunfireRuntime.DamageNotifyInterface
// 0x0000
class UDamageNotifyInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageNotifyInterface");
		return ptr;
	}



	void OnNotifyTakeDamage();
};

// Class GunfireRuntime.DamageSourceInterface
// 0x0000
class UDamageSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageSourceInterface");
		return ptr;
	}



	void ResolveOwner();
	void NotifyHitTarget();
	void ModifyDamage();
	void GetDamageType();
};

// Class GunfireRuntime.DamageStateDecorator
// 0x0000
class UDamageStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.DamageClass
// 0x0000
class UDamageClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageClass");
		return ptr;
	}



};

// Class GunfireRuntime.DamageTypeGunfire
// 0x0000
class UDamageTypeGunfire : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DamageTypeGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.DeployableComponent
// 0x0000
class UDeployableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DeployableComponent");
		return ptr;
	}



};

// Class GunfireRuntime.DialogStage
// 0x0000
class ADialogStage : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogStage");
		return ptr;
	}



	void SetupStage();
	void SetCameraByName();
	void SetCamera();
	void SetActiveCameraComponent();
	void RestoreCamera();
	void PositionActorAtMark();
	void PositionActor();
	void GetActor();
	void End();
	void Begin();
};

// Class GunfireRuntime.DialogCameraComponent
// 0x0000
class UDialogCameraComponent : public UCineCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogCameraComponent");
		return ptr;
	}



};

// Class GunfireRuntime.DialogProviderInterface
// 0x0000
class UDialogProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogProviderInterface");
		return ptr;
	}



	void SetupContextVariables();
	void QueryEventTree();
	void GetEventTree();
};

// Class GunfireRuntime.DialogInitiatorInterface
// 0x0000
class UDialogInitiatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogInitiatorInterface");
		return ptr;
	}



	void ShouldExitDialogFromDamage();
	void ShouldExitDialog();
};

// Class GunfireRuntime.EventTreeComponent
// 0x0000
class UEventTreeComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeComponent");
		return ptr;
	}



	void Stop();
	void StartTree();
	void SetVariableAsObject();
	void SetVariableAsBool();
	void SetupContextVariables();
	void SetStage();
	void PushStage();
	void PopStage();
	void PeekNextNode();
	void IsRunning();
	void HasPendingEvents();
	void GetVariableObject();
	void GetCurrentNode();
	void ExecuteTriggerFromEventTree();
	void ExecuteSubroutine();
	void Clear();
	void BeginEventTree();
};

// Class GunfireRuntime.DialogComponent
// 0x0000
class UDialogComponent : public UEventTreeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogComponent");
		return ptr;
	}



	void TokenValueSet();
	void SelectOptionByName();
	void SelectOption();
	void ResetStageFromCinematic();
	void RemoveDialogProvider();
	void OnRep_Stage();
	void OnRep_Options();
	void OnRep_Dialog();
	void OnRep_Active();
	void OnInitiatorTakeAnyDamage();
	void OnDialogFinished();
	void JoinInProgressServer();
	void JoinInProgressClient();
	void HasOption();
	void HasAttributeValueForStage();
	void HasAttributeValueForOption();
	void HasAttributeValue();
	void HandleEvent();
	void GetTokenReplacedText();
	void GetAttributeValueForStage();
	void GetAttributeValueForOption();
	void GetAttributeValue();
	void GetAttributeAssetForStage();
	void ExecuteTrigger();
	void ExecuteItemTrigger();
	void EventTreeStageEvent();
	void EventTreeNodeEvent();
	void EventEnd();
	void EventBegin();
	void DialogAdvance();
	void BeginDialog();
	void AddDialogProvider();
};

// Class GunfireRuntime.DialogInstance
// 0x0000
class UDialogInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogInstance");
		return ptr;
	}



	void OnSubtitleComplete();
	void OnSubtitleAdded();
	void IsDialogSource();
	void ForceComplete();
	void Complete();
};

// Class GunfireRuntime.DialogManager
// 0x0000
class UDialogManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogManager");
		return ptr;
	}



	void StopDialog();
	void StopActiveDialog();
	void PlayDialogFromSound();
	void PlayDialog();
	void GetDialogManager();
	void GetActiveDialog();
};

// Class GunfireRuntime.DialogVocalRange
// 0x0000
class UDialogVocalRange : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DialogVocalRange");
		return ptr;
	}



};

// Class GunfireRuntime.DisableInputDecorator
// 0x0000
class UDisableInputDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DisableInputDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.DisableTargetLockStateDecorator
// 0x0000
class UDisableTargetLockStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DisableTargetLockStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.DissolveComponent
// 0x0000
class UDissolveComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DissolveComponent");
		return ptr;
	}



	void DissolveOut();
	void DissolveIn();
	void Dissolve();
};

// Class GunfireRuntime.DiveCondition
// 0x0000
class UDiveCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.DiveCondition");
		return ptr;
	}



};

// Class GunfireRuntime.EffectsPreviewSettings
// 0x0000
class UEffectsPreviewSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EffectsPreviewSettings");
		return ptr;
	}



};

// Class GunfireRuntime.EncounterInstance
// 0x0000
class UEncounterInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EncounterInstance");
		return ptr;
	}



	void StopEncounter();
	void SetAggroGroup();
	void ResumeEncounter();
	void PauseEncounter();
	void OnSpawnListLoaded();
	void NumQueuedSpawns();
	void NumActiveSpawns();
	void IsComplete();
	void InvokeEventOnActors();
	void GetSpawnedActors();
};

// Class GunfireRuntime.SpawnTableEncounterParams
// 0x0000
class USpawnTableEncounterParams : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableEncounterParams");
		return ptr;
	}



};

// Class GunfireRuntime.EncounterManager
// 0x0000
class UEncounterManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EncounterManager");
		return ptr;
	}



	void StopEncounter();
	void StopAllEncountersForOwner();
	void ResumeEncounter();
	void PauseEncounter();
	void OnSpawnDestroyed();
	void OnNotifyDead();
	void IsFullyExplored();
	void IsComplete();
	void GetNumEncountersForOwner();
	void GetFrontTileID();
	void GetCurrentTileID();
	void GetBehindTileID();
	void DoEncounter();
};

// Class GunfireRuntime.EnvQueryContext_SpawnLocation
// 0x0000
class UEnvQueryContext_SpawnLocation : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryContext_SpawnLocation");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryContext_TargetBase
// 0x0000
class UEnvQueryContext_TargetBase : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryContext_TargetBase");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryContext_Target
// 0x0000
class UEnvQueryContext_Target : public UEnvQueryContext_TargetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryContext_Target");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryContext_TargetAimPos
// 0x0000
class UEnvQueryContext_TargetAimPos : public UEnvQueryContext_TargetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryContext_TargetAimPos");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryContext_TargetLastKnownPosition
// 0x0000
class UEnvQueryContext_TargetLastKnownPosition : public UEnvQueryContext_TargetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryContext_TargetLastKnownPosition");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryGenerator_AITacticalPoint
// 0x0000
class UEnvQueryGenerator_AITacticalPoint : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryGenerator_AITacticalPoint");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryItemType_AITacticalPoint
// 0x0000
class UEnvQueryItemType_AITacticalPoint : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryItemType_AITacticalPoint");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryGenerator_SinglePoint
// 0x0000
class UEnvQueryGenerator_SinglePoint : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryGenerator_SinglePoint");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_AITacticalPoint
// 0x0000
class UEnvQueryTest_AITacticalPoint : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_AITacticalPoint");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_Cover
// 0x0000
class UEnvQueryTest_Cover : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_Cover");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_FieldOfView
// 0x0000
class UEnvQueryTest_FieldOfView : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_FieldOfView");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_GroundMaterial
// 0x0000
class UEnvQueryTest_GroundMaterial : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_GroundMaterial");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_LineOfSight
// 0x0000
class UEnvQueryTest_LineOfSight : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_LineOfSight");
		return ptr;
	}



};

// Class GunfireRuntime.EnvQueryTest_Outside
// 0x0000
class UEnvQueryTest_Outside : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnvQueryTest_Outside");
		return ptr;
	}



};

// Class GunfireRuntime.EquipmentSkinInstanceData
// 0x0000
class UEquipmentSkinInstanceData : public UItemInstanceData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquipmentSkinInstanceData");
		return ptr;
	}



};

// Class GunfireRuntime.EquipmentSkin
// 0x0000
class AEquipmentSkin : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquipmentSkin");
		return ptr;
	}



	void IsSkinEquipped();
	void GetSkinsForItem();
	void GetSkinForBP();
	void EquipSkin();
};

// Class GunfireRuntime.EquipItemDecorator
// 0x0000
class UEquipItemDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquipItemDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.EquippedItemChangedCondition
// 0x0000
class UEquippedItemChangedCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EquippedItemChangedCondition");
		return ptr;
	}



};

// Class GunfireRuntime.EventHandlerInterface
// 0x0000
class UEventHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventHandlerInterface");
		return ptr;
	}



	void HandleEvent();
};

// Class GunfireRuntime.EventStateDecorator
// 0x0000
class UEventStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.EventTree
// 0x0000
class UEventTree : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTree");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeAsset
// 0x0000
class UEventTreeAsset : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeAsset");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Base
// 0x0000
class UEventTreeNode_Base : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Base");
		return ptr;
	}



	void GetEditorLabel();
};

// Class GunfireRuntime.EventTreeNode
// 0x0000
class UEventTreeNode : public UEventTreeNode_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode");
		return ptr;
	}



	void Validate();
	void Loop();
	void Join();
	void IsComplete();
	void End();
	void Begin();
};

// Class GunfireRuntime.EventTreeNode_Achievement
// 0x0000
class UEventTreeNode_Achievement : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Achievement");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeContextObject
// 0x0000
class UEventTreeContextObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeContextObject");
		return ptr;
	}



};

// Class GunfireRuntime.Branch
// 0x0000
class UBranch : public UEventTreeNode_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Branch
// 0x0000
class UEventTreeNode_Branch : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Branch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Delay
// 0x0000
class UEventTreeNode_Delay : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Delay");
		return ptr;
	}



};

// Class GunfireRuntime.Dialog_Speaker
// 0x0000
class UDialog_Speaker : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Dialog_Speaker");
		return ptr;
	}



};

// Class GunfireRuntime.Dialog_Emote
// 0x0000
class UDialog_Emote : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Dialog_Emote");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Dialog
// 0x0000
class UEventTreeNode_Dialog : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Dialog");
		return ptr;
	}



	void OnFinishedWaiting();
	void OnDialogComplete();
	void Complete();
};

// Class GunfireRuntime.EventTreeNode_DialogInterrupt
// 0x0000
class UEventTreeNode_DialogInterrupt : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_DialogInterrupt");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_DialogOption
// 0x0000
class UBranch_DialogOption : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_DialogOption");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_DialogOptions
// 0x0000
class UEventTreeNode_DialogOptions : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_DialogOptions");
		return ptr;
	}



	void SelectOption();
};

// Class GunfireRuntime.EventTreeNode_List
// 0x0000
class UEventTreeNode_List : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_List");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_DialogOption
// 0x0000
class UEventTreeNode_DialogOption : public UEventTreeNode_List
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_DialogOption");
		return ptr;
	}



};

// Class GunfireRuntime.HasDialogOptionsCondition
// 0x0000
class UHasDialogOptionsCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasDialogOptionsCondition");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Event
// 0x0000
class UEventTreeNode_Event : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Event");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_ExecSubroutine
// 0x0000
class UEventTreeNode_ExecSubroutine : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_ExecSubroutine");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Exit
// 0x0000
class UEventTreeNode_Exit : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Exit");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_SequenceOption
// 0x0000
class UBranch_SequenceOption : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_SequenceOption");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_LevelSequence
// 0x0000
class UEventTreeNode_LevelSequence : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_LevelSequence");
		return ptr;
	}



	void OnSequenceTriggerForEventTree();
	void OnSequenceFinishedCallback();
};

// Class GunfireRuntime.EventTreeNode_Link
// 0x0000
class UEventTreeNode_Link : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Link");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_ActivateObjective
// 0x0000
class UEventTreeNode_ActivateObjective : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_ActivateObjective");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_CompleteObjective
// 0x0000
class UEventTreeNode_CompleteObjective : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_CompleteObjective");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_CompleteQuest
// 0x0000
class UEventTreeNode_CompleteQuest : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_CompleteQuest");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_ProximityTrigger
// 0x0000
class UEventTreeNode_ProximityTrigger : public UEventTreeNode_List
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_ProximityTrigger");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_ItemTrigger
// 0x0000
class UEventTreeNode_ItemTrigger : public UEventTreeNode_List
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_ItemTrigger");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_QuestSwitch
// 0x0000
class UBranch_QuestSwitch : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_QuestSwitch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_QuestSwitch
// 0x0000
class UEventTreeNode_QuestSwitch : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_QuestSwitch");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_Random
// 0x0000
class UBranch_Random : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_Random");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_RandomBranch
// 0x0000
class UEventTreeNode_RandomBranch : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_RandomBranch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_SetCooldown
// 0x0000
class UEventTreeNode_SetCooldown : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_SetCooldown");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_SetKey
// 0x0000
class UEventTreeNode_SetKey : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_SetKey");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_RemoveKey
// 0x0000
class UEventTreeNode_RemoveKey : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_RemoveKey");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_SetMultipleSpeakers
// 0x0000
class UEventTreeNode_SetMultipleSpeakers : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_SetMultipleSpeakers");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_SetVariable
// 0x0000
class UEventTreeNode_SetVariable : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_SetVariable");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Stage
// 0x0000
class UEventTreeNode_Stage : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Stage");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_Subroutine
// 0x0000
class UBranch_Subroutine : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_Subroutine");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Subroutines
// 0x0000
class UEventTreeNode_Subroutines : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Subroutines");
		return ptr;
	}



};

// Class GunfireRuntime.Branch_Switch
// 0x0000
class UBranch_Switch : public UBranch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Branch_Switch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Switch
// 0x0000
class UEventTreeNode_Switch : public UEventTreeNode_Branch
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Switch");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_TreeLink
// 0x0000
class UEventTreeNode_TreeLink : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_TreeLink");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_Trigger
// 0x0000
class UEventTreeNode_Trigger : public UEventTreeNode_List
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_Trigger");
		return ptr;
	}



};

// Class GunfireRuntime.EventTreeNode_ExecTrigger
// 0x0000
class UEventTreeNode_ExecTrigger : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_ExecTrigger");
		return ptr;
	}



};

// Class GunfireRuntime.ExperienceReward
// 0x0000
class UExperienceReward : public UChallengeReward
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ExperienceReward");
		return ptr;
	}



};

// Class GunfireRuntime.FaceCameraComponent
// 0x0000
class UFaceCameraComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FaceCameraComponent");
		return ptr;
	}



};

// Class GunfireRuntime.FacingOverrideDecorator
// 0x0000
class UFacingOverrideDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FacingOverrideDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.Faction
// 0x0000
class UFaction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Faction");
		return ptr;
	}



	void GetAffiliationForActors();
	void GetAffiliation();
};

// Class GunfireRuntime.FactionSettings
// 0x0000
class UFactionSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FactionSettings");
		return ptr;
	}



};

// Class GunfireRuntime.FactionManager
// 0x0000
class UFactionManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FactionManager");
		return ptr;
	}



	void GetFactionManager();
};

// Class GunfireRuntime.FactionComponent
// 0x0000
class UFactionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FactionComponent");
		return ptr;
	}



	void TakeDamage();
	void SetFactionOverride();
	void SetFaction();
	void GetFactionOverride();
	void GetFaction();
	void GetAffiliation();
};

// Class GunfireRuntime.FallCondition
// 0x0000
class UFallCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FallCondition");
		return ptr;
	}



};

// Class GunfireRuntime.FallDamageComponent
// 0x0000
class UFallDamageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FallDamageComponent");
		return ptr;
	}



	void TriggerFallDeath();
	void SetEnabled();
	void IsEnabled();
	void DisableUntilGrounded();
};

// Class GunfireRuntime.FallDamageDecorator
// 0x0000
class UFallDamageDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FallDamageDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.FixedCameraState
// 0x0000
class UFixedCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FixedCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.FlinchCondition
// 0x0000
class UFlinchCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FlinchCondition");
		return ptr;
	}



};

// Class GunfireRuntime.FlyCameraController
// 0x0000
class AFlyCameraController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FlyCameraController");
		return ptr;
	}



};

// Class GunfireRuntime.FocusableCanvasPanel
// 0x0000
class UFocusableCanvasPanel : public UCanvasPanel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusableCanvasPanel");
		return ptr;
	}



};

// Class GunfireRuntime.FocusButtonSlot
// 0x0000
class UFocusButtonSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class GunfireRuntime.FocusButtonWidget
// 0x0000
class UFocusButtonWidget : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusButtonWidget");
		return ptr;
	}



	void SetTexture();
	void SetMaterial();
	void SetIsFocusable();
	void SetForceFocusVisualState();
	void SetColorAndOpacity();
	void SetBackgroundColor();
	void SetAllowMouseClick();
	void IsPressed();
	void HasInactiveFocus();
	void HasFocus();
	void GetAbsoluteCoords();
};

// Class GunfireRuntime.FocusCameraSettings
// 0x0000
class UFocusCameraSettings : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusCameraSettings");
		return ptr;
	}



};

// Class GunfireRuntime.FocusCameraState
// 0x0000
class UFocusCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.FocusGroup
// 0x0000
class UFocusGroup : public UCanvasPanel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusGroup");
		return ptr;
	}



	void ShowInactiveFocus();
	void Focus();
};

// Class GunfireRuntime.FocusManInputHandler
// 0x0000
class UFocusManInputHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusManInputHandler");
		return ptr;
	}



};

// Class GunfireRuntime.FocusManInputAxisHandler
// 0x0000
class UFocusManInputAxisHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusManInputAxisHandler");
		return ptr;
	}



};

// Class GunfireRuntime.FocusManager
// 0x0000
class UFocusManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusManager");
		return ptr;
	}



	void RestorePanelFocus();
	void RestoreFocus();
	void ReleaseFocus();
	void GetWidgetByName();
	void GetRoot();
	void GetParent();
	void GetInstance();
	void FocusFirstAvailable();
	void FindWidgetByName();
	void EnableInput();
	void DisableInput();
	void AttemptSetButtonFocus();
};

// Class GunfireRuntime.FocusVisual
// 0x0000
class UFocusVisual : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusVisual");
		return ptr;
	}



	void SetTexture();
	void SetColorAndOpacity();
	void SetBackgroundColor();
};

// Class GunfireRuntime.FocusWidget
// 0x0000
class UFocusWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FocusWidget");
		return ptr;
	}



	void SetInactiveFocus();
	void Remove();
	void Focus();
	void ClearFocus();
};

// Class GunfireRuntime.FxActorDestroyerComponent
// 0x0000
class UFxActorDestroyerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FxActorDestroyerComponent");
		return ptr;
	}



	void SoftDestroyOwner();
	void SoftDestroyActor();
	void IsSoftDestroying();
};

// Class GunfireRuntime.GameRules
// 0x0000
class AGameRules : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameRules");
		return ptr;
	}



	void GetWeaponDamage();
	void GetDamageInfo();
};

// Class GunfireRuntime.UserSetting
// 0x0000
class UUserSetting : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UserSetting");
		return ptr;
	}



	void ResetToDefault();
	void GetDisplayValue();
	void Apply();
};

// Class GunfireRuntime.GameUserSettingsList
// 0x0000
class UGameUserSettingsList : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameUserSettingsList");
		return ptr;
	}



};

// Class GunfireRuntime.GameUserSettingsGunfire
// 0x0000
class UGameUserSettingsGunfire : public UGameUserSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameUserSettingsGunfire");
		return ptr;
	}



	void OnSetUserSettingInt();
	void OnSetUserSettingFloat();
	void GetSettingsForCategory();
	void GetInputConflicts();
	void FindUserSetting();
	void AllowsInputRebindings();
};

// Class GunfireRuntime.BinaryUserSetting
// 0x0000
class UBinaryUserSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BinaryUserSetting");
		return ptr;
	}



	void SetValue();
	void GetValue();
};

// Class GunfireRuntime.IntUserSetting
// 0x0000
class UIntUserSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.IntUserSetting");
		return ptr;
	}



	void SetValue();
	void GetValue();
};

// Class GunfireRuntime.FloatUserSetting
// 0x0000
class UFloatUserSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.FloatUserSetting");
		return ptr;
	}



	void SetValue();
	void IncrementValue();
	void GetValue();
	void GetNormalizedValue();
	void GetMinValue();
	void GetMaxValue();
	void GetIncrement();
	void DecrementValue();
};

// Class GunfireRuntime.EnumUserSetting
// 0x0000
class UEnumUserSetting : public UIntUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EnumUserSetting");
		return ptr;
	}



	void SetValueEnum();
	void GetValueEnum();
	void GetNumEntries();
	void GetNextEntry();
	void GetEnumEntryByValue();
	void GetEnumEntryByIndex();
	void EnableValue();
	void DisableValue();
};

// Class GunfireRuntime.AudioUserSetting
// 0x0000
class UAudioUserSetting : public UFloatUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioUserSetting");
		return ptr;
	}



	void SetSoundClassMultiplier();
	void GetSoundClassMultiplier();
};

// Class GunfireRuntime.ResolutionUserSetting
// 0x0000
class UResolutionUserSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ResolutionUserSetting");
		return ptr;
	}



	void SetValue();
	void ResetList();
	void GetValue();
	void GetNextResolution();
};

// Class GunfireRuntime.RebindableInputSetting
// 0x0000
class URebindableInputSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RebindableInputSetting");
		return ptr;
	}



	void SetValue();
	void HasConflictGroup();
	void GetValue();
};

// Class GunfireRuntime.InputAxisPropertiesSetting
// 0x0000
class UInputAxisPropertiesSetting : public UFloatUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InputAxisPropertiesSetting");
		return ptr;
	}



};

// Class GunfireRuntime.ColorblindUserSetting
// 0x0000
class UColorblindUserSetting : public UIntUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ColorblindUserSetting");
		return ptr;
	}



	void GetValueEnumCVD();
	void GetNumEntries();
	void GetNextEntry();
	void GetEnumCVDEntryByIndex();
};

// Class GunfireRuntime.ToggleUserSetting
// 0x0000
class UToggleUserSetting : public UUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ToggleUserSetting");
		return ptr;
	}



	void SetValue();
	void GetValue();
};

// Class GunfireRuntime.VoiceInputDeviceSetting
// 0x0000
class UVoiceInputDeviceSetting : public UEnumUserSetting
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VoiceInputDeviceSetting");
		return ptr;
	}



};

// Class GunfireRuntime.GameUtil
// 0x0000
class UGameUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameUtil");
		return ptr;
	}



	void UE4ToAutodeskRotation();
	void TransferPoseToSkeletalMesh();
	void TransferPoseToPoseableMesh();
	void TestLineOfSightFromLocation();
	void TestLineOfSight();
	void SweepCharacter();
	void StuckCheckForClass();
	void StuckCheck();
	void StreamInTextures();
	void StopForceFeedback();
	void StopCameraShake();
	void SpawnAIEx();
	void SpawnAdvancedDecalAttached();
	void SpawnAdvancedDecalAtLocation();
	void SpawnActorEx();
	void SortObjectArray();
	void SortIntArray();
	void SortFloatArray();
	void SortActorArrayByDistance();
	void SnapToNavMesh();
	void SnapToGround();
	void SnapCharacterToGround();
	void ShowRandomMesh();
	void ShowComponents();
	void ShouldAsyncLoad();
	void SetVisible();
	void SetVisibilityFlag();
	void SetTickableWhenPaused();
	void SetRenderCustomDepthForActor();
	void SetMaterialVectorParam();
	void SetMaterialScalarParam();
	void SetComponentMaterialVectorParamForAll();
	void SetComponentMaterialVectorParam();
	void SetComponentMaterialScalarParamForAll();
	void SetComponentMaterialScalarParam();
	void SetAllMaterialsTo();
	void SetActorsVisible();
	void SetActive();
	void ResetCachedMaterials();
	void ResetActorDynamics();
	void RemoveTag();
	void RemoveLevelInstanceByName();
	void RemoveLevelInstance();
	void PlayForceFeedback();
	void PlayCameraShake();
	void LoadSoftReference();
	void LoadSoftClassReference();
	void LoadObjectFromPath();
	void LoadFileToString();
	void LineTraceByChannelWithContext();
	void LatentDestroyActor();
	void IsVisible();
	void IsUsingTouchController();
	void IsUsingKeyboardAndMouse();
	void IsUsingGamepad();
	void IsSwimmingUnderwater();
	void IsSwimmingOnSurface();
	void IsSwimming();
	void IsStereoEnabled();
	void IsSoftDestroyed();
	void IsSingleplayerGame();
	void IsShippingBuild();
	void IsPlayingCinematic();
	void IsLocallyControlled();
	void IsInWater();
	void IsInEditor();
	void IsHMDWorn();
	void IsHDREnabled();
	void IsChildOfSoftClasses();
	void InvokeEvent();
	void HideVisibleComponents();
	void HasAnyRootMotion();
	void HasAnyRenderedSlaveMeshes();
	void GetWaterSubmergeDepth();
	void GetUniqueColor();
	void GetScriptStack();
	void GetPropertyValueAsFloat();
	void GetPrefix();
	void GetPlayerStates();
	void GetPlayerControllers();
	void GetPlayerControllerForActor();
	void GetPlatformSubType();
	void GetPlatform();
	void GetOwningCharacter();
	void GetOwner();
	void GetObjectPath();
	void GetNumConnectedPlayers();
	void GetNodeTransform();
	void GetLocalizationLanguage();
	void GetLevelScriptActor();
	void GetLevelPathName();
	void GetLevelInstance();
	void GetLevelForActor();
	void GetGameViewport();
	void GetFrameCounter();
	void GetCurrentPlatformVRam();
	void GetComponentByTag();
	void GetComponentByName();
	void GetClosestUnblockedPointBetweenActors();
	void GetClosestPointInActor();
	void GetCleanLevelStreamingName();
	void GetCleanLevelPackageName();
	void GetBuildType();
	void GetBuildNumber();
	void GetBoneTransform();
	void GetBoneRefTransform();
	void GetBestWaterBounds();
	void GetAttachSocketName();
	void GetActorsWithTagEx();
	void GetActorsInRangeEx();
	void GetActorsInRange();
	void GetActorBoundsSafe();
	void ForceGarbageCollection();
	void FinishSpawningDeferredActor();
	void FindTeleportPositionNear();
	void FindPlayerStart();
	void EnableStereo();
	void DrawDebugArrow();
	void DoesPathIntersectWithBounds();
	void DoesGameHaveFocus();
	void DebugDrawShapeWithOrientation();
	void DebugDrawShape();
	void DebugDrawCollision();
	void CustomError();
	void CheckInputAction();
	void CenterViewportCursor();
	void CalculateTraversableTeleportLocation();
	void ApplyLinearImpulseToActorAtLocation();
	void ApplyLinearImpulseToActor();
	void AGPlatformOverride();
	void AddTag();
	void AddLevelInstance();
	void AddComponent();
	void ActivateSceneComponents();
	void ActivateSceneComponent();
};

// Class GunfireRuntime.GameViewportClientGunfire
// 0x0000
class UGameViewportClientGunfire : public UGameViewportClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GameViewportClientGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.GlobalObjectPool
// 0x0000
class UGlobalObjectPool : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GlobalObjectPool");
		return ptr;
	}



	void GetInstance();
	void Empty();
};

// Class GunfireRuntime.GroupCondition
// 0x0000
class UGroupCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GroupCondition");
		return ptr;
	}



};

// Class GunfireRuntime.GunfireSettings
// 0x0000
class UGunfireSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GunfireSettings");
		return ptr;
	}



};

// Class GunfireRuntime.HasInteractiveCondition
// 0x0000
class UHasInteractiveCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasInteractiveCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HasItemByTypeCondition
// 0x0000
class UHasItemByTypeCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasItemByTypeCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HasItemCondition
// 0x0000
class UHasItemCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasItemCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HasPendingInterruptCondition
// 0x0000
class UHasPendingInterruptCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasPendingInterruptCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HasTargetCondition
// 0x0000
class UHasTargetCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasTargetCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HasTraitCondition
// 0x0000
class UHasTraitCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HasTraitCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HealthCondition
// 0x0000
class UHealthCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HealthCondition");
		return ptr;
	}



};

// Class GunfireRuntime.HeuristicBoundsComponent
// 0x0000
class UHeuristicBoundsComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HeuristicBoundsComponent");
		return ptr;
	}



	void SetOuterExtent();
	void GetWorldTransformForPanelAtSetDistance();
	void GetWorldTransformForPanel();
	void GetBoundsBracketOnPlane();
};

// Class GunfireRuntime.HierarchicalEditInterface
// 0x0000
class UHierarchicalEditInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HierarchicalEditInterface");
		return ptr;
	}



};

// Class GunfireRuntime.HitLogComponent
// 0x0000
class UHitLogComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HitLogComponent");
		return ptr;
	}



	void ResetAllHitLocationHealth();
	void OnRep_LastHitLocation();
	void OnRep_DestroyedFlags();
	void GetLastHitInfo();
	void GetLastDamageInfo();
	void GetImpactDamageForHitLocation();
	void GetDamageForHitLocation();
	void GetDamage();
	void ClearHitLog();
};

// Class GunfireRuntime.HitPauseInterface
// 0x0000
class UHitPauseInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HitPauseInterface");
		return ptr;
	}



};

// Class GunfireRuntime.HitPauseUtil
// 0x0000
class UHitPauseUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HitPauseUtil");
		return ptr;
	}



	void ApplyHitPause();
	void AllowsHitPause();
};

// Class GunfireRuntime.HitReactionState
// 0x0000
class UHitReactionState : public UAnimActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.HitReactionState");
		return ptr;
	}



};

// Class GunfireRuntime.IdleTimerComponent
// 0x0000
class UIdleTimerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.IdleTimerComponent");
		return ptr;
	}



	void Ping();
};

// Class GunfireRuntime.ImageEntry
// 0x0000
class UImageEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImageEntry");
		return ptr;
	}



};

// Class GunfireRuntime.ImageID
// 0x0000
class UImageID : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImageID");
		return ptr;
	}



};

// Class GunfireRuntime.ImageSet
// 0x0000
class UImageSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImageSet");
		return ptr;
	}



};

// Class GunfireRuntime.ImageSetSettings
// 0x0000
class UImageSetSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImageSetSettings");
		return ptr;
	}



};

// Class GunfireRuntime.ImpactEffect
// 0x0000
class AImpactEffect : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImpactEffect");
		return ptr;
	}



};

// Class GunfireRuntime.Tracer
// 0x0000
class ATracer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Tracer");
		return ptr;
	}



};

// Class GunfireRuntime.InInteractiveCondition
// 0x0000
class UInInteractiveCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InInteractiveCondition");
		return ptr;
	}



};

// Class GunfireRuntime.InPhysicsBoundsCondition
// 0x0000
class UInPhysicsBoundsCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InPhysicsBoundsCondition");
		return ptr;
	}



};

// Class GunfireRuntime.InputDeviceManager
// 0x0000
class UInputDeviceManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InputDeviceManager");
		return ptr;
	}



	void ResetKeyboardIconCache();
	void OnImageSetLoaded();
	void IsUsingAltImageSet();
	void GetInstance();
	void GetImage();
	void GetCurrentDeviceInUse();
};

// Class GunfireRuntime.InputHandler
// 0x0000
class UInputHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InputHandler");
		return ptr;
	}



};

// Class GunfireRuntime.InputRebindings
// 0x0000
class UInputRebindings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InputRebindings");
		return ptr;
	}



	void ResetInputRebindings();
	void RemoveAxisRebinding();
	void RemoveActionRebinding();
	void AddAxisRebinding();
	void AddActionRebinding();
};

// Class GunfireRuntime.InputStateComponent
// 0x0000
class UInputStateComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InputStateComponent");
		return ptr;
	}



	void SetWalking();
	void SetInputEnabled();
	void SetButtonStateByName();
	void ResetButton();
	void RemoveButtonListener();
	void OnSwitchCamera();
	void IsInputEnabled();
	void IsActionPressed();
	void HasVerticalMoveInput();
	void HasMoveInput();
	void HasHorizontalMoveInput();
	void GetScreenRelativeMoveInput();
	void GetRelativeMoveInput();
	void GetMoveInput();
	void GetIsWalking();
	void GetCameraRotation();
	void GetCameraRelativeMoveInput();
	void GetButtonStateByName();
	void AddButtonListener();
};

// Class GunfireRuntime.InspectableComponent
// 0x0000
class UInspectableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InspectableComponent");
		return ptr;
	}



	void StartInspect();
	void OnRep_IsOccupied();
	void OnRep_IsActivePlayer();
	void IsOccupied();
	void IsInTransition();
	void IsInteractingActorLocal();
	void IsInteracting();
	void GetActivePlayerController();
	void EndInspect();
};

// Class GunfireRuntime.InspectableCondition
// 0x0000
class UInspectableCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InspectableCondition");
		return ptr;
	}



};

// Class GunfireRuntime.Stats
// 0x0000
class UStats : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Stats");
		return ptr;
	}



};

// Class GunfireRuntime.InspectUtil
// 0x0000
class UInspectUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InspectUtil");
		return ptr;
	}



	void SetInspectStat();
	void GetInspectStat();
	void ClearStats();
};

// Class GunfireRuntime.InteractiveState
// 0x0000
class UInteractiveState : public UActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InteractiveState");
		return ptr;
	}



};

// Class GunfireRuntime.InteractiveResult
// 0x0000
class UInteractiveResult : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InteractiveResult");
		return ptr;
	}



};

// Class GunfireRuntime.InteractiveStateTransition
// 0x0000
class UInteractiveStateTransition : public UActorStateTransition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InteractiveStateTransition");
		return ptr;
	}



};

// Class GunfireRuntime.InterpolatedSoundMix
// 0x0000
class UInterpolatedSoundMix : public USoundMix
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InterpolatedSoundMix");
		return ptr;
	}



	void SetInterpolatePos();
};

// Class GunfireRuntime.InViewCondition
// 0x0000
class UInViewCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InViewCondition");
		return ptr;
	}



};

// Class GunfireRuntime.ItemGenerator
// 0x0000
class UItemGenerator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemGenerator");
		return ptr;
	}



	void GenerateItems();
};

// Class GunfireRuntime.ItemGeneratorItem
// 0x0000
class UItemGeneratorItem : public UItemGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemGeneratorItem");
		return ptr;
	}



};

// Class GunfireRuntime.ItemGeneratorLink
// 0x0000
class UItemGeneratorLink : public UItemGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemGeneratorLink");
		return ptr;
	}



};

// Class GunfireRuntime.ItemGeneratorTable
// 0x0000
class UItemGeneratorTable : public UItemGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemGeneratorTable");
		return ptr;
	}



};

// Class GunfireRuntime.ItemManager
// 0x0000
class UItemManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemManager");
		return ptr;
	}



	void GetItemsInRangeByType();
	void GetInstance();
};

// Class GunfireRuntime.ItemSocketComponent
// 0x0000
class UItemSocketComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemSocketComponent");
		return ptr;
	}



	void RequestReturnItemToInventory();
	void RequestAddItemFromInventoryById();
	void RequestAddItemFromInventoryByClass();
	void RequestAddItemFromInventory();
	void RemoveItem();
	void IsValid();
	void IsFull();
	void IsEmpty();
	void HasInteractableSlot();
	void ForceFill();
	void CanAddItemOfClass();
	void AddItem();
};

// Class GunfireRuntime.ItemUtil
// 0x0000
class UItemUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ItemUtil");
		return ptr;
	}



	void ValidateDropPosition();
	void SpawnItem();
	void PreSpawnDroppedItem();
	void PostSpawnDroppedItem();
	void GetInspectInfoFromInventory();
	void GetInspectInfo();
	void DropLoot();
	void DropItem();
};

// Class GunfireRuntime.KeyCondition
// 0x0000
class UKeyCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.KeyCondition");
		return ptr;
	}



};

// Class GunfireRuntime.LadderParams
// 0x0000
class ULadderParams : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LadderParams");
		return ptr;
	}



};

// Class GunfireRuntime.TraversalCondition
// 0x0000
class UTraversalCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraversalCondition");
		return ptr;
	}



};

// Class GunfireRuntime.LadderCondition
// 0x0000
class ULadderCondition : public UTraversalCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LadderCondition");
		return ptr;
	}



};

// Class GunfireRuntime.TraversalState
// 0x0000
class UTraversalState : public UAnimActorState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraversalState");
		return ptr;
	}



};

// Class GunfireRuntime.LadderState
// 0x0000
class ULadderState : public UTraversalState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LadderState");
		return ptr;
	}



};

// Class GunfireRuntime.LastAttackCondition
// 0x0000
class ULastAttackCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LastAttackCondition");
		return ptr;
	}



};

// Class GunfireRuntime.LastHitCondition
// 0x0000
class ULastHitCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LastHitCondition");
		return ptr;
	}



};

// Class GunfireRuntime.LedgeGrabCondition
// 0x0000
class ULedgeGrabCondition : public UTraversalCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LedgeGrabCondition");
		return ptr;
	}



};

// Class GunfireRuntime.LedgeGrabState
// 0x0000
class ULedgeGrabState : public UTraversalState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LedgeGrabState");
		return ptr;
	}



};

// Class GunfireRuntime.LevelInstance
// 0x0000
class ULevelInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LevelInstance");
		return ptr;
	}



	void OnLevelUnloaded();
	void OnLevelShown();
	void OnLevelLoaded();
	void OnLevelHidden();
	void OnChildUnloaded();
	void OnChildShown();
	void OnChildLoaded();
	void OnChildHidden();
};

// Class GunfireRuntime.LevelLoadingManager
// 0x0000
class ULevelLoadingManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LevelLoadingManager");
		return ptr;
	}



	void OnRep_LevelInstanceInfo();
	void OnLevelUnloaded();
	void OnLevelShown();
	void OnLevelLoaded();
	void OnLevelHidden();
};

// Class GunfireRuntime.PlayableLevel
// 0x0000
class APlayableLevel : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayableLevel");
		return ptr;
	}



	void ChangeLevelState();
};

// Class GunfireRuntime.PlayableLevelCollection
// 0x0000
class APlayableLevelCollection : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayableLevelCollection");
		return ptr;
	}



	void IsPreloaded();
	void GetPlayableLevelByPath();
	void GetPlayableLevelByName();
	void ChangeCollectionState();
	void AddPlayableLevel();
};

// Class GunfireRuntime.LODVolumeFilter
// 0x0000
class ULODVolumeFilter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LODVolumeFilter");
		return ptr;
	}



};

// Class GunfireRuntime.LODVolume
// 0x0000
class ALODVolume : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LODVolume");
		return ptr;
	}



	void SetLODVisibility();
};

// Class GunfireRuntime.LODVolumeManager
// 0x0000
class ULODVolumeManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.LODVolumeManager");
		return ptr;
	}



	void UpdateVolumesVisibility();
	void UnregisterVolume();
	void RegisterVolume();
	void OnFinishCooldown();
	void GetPlayerRangeToVolume();
	void GetInstance();
};

// Class GunfireRuntime.RandomTileActorInterface
// 0x0000
class URandomTileActorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RandomTileActorInterface");
		return ptr;
	}



	void SetRandomSeed();
};

// Class GunfireRuntime.MapGenSettings
// 0x0000
class AMapGenSettings : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapGenSettings");
		return ptr;
	}



};

// Class GunfireRuntime.MapGenGizmo
// 0x0000
class UMapGenGizmo : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapGenGizmo");
		return ptr;
	}



};

// Class GunfireRuntime.MapTileTemplateEdge
// 0x0000
class UMapTileTemplateEdge : public UMapGenGizmo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapTileTemplateEdge");
		return ptr;
	}



};

// Class GunfireRuntime.MapTileTemplate
// 0x0000
class AMapTileTemplate : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapTileTemplate");
		return ptr;
	}



};

// Class GunfireRuntime.MapRegionTemplate
// 0x0000
class AMapRegionTemplate : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapRegionTemplate");
		return ptr;
	}



};

// Class GunfireRuntime.MapTileEdge
// 0x0000
class AMapTileEdge : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapTileEdge");
		return ptr;
	}



};

// Class GunfireRuntime.MapTileInfo
// 0x0000
class AMapTileInfo : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapTileInfo");
		return ptr;
	}



};

// Class GunfireRuntime.MapTileNav
// 0x0000
class AMapTileNav : public ANavMeshBoundsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapTileNav");
		return ptr;
	}



};

// Class GunfireRuntime.PlayableMap
// 0x0000
class UPlayableMap : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayableMap");
		return ptr;
	}



};

// Class GunfireRuntime.MapLoader
// 0x0000
class UMapLoader : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MapLoader");
		return ptr;
	}



	void TravelToTransitionMap();
	void TravelToNextMap();
	void OpenMapByName();
	void OpenMap();
	void OnPlayerEnterTransitionMap();
	void OnPlayerEnterNextMapDelayed();
	void OnNextMapVisible();
	void OnFadeScreenCompleted();
	void LoadNotStreamableLevels();
	void GetNotStreamableMapSuffix();
	void GetMapLoader();
};

// Class GunfireRuntime.MathUtil
// 0x0000
class UMathUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MathUtil");
		return ptr;
	}



	void StableRandomInteger();
	void SphereTriangleOverlap();
	void SphereCapsuleIntersect();
	void SmoothCDFloat();
	void SegmentCapsuleIntersect();
	void ScaleValueByLevel();
	void RayIntersectsSphere();
	void NormalizeToRangeAndClamp();
	void IsPointInBounds();
	void IsInsideBox();
	void GetRandomPointInsideSphere();
	void GetRandomPointInsideHollowSphere();
	void GetRandomPointInsideCircle();
	void GetPointAlongCircle();
	void GetHeading();
	void GetDistanceScalar();
	void GetDirectionVector();
	void GetCameraRelativeBasis();
	void GetAngleDiff();
	void GetAngleBetween();
	void FindClosestPointOnSpline();
	void FindBestFitPlane();
	void ApplyMod();
};

// Class GunfireRuntime.MeshOutlinerComponent
// 0x0000
class UMeshOutlinerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MeshOutlinerComponent");
		return ptr;
	}



	void SetOwnerOutlined();
	void IsCurrentlyOutlined();
};

// Class GunfireRuntime.MiniMapActor
// 0x0000
class AMiniMapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapActor");
		return ptr;
	}



	void UpdateLevelVisibility();
	void SetShown();
	void Select();
	void OnShown();
	void OnSelected();
	void OnMiniMapSet();
	void OnHidden();
	void OnDeSelected();
	void IsSelected();
	void GetRefActor();
	void GetMiniMapRefActor();
	void GetMiniMap();
	void GetIsActorVisibleOnMiniMap();
	void GetContext();
	void DeSelect();
	void DebugSetContext();
	void Center();
	void CanSelect();
};

// Class GunfireRuntime.MiniMapComponent
// 0x0000
class UMiniMapComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapComponent");
		return ptr;
	}



	void UpdateMiniMapLevel();
	void TryAutoAddToMiniMap();
	void SetMiniMapLevel();
	void RemoveFromMiniMap();
	void OnDead();
	void IsAddedToMiniMap();
	void AutoAddToMiniMap();
	void AddToMiniMap();
};

// Class GunfireRuntime.MiniMapImage
// 0x0000
class UMiniMapImage : public UImage
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapImage");
		return ptr;
	}



};

// Class GunfireRuntime.MiniMapLookupActor
// 0x0000
class AMiniMapLookupActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapLookupActor");
		return ptr;
	}



};

// Class GunfireRuntime.MiniMapManager
// 0x0000
class UMiniMapManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapManager");
		return ptr;
	}



};

// Class GunfireRuntime.MiniMapPanel
// 0x0000
class UMiniMapPanel : public UCanvasPanel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapPanel");
		return ptr;
	}



};

// Class GunfireRuntime.MiniMapPanelSlot
// 0x0000
class UMiniMapPanelSlot : public UCanvasPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MiniMapPanelSlot");
		return ptr;
	}



};

// Class GunfireRuntime.MoveDetachedCameraState
// 0x0000
class UMoveDetachedCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MoveDetachedCameraState");
		return ptr;
	}



	void Snap();
	void Rotate();
};

// Class GunfireRuntime.MoveInputCondition
// 0x0000
class UMoveInputCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MoveInputCondition");
		return ptr;
	}



};

// Class GunfireRuntime.MovementTypeDecorator
// 0x0000
class UMovementTypeDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovementTypeDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneDialogSection
// 0x0000
class UMovieSceneDialogSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneDialogSection");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneDialogTrack
// 0x0000
class UMovieSceneDialogTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneDialogTrack");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneEventTreeSection
// 0x0000
class UMovieSceneEventTreeSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneEventTreeSection");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneEventTreeTrack
// 0x0000
class UMovieSceneEventTreeTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneEventTreeTrack");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneSoundSetSection
// 0x0000
class UMovieSceneSoundSetSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneSoundSetSection");
		return ptr;
	}



};

// Class GunfireRuntime.MovieSceneSoundSetTrack
// 0x0000
class UMovieSceneSoundSetTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MovieSceneSoundSetTrack");
		return ptr;
	}



};

// Class GunfireRuntime.MusicDirector
// 0x0000
class UMusicDirector : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MusicDirector");
		return ptr;
	}



	void OnRep_MusicIntensity();
};

// Class GunfireRuntime.MusicSet
// 0x0000
class UMusicSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MusicSet");
		return ptr;
	}



};

// Class GunfireRuntime.MusicManager
// 0x0000
class UMusicManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MusicManager");
		return ptr;
	}



	void SetMusicState();
	void IsMusicSetActive();
	void GetMusicManager();
	void DeactivateMusicSet();
	void ActivateMusicSet();
};

// Class GunfireRuntime.NamedActorComponent
// 0x0000
class UNamedActorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NamedActorComponent");
		return ptr;
	}



	void SetNameID();
};

// Class GunfireRuntime.NamedActorManager
// 0x0000
class UNamedActorManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NamedActorManager");
		return ptr;
	}



	void RemoveActor();
	void GetInstance();
	void FindActorsByTags();
	void FindActorByName();
	void AddActor();
};

// Class GunfireRuntime.NavigationSystemGunfire
// 0x0000
class UNavigationSystemGunfire : public UNavigationSystemV1
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NavigationSystemGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.NavLinkGunfireComponent
// 0x0000
class UNavLinkGunfireComponent : public UNavLinkCustomComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NavLinkGunfireComponent");
		return ptr;
	}



	void SetLinkEnabledArea();
	void SetLinkEnabled();
	void SetLinkDisableArea();
	void IsLinkEnabled();
	void GetLinkEnabledArea();
	void GetLinkDisabledArea();
};

// Class GunfireRuntime.NavMeshTestCondition
// 0x0000
class UNavMeshTestCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NavMeshTestCondition");
		return ptr;
	}



};

// Class GunfireRuntime.NavModifierGunfireComponent
// 0x0000
class UNavModifierGunfireComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NavModifierGunfireComponent");
		return ptr;
	}



	void SetState();
};

// Class GunfireRuntime.NPCHeadTrackingComponent
// 0x0000
class UNPCHeadTrackingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.NPCHeadTrackingComponent");
		return ptr;
	}



	void SetTrackingMode();
	void ResetLookTargets();
	void ResetLookRotation();
	void RemoveLookTarget();
	void RemoveActorLookTarget();
	void AddLookTarget();
	void AddActorLookTarget();
};

// Class GunfireRuntime.GroundCheckParams
// 0x0000
class UGroundCheckParams : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GroundCheckParams");
		return ptr;
	}



};

// Class GunfireRuntime.GroundCheckParams_Default
// 0x0000
class UGroundCheckParams_Default : public UGroundCheckParams
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GroundCheckParams_Default");
		return ptr;
	}



};

// Class GunfireRuntime.OnGroundCondition
// 0x0000
class UOnGroundCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.OnGroundCondition");
		return ptr;
	}



};

// Class GunfireRuntime.PathFollowingComponentGunfire
// 0x0000
class UPathFollowingComponentGunfire : public UPathFollowingComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PathFollowingComponentGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.PathSharingManager
// 0x0000
class UPathSharingManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PathSharingManager");
		return ptr;
	}



};

// Class GunfireRuntime.PathSharingFilter
// 0x0000
class UPathSharingFilter : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PathSharingFilter");
		return ptr;
	}



};

// Class GunfireRuntime.PathSharingFilter_Default
// 0x0000
class UPathSharingFilter_Default : public UPathSharingFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PathSharingFilter_Default");
		return ptr;
	}



};

// Class GunfireRuntime.PersistenceKeysComponent
// 0x0000
class UPersistenceKeysComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PersistenceKeysComponent");
		return ptr;
	}



	void SetKey();
	void RemoveKey();
	void HasKey();
	void GetKeyValue();
	void AddKey();
};

// Class GunfireRuntime.PhysCastCondition
// 0x0000
class UPhysCastCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysCastCondition");
		return ptr;
	}



};

// Class GunfireRuntime.PhysicsSoundInstance
// 0x0000
class UPhysicsSoundInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsSoundInstance");
		return ptr;
	}



	void OnImpactTimerExpired();
	void AudioComponentFinished();
};

// Class GunfireRuntime.PhysicsActorGunfire
// 0x0000
class APhysicsActorGunfire : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsActorGunfire");
		return ptr;
	}



	void SoundInstanceFinished();
	void OnHitCallback();
};

// Class GunfireRuntime.PhysicsBounds
// 0x0000
class APhysicsBounds : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsBounds");
		return ptr;
	}



	void OnEndAffectCharacter();
	void OnBeginAffectCharacter();
	void GetForceToApplyScale();
};

// Class GunfireRuntime.PhysicsBoundsType
// 0x0000
class UPhysicsBoundsType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsBoundsType");
		return ptr;
	}



};

// Class GunfireRuntime.PhysicsBoundsInterface
// 0x0000
class UPhysicsBoundsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsBoundsInterface");
		return ptr;
	}



	void IsWaterBounds();
	void GetWaterLine();
	void GetBoundsType();
	void GetBoundsPriority();
	void ConfirmOverlap();
};

// Class GunfireRuntime.PhysicsBoundsUtil
// 0x0000
class UPhysicsBoundsUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsBoundsUtil");
		return ptr;
	}



	void IsWaterBounds();
	void GetWaterSurfaceType();
	void GetWaterLine();
	void GetBoundsType();
};

// Class GunfireRuntime.PhysicsUtil
// 0x0000
class UPhysicsUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PhysicsUtil");
		return ptr;
	}



	void RestoreRigidBodies();
	void ResetOverlaps();
	void GetPhysicsMaterial();
	void DisableRigidBodies();
};

// Class GunfireRuntime.PlacementHelperComponent
// 0x0000
class UPlacementHelperComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlacementHelperComponent");
		return ptr;
	}



	void OnPostEditMove();
};

// Class GunfireRuntime.PlatformCameraState
// 0x0000
class UPlatformCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlatformCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.PlayerCameraManagerGunfire
// 0x0000
class APlayerCameraManagerGunfire : public APlayerCameraManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayerCameraManagerGunfire");
		return ptr;
	}



	void SetFadeLock();
};

// Class GunfireRuntime.PlayStateComponent
// 0x0000
class UPlayStateComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateComponent");
		return ptr;
	}



	void IsLocallyControlled();
	void GetOwningPlayerController();
	void GetElapsedTransitionTime();
	void GetActiveEffect();
};

// Class GunfireRuntime.PlayStateUtils
// 0x0000
class UPlayStateUtils : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateUtils");
		return ptr;
	}



	void RequestPlayStates();
	void RequestPlayState();
	void IsTransitioningPlayStates();
	void GetRequestedPlayStateName();
	void GetCurrentPlayStateName();
	void GetActivePlayStateEffect();
	void ClearRequestedPlayStatesForAllReasons();
	void ClearRequestedPlayState();
};

// Class GunfireRuntime.PlayState
// 0x0000
class UPlayState : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayState");
		return ptr;
	}



};

// Class GunfireRuntime.PlayStateSet
// 0x0000
class UPlayStateSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateSet");
		return ptr;
	}



};

// Class GunfireRuntime.PlayStateEffect_ScreenFade
// 0x0000
class UPlayStateEffect_ScreenFade : public UPlayStateEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateEffect_ScreenFade");
		return ptr;
	}



	void IsHidingScreen();
};

// Class GunfireRuntime.PlayStateEffect_HideHUD
// 0x0000
class UPlayStateEffect_HideHUD : public UPlayStateEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateEffect_HideHUD");
		return ptr;
	}



};

// Class GunfireRuntime.PlayStateEffect_Input
// 0x0000
class UPlayStateEffect_Input : public UPlayStateEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PlayStateEffect_Input");
		return ptr;
	}



};

// Class GunfireRuntime.PooledItem
// 0x0000
class UPooledItem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PooledItem");
		return ptr;
	}



};

// Class GunfireRuntime.PooledActor
// 0x0000
class UPooledActor : public UPooledItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PooledActor");
		return ptr;
	}



};

// Class GunfireRuntime.PooledTracer
// 0x0000
class UPooledTracer : public UPooledActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PooledTracer");
		return ptr;
	}



};

// Class GunfireRuntime.PooledSceneComponent
// 0x0000
class UPooledSceneComponent : public UPooledItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PooledSceneComponent");
		return ptr;
	}



};

// Class GunfireRuntime.PooledParticleSystemComponent
// 0x0000
class UPooledParticleSystemComponent : public UPooledSceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PooledParticleSystemComponent");
		return ptr;
	}



};

// Class GunfireRuntime.PossessableComponent
// 0x0000
class UPossessableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PossessableComponent");
		return ptr;
	}



};

// Class GunfireRuntime.PostProcessSkylightComponent
// 0x0000
class UPostProcessSkylightComponent : public UPostProcessComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.PostProcessSkylightComponent");
		return ptr;
	}



	void GetCurrentSkylight();
};

// Class GunfireRuntime.ProceduralDamageableActor
// 0x0000
class AProceduralDamageableActor : public ADamageableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProceduralDamageableActor");
		return ptr;
	}



	void IsTriggerDamageType();
	void GetVertices();
	void GetTriangleIndices();
	void ApplyRadialVertexColor();
};

// Class GunfireRuntime.ProjectileBase
// 0x0000
class AProjectileBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProjectileBase");
		return ptr;
	}



	void ValidateHit();
	void SetMaxLifeTime();
	void OnStop();
	void OnProjectileStop();
	void OnProjectilePenetrate();
	void OnProjectileHit();
	void OnNotifyTakeDamage();
	void OnHit();
	void MulticastStop();
	void MulticastImpactEffect();
	void IsSprayHit();
	void IncrementNumPenetrations();
	void GetNumPenetrations();
};

// Class GunfireRuntime.ProjectileSphere
// 0x0000
class AProjectileSphere : public AProjectileBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProjectileSphere");
		return ptr;
	}



};

// Class GunfireRuntime.ProjectileBox
// 0x0000
class AProjectileBox : public AProjectileBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProjectileBox");
		return ptr;
	}



};

// Class GunfireRuntime.ProjectileMovementComponentGunfire
// 0x0000
class UProjectileMovementComponentGunfire : public UProjectileMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProjectileMovementComponentGunfire");
		return ptr;
	}



	void SimulateBounce();
	void SetPenetrate();
};

// Class GunfireRuntime.ProjectileVisualization
// 0x0000
class AProjectileVisualization : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ProjectileVisualization");
		return ptr;
	}



	void VisualizeProjectileFromClass();
	void VisualizeProjectile();
	void PreDraw();
	void PostDrawPath();
	void ClearProjectileVisualization();
};

// Class GunfireRuntime.QuestEntityComponent
// 0x0000
class UQuestEntityComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestEntityComponent");
		return ptr;
	}



};

// Class GunfireRuntime.QuestLocation
// 0x0000
class UQuestLocation : public UQuestComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestLocation");
		return ptr;
	}



};

// Class GunfireRuntime.QuestStateCondition
// 0x0000
class UQuestStateCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestStateCondition");
		return ptr;
	}



};

// Class GunfireRuntime.QuestObjective
// 0x0000
class UQuestObjective : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.QuestObjective");
		return ptr;
	}



	void SetTimer();
	void SetRefActor();
	void SetPinned();
	void SetCounter();
	void ResetObjective();
	void ResetCounter();
	void OnRep_ObjectiveData();
	void OnInitializeQuest();
	void IsObjectiveComplete();
	void IsObjectiveActive();
	void IncrementCounter();
	void GetNameID();
	void CompleteObjective();
	void ClearTimer();
	void ActivateObjective();
};

// Class GunfireRuntime.RangedWeaponInstanceData
// 0x0000
class URangedWeaponInstanceData : public UEquipmentInstanceData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RangedWeaponInstanceData");
		return ptr;
	}



};

// Class GunfireRuntime.ReloadCondition
// 0x0000
class UReloadCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReloadCondition");
		return ptr;
	}



};

// Class GunfireRuntime.RangedWeaponProfile
// 0x0000
class URangedWeaponProfile : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RangedWeaponProfile");
		return ptr;
	}



};

// Class GunfireRuntime.RangeToTargetCondition
// 0x0000
class URangeToTargetCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RangeToTargetCondition");
		return ptr;
	}



};

// Class GunfireRuntime.RayCastCondition
// 0x0000
class URayCastCondition : public UPhysCastCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RayCastCondition");
		return ptr;
	}



};

// Class GunfireRuntime.ReceptacleComponent
// 0x0000
class UReceptacleComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReceptacleComponent");
		return ptr;
	}



	void RequestReturnItemToInventory();
	void RequestAddItemFromInventoryById();
	void RequestAddItemFromInventoryByClass();
	void RequestAddItemFromInventory();
	void RemoveItem();
	void IsValid();
	void IsFull();
	void IsEmpty();
	void HasInteractableSlot();
	void GetSlots();
	void CanAddItemOfClass();
	void AddItem();
};

// Class GunfireRuntime.RegionNotifyInterface
// 0x0000
class URegionNotifyInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RegionNotifyInterface");
		return ptr;
	}



	void OnNotifyRegionEntered();
};

// Class GunfireRuntime.ReplicatedMovementComponent
// 0x0000
class UReplicatedMovementComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReplicatedMovementComponent");
		return ptr;
	}



	void ServerMoveUpdate();
	void OnRep_MovementInfo();
	void ClientAckMove();
};

// Class GunfireRuntime.ResourceDef
// 0x0000
class UResourceDef : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ResourceDef");
		return ptr;
	}



};

// Class GunfireRuntime.ResourceSpawnManager
// 0x0000
class UResourceSpawnManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ResourceSpawnManager");
		return ptr;
	}



	void OnUninitialize();
	void OnSpawnListLoaded();
	void OnSetTileActive();
	void OnGenerateResources();
};

// Class GunfireRuntime.ReticulePiece
// 0x0000
class UReticulePiece : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReticulePiece");
		return ptr;
	}



};

// Class GunfireRuntime.Reticule
// 0x0000
class UReticule : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Reticule");
		return ptr;
	}



};

// Class GunfireRuntime.ReticuleIcon
// 0x0000
class UReticuleIcon : public UReticulePiece
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReticuleIcon");
		return ptr;
	}



};

// Class GunfireRuntime.ReticuleMaterial
// 0x0000
class UReticuleMaterial : public UReticulePiece
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ReticuleMaterial");
		return ptr;
	}



};

// Class GunfireRuntime.RimComponent
// 0x0000
class URimComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RimComponent");
		return ptr;
	}



};

// Class GunfireRuntime.RotatorComponent
// 0x0000
class URotatorComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RotatorComponent");
		return ptr;
	}



	void Stop();
	void Play();
};

// Class GunfireRuntime.RuntimeNavMeshBoundsVolume
// 0x0000
class ARuntimeNavMeshBoundsVolume : public ANavMeshBoundsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RuntimeNavMeshBoundsVolume");
		return ptr;
	}



};

// Class GunfireRuntime.SequenceInstance
// 0x0000
class USequenceInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SequenceInstance");
		return ptr;
	}



	void OnFinished();
	void OnEventTreeTrackTriggerNotified();
};

// Class GunfireRuntime.SequenceRenderSettings
// 0x0000
class USequenceRenderSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SequenceRenderSettings");
		return ptr;
	}



};

// Class GunfireRuntime.ShowEquipmentDecorator
// 0x0000
class UShowEquipmentDecorator : public UShowEquipmentAbstractDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ShowEquipmentDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.SilhouetteManager
// 0x0000
class USilhouetteManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SilhouetteManager");
		return ptr;
	}



};

// Class GunfireRuntime.SingleObjectPool
// 0x0000
class USingleObjectPool : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SingleObjectPool");
		return ptr;
	}



};

// Class GunfireRuntime.SnapToGroundComponent
// 0x0000
class USnapToGroundComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SnapToGroundComponent");
		return ptr;
	}



};

// Class GunfireRuntime.SoftCollisionCapsuleComponent
// 0x0000
class USoftCollisionCapsuleComponent : public UCapsuleComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoftCollisionCapsuleComponent");
		return ptr;
	}



};

// Class GunfireRuntime.SoftCollisionWeightStateDecorator
// 0x0000
class USoftCollisionWeightStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoftCollisionWeightStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.SoundEntry
// 0x0000
class USoundEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoundEntry");
		return ptr;
	}



};

// Class GunfireRuntime.SoundID
// 0x0000
class USoundID : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoundID");
		return ptr;
	}



};

// Class GunfireRuntime.SoundSet
// 0x0000
class USoundSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoundSet");
		return ptr;
	}



};

// Class GunfireRuntime.SoundSetComponent
// 0x0000
class USoundSetComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoundSetComponent");
		return ptr;
	}



	void RemoveSoundTag();
	void PlaySound2D();
	void PlaySound();
	void HasSoundTag();
	void GetSoundTags();
	void GetSoundSoft();
	void GetSoundCue();
	void GetSound();
	void AddUniqueSoundTag();
};

// Class GunfireRuntime.SoundTagStateDecorator
// 0x0000
class USoundTagStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SoundTagStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterList
// 0x0000
class USpawnFilterList : public USpawnFilterEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterList");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilter
// 0x0000
class USpawnFilter : public USpawnFilterEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilter");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterExceptionList
// 0x0000
class USpawnFilterExceptionList : public USpawnFilterList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterExceptionList");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterReplacementList
// 0x0000
class USpawnFilterReplacementList : public USpawnFilterList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterReplacementList");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnFilterItem
// 0x0000
class USpawnFilterItem : public USpawnFilterElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnFilterItem");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnPoint
// 0x0000
class ASpawnPoint : public ASpawnPointBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnPoint");
		return ptr;
	}



	void StartPreSpawn();
	void StartCoolDown();
	void SetBusy();
	void OnPostEditMove();
	void IsCooledDown();
	void GetBusy();
};

// Class GunfireRuntime.SpawnPointManager
// 0x0000
class USpawnPointManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnPointManager");
		return ptr;
	}



	void SpawnCharacter();
	void SpawnActorDeferred();
	void Spawn();
	void GetInstance();
	void FindSpawnPointOnNavMesh();
	void FindNearbySpawnPosition();
	void FinalizeSpawnActor();
};

// Class GunfireRuntime.SpawnPointData
// 0x0000
class ASpawnPointData : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnPointData");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableCharacter
// 0x0000
class USpawnTableCharacter : public USpawnTableElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableCharacter");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableItem
// 0x0000
class USpawnTableItem : public USpawnTableElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableItem");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableActor
// 0x0000
class USpawnTableActor : public USpawnTableElement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableActor");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTableLink
// 0x0000
class USpawnTableLink : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTableLink");
		return ptr;
	}



};

// Class GunfireRuntime.SpawnTable
// 0x0000
class USpawnTable : public USpawnTableEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnTable");
		return ptr;
	}



	void GenerateWithSeed();
	void Generate();
};

// Class GunfireRuntime.SpawnUtil
// 0x0000
class USpawnUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SpawnUtil");
		return ptr;
	}



	void PickSingleItem();
	void FindRadialSpawnPosition();
};

// Class GunfireRuntime.SphereCastCondition
// 0x0000
class USphereCastCondition : public UPhysCastCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SphereCastCondition");
		return ptr;
	}



};

// Class GunfireRuntime.SplineBase
// 0x0000
class ASplineBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SplineBase");
		return ptr;
	}



};

// Class GunfireRuntime.SplineCameraComponent
// 0x0000
class USplineCameraComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SplineCameraComponent");
		return ptr;
	}



};

// Class GunfireRuntime.SplineCameraSplineComponent
// 0x0000
class USplineCameraSplineComponent : public USplineComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SplineCameraSplineComponent");
		return ptr;
	}



};

// Class GunfireRuntime.SplineCameraVolume
// 0x0000
class ASplineCameraVolume : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SplineCameraVolume");
		return ptr;
	}



	void GetCurrentSplinePosition();
	void GetCurrentSplineForwardVector();
	void EndOverlap();
	void Deactivate();
	void BeginOverlap();
	void Activate();
};

// Class GunfireRuntime.SplineFollowingComponent
// 0x0000
class USplineFollowingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SplineFollowingComponent");
		return ptr;
	}



	void SetSpline();
	void GetCurrentSplineTime();
};

// Class GunfireRuntime.StaminaCondition
// 0x0000
class UStaminaCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StaminaCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StaminaStateDecorator
// 0x0000
class UStaminaStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StaminaStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.StatCondition
// 0x0000
class UStatCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StatCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StateCompleteCondition
// 0x0000
class UStateCompleteCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateCompleteCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StateElapsedCondition
// 0x0000
class UStateElapsedCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateElapsedCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StateEventCondition
// 0x0000
class UStateEventCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateEventCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StateMachine
// 0x0000
class UStateMachine : public UStateMachineSubobject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateMachine");
		return ptr;
	}



	void GetStateParent();
	void GetState();
	void GetRootState();
};

// Class GunfireRuntime.StateMachineComponent
// 0x0000
class UStateMachineComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateMachineComponent");
		return ptr;
	}



	void SetWindow();
	void SetState();
	void SetEvent();
	void ServerSetTraversalState();
	void ServerSetState();
	void ServerSetInteractiveResult();
	void ServerDoInteractive();
	void ResetStateToDefault();
	void ProcessStateMachine();
	void OnRep_InteractiveInfo();
	void OnRep_CurrentStateID();
	void OnPostComputeStats();
	void MulticastDoFlinch();
	void IsWindowSet();
	void IsInterruptible();
	void IsEventSet();
	void InitAnimInstance();
	void InInteractive();
	void GetStateName();
	void GetInteractiveOther();
	void GetHitReactionType();
	void GetElapsedStateTime();
	void GetDebugInfo();
	void GetCurrentState();
	void DoInteractive();
	void ClientSetState();
	void ClientDoInteractive();
	void ClientAbortInteractive();
	void ClearWindow();
	void BeginLerp();
};

// Class GunfireRuntime.StateWindowCondition
// 0x0000
class UStateWindowCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StateWindowCondition");
		return ptr;
	}



};

// Class GunfireRuntime.StaticProceduralMesh
// 0x0000
class AStaticProceduralMesh : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StaticProceduralMesh");
		return ptr;
	}



};

// Class GunfireRuntime.StationarySpectatorCameraState
// 0x0000
class UStationarySpectatorCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StationarySpectatorCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.ComputedStats
// 0x0000
class UComputedStats : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ComputedStats");
		return ptr;
	}



	void ScaleValueByLevel();
	void ScaleStat();
	void PostComputeStats();
	void OnPostComputeStats();
	void OnComputeStats();
	void OnComputeDerivedStats();
	void ModifyStat();
	void HasStat();
	void GetStatsOwner();
	void GetStat();
	void ComputeStats();
	void ComputeDerivedStats();
};

// Class GunfireRuntime.StatsComponent
// 0x0000
class UStatsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StatsComponent");
		return ptr;
	}



	void SetComputedStats();
	void ScaleStat();
	void ModifyStat();
	void Invalidate();
	void HasStat();
	void GetStatAsInt();
	void GetStatAsBool();
	void GetStat();
	void GetComputedStats();
	void ApplyStats();
	void ApplyStatModsTo();
};

// Class GunfireRuntime.StatStateDecorator
// 0x0000
class UStatStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StatStateDecorator");
		return ptr;
	}



	void ComputeStats();
};

// Class GunfireRuntime.SubtitleInstance
// 0x0000
class USubtitleInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SubtitleInstance");
		return ptr;
	}



	void Remove();
	void OnSourceActorDestroyed();
	void OnLoaded();
	void CompleteAndRemove();
	void Complete();
};

// Class GunfireRuntime.SubtitlesComponent
// 0x0000
class USubtitlesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SubtitlesComponent");
		return ptr;
	}



	void ServerRemoveSubtitle();
	void RemoveSubtitle();
	void ClientRemoveSubtitle();
	void ClientAddSubtitle();
	void AddSubtitle();
};

// Class GunfireRuntime.SurfaceOrientComponent
// 0x0000
class USurfaceOrientComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SurfaceOrientComponent");
		return ptr;
	}



	void SetEnableIK();
};

// Class GunfireRuntime.SwimmingCondition
// 0x0000
class USwimmingCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SwimmingCondition");
		return ptr;
	}



	void GetSwimmingState();
};

// Class GunfireRuntime.SwimmingStateDecorator
// 0x0000
class USwimmingStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SwimmingStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.TabButton
// 0x0000
class UTabButton : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TabButton");
		return ptr;
	}



	void SetTexture();
	void SetTabPanel();
	void SetColorAndOpacity();
	void SetBackgroundColor();
	void IsPressed();
	void GetTabPanel();
	void FocusTab();
};

// Class GunfireRuntime.TabButtonSlot
// 0x0000
class UTabButtonSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TabButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class GunfireRuntime.TagCondition
// 0x0000
class UTagCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TagCondition");
		return ptr;
	}



};

// Class GunfireRuntime.TargetableComponent
// 0x0000
class UTargetableComponent : public UHeuristicBoundsComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TargetableComponent");
		return ptr;
	}



	void SetCanBeTargeted();
	void SetAllowSoftTarget();
	void OnUnTarget();
	void OnTarget();
	void OnOwnerDied();
	void GetTargetingActors();
	void CanBeTargeted();
};

// Class GunfireRuntime.TargetAlignComponent
// 0x0000
class UTargetAlignComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TargetAlignComponent");
		return ptr;
	}



	void GetAdjustNodeRotation();
};

// Class GunfireRuntime.TargetingComponent
// 0x0000
class UTargetingComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TargetingComponent");
		return ptr;
	}



	void OnNewTargetSet();
	void GetTarget();
	void GetSnapTarget();
};

// Class GunfireRuntime.TargetLockComponent
// 0x0000
class UTargetLockComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TargetLockComponent");
		return ptr;
	}



	void IsTargetLockEnabled();
	void GetSoftTarget();
	void GetLockTarget();
	void GetCameraTarget();
	void EnableTargetLock();
	void CycleLockTarget();
	void ClearLockTarget();
};

// Class GunfireRuntime.TargetManager
// 0x0000
class UTargetManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TargetManager");
		return ptr;
	}



};

// Class GunfireRuntime.TextDebugComponent
// 0x0000
class UTextDebugComponent : public UTextRenderComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TextDebugComponent");
		return ptr;
	}



};

// Class GunfireRuntime.ThirdPersonCameraState
// 0x0000
class UThirdPersonCameraState : public UCameraState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ThirdPersonCameraState");
		return ptr;
	}



};

// Class GunfireRuntime.TileUtil
// 0x0000
class UTileUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TileUtil");
		return ptr;
	}



	void IsVisible();
	void HasEdge();
};

// Class GunfireRuntime.TileLOD
// 0x0000
class ATileLOD : public ALODActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TileLOD");
		return ptr;
	}



	void SetLODOverride();
};

// Class GunfireRuntime.TileInfo
// 0x0000
class UTileInfo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TileInfo");
		return ptr;
	}



};

// Class GunfireRuntime.TileSet
// 0x0000
class UTileSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TileSet");
		return ptr;
	}



};

// Class GunfireRuntime.TimeDilationDecorator
// 0x0000
class UTimeDilationDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TimeDilationDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.ClearTimeDilationDecorator
// 0x0000
class UClearTimeDilationDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ClearTimeDilationDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.TimeDilationManager
// 0x0000
class UTimeDilationManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TimeDilationManager");
		return ptr;
	}



	void SetTimeDilation();
	void SetGlobalTimeDilation();
	void RefreshTimeDilationEffect();
	void PlayTimeDilationEffect();
	void PlayGlobalTimeDilationEffect();
	void OnCinematic();
	void IsTimeDilationEffectEasingOut();
	void IsTimeDilationEffectActive();
	void IsPlayingHitPause();
	void GetTimeDilation();
	void GetGlobalTimeDilation();
	void EaseOutTimeDilationEffect();
	void ClearTimeDilationEffect();
	void ClearTimeDilation();
	void ClearGlobalTimeDilationEffect();
	void ClearGlobalTimeDilation();
	void ClearAllTimeDilation();
};

// Class GunfireRuntime.TraitType
// 0x0000
class UTraitType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraitType");
		return ptr;
	}



};

// Class GunfireRuntime.TraversalSettings
// 0x0000
class UTraversalSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraversalSettings");
		return ptr;
	}



};

// Class GunfireRuntime.TraversalSurfaceCondition
// 0x0000
class UTraversalSurfaceCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TraversalSurfaceCondition");
		return ptr;
	}



};

// Class GunfireRuntime.TutorialPrompts
// 0x0000
class UTutorialPrompts : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TutorialPrompts");
		return ptr;
	}



};

// Class GunfireRuntime.TutorialComponent
// 0x0000
class UTutorialComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TutorialComponent");
		return ptr;
	}



	void SetTutorialPrompt();
	void RemoveTutorialPrompt();
	void QueueTutorialPrompt();
	void HasActiveTutorialPrompt();
	void ClearTutorialPrompts();
	void AreTutorialsEnabled();
};

// Class GunfireRuntime.EventTreeNode_TutorialPrompt
// 0x0000
class UEventTreeNode_TutorialPrompt : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.EventTreeNode_TutorialPrompt");
		return ptr;
	}



};

// Class GunfireRuntime.TutorialPromptWidget
// 0x0000
class UTutorialPromptWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TutorialPromptWidget");
		return ptr;
	}



};

// Class GunfireRuntime.TweenComponent
// 0x0000
class UTweenComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TweenComponent");
		return ptr;
	}



	void StopTween();
	void StopAllTweens();
	void SetLightIntensity();
	void SetComponentLightIntensity();
	void ScaleComponent();
	void Scale();
	void RotateComponent();
	void Rotate();
	void MoveToTarget();
	void MoveRelative();
	void MoveComponent();
	void MoveBezier();
	void Move();
	void IsTweenComplete();
	void GetElapsedTime();
	void AnimateVectorProperty();
	void AnimateVector4Property();
	void AnimateRotatorProperty();
	void AnimatePrimitiveComponentMaterialVectorParam();
	void AnimatePrimitiveComponentMaterialScalarParam();
	void AnimateMaterialVectorParamGlobal();
	void AnimateMaterialVectorParam();
	void AnimateMaterialScalarParamGlobal();
	void AnimateMaterialScalarParam();
	void AnimateFloatProperty();
};

// Class GunfireRuntime.UIHudComponent
// 0x0000
class UUIHudComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudComponent");
		return ptr;
	}



	void SetVisibility();
	void OnParentSetVisibility();
	void IsVisible();
	void GetControllingPawn();
};

// Class GunfireRuntime.UIHudDamageNumberComponent
// 0x0000
class UUIHudDamageNumberComponent : public UUIHudComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudDamageNumberComponent");
		return ptr;
	}



	void OnNotifyHitTarget();
	void ClearNumberQueue();
};

// Class GunfireRuntime.UIHudHitIndicatorComponent
// 0x0000
class UUIHudHitIndicatorComponent : public UUIHudComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudHitIndicatorComponent");
		return ptr;
	}



	void OnNotifyTakeDamage();
};

// Class GunfireRuntime.InteractiveInstigatorInterface
// 0x0000
class UInteractiveInstigatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.InteractiveInstigatorInterface");
		return ptr;
	}



	void CanDoStateInteraction();
	void CanDoItemInteraction();
	void CanDoCharacterRevive();
};

// Class GunfireRuntime.UIHudInteractComponent
// 0x0000
class UUIHudInteractComponent : public UUIHudComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudInteractComponent");
		return ptr;
	}



	void OnInteractCancel();
	void OnInteract();
	void Interact();
	void HasFocusedInteractive();
	void GetMashPercentage();
	void GetMashInteractImage();
	void GetFocusedInteractiveActor();
	void GetFocusedIconScreenPosition();
};

// Class GunfireRuntime.UIHudReticuleComponent
// 0x0000
class UUIHudReticuleComponent : public UUIHudComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudReticuleComponent");
		return ptr;
	}



	void OnNotifyHitTarget();
	void GetRangedWeapon();
	void GetMeleeWeapon();
	void GetHitAlpha();
	void GetCurrentSpread();
};

// Class GunfireRuntime.UIHudTutorialComponent
// 0x0000
class UUIHudTutorialComponent : public UUIHudComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIHudTutorialComponent");
		return ptr;
	}



	void OnShowPrompt();
	void OnHidePrompt();
	void OnClearPrompt();
};

// Class GunfireRuntime.UITweenManager
// 0x0000
class UUITweenManager : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UITweenManager");
		return ptr;
	}



	void StopTween();
	void StartTimer();
	void Size();
	void ScaleByCurve();
	void Scale();
	void MoveTo();
	void MoveRelative();
	void Move();
	void IsTweenFinished();
	void InvalidateHandle();
	void GetInstance();
	void FlashColor();
	void ColorByCurve();
	void AnimateColor();
	void AnimateAlpha();
};

// Class GunfireRuntime.UIUtil
// 0x0000
class UUIUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UIUtil");
		return ptr;
	}



};

// Class GunfireRuntime.UnCrouchCondition
// 0x0000
class UUnCrouchCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UnCrouchCondition");
		return ptr;
	}



};

// Class GunfireRuntime.UseItemInterface
// 0x0000
class UUseItemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UseItemInterface");
		return ptr;
	}



	void UseItem();
	void CanUseItem();
};

// Class GunfireRuntime.UseItemStateDecorator
// 0x0000
class UUseItemStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.UseItemStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.Variables
// 0x0000
class UVariables : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.Variables");
		return ptr;
	}



};

// Class GunfireRuntime.VariableComponent
// 0x0000
class UVariableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VariableComponent");
		return ptr;
	}



	void SetVariableObject();
	void SetVariableNumber();
	void SetVariableName();
	void SetVariableBool();
	void GetVariableObject();
	void GetVariableNumber();
	void GetVariableBool();
};

// Class GunfireRuntime.RootVariableContext
// 0x0000
class URootVariableContext : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RootVariableContext");
		return ptr;
	}



};

// Class GunfireRuntime.VariableConditionBase
// 0x0000
class UVariableConditionBase : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VariableConditionBase");
		return ptr;
	}



};

// Class GunfireRuntime.VariableCondition
// 0x0000
class UVariableCondition : public UVariableConditionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VariableCondition");
		return ptr;
	}



};

// Class GunfireRuntime.BlackboardVariableCondition
// 0x0000
class UBlackboardVariableCondition : public UVariableConditionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.BlackboardVariableCondition");
		return ptr;
	}



};

// Class GunfireRuntime.VaultCondition
// 0x0000
class UVaultCondition : public UTraversalCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VaultCondition");
		return ptr;
	}



};

// Class GunfireRuntime.VaultState
// 0x0000
class UVaultState : public UTraversalState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VaultState");
		return ptr;
	}



};

// Class GunfireRuntime.VelocityCondition
// 0x0000
class UVelocityCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VelocityCondition");
		return ptr;
	}



};

// Class GunfireRuntime.ActorVisual
// 0x0000
class UActorVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ActorVisual");
		return ptr;
	}



};

// Class GunfireRuntime.VisualID
// 0x0000
class UVisualID : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualID");
		return ptr;
	}



};

// Class GunfireRuntime.VisualSetNode
// 0x0000
class UVisualSetNode : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualSetNode");
		return ptr;
	}



};

// Class GunfireRuntime.VisualFXNode
// 0x0000
class UVisualFXNode : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualFXNode");
		return ptr;
	}



};

// Class GunfireRuntime.VisualFXEntry
// 0x0000
class UVisualFXEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualFXEntry");
		return ptr;
	}



};

// Class GunfireRuntime.VisualFX
// 0x0000
class UVisualFX : public UVisualSetNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualFX");
		return ptr;
	}



};

// Class GunfireRuntime.VisualSetSlot
// 0x0000
class UVisualSetSlot : public UVisualSetNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualSetSlot");
		return ptr;
	}



};

// Class GunfireRuntime.VisualSet
// 0x0000
class UVisualSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualSet");
		return ptr;
	}



};

// Class GunfireRuntime.VisualComponent
// 0x0000
class UVisualComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualComponent");
		return ptr;
	}



	void UpdateSlots();
	void StopAllStreamingRequests();
	void SetVisualAt();
	void SetVisual();
	void SetupSlaveMeshes();
	void SetSlotEnabled();
	void PlayVisualFX();
	void OnVisualLoaded();
	void GetVisualSlot();
	void GetVisualPositionInSlot();
	void GetSlotVisualID();
	void GetNumVisualsForSlotID();
	void ClearVisual();
};

// Class GunfireRuntime.GlobalMaterialVisual
// 0x0000
class UGlobalMaterialVisual : public UActorVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.GlobalMaterialVisual");
		return ptr;
	}



};

// Class GunfireRuntime.MaterialOverrideVisual
// 0x0000
class UMaterialOverrideVisual : public UActorVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.MaterialOverrideVisual");
		return ptr;
	}



};

// Class GunfireRuntime.SceneVisual
// 0x0000
class USceneVisual : public UActorVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SceneVisual");
		return ptr;
	}



};

// Class GunfireRuntime.SkinnedMeshVisual
// 0x0000
class USkinnedMeshVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SkinnedMeshVisual");
		return ptr;
	}



};

// Class GunfireRuntime.StaticMeshVisual
// 0x0000
class UStaticMeshVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.StaticMeshVisual");
		return ptr;
	}



};

// Class GunfireRuntime.RandomSkinnedMeshVisual
// 0x0000
class URandomSkinnedMeshVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RandomSkinnedMeshVisual");
		return ptr;
	}



};

// Class GunfireRuntime.RandomStaticMeshVisual
// 0x0000
class URandomStaticMeshVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.RandomStaticMeshVisual");
		return ptr;
	}



};

// Class GunfireRuntime.AudioVisual
// 0x0000
class UAudioVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioVisual");
		return ptr;
	}



};

// Class GunfireRuntime.ParticleVisual
// 0x0000
class UParticleVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ParticleVisual");
		return ptr;
	}



};

// Class GunfireRuntime.AttachActorVisual
// 0x0000
class UAttachActorVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AttachActorVisual");
		return ptr;
	}



};

// Class GunfireRuntime.SetVisibilityVisual
// 0x0000
class USetVisibilityVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.SetVisibilityVisual");
		return ptr;
	}



};

// Class GunfireRuntime.TagVisual
// 0x0000
class UTagVisual : public USceneVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.TagVisual");
		return ptr;
	}



};

// Class GunfireRuntime.ParticleFXNode
// 0x0000
class UParticleFXNode : public UVisualFXNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ParticleFXNode");
		return ptr;
	}



};

// Class GunfireRuntime.AudioFXNode
// 0x0000
class UAudioFXNode : public UVisualFXNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.AudioFXNode");
		return ptr;
	}



};

// Class GunfireRuntime.VisualizableActorComponent
// 0x0000
class UVisualizableActorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VisualizableActorComponent");
		return ptr;
	}



};

// Class GunfireRuntime.VitalityComponent
// 0x0000
class UVitalityComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VitalityComponent");
		return ptr;
	}



	void Reset();
	void OnRep_Value();
	void HasValidStatsComp();
	void GetVitality();
	void GetValuePercentage();
	void GetValueMax();
	void GetValue();
	void GetDebugInfo();
	void ApplyDeltaReplicated();
	void ApplyDelta();
};

// Class GunfireRuntime.VitalityCondition
// 0x0000
class UVitalityCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VitalityCondition");
		return ptr;
	}



};

// Class GunfireRuntime.VitalityStateDecorator
// 0x0000
class UVitalityStateDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.VitalityStateDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.WallCheckCondition
// 0x0000
class UWallCheckCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WallCheckCondition");
		return ptr;
	}



};

// Class GunfireRuntime.WaterCondition
// 0x0000
class UWaterCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterCondition");
		return ptr;
	}



};

// Class GunfireRuntime.WaterEntryDecorator
// 0x0000
class UWaterEntryDecorator : public UActorStateDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterEntryDecorator");
		return ptr;
	}



};

// Class GunfireRuntime.WaterFXComponent
// 0x0000
class UWaterFXComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterFXComponent");
		return ptr;
	}



	void IsInWater();
	void GetWaterType();
	void GetWaterLevel();
	void GetWaterDepth();
	void GetSubmergeDepth();
};

// Class GunfireRuntime.WaterOverlapComponent
// 0x0000
class UWaterOverlapComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterOverlapComponent");
		return ptr;
	}



	void OnEndOverlap();
	void OnEndComponentOverlap();
	void OnBeginOverlap();
	void OnBeginComponentOverlap();
	void InWater();
};

// Class GunfireRuntime.WaterSurfaceCondition
// 0x0000
class UWaterSurfaceCondition : public UTraversalCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterSurfaceCondition");
		return ptr;
	}



};

// Class GunfireRuntime.WaterSurfaceState
// 0x0000
class UWaterSurfaceState : public UTraversalState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WaterSurfaceState");
		return ptr;
	}



};

// Class GunfireRuntime.WeaponAffinities
// 0x0000
class UWeaponAffinities : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WeaponAffinities");
		return ptr;
	}



};

// Class GunfireRuntime.WeaponComponent
// 0x0000
class UWeaponComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WeaponComponent");
		return ptr;
	}



	void NotifyHitTarget();
	void ModifyInspectInfo();
	void ModifyDamage();
	void ComputeStats();
};

// Class GunfireRuntime.WeaponAffinityComponent
// 0x0000
class UWeaponAffinityComponent : public UWeaponComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WeaponAffinityComponent");
		return ptr;
	}



	void ComputeScalar();
};

// Class GunfireRuntime.ImpactDirection
// 0x0000
class UImpactDirection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.ImpactDirection");
		return ptr;
	}



};

// Class GunfireRuntime.WeaponPhantomComponent
// 0x0000
class UWeaponPhantomComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WeaponPhantomComponent");
		return ptr;
	}



	void StopWeaponPhantom();
	void StopAllWeaponPhantoms();
	void StartWeaponPhantom();
	void SetSuspended();
	void MarkActorHit();
	void IsSuspended();
	void HasRecentlyHitActor();
	void HasAnyOverlappingDamageable();
};

// Class GunfireRuntime.WidgetComponentGunfire
// 0x0000
class UWidgetComponentGunfire : public UWidgetComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WidgetComponentGunfire");
		return ptr;
	}



};

// Class GunfireRuntime.WorldSoundComponent
// 0x0000
class UWorldSoundComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WorldSoundComponent");
		return ptr;
	}



	void SetAudioList();
	void ResetTimers();
};

// Class GunfireRuntime.WorldSoundEntry
// 0x0000
class UWorldSoundEntry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WorldSoundEntry");
		return ptr;
	}



};

// Class GunfireRuntime.WorldSoundID
// 0x0000
class UWorldSoundID : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WorldSoundID");
		return ptr;
	}



};

// Class GunfireRuntime.WorldSoundSet
// 0x0000
class UWorldSoundSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WorldSoundSet");
		return ptr;
	}



};

// Class GunfireRuntime.WoundedComponent
// 0x0000
class UWoundedComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WoundedComponent");
		return ptr;
	}



	void StopReviveActor();
	void ServerKillSelf();
	void ReviveActor();
	void Revive();
	void OnRep_State();
	void OnCinematicPlaying();
	void MulticastOnWounded();
	void MulticastOnTargetRevived();
	void MulticastOnRevived();
	void Kill();
	void GetWoundedHealthPct();
};

// Class GunfireRuntime.WoundedCondition
// 0x0000
class UWoundedCondition : public UCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireRuntime.WoundedCondition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
