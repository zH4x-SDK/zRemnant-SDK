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

// BlueprintGeneratedClass Character_Master_Player.Character_Master_Player_C
// 0x0000
class ACharacter_Master_Player_C : public ARemnantCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Master_Player.Character_Master_Player_C");
		return ptr;
	}



	void GetPhase();
	void CanDoCharacterRevive();
	void CanDoItemInteraction();
	void CanDoStateInteraction();
	void UnlockFlashCastorTrait();
	void PlayVaporEffect();
	void GetCurrentOrDeadController();
	void UnlinkSummon();
	void LinkSummon();
	void UpdateAccountCurrency();
	void ListenForAccountCurrencyChanges();
	void CanShowQuestInventory();
	void Get_Armor_Skin_Sets_Acquired();
	void ActivateHandGun();
	void DLC___Award_Gold();
	void DLC___Award_Xbox();
	void OnPostPingMenuLockEnded();
	void OnPingMenuEnded();
	void CanHighFive();
	void ActivateLongGun();
	void CanPing();
	void CanShowPingMenu();
	void DLC___Award_Steam();
	void Get_Highest_Boss_Weapon_Level();
	void DLC_Logging();
	void GetTPSHud();
	void UpdateBendableFoilage();
	void RemoveActionsOnReset();
	void IsHoldingInteractButton();
	void HasUnspentTraitPoints();
	void DLC___Award_Survivor();
	void DLC___Award_Nightstalker();
	void DLC___Award_Gladiator();
	void DLC___Award_Doomsayer();
	void DLC___Remove_DLC_Items_Player_Should_Not_Have();
	void DLC___Award_Twitch();
	void Get_Total_Weapon_Mods();
	void Get_Armor_Sets_Acquired();
	void Get_Highest_Weapon_Level();
	void GetPlayerController();
	void Get_Highest_Trait_Level();
	void HasSpentTraitPoint();
	void IncrementWeaponKill();
	void CheckNumKills();
	void CheckNumWeapons();
	void TryUnlockTraits();
	void AllowWeaponSwap();
	void ReplenishResourcesShard();
	void IsDemo();
	void HasUnusedWeaponMods();
	void InTown();
	void IncrementNumCheckpointsUsed();
	void CanCraftWeaponMod();
	void CanUpgrade();
	void ClearMiniMap();
	void Set_DragonHeart_Quantity();
	void EndUseCheckpoint();
	void UpdateDisplayLevel();
	void LockMiniMap();
	void GiveMaterials();
	void Lock_Position();
	void IsTraveling();
	void Get_Hud_Widget();
	void Reset_Minimap();
	void ReplenishResources();
	void FilterIncomingDamage();
	void AllowAction();
	void OnFailure_B965762A445B982708DF2D8FEEDBC3E2();
	void OnSuccess_B965762A445B982708DF2D8FEEDBC3E2();
	void OnFailure_04E1D90C4785AB7500A9C4BD5BE4C84B();
	void OnSuccess_04E1D90C4785AB7500A9C4BD5BE4C84B();
	void OnFailure_744C71424FAEFE20C17A84A02737DAD7();
	void OnSuccess_744C71424FAEFE20C17A84A02737DAD7();
	void OnFailure_5B892AD148B8A7E4AE0373B595B54D75();
	void OnSuccess_5B892AD148B8A7E4AE0373B595B54D75();
	void OnFailure_4B4588704DF8E6E4EC7A40A9B7AA37D9();
	void OnSuccess_4B4588704DF8E6E4EC7A40A9B7AA37D9();
	void OnFailure_5E04062640ABD461EA31B792B4659C7F();
	void OnSuccess_5E04062640ABD461EA31B792B4659C7F();
	void OnFailure_14840F50467879E63F4FC8BBF4158F11();
	void OnSuccess_14840F50467879E63F4FC8BBF4158F11();
	void OnFailure_B3F0A23548B1471DE982029336B3238A();
	void OnSuccess_B3F0A23548B1471DE982029336B3238A();
	void OnFailure_6DA9194F48388CE31CA7DCBC6FA2C8F6();
	void OnSuccess_6DA9194F48388CE31CA7DCBC6FA2C8F6();
	void OnFailure_64CE77C3491A077E1BB3CCB9ABEB390C();
	void OnSuccess_64CE77C3491A077E1BB3CCB9ABEB390C();
	void OnFailure_64629C8140FC7F24E521E99EAAF74C4B();
	void OnSuccess_64629C8140FC7F24E521E99EAAF74C4B();
	void OnFailure_D212BFC048A1255C560CBBBD13D96EDA();
	void OnSuccess_D212BFC048A1255C560CBBBD13D96EDA();
	void OnFailure_06C191CA4361D74F447A59BC1DF8DE1A();
	void OnSuccess_06C191CA4361D74F447A59BC1DF8DE1A();
	void OnFailure_E43E11DF45EA2007993D4E92724C4FC2();
	void OnSuccess_E43E11DF45EA2007993D4E92724C4FC2();
	void OnFailure_39ADB5624FB857C60172D5B95C6ECEAC();
	void OnSuccess_39ADB5624FB857C60172D5B95C6ECEAC();
	void OnFailure_5A87EB2F4B337BA5BA86699897E4B9F8();
	void OnSuccess_5A87EB2F4B337BA5BA86699897E4B9F8();
	void OnFailure_D6DB88DF4493C5760967508B47A06AB3();
	void OnSuccess_D6DB88DF4493C5760967508B47A06AB3();
	void OnFailure_8F2349F443528EB971D9D28ABCA8F70F();
	void OnSuccess_8F2349F443528EB971D9D28ABCA8F70F();
	void OnFailure_C37F6928477ED7394B76848A247D809F();
	void OnSuccess_C37F6928477ED7394B76848A247D809F();
	void OnFailure_EF5700BD42FEE53DF81784AB624E114B();
	void OnSuccess_EF5700BD42FEE53DF81784AB624E114B();
	void OnFailure_A7C6D7124B54BD212A425F8222BB92EB();
	void OnSuccess_A7C6D7124B54BD212A425F8222BB92EB();
	void OnFailure_A6F3616442127DE33894FBAEE666DDD8();
	void OnSuccess_A6F3616442127DE33894FBAEE666DDD8();
	void InpActEvt_ToggleWeapon_K2Node_InputActionEvent_15();
	void InpActEvt_QuickSelect1_K2Node_InputActionEvent_14();
	void InpActEvt_QuickSelect2_K2Node_InputActionEvent_13();
	void InpActEvt_QuickSelect3_K2Node_InputActionEvent_12();
	void InpActEvt_QuickSelect4_K2Node_InputActionEvent_11();
	void InpActEvt_Ping_K2Node_InputActionEvent_10();
	void InpActEvt_Ping_K2Node_InputActionEvent_9();
	void InpActEvt_GodMode_K2Node_InputActionEvent_8();
	void InpActEvt_ToggleUntargetable_K2Node_InputActionEvent_7();
	void InpActEvt_DebugHurtSelf_K2Node_InputActionEvent_6();
	void InpActEvt_DebugKillSelf_K2Node_InputActionEvent_5();
	void InpActEvt_ResourceHack_K2Node_InputActionEvent_4();
	void InpActEvt_GiveCraftingMaterials_K2Node_InputActionEvent_3();
	void InpActEvt_SkipIntro_K2Node_InputActionEvent_2();
	void OnLoaded_E0E805FD4AD71513D4F4B691FA157880();
	void InpActEvt_DebugInterruptSelf_K2Node_InputActionEvent_1();
	void StartHighFive();
	void StopHighFive();
	void OnHighFiveSuccess();
	void ClientGiveWaveEmote();
	void EnterBarrier();
	void ExitBarrier();
	void PlayBarrierFX();
	void MulticastPlayBarrierFX();
	void ServerPlayBarrierFX();
	void OnEnterBarrier();
	void OnExitBarrier();
	void Validate_DLC();
	void SurvivorBagUsed();
	void OnLocallyControlled();
	void Add_DLC_Item();
	void Server_Remove_DLC_Item();
	void Give_DLC();
	void Server_InitializeAccountCurrency();
	void SetPhase();
	void CheckAccountCurrency();
	void IPetADog();
	void Update_Achievement_Progress___Items();
	void Update_Achievement_Progress___Loot();
	void Update_Achievement_Progress___Weapon_Mods();
	void Update_Achievement_Progress___Armor_Sets();
	void Update_Achievement_Progress___Trait_Added();
	void Update_Achievement_Progress___Trait_Level();
	void Update_Achievement_Progress___Upgrade_Item();
	void Update_Achievement_Progress___Crafted_Item();
	void Check_Dragon_Heart_Count();
	void Update_Achievement_Progress___Armor_Skin_Sets();
	void OnCheckHarsgaardRecorders();
	void OnChromaDamage();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryPickupItem__DelegateSignature();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryItemLeveledUp__DelegateSignature();
	void TryUnlockWeaponTraits();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_1_OnWoundedDelegate__DelegateSignature();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_4_OnRevivedDelegate__DelegateSignature();
	void ListenForClientHits();
	void OnClientHitTarget();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryPickupItem__DelegateSignature();
	void BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_7_OnTraitDelegate__DelegateSignature();
	void BndEvt__RemnantTraits_K2Node_ComponentBoundEvent_8_OnTraitLevelChangedDelegate__DelegateSignature();
	void OnSummonKilledTarget();
	void ListenForClientDamageTaken();
	void OnTakeDamage();
	void ListenForClientStateChange();
	void OnClientStateChange();
	void RegisterStatusEffectApplied();
	void RegisterStatusEffectConsumableCleansed();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_0_WoundedStateDelegate__DelegateSignature();
	void OnReviveFXStart();
	void OnReviveFXStop();
	void OnPingHeld();
	void ManualWeaponToggle();
	void DelaySetVisible();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_2_InventoryChangedDelegate__DelegateSignature();
	void OnEmoteNo();
	void OnEmoteYes();
	void OnEmoteWave();
	void OnEmoteCheer();
	void OnEmoteBeckon();
	void OnEmoteFail();
	void OnEmoteExhausted();
	void OnEmoteLaugh();
	void OnActivate();
	void OnUsed();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryAddItem__DelegateSignature();
	void Give_Liquid_Escape();
	void OnClientAddAccountCurrency();
	void UseCheckpoint();
	void CheckpointBegin();
	void CheckpointEnd();
	void EventOnDialogResult();
	void OnFortifyFailed();
	void OnSpawnedAtCheckpoint();
	void ClientSpawnedAtCheckpoint();
	void DeferredCheckpointBegin();
	void TryBeginCheckpoint();
	void ServerFinishLoad();
	void ShowCheckpointMenu();
	void GodMode();
	void SetUntargetable();
	void DebugDamageSelf();
	void DebugResourceHack();
	void DebugGiveMaterials();
	void ServerUnequipMod();
	void ServerEquipMod();
	void AddCheckpointNotification();
	void RemoveCheckpointNotification();
	void ClearAllCheckpointNotifications();
	void ServerZoneDoorFailedNotify();
	void MulticastZoneDoorFailedNotify();
	void LocalZoneDoorFailedNotify();
	void ClientToServerApplyDamage();
	void ApplyDamage_ClientAuthoritative();
	void MarkHarsgaardRootGunObtained();
	void ReceiveBeginPlay();
	void OnDead_Event_1();
	void OnCameraOrientLeft();
	void OnCameraOrientRight();
	void OnWallEnter();
	void OnWallExit();
	void OnRespawnAfterDeath();
	void OnNotifyTakeDamage_Event_1();
	void BndEvt__FallDamage_K2Node_ComponentBoundEvent_0_OnFallDamageDelegate__DelegateSignature();
	void BndEvt__FallDamage_K2Node_ComponentBoundEvent_1_OnFallDamageDelegate__DelegateSignature();
	void BndEvt__RemnantProgression_K2Node_ComponentBoundEvent_0_LevelUpDelegate__DelegateSignature();
	void OnTeleportOut();
	void OnTeleportIn();
	void ReceiveEndPlay();
	void BndEvt__MiniMap_Remnant_K2Node_ComponentBoundEvent_0_LevelChangedEvent__DelegateSignature();
	void OnCrouchFoleyEnter();
	void OnCrouchFoleyExit();
	void OnAimFoleyEnter();
	void OnAimFoleyExit();
	void BndEvt__Wounded_K2Node_ComponentBoundEvent_3_WoundedComponentDelegate__DelegateSignature();
	void OnReplenishResources();
	void OnReplenishResourcesShard();
	void OnUpgradeItem_Event_1();
	void ClientHudPopScale();
	void PopAmmo();
	void OnFogWallEnter();
	void OnFogWallExit();
	void ApplyForceFeedback();
	void ReceiveTick();
	void OnPlayVapor();
	void Dodged();
	void OnPerfectDodge();
	void PerfectDodgeTimer();
	void OnPerfectDodgeEnd();
	void ExecuteUbergraph_Character_Master_Player();
	void OnMutedPing__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
