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

// Function GunfireRuntime.ActorModifier.SetOwner
struct UActorModifier_SetOwner_Params
{
};

// Function GunfireRuntime.ActorModifier.SetLevel
struct UActorModifier_SetLevel_Params
{
};

// Function GunfireRuntime.ActorModifier.ScaleStat
struct UActorModifier_ScaleStat_Params
{
};

// Function GunfireRuntime.ActorModifier.PostComputeStats
struct UActorModifier_PostComputeStats_Params
{
};

// Function GunfireRuntime.ActorModifier.OnUnequipped
struct UActorModifier_OnUnequipped_Params
{
};

// Function GunfireRuntime.ActorModifier.OnTick
struct UActorModifier_OnTick_Params
{
};

// Function GunfireRuntime.ActorModifier.OnTakeDamage
struct UActorModifier_OnTakeDamage_Params
{
};

// Function GunfireRuntime.ActorModifier.OnRep_Level
struct UActorModifier_OnRep_Level_Params
{
};

// Function GunfireRuntime.ActorModifier.OnPostComputeStats
struct UActorModifier_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.ActorModifier.OnLevelChanged
struct UActorModifier_OnLevelChanged_Params
{
};

// Function GunfireRuntime.ActorModifier.OnHitTarget
struct UActorModifier_OnHitTarget_Params
{
};

// Function GunfireRuntime.ActorModifier.OnEquipped
struct UActorModifier_OnEquipped_Params
{
};

// Function GunfireRuntime.ActorModifier.OnComputeStats
struct UActorModifier_OnComputeStats_Params
{
};

// Function GunfireRuntime.ActorModifier.OnComputeDerivedStats
struct UActorModifier_OnComputeDerivedStats_Params
{
};

// Function GunfireRuntime.ActorModifier.OnAdded
struct UActorModifier_OnAdded_Params
{
};

// Function GunfireRuntime.ActorModifier.NotifyTakeDamage
struct UActorModifier_NotifyTakeDamage_Params
{
};

// Function GunfireRuntime.ActorModifier.NotifyHitTarget
struct UActorModifier_NotifyHitTarget_Params
{
};

// Function GunfireRuntime.ActorModifier.ModifyStat
struct UActorModifier_ModifyStat_Params
{
};

// Function GunfireRuntime.ActorModifier.ModifyInspectInfo
struct UActorModifier_ModifyInspectInfo_Params
{
};

// Function GunfireRuntime.ActorModifier.ModifyDamage
struct UActorModifier_ModifyDamage_Params
{
};

// Function GunfireRuntime.ActorModifier.GetStat
struct UActorModifier_GetStat_Params
{
};

// Function GunfireRuntime.ActorModifier.GetOwningCharacter
struct UActorModifier_GetOwningCharacter_Params
{
};

// Function GunfireRuntime.ActorModifier.GetOwner
struct UActorModifier_GetOwner_Params
{
};

// Function GunfireRuntime.ActorModifier.GetInspectInfo
struct UActorModifier_GetInspectInfo_Params
{
};

// Function GunfireRuntime.ActorModifier.FilterIncomingFallDamage
struct UActorModifier_FilterIncomingFallDamage_Params
{
};

// Function GunfireRuntime.ActorModifier.FilterIncomingDamage
struct UActorModifier_FilterIncomingDamage_Params
{
};

// Function GunfireRuntime.ActorModifier.ComputeStats
struct UActorModifier_ComputeStats_Params
{
};

// Function GunfireRuntime.ActorModifier.ComputeDerivedStats
struct UActorModifier_ComputeDerivedStats_Params
{
};

// Function GunfireRuntime.ActionBase.SetCause
struct UActionBase_SetCause_Params
{
};

// Function GunfireRuntime.ActionBase.OnCinematic
struct UActionBase_OnCinematic_Params
{
};

// Function GunfireRuntime.ActionBase.OnActionStop
struct UActionBase_OnActionStop_Params
{
};

// Function GunfireRuntime.ActionBase.OnActionStart
struct UActionBase_OnActionStart_Params
{
};

// Function GunfireRuntime.ActionBase.IsActionFinished
struct UActionBase_IsActionFinished_Params
{
};

// Function GunfireRuntime.ActionBase.GetTarget
struct UActionBase_GetTarget_Params
{
};

// Function GunfireRuntime.ActionBase.GetHitInfo
struct UActionBase_GetHitInfo_Params
{
};

// Function GunfireRuntime.ActionBase.GetDamageType
struct UActionBase_GetDamageType_Params
{
};

// Function GunfireRuntime.ActionBase.GetCauseOwner
struct UActionBase_GetCauseOwner_Params
{
};

// Function GunfireRuntime.ActionBase.GetCause
struct UActionBase_GetCause_Params
{
};

// Function GunfireRuntime.ActionBase.GetActionComponent
struct UActionBase_GetActionComponent_Params
{
};

// Function GunfireRuntime.ActionBase.FireProjectile
struct UActionBase_FireProjectile_Params
{
};

// Function GunfireRuntime.ActionBase.FinishAction
struct UActionBase_FinishAction_Params
{
};

// Function GunfireRuntime.ActionBase.DoInstantHit
struct UActionBase_DoInstantHit_Params
{
};

// Function GunfireRuntime.ActionBase.ApplyDamage
struct UActionBase_ApplyDamage_Params
{
};

// Function GunfireRuntime.ActionBase.AllowAction
struct UActionBase_AllowAction_Params
{
};

// Function GunfireRuntime.Item.ValidateAdd
struct AItem_ValidateAdd_Params
{
};

// Function GunfireRuntime.Item.SetQuantity
struct AItem_SetQuantity_Params
{
};

// Function GunfireRuntime.Item.SetLevel
struct AItem_SetLevel_Params
{
};

// Function GunfireRuntime.Item.PreAdd
struct AItem_PreAdd_Params
{
};

// Function GunfireRuntime.Item.PickupPreAdd
struct AItem_PickupPreAdd_Params
{
};

// Function GunfireRuntime.Item.OnRep_InstanceData
struct AItem_OnRep_InstanceData_Params
{
};

// Function GunfireRuntime.Item.OnPickupFailed
struct AItem_OnPickupFailed_Params
{
};

// Function GunfireRuntime.Item.OnPickedUp
struct AItem_OnPickedUp_Params
{
};

// Function GunfireRuntime.Item.OnDropped
struct AItem_OnDropped_Params
{
};

// Function GunfireRuntime.Item.ModifyInspectInfo
struct AItem_ModifyInspectInfo_Params
{
};

// Function GunfireRuntime.Item.InitializeLootFxForLocalPawn
struct AItem_InitializeLootFxForLocalPawn_Params
{
};

// Function GunfireRuntime.Item.GetQuantity
struct AItem_GetQuantity_Params
{
};

// Function GunfireRuntime.Item.GetMaxQuantity
struct AItem_GetMaxQuantity_Params
{
};

// Function GunfireRuntime.Item.GetLevel
struct AItem_GetLevel_Params
{
};

// Function GunfireRuntime.Item.GetInspectInfo
struct AItem_GetInspectInfo_Params
{
};

// Function GunfireRuntime.Item.DropBounce
struct AItem_DropBounce_Params
{
};

// Function GunfireRuntime.Item.Bounce
struct AItem_Bounce_Params
{
};

// Function GunfireRuntime.Equipment.ValidateEquip
struct AEquipment_ValidateEquip_Params
{
};

// Function GunfireRuntime.Equipment.Unequip
struct AEquipment_Unequip_Params
{
};

// Function GunfireRuntime.Equipment.SetInputEnabled
struct AEquipment_SetInputEnabled_Params
{
};

// Function GunfireRuntime.Equipment.SetInHand
struct AEquipment_SetInHand_Params
{
};

// Function GunfireRuntime.Equipment.SetAttachmentsVisible
struct AEquipment_SetAttachmentsVisible_Params
{
};

// Function GunfireRuntime.Equipment.ServerSetInHand
struct AEquipment_ServerSetInHand_Params
{
};

// Function GunfireRuntime.Equipment.ScaleStat
struct AEquipment_ScaleStat_Params
{
};

// Function GunfireRuntime.Equipment.PostSetupInventory
struct AEquipment_PostSetupInventory_Params
{
};

// Function GunfireRuntime.Equipment.PostComputeStats
struct AEquipment_PostComputeStats_Params
{
};

// Function GunfireRuntime.Equipment.PostComputeCharacterStats
struct AEquipment_PostComputeCharacterStats_Params
{
};

// Function GunfireRuntime.Equipment.PlayAnimation
struct AEquipment_PlayAnimation_Params
{
};

// Function GunfireRuntime.Equipment.OnUnequipped
struct AEquipment_OnUnequipped_Params
{
};

// Function GunfireRuntime.Equipment.OnTakeDamage
struct AEquipment_OnTakeDamage_Params
{
};

// Function GunfireRuntime.Equipment.OnPostComputeStats
struct AEquipment_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.Equipment.OnNotInHand
struct AEquipment_OnNotInHand_Params
{
};

// Function GunfireRuntime.Equipment.OnInHand
struct AEquipment_OnInHand_Params
{
};

// Function GunfireRuntime.Equipment.OnHitTarget
struct AEquipment_OnHitTarget_Params
{
};

// Function GunfireRuntime.Equipment.OnEquipped
struct AEquipment_OnEquipped_Params
{
};

// Function GunfireRuntime.Equipment.OnDetached
struct AEquipment_OnDetached_Params
{
};

// Function GunfireRuntime.Equipment.OnDeactivated
struct AEquipment_OnDeactivated_Params
{
};

// Function GunfireRuntime.Equipment.OnComputeStats
struct AEquipment_OnComputeStats_Params
{
};

// Function GunfireRuntime.Equipment.OnActivated
struct AEquipment_OnActivated_Params
{
};

// Function GunfireRuntime.Equipment.ModifyStat
struct AEquipment_ModifyStat_Params
{
};

// Function GunfireRuntime.Equipment.IsLocallyControlled
struct AEquipment_IsLocallyControlled_Params
{
};

// Function GunfireRuntime.Equipment.IsInHand
struct AEquipment_IsInHand_Params
{
};

// Function GunfireRuntime.Equipment.IsEquipped
struct AEquipment_IsEquipped_Params
{
};

// Function GunfireRuntime.Equipment.IsActive
struct AEquipment_IsActive_Params
{
};

// Function GunfireRuntime.Equipment.IsActionAllowed
struct AEquipment_IsActionAllowed_Params
{
};

// Function GunfireRuntime.Equipment.InstanceDataChanged
struct AEquipment_InstanceDataChanged_Params
{
};

// Function GunfireRuntime.Equipment.GetStat
struct AEquipment_GetStat_Params
{
};

// Function GunfireRuntime.Equipment.GetItemID
struct AEquipment_GetItemID_Params
{
};

// Function GunfireRuntime.Equipment.GetInventoryComponent
struct AEquipment_GetInventoryComponent_Params
{
};

// Function GunfireRuntime.Equipment.GetHud
struct AEquipment_GetHud_Params
{
};

// Function GunfireRuntime.Equipment.GetEquipmentSlotIdx
struct AEquipment_GetEquipmentSlotIdx_Params
{
};

// Function GunfireRuntime.Equipment.GetEquipmentMod
struct AEquipment_GetEquipmentMod_Params
{
};

// Function GunfireRuntime.Equipment.GetCurrentAnimation
struct AEquipment_GetCurrentAnimation_Params
{
};

// Function GunfireRuntime.Equipment.GetCharacter
struct AEquipment_GetCharacter_Params
{
};

// Function GunfireRuntime.Equipment.GetAttachedMods
struct AEquipment_GetAttachedMods_Params
{
};

// Function GunfireRuntime.Equipment.Detach
struct AEquipment_Detach_Params
{
};

// Function GunfireRuntime.Equipment.Deactivate
struct AEquipment_Deactivate_Params
{
};

// Function GunfireRuntime.Equipment.ComputeStats
struct AEquipment_ComputeStats_Params
{
};

// Function GunfireRuntime.Equipment.ComputeCharacterStats
struct AEquipment_ComputeCharacterStats_Params
{
};

// Function GunfireRuntime.Equipment.Activate
struct AEquipment_Activate_Params
{
};

// Function GunfireRuntime.Equipment._NotifyTakeDamage
struct AEquipment__NotifyTakeDamage_Params
{
};

// Function GunfireRuntime.Equipment._NotifyHitTarget
struct AEquipment__NotifyHitTarget_Params
{
};

// Function GunfireRuntime.UseableItem.ValidateUse
struct AUseableItem_ValidateUse_Params
{
};

// Function GunfireRuntime.UseableItem.UseItem
struct AUseableItem_UseItem_Params
{
};

// Function GunfireRuntime.UseableItem.Use
struct AUseableItem_Use_Params
{
};

// Function GunfireRuntime.UseableItem.ServerKeyPressed
struct AUseableItem_ServerKeyPressed_Params
{
};

// Function GunfireRuntime.UseableItem.RemoveItem
struct AUseableItem_RemoveItem_Params
{
};

// Function GunfireRuntime.UseableItem.OnUse
struct AUseableItem_OnUse_Params
{
};

// Function GunfireRuntime.UseableItem.MulticastSetState
struct AUseableItem_MulticastSetState_Params
{
};

// Function GunfireRuntime.ItemInstanceData.OnRep_InstanceData
struct UItemInstanceData_OnRep_InstanceData_Params
{
};

// Function GunfireRuntime.ItemType.QueryRelevantItems
struct UItemType_QueryRelevantItems_Params
{
};

// Function GunfireRuntime.ItemType.GetRelevantInventoriesForType
struct UItemType_GetRelevantInventoriesForType_Params
{
};

// Function GunfireRuntime.WeaponBase.GetProcChance
struct AWeaponBase_GetProcChance_Params
{
};

// Function GunfireRuntime.WeaponBase.GetImpactEffect
struct AWeaponBase_GetImpactEffect_Params
{
};

// Function GunfireRuntime.WeaponBase.GetAttackSpeed
struct AWeaponBase_GetAttackSpeed_Params
{
};

// Function GunfireRuntime.WeaponBase.ComputeDamage
struct AWeaponBase_ComputeDamage_Params
{
};

// Function GunfireRuntime.WeaponBase.AttemptProc
struct AWeaponBase_AttemptProc_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.UpdateLegIkEffector
struct UAnimInstanceGunfire_UpdateLegIkEffector_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.StopAnimation
struct UAnimInstanceGunfire_StopAnimation_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.SetParentAnimInstance
struct UAnimInstanceGunfire_SetParentAnimInstance_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.RemoveLegIkEffector
struct UAnimInstanceGunfire_RemoveLegIkEffector_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.RemoveChildAnimInstance
struct UAnimInstanceGunfire_RemoveChildAnimInstance_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.RemoveAnimationTag
struct UAnimInstanceGunfire_RemoveAnimationTag_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.PlayAnimationByID
struct UAnimInstanceGunfire_PlayAnimationByID_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.HasAnimationTag
struct UAnimInstanceGunfire_HasAnimationTag_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetStateMachine
struct UAnimInstanceGunfire_GetStateMachine_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetMoveInputDir
struct UAnimInstanceGunfire_GetMoveInputDir_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetMoveDir
struct UAnimInstanceGunfire_GetMoveDir_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetMasterAnimInstance
struct UAnimInstanceGunfire_GetMasterAnimInstance_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetLegIkEffector
struct UAnimInstanceGunfire_GetLegIkEffector_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetHeading
struct UAnimInstanceGunfire_GetHeading_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.GetAimAngles
struct UAnimInstanceGunfire_GetAimAngles_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.EnableLookPoses
struct UAnimInstanceGunfire_EnableLookPoses_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.CompareAngles
struct UAnimInstanceGunfire_CompareAngles_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.AreLookPosesDisabled
struct UAnimInstanceGunfire_AreLookPosesDisabled_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.AddChildAnimInstance
struct UAnimInstanceGunfire_AddChildAnimInstance_Params
{
};

// Function GunfireRuntime.AnimInstanceGunfire.AddAnimationTag
struct UAnimInstanceGunfire_AddAnimationTag_Params
{
};

// Function GunfireRuntime.TraitsComponent.UnlockTrait
struct UTraitsComponent_UnlockTrait_Params
{
};

// Function GunfireRuntime.TraitsComponent.SetTraitLevel
struct UTraitsComponent_SetTraitLevel_Params
{
};

// Function GunfireRuntime.TraitsComponent.SetAllTraitLevels
struct UTraitsComponent_SetAllTraitLevels_Params
{
};

// Function GunfireRuntime.TraitsComponent.ServerUnlockTrait
struct UTraitsComponent_ServerUnlockTrait_Params
{
};

// Function GunfireRuntime.TraitsComponent.Purchase
struct UTraitsComponent_Purchase_Params
{
};

// Function GunfireRuntime.TraitsComponent.OnRep_Traits
struct UTraitsComponent_OnRep_Traits_Params
{
};

// Function GunfireRuntime.TraitsComponent.OnRep_TraitPointsSpent
struct UTraitsComponent_OnRep_TraitPointsSpent_Params
{
};

// Function GunfireRuntime.TraitsComponent.OnRep_TraitPoints
struct UTraitsComponent_OnRep_TraitPoints_Params
{
};

// Function GunfireRuntime.TraitsComponent.OnLevelUp
struct UTraitsComponent_OnLevelUp_Params
{
};

// Function GunfireRuntime.TraitsComponent.OnComputeStats
struct UTraitsComponent_OnComputeStats_Params
{
};

// Function GunfireRuntime.TraitsComponent.HasTraitByName
struct UTraitsComponent_HasTraitByName_Params
{
};

// Function GunfireRuntime.TraitsComponent.HasTrait
struct UTraitsComponent_HasTrait_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetTraitLevel
struct UTraitsComponent_GetTraitLevel_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetTotalTraitLevels
struct UTraitsComponent_GetTotalTraitLevels_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetProgression
struct UTraitsComponent_GetProgression_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetAvailableTraits
struct UTraitsComponent_GetAvailableTraits_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetAvailableTraitPoints
struct UTraitsComponent_GetAvailableTraitPoints_Params
{
};

// Function GunfireRuntime.TraitsComponent.GetAllTraits
struct UTraitsComponent_GetAllTraits_Params
{
};

// Function GunfireRuntime.TraitsComponent.Equip
struct UTraitsComponent_Equip_Params
{
};

// Function GunfireRuntime.TraitsComponent.CanPurchase
struct UTraitsComponent_CanPurchase_Params
{
};

// Function GunfireRuntime.TraitsComponent.CanEquip
struct UTraitsComponent_CanEquip_Params
{
};

// Function GunfireRuntime.TraitsComponent.AddTraitPoints
struct UTraitsComponent_AddTraitPoints_Params
{
};

// Function GunfireRuntime.TraitsComponent.AddTrait
struct UTraitsComponent_AddTrait_Params
{
};

// Function GunfireRuntime.PlayerStateGunfire.GetPlayerPawn
struct APlayerStateGunfire_GetPlayerPawn_Params
{
};

// Function GunfireRuntime.PlayerStateGunfire.GetPlayerCharacter
struct APlayerStateGunfire_GetPlayerCharacter_Params
{
};

// Function GunfireRuntime.PlayerStateGunfire.GetIsTalking
struct APlayerStateGunfire_GetIsTalking_Params
{
};

// Function GunfireRuntime.RangedWeapon.TriggerSoundAwareness
struct ARangedWeapon_TriggerSoundAwareness_Params
{
};

// Function GunfireRuntime.RangedWeapon.ToggleScopeInput
struct ARangedWeapon_ToggleScopeInput_Params
{
};

// Function GunfireRuntime.RangedWeapon.SetFireInput
struct ARangedWeapon_SetFireInput_Params
{
};

// Function GunfireRuntime.RangedWeapon.ServerSetState
struct ARangedWeapon_ServerSetState_Params
{
};

// Function GunfireRuntime.RangedWeapon.ServerFire
struct ARangedWeapon_ServerFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.Reload
struct ARangedWeapon_Reload_Params
{
};

// Function GunfireRuntime.RangedWeapon.PlayMuzzleFX
struct ARangedWeapon_PlayMuzzleFX_Params
{
};

// Function GunfireRuntime.RangedWeapon.PlayFireAnimation
struct ARangedWeapon_PlayFireAnimation_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnScopeInputPressed
struct ARangedWeapon_OnScopeInputPressed_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnReloaded
struct ARangedWeapon_OnReloaded_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnPreFireEnd
struct ARangedWeapon_OnPreFireEnd_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnPreFireBegin
struct ARangedWeapon_OnPreFireBegin_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnFireEnd
struct ARangedWeapon_OnFireEnd_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnFireBegin
struct ARangedWeapon_OnFireBegin_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnFire
struct ARangedWeapon_OnFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnFinishLoadingScopePostProcess
struct ARangedWeapon_OnFinishLoadingScopePostProcess_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnDoubleClickScopeInputReleased
struct ARangedWeapon_OnDoubleClickScopeInputReleased_Params
{
};

// Function GunfireRuntime.RangedWeapon.OnDoubleClickScopeInputPressed
struct ARangedWeapon_OnDoubleClickScopeInputPressed_Params
{
};

// Function GunfireRuntime.RangedWeapon.MulticastSetStateNS
struct ARangedWeapon_MulticastSetStateNS_Params
{
};

// Function GunfireRuntime.RangedWeapon.MulticastSetState
struct ARangedWeapon_MulticastSetState_Params
{
};

// Function GunfireRuntime.RangedWeapon.MulticastFire
struct ARangedWeapon_MulticastFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsScopeInputEnabled
struct ARangedWeapon_IsScopeInputEnabled_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsReloading
struct ARangedWeapon_IsReloading_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsFiring
struct ARangedWeapon_IsFiring_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsBusy
struct ARangedWeapon_IsBusy_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsAimingWithScope
struct ARangedWeapon_IsAimingWithScope_Params
{
};

// Function GunfireRuntime.RangedWeapon.IsAiming
struct ARangedWeapon_IsAiming_Params
{
};

// Function GunfireRuntime.RangedWeapon.HasScope
struct ARangedWeapon_HasScope_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetWeaponMode
struct ARangedWeapon_GetWeaponMode_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetSprayCount
struct ARangedWeapon_GetSprayCount_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetScopeFOV
struct ARangedWeapon_GetScopeFOV_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetRateOfFire
struct ARangedWeapon_GetRateOfFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetRange
struct ARangedWeapon_GetRange_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetRandomStream
struct ARangedWeapon_GetRandomStream_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetProjectileVisualization
struct ARangedWeapon_GetProjectileVisualization_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetNormalizedSpread
struct ARangedWeapon_GetNormalizedSpread_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetMuzzleObstruction
struct ARangedWeapon_GetMuzzleObstruction_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetMuzzleFXPointAndDirection
struct ARangedWeapon_GetMuzzleFXPointAndDirection_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetMaxAmmo
struct ARangedWeapon_GetMaxAmmo_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetFalloff
struct ARangedWeapon_GetFalloff_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetDamageScalar
struct ARangedWeapon_GetDamageScalar_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetCurrentSpread
struct ARangedWeapon_GetCurrentSpread_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetBurstRateOfFire
struct ARangedWeapon_GetBurstRateOfFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetBurstCount
struct ARangedWeapon_GetBurstCount_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAmmoPerReload
struct ARangedWeapon_GetAmmoPerReload_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAmmoPerClip
struct ARangedWeapon_GetAmmoPerClip_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAmmoInClip
struct ARangedWeapon_GetAmmoInClip_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAmmo
struct ARangedWeapon_GetAmmo_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAimVector
struct ARangedWeapon_GetAimVector_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAimTargetLocation
struct ARangedWeapon_GetAimTargetLocation_Params
{
};

// Function GunfireRuntime.RangedWeapon.GetAimTarget
struct ARangedWeapon_GetAimTarget_Params
{
};

// Function GunfireRuntime.RangedWeapon.FireProjectile
struct ARangedWeapon_FireProjectile_Params
{
};

// Function GunfireRuntime.RangedWeapon.FillClip
struct ARangedWeapon_FillClip_Params
{
};

// Function GunfireRuntime.RangedWeapon.EndUse
struct ARangedWeapon_EndUse_Params
{
};

// Function GunfireRuntime.RangedWeapon.DoInstantHit
struct ARangedWeapon_DoInstantHit_Params
{
};

// Function GunfireRuntime.RangedWeapon.DoImpact
struct ARangedWeapon_DoImpact_Params
{
};

// Function GunfireRuntime.RangedWeapon.ConsumeAmmo
struct ARangedWeapon_ConsumeAmmo_Params
{
};

// Function GunfireRuntime.RangedWeapon.ClearDoubleClickTimer
struct ARangedWeapon_ClearDoubleClickTimer_Params
{
};

// Function GunfireRuntime.RangedWeapon.CanStopAiming
struct ARangedWeapon_CanStopAiming_Params
{
};

// Function GunfireRuntime.RangedWeapon.CanReload
struct ARangedWeapon_CanReload_Params
{
};

// Function GunfireRuntime.RangedWeapon.CanFire
struct ARangedWeapon_CanFire_Params
{
};

// Function GunfireRuntime.RangedWeapon.BeginUse
struct ARangedWeapon_BeginUse_Params
{
};

// Function GunfireRuntime.RangedWeapon.BeginReload
struct ARangedWeapon_BeginReload_Params
{
};

// Function GunfireRuntime.RangedWeapon.ApplySpread
struct ARangedWeapon_ApplySpread_Params
{
};

// Function GunfireRuntime.RangedWeapon.ApplyRecoil
struct ARangedWeapon_ApplyRecoil_Params
{
};

// Function GunfireRuntime.RangedWeapon.AddAmmo
struct ARangedWeapon_AddAmmo_Params
{
};

// Function GunfireRuntime.CharacterGunfire.StopWeaponPhantom
struct ACharacterGunfire_StopWeaponPhantom_Params
{
};

// Function GunfireRuntime.CharacterGunfire.StopAllWeaponPhantoms
struct ACharacterGunfire_StopAllWeaponPhantoms_Params
{
};

// Function GunfireRuntime.CharacterGunfire.StartWeaponPhantom
struct ACharacterGunfire_StartWeaponPhantom_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SortTags
struct ACharacterGunfire_SortTags_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetWeaponPhantomsSuspended
struct ACharacterGunfire_SetWeaponPhantomsSuspended_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetTarget
struct ACharacterGunfire_SetTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetIsTargetable
struct ACharacterGunfire_SetIsTargetable_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetHealth
struct ACharacterGunfire_SetHealth_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetGlobalCooldown
struct ACharacterGunfire_SetGlobalCooldown_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetFaction
struct ACharacterGunfire_SetFaction_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetCooldown
struct ACharacterGunfire_SetCooldown_Params
{
};

// Function GunfireRuntime.CharacterGunfire.SetAimTarget
struct ACharacterGunfire_SetAimTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ServerSetAimTarget
struct ACharacterGunfire_ServerSetAimTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ScaleStat
struct ACharacterGunfire_ScaleStat_Params
{
};

// Function GunfireRuntime.CharacterGunfire.RestoreAggroGroup
struct ACharacterGunfire_RestoreAggroGroup_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ResetHealth
struct ACharacterGunfire_ResetHealth_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ResetClothingSimulation
struct ACharacterGunfire_ResetClothingSimulation_Params
{
};

// Function GunfireRuntime.CharacterGunfire.RemoveTag
struct ACharacterGunfire_RemoveTag_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ReinitializeCloth
struct ACharacterGunfire_ReinitializeCloth_Params
{
};

// Function GunfireRuntime.CharacterGunfire.Ragdoll
struct ACharacterGunfire_Ragdoll_Params
{
};

// Function GunfireRuntime.CharacterGunfire.PostComputeStats
struct ACharacterGunfire_PostComputeStats_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnRep_Target
struct ACharacterGunfire_OnRep_Target_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnRep_Health
struct ACharacterGunfire_OnRep_Health_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnRagdollHit
struct ACharacterGunfire_OnRagdollHit_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnPostComputeStats
struct ACharacterGunfire_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnLocallyControlled
struct ACharacterGunfire_OnLocallyControlled_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnGameViewportFocusChanged
struct ACharacterGunfire_OnGameViewportFocusChanged_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnComputeStats
struct ACharacterGunfire_OnComputeStats_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnCharacterStateChanged
struct ACharacterGunfire_OnCharacterStateChanged_Params
{
};

// Function GunfireRuntime.CharacterGunfire.OnCharacterDead
struct ACharacterGunfire_OnCharacterDead_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ModifyStat
struct ACharacterGunfire_ModifyStat_Params
{
};

// Function GunfireRuntime.CharacterGunfire.MarkActorHit
struct ACharacterGunfire_MarkActorHit_Params
{
};

// Function GunfireRuntime.CharacterGunfire.IsWounded
struct ACharacterGunfire_IsWounded_Params
{
};

// Function GunfireRuntime.CharacterGunfire.IsEditor
struct ACharacterGunfire_IsEditor_Params
{
};

// Function GunfireRuntime.CharacterGunfire.IsCinematicCharacter
struct ACharacterGunfire_IsCinematicCharacter_Params
{
};

// Function GunfireRuntime.CharacterGunfire.IsAlive
struct ACharacterGunfire_IsAlive_Params
{
};

// Function GunfireRuntime.CharacterGunfire.HitPause
struct ACharacterGunfire_HitPause_Params
{
};

// Function GunfireRuntime.CharacterGunfire.HasRecentlyHitActor
struct ACharacterGunfire_HasRecentlyHitActor_Params
{
};

// Function GunfireRuntime.CharacterGunfire.HasAnyOverlappingDamageable
struct ACharacterGunfire_HasAnyOverlappingDamageable_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetViewRotation
struct ACharacterGunfire_GetViewRotation_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetTarget
struct ACharacterGunfire_GetTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetStateMachine
struct ACharacterGunfire_GetStateMachine_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetStat
struct ACharacterGunfire_GetStat_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetIsTargetable
struct ACharacterGunfire_GetIsTargetable_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetInspectStatInfo
struct ACharacterGunfire_GetInspectStatInfo_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetInspectInfo
struct ACharacterGunfire_GetInspectInfo_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetHealthPercentage
struct ACharacterGunfire_GetHealthPercentage_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetHealthMax
struct ACharacterGunfire_GetHealthMax_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetHealth
struct ACharacterGunfire_GetHealth_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetCooldownPct
struct ACharacterGunfire_GetCooldownPct_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetCharacterInventory
struct ACharacterGunfire_GetCharacterInventory_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetAimTarget
struct ACharacterGunfire_GetAimTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.GetAggroGroup
struct ACharacterGunfire_GetAggroGroup_Params
{
};

// Function GunfireRuntime.CharacterGunfire.EnableClothingSimulation
struct ACharacterGunfire_EnableClothingSimulation_Params
{
};

// Function GunfireRuntime.CharacterGunfire.DisableClothingSimulation
struct ACharacterGunfire_DisableClothingSimulation_Params
{
};

// Function GunfireRuntime.CharacterGunfire.DifficultyChanged
struct ACharacterGunfire_DifficultyChanged_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ComputeStats
struct ACharacterGunfire_ComputeStats_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ClientNotifyTakeDamage
struct ACharacterGunfire_ClientNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ClientNotifyHitTarget
struct ACharacterGunfire_ClientNotifyHitTarget_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ClearAggroGroup
struct ACharacterGunfire_ClearAggroGroup_Params
{
};

// Function GunfireRuntime.CharacterGunfire.CheckTags
struct ACharacterGunfire_CheckTags_Params
{
};

// Function GunfireRuntime.CharacterGunfire.CheckTag
struct ACharacterGunfire_CheckTag_Params
{
};

// Function GunfireRuntime.CharacterGunfire.CheckCooldown
struct ACharacterGunfire_CheckCooldown_Params
{
};

// Function GunfireRuntime.CharacterGunfire.AreWeaponPhantomsSuspended
struct ACharacterGunfire_AreWeaponPhantomsSuspended_Params
{
};

// Function GunfireRuntime.CharacterGunfire.AreCharacterOptimizationsEnabled
struct ACharacterGunfire_AreCharacterOptimizationsEnabled_Params
{
};

// Function GunfireRuntime.CharacterGunfire.ApplyHealthDelta
struct ACharacterGunfire_ApplyHealthDelta_Params
{
};

// Function GunfireRuntime.CharacterGunfire.AddTag
struct ACharacterGunfire_AddTag_Params
{
};

// Function GunfireRuntime.CharacterGunfire.AddAggroGroup
struct ACharacterGunfire_AddAggroGroup_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.UnlockAllTraits
struct UCheatManagerGunfire_UnlockAllTraits_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.ToggleSecondaryFlyCamera
struct UCheatManagerGunfire_ToggleSecondaryFlyCamera_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.TogglePrimaryFlyCamera
struct UCheatManagerGunfire_TogglePrimaryFlyCamera_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.ToggleFollowPlayer
struct UCheatManagerGunfire_ToggleFollowPlayer_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.TakeScreenShotWithDimensions
struct UCheatManagerGunfire_TakeScreenShotWithDimensions_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.TakeScreenShotCurrentResolutionScaled
struct UCheatManagerGunfire_TakeScreenShotCurrentResolutionScaled_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.SpawnCharacter
struct UCheatManagerGunfire_SpawnCharacter_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.SetPlayerState
struct UCheatManagerGunfire_SetPlayerState_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.SetPlayerNormalizedHealth
struct UCheatManagerGunfire_SetPlayerNormalizedHealth_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.SetKillRadius
struct UCheatManagerGunfire_SetKillRadius_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.SendCommandToConsole
struct UCheatManagerGunfire_SendCommandToConsole_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.RemoveItem
struct UCheatManagerGunfire_RemoveItem_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.OnUseDebugCommandKey
struct UCheatManagerGunfire_OnUseDebugCommandKey_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.OnReleaseDebugCommandKey
struct UCheatManagerGunfire_OnReleaseDebugCommandKey_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.KillNearbyEnemies
struct UCheatManagerGunfire_KillNearbyEnemies_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.IncreasePlayerLevel
struct UCheatManagerGunfire_IncreasePlayerLevel_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GiveItem
struct UCheatManagerGunfire_GiveItem_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GiveAllItems
struct UCheatManagerGunfire_GiveAllItems_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GetInputDescriptorForCheat
struct UCheatManagerGunfire_GetInputDescriptorForCheat_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GetConsoleCommands
struct UCheatManagerGunfire_GetConsoleCommands_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GetConsoleCommandDescription
struct UCheatManagerGunfire_GetConsoleCommandDescription_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GetConsoleCommandCategories
struct UCheatManagerGunfire_GetConsoleCommandCategories_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.GetAllCheats
struct UCheatManagerGunfire_GetAllCheats_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.ForceCrash
struct UCheatManagerGunfire_ForceCrash_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.ExecuteCheat
struct UCheatManagerGunfire_ExecuteCheat_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.EnablePrimaryFlyCamera
struct UCheatManagerGunfire_EnablePrimaryFlyCamera_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.DropItem
struct UCheatManagerGunfire_DropItem_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.DoAction
struct UCheatManagerGunfire_DoAction_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.ClearAllDialogs
struct UCheatManagerGunfire_ClearAllDialogs_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.AreCheatsEnabled
struct UCheatManagerGunfire_AreCheatsEnabled_Params
{
};

// Function GunfireRuntime.CheatManagerGunfire.AddTrait
struct UCheatManagerGunfire_AddTrait_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.SetNumPlayers
struct UDifficultyScalingComponent_SetNumPlayers_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.SetLevelOverride
struct UDifficultyScalingComponent_SetLevelOverride_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.SetDifficultyScalingTableOverride
struct UDifficultyScalingComponent_SetDifficultyScalingTableOverride_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.SetDifficulty
struct UDifficultyScalingComponent_SetDifficulty_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.RemoveExternalStatModifier
struct UDifficultyScalingComponent_RemoveExternalStatModifier_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.Invalidate
struct UDifficultyScalingComponent_Invalidate_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetSpawnQuantityScalar
struct UDifficultyScalingComponent_GetSpawnQuantityScalar_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetNumPlayers
struct UDifficultyScalingComponent_GetNumPlayers_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetLevelForActor
struct UDifficultyScalingComponent_GetLevelForActor_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetLevel
struct UDifficultyScalingComponent_GetLevel_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetItemLevelForActor
struct UDifficultyScalingComponent_GetItemLevelForActor_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetItemLevel
struct UDifficultyScalingComponent_GetItemLevel_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetExperienceScalar
struct UDifficultyScalingComponent_GetExperienceScalar_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetEnemyHealthScalar
struct UDifficultyScalingComponent_GetEnemyHealthScalar_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetEnemyDamageScalar
struct UDifficultyScalingComponent_GetEnemyDamageScalar_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetDifficultyScalingComponent
struct UDifficultyScalingComponent_GetDifficultyScalingComponent_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetDifficulty
struct UDifficultyScalingComponent_GetDifficulty_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.GetCurrencyScalar
struct UDifficultyScalingComponent_GetCurrencyScalar_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.ComputeStats
struct UDifficultyScalingComponent_ComputeStats_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.ClearExternalStatModifiers
struct UDifficultyScalingComponent_ClearExternalStatModifiers_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.ClearDifficultyScalingTableOverride
struct UDifficultyScalingComponent_ClearDifficultyScalingTableOverride_Params
{
};

// Function GunfireRuntime.DifficultyScalingComponent.AddExternalStatModifier
struct UDifficultyScalingComponent_AddExternalStatModifier_Params
{
};

// Function GunfireRuntime.CameraState.ValidateCameraActor
struct UCameraState_ValidateCameraActor_Params
{
};

// Function GunfireRuntime.CameraState.OnUpdate
struct UCameraState_OnUpdate_Params
{
};

// Function GunfireRuntime.CameraState.OnLeave
struct UCameraState_OnLeave_Params
{
};

// Function GunfireRuntime.CameraState.OnEnter
struct UCameraState_OnEnter_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.ToggeleFogOfWar
struct UFogOfWarComponent_ToggeleFogOfWar_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.ShowVisitedCoordinates
struct UFogOfWarComponent_ShowVisitedCoordinates_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.SetFogOfWar
struct UFogOfWarComponent_SetFogOfWar_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.Init
struct UFogOfWarComponent_Init_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.HasFogOfWar
struct UFogOfWarComponent_HasFogOfWar_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.GetWorldMaxDimension
struct UFogOfWarComponent_GetWorldMaxDimension_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.GetWorldBounds
struct UFogOfWarComponent_GetWorldBounds_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.GetVisibilityAtLocation
struct UFogOfWarComponent_GetVisibilityAtLocation_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.GetLocationAtCoordinate
struct UFogOfWarComponent_GetLocationAtCoordinate_Params
{
};

// Function GunfireRuntime.FogOfWarComponent.AddVisibleLocation
struct UFogOfWarComponent_AddVisibleLocation_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.QuitToMainMenu
struct UGameInstanceGunfire_QuitToMainMenu_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.OnShutdown
struct UGameInstanceGunfire_OnShutdown_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.OnPreQuitToMainMenu
struct UGameInstanceGunfire_OnPreQuitToMainMenu_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.IsSaving
struct UGameInstanceGunfire_IsSaving_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.IsInGameplay
struct UGameInstanceGunfire_IsInGameplay_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.ImmediatelyFadeScreen
struct UGameInstanceGunfire_ImmediatelyFadeScreen_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.GetLocalPlayerPawn
struct UGameInstanceGunfire_GetLocalPlayerPawn_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.GetInstance
struct UGameInstanceGunfire_GetInstance_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.GetAssetCache
struct UGameInstanceGunfire_GetAssetCache_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.FadeScreen
struct UGameInstanceGunfire_FadeScreen_Params
{
};

// Function GunfireRuntime.GameInstanceGunfire.CanSave
struct UGameInstanceGunfire_CanSave_Params
{
};

// Function GunfireRuntime.GameModeGunfire.RemoveLevelInstanceByName
struct AGameModeGunfire_RemoveLevelInstanceByName_Params
{
};

// Function GunfireRuntime.GameModeGunfire.RemoveLevelInstance
struct AGameModeGunfire_RemoveLevelInstance_Params
{
};

// Function GunfireRuntime.GameModeGunfire.OnPlayerDied
struct AGameModeGunfire_OnPlayerDied_Params
{
};

// Function GunfireRuntime.GameModeGunfire.GetPlayableLevelCollection
struct AGameModeGunfire_GetPlayableLevelCollection_Params
{
};

// Function GunfireRuntime.GameModeGunfire.GetPlayableLevelByPath
struct AGameModeGunfire_GetPlayableLevelByPath_Params
{
};

// Function GunfireRuntime.GameModeGunfire.GetPlayableLevelByName
struct AGameModeGunfire_GetPlayableLevelByName_Params
{
};

// Function GunfireRuntime.GameModeGunfire.GetLevelInstance
struct AGameModeGunfire_GetLevelInstance_Params
{
};

// Function GunfireRuntime.GameModeGunfire.ApplyDamage
struct AGameModeGunfire_ApplyDamage_Params
{
};

// Function GunfireRuntime.GameModeGunfire.AddPlayableLevel
struct AGameModeGunfire_AddPlayableLevel_Params
{
};

// Function GunfireRuntime.GameModeGunfire.AddLevelInstance
struct AGameModeGunfire_AddLevelInstance_Params
{
};

// Function GunfireRuntime.GameStateGunfire.StartMatch
struct AGameStateGunfire_StartMatch_Params
{
};

// Function GunfireRuntime.GameStateGunfire.GetGunfireGameState
struct AGameStateGunfire_GetGunfireGameState_Params
{
};

// Function GunfireRuntime.UIHud.UnloadLargeIcons
struct AUIHud_UnloadLargeIcons_Params
{
};

// Function GunfireRuntime.UIHud.SetVisibility
struct AUIHud_SetVisibility_Params
{
};

// Function GunfireRuntime.UIHud.SetDialog
struct AUIHud_SetDialog_Params
{
};

// Function GunfireRuntime.UIHud.PushUIActor
struct AUIHud_PushUIActor_Params
{
};

// Function GunfireRuntime.UIHud.PopUIActor
struct AUIHud_PopUIActor_Params
{
};

// Function GunfireRuntime.UIHud.PawnChanged
struct AUIHud_PawnChanged_Params
{
};

// Function GunfireRuntime.UIHud.OnSetVisbility
struct AUIHud_OnSetVisbility_Params
{
};

// Function GunfireRuntime.UIHud.OnHudEvent
struct AUIHud_OnHudEvent_Params
{
};

// Function GunfireRuntime.UIHud.OnDialogEnd
struct AUIHud_OnDialogEnd_Params
{
};

// Function GunfireRuntime.UIHud.OnDialogBegin
struct AUIHud_OnDialogBegin_Params
{
};

// Function GunfireRuntime.UIHud.LoadLargeIcons
struct AUIHud_LoadLargeIcons_Params
{
};

// Function GunfireRuntime.UIHud.IsVisible
struct AUIHud_IsVisible_Params
{
};

// Function GunfireRuntime.UIHud.InsertUIActor
struct AUIHud_InsertUIActor_Params
{
};

// Function GunfireRuntime.UIHud.GetTopInputActor
struct AUIHud_GetTopInputActor_Params
{
};

// Function GunfireRuntime.UIHud.GetDialog
struct AUIHud_GetDialog_Params
{
};

// Function GunfireRuntime.UIHud.GetCurrentDialog
struct AUIHud_GetCurrentDialog_Params
{
};

// Function GunfireRuntime.UIHud.GetControllingPawn
struct AUIHud_GetControllingPawn_Params
{
};

// Function GunfireRuntime.UIHud.EndDialog
struct AUIHud_EndDialog_Params
{
};

// Function GunfireRuntime.UIHud.EndAllDialogs
struct AUIHud_EndAllDialogs_Params
{
};

// Function GunfireRuntime.UIHud.BeginDialog
struct AUIHud_BeginDialog_Params
{
};

// Function GunfireRuntime.UIHud.AddUIToActorStack
struct AUIHud_AddUIToActorStack_Params
{
};

// Function GunfireRuntime.MapGenComponent.OnStartedVisualLogger
struct UMapGenComponent_OnStartedVisualLogger_Params
{
};

// Function GunfireRuntime.MapGenComponent.OnRep_TilesBase
struct UMapGenComponent_OnRep_TilesBase_Params
{
};

// Function GunfireRuntime.MapGenComponent.OnRep_MapACVClass
struct UMapGenComponent_OnRep_MapACVClass_Params
{
};

// Function GunfireRuntime.MapGenComponent.IsTileVisited
struct UMapGenComponent_IsTileVisited_Params
{
};

// Function GunfireRuntime.MapGenComponent.IsTileActive
struct UMapGenComponent_IsTileActive_Params
{
};

// Function GunfireRuntime.MapGenComponent.IsPositionInTile
struct UMapGenComponent_IsPositionInTile_Params
{
};

// Function GunfireRuntime.MapGenComponent.IsEdgeOpen
struct UMapGenComponent_IsEdgeOpen_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetTileSet
struct UMapGenComponent_GetTileSet_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetTileForActor
struct UMapGenComponent_GetTileForActor_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetTileDistance
struct UMapGenComponent_GetTileDistance_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetTileAtPosition
struct UMapGenComponent_GetTileAtPosition_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetSpawnTagsAtPosition
struct UMapGenComponent_GetSpawnTagsAtPosition_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetMapGenLevelForActor
struct UMapGenComponent_GetMapGenLevelForActor_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetMapGenDebugState
struct UMapGenComponent_GetMapGenDebugState_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetMapGenAttributeForActor
struct UMapGenComponent_GetMapGenAttributeForActor_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetMapACV
struct UMapGenComponent_GetMapACV_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetLevelMaxSize
struct UMapGenComponent_GetLevelMaxSize_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetLevelCenter
struct UMapGenComponent_GetLevelCenter_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetLevelBounds
struct UMapGenComponent_GetLevelBounds_Params
{
};

// Function GunfireRuntime.MapGenComponent.GetAttribute
struct UMapGenComponent_GetAttribute_Params
{
};

// Function GunfireRuntime.MapGenComponent.FindMapGenComponentForActor
struct UMapGenComponent_FindMapGenComponentForActor_Params
{
};

// Function GunfireRuntime.MapGenComponent.AddAttribute
struct UMapGenComponent_AddAttribute_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.WorldToMapScale
struct AMiniMapDisplayActor_WorldToMapScale_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.WorldToMapCoord
struct AMiniMapDisplayActor_WorldToMapCoord_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.UnregisterMiniMapPanel
struct AMiniMapDisplayActor_UnregisterMiniMapPanel_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.SetOriginLocation
struct AMiniMapDisplayActor_SetOriginLocation_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.SetOrigin
struct AMiniMapDisplayActor_SetOrigin_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.SetMiniMapMode
struct AMiniMapDisplayActor_SetMiniMapMode_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.SetIsIndicator
struct AMiniMapDisplayActor_SetIsIndicator_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.SetDisplayLevel
struct AMiniMapDisplayActor_SetDisplayLevel_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerSetScale
struct AMiniMapDisplayActor_ServerSetScale_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerSetPanOffset
struct AMiniMapDisplayActor_ServerSetPanOffset_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerSelect
struct AMiniMapDisplayActor_ServerSelect_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerScaleTo
struct AMiniMapDisplayActor_ServerScaleTo_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerPanTo
struct AMiniMapDisplayActor_ServerPanTo_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerDeSelectAll
struct AMiniMapDisplayActor_ServerDeSelectAll_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ServerDeSelect
struct AMiniMapDisplayActor_ServerDeSelect_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.Select
struct AMiniMapDisplayActor_Select_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.ScaleTo
struct AMiniMapDisplayActor_ScaleTo_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.Scale
struct AMiniMapDisplayActor_Scale_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.Rotate
struct AMiniMapDisplayActor_Rotate_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.RegisterMiniMapPanel
struct AMiniMapDisplayActor_RegisterMiniMapPanel_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.PanToActor
struct AMiniMapDisplayActor_PanToActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.PanTo
struct AMiniMapDisplayActor_PanTo_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.Pan
struct AMiniMapDisplayActor_Pan_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnScale
struct AMiniMapDisplayActor_OnScale_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnRotate
struct AMiniMapDisplayActor_OnRotate_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnRep_SelectedActors
struct AMiniMapDisplayActor_OnRep_SelectedActors_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnRemoveMiniMapActor
struct AMiniMapDisplayActor_OnRemoveMiniMapActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnPreInitMap
struct AMiniMapDisplayActor_OnPreInitMap_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnPostInitMap
struct AMiniMapDisplayActor_OnPostInitMap_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnPan
struct AMiniMapDisplayActor_OnPan_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnMiniMapActorRemoved
struct AMiniMapDisplayActor_OnMiniMapActorRemoved_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnMiniMapActorLevelChanged
struct AMiniMapDisplayActor_OnMiniMapActorLevelChanged_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnMiniMapActorAdded
struct AMiniMapDisplayActor_OnMiniMapActorAdded_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.OnAddMiniMapActor
struct AMiniMapDisplayActor_OnAddMiniMapActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.MulticastSelectDeselect
struct AMiniMapDisplayActor_MulticastSelectDeselect_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.MapToWorldScale
struct AMiniMapDisplayActor_MapToWorldScale_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.MapToWorldCoord
struct AMiniMapDisplayActor_MapToWorldCoord_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.IsSelected
struct AMiniMapDisplayActor_IsSelected_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.IsActorOnMiniMap
struct AMiniMapDisplayActor_IsActorOnMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.InitMap
struct AMiniMapDisplayActor_InitMap_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetWidgetsForActor
struct AMiniMapDisplayActor_GetWidgetsForActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetTotalBoundingBox
struct AMiniMapDisplayActor_GetTotalBoundingBox_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetSelectedActors
struct AMiniMapDisplayActor_GetSelectedActors_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetSelectedActor
struct AMiniMapDisplayActor_GetSelectedActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetMiniMapScreenWindow
struct AMiniMapDisplayActor_GetMiniMapScreenWindow_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetMiniMapScreenTransform
struct AMiniMapDisplayActor_GetMiniMapScreenTransform_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetMiniMapRefActor
struct AMiniMapDisplayActor_GetMiniMapRefActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetMinimapActors
struct AMiniMapDisplayActor_GetMinimapActors_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetMiniMapActorFor
struct AMiniMapDisplayActor_GetMiniMapActorFor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetLockedActor
struct AMiniMapDisplayActor_GetLockedActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetDisplayLevel
struct AMiniMapDisplayActor_GetDisplayLevel_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetActorByContext
struct AMiniMapDisplayActor_GetActorByContext_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.GetActor
struct AMiniMapDisplayActor_GetActor_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.DeSelectAll
struct AMiniMapDisplayActor_DeSelectAll_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.DeSelect
struct AMiniMapDisplayActor_DeSelect_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.CenterToOrigin
struct AMiniMapDisplayActor_CenterToOrigin_Params
{
};

// Function GunfireRuntime.MiniMapDisplayActor.Center
struct AMiniMapDisplayActor_Center_Params
{
};

// Function GunfireRuntime.MiniMapLevelRegion.IsInRegion
struct AMiniMapLevelRegion_IsInRegion_Params
{
};

// Function GunfireRuntime.MiniMapLevelRegion.GetRegionLevel
struct AMiniMapLevelRegion_GetRegionLevel_Params
{
};

// Function GunfireRuntime.MiniMapLevelRegion.AreConcurrentMiniMapLevels
struct AMiniMapLevelRegion_AreConcurrentMiniMapLevels_Params
{
};

// Function GunfireRuntime.MiniMapWidget.UpdateMiniMapWidget
struct UMiniMapWidget_UpdateMiniMapWidget_Params
{
};

// Function GunfireRuntime.MiniMapWidget.UpdateLevelVisibility
struct UMiniMapWidget_UpdateLevelVisibility_Params
{
};

// Function GunfireRuntime.MiniMapWidget.SetDynamicSize
struct UMiniMapWidget_SetDynamicSize_Params
{
};

// Function GunfireRuntime.MiniMapWidget.SetCullBounds
struct UMiniMapWidget_SetCullBounds_Params
{
};

// Function GunfireRuntime.MiniMapWidget.OnRegisteredToPanel
struct UMiniMapWidget_OnRegisteredToPanel_Params
{
};

// Function GunfireRuntime.MiniMapWidget.GetZOrder
struct UMiniMapWidget_GetZOrder_Params
{
};

// Function GunfireRuntime.MiniMapWidget.GetMiniMapRefActor
struct UMiniMapWidget_GetMiniMapRefActor_Params
{
};

// Function GunfireRuntime.MiniMapWidget.GetMiniMap
struct UMiniMapWidget_GetMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapWidget.GetDefaultWidgetCullBounds
struct UMiniMapWidget_GetDefaultWidgetCullBounds_Params
{
};

// Function GunfireRuntime.MiniMapWidget.GetContext
struct UMiniMapWidget_GetContext_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.SpectateTarget
struct APlayerControllerGunfire_SpectateTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.SpectatePrevPlayer
struct APlayerControllerGunfire_SpectatePrevPlayer_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.SpectateNextPlayer
struct APlayerControllerGunfire_SpectateNextPlayer_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.SetGameInputEnabled
struct APlayerControllerGunfire_SetGameInputEnabled_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerUnlockAllTraits
struct APlayerControllerGunfire_ServerUnlockAllTraits_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerSpectateTarget
struct APlayerControllerGunfire_ServerSpectateTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerRequestTime
struct APlayerControllerGunfire_ServerRequestTime_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerOnLevelTransition
struct APlayerControllerGunfire_ServerOnLevelTransition_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerDropItem
struct APlayerControllerGunfire_ServerDropItem_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerDoAction
struct APlayerControllerGunfire_ServerDoAction_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerBeginSpectate
struct APlayerControllerGunfire_ServerBeginSpectate_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ServerAddTrait
struct APlayerControllerGunfire_ServerAddTrait_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.RestoreSpectateViewTarget
struct APlayerControllerGunfire_RestoreSpectateViewTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ResetPauseRefCount
struct APlayerControllerGunfire_ResetPauseRefCount_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.RemoveCinematicListener
struct APlayerControllerGunfire_RemoveCinematicListener_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.QuitGame
struct APlayerControllerGunfire_QuitGame_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ProposeToSkipCutscene
struct APlayerControllerGunfire_ProposeToSkipCutscene_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.OnRep_SpectateTarget
struct APlayerControllerGunfire_OnRep_SpectateTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.MulticastUnlockAchievement
struct APlayerControllerGunfire_MulticastUnlockAchievement_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.IsInCinematic
struct APlayerControllerGunfire_IsInCinematic_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.IsGameInputEnabled
struct APlayerControllerGunfire_IsGameInputEnabled_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.GetSpectateTarget
struct APlayerControllerGunfire_GetSpectateTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.GetRelevantViewTarget
struct APlayerControllerGunfire_GetRelevantViewTarget_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.GetRelevantPawn
struct APlayerControllerGunfire_GetRelevantPawn_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.GetPlayerIdentifier
struct APlayerControllerGunfire_GetPlayerIdentifier_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.ClientTimeReply
struct APlayerControllerGunfire_ClientTimeReply_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.BeginSpectate
struct APlayerControllerGunfire_BeginSpectate_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.BeginPlaying
struct APlayerControllerGunfire_BeginPlaying_Params
{
};

// Function GunfireRuntime.PlayerControllerGunfire.AddCinematicListener
struct APlayerControllerGunfire_AddCinematicListener_Params
{
};

// Function GunfireRuntime.PlayStateEffect.TickTransition
struct UPlayStateEffect_TickTransition_Params
{
};

// Function GunfireRuntime.PlayStateEffect.GetEditorLabel
struct UPlayStateEffect_GetEditorLabel_Params
{
};

// Function GunfireRuntime.PlayStateEffect.Apply
struct UPlayStateEffect_Apply_Params
{
};

// Function GunfireRuntime.InventoryComponent.UseItem
struct UInventoryComponent_UseItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.UnequipItemByID
struct UInventoryComponent_UnequipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.UnequipItemAtSlotIndex
struct UInventoryComponent_UnequipItemAtSlotIndex_Params
{
};

// Function GunfireRuntime.InventoryComponent.UnequipItem
struct UInventoryComponent_UnequipItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ToggleActiveItem
struct UInventoryComponent_ToggleActiveItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.TakeItemByID
struct UInventoryComponent_TakeItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.TakeAll
struct UInventoryComponent_TakeAll_Params
{
};

// Function GunfireRuntime.InventoryComponent.SwapItem
struct UInventoryComponent_SwapItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.SetQuantity
struct UInventoryComponent_SetQuantity_Params
{
};

// Function GunfireRuntime.InventoryComponent.SetItemLevel
struct UInventoryComponent_SetItemLevel_Params
{
};

// Function GunfireRuntime.InventoryComponent.SetEquipmentInHandById
struct UInventoryComponent_SetEquipmentInHandById_Params
{
};

// Function GunfireRuntime.InventoryComponent.SetEquipmentInHandByClass
struct UInventoryComponent_SetEquipmentInHandByClass_Params
{
};

// Function GunfireRuntime.InventoryComponent.SetEquipmentInHand
struct UInventoryComponent_SetEquipmentInHand_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerUseItem
struct UInventoryComponent_ServerUseItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerUnequipMod
struct UInventoryComponent_ServerUnequipMod_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerUnequipItemByID
struct UInventoryComponent_ServerUnequipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerToggleActiveItem
struct UInventoryComponent_ServerToggleActiveItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerTakeItemByID
struct UInventoryComponent_ServerTakeItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerTakeAll
struct UInventoryComponent_ServerTakeAll_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerSetEquipmentInHand
struct UInventoryComponent_ServerSetEquipmentInHand_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerPutItemByID
struct UInventoryComponent_ServerPutItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerPickupItem
struct UInventoryComponent_ServerPickupItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerPickupAndEquipItem
struct UInventoryComponent_ServerPickupAndEquipItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerEquipSkin
struct UInventoryComponent_ServerEquipSkin_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerEquipItemByID
struct UInventoryComponent_ServerEquipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerDropItemByID
struct UInventoryComponent_ServerDropItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.ServerDetachItem
struct UInventoryComponent_ServerDetachItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.RouteNotifyPickupItem
struct UInventoryComponent_RouteNotifyPickupItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.RemoveItemSoft
struct UInventoryComponent_RemoveItemSoft_Params
{
};

// Function GunfireRuntime.InventoryComponent.RemoveItemByID
struct UInventoryComponent_RemoveItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.RemoveItem
struct UInventoryComponent_RemoveItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.RemoveAllItems
struct UInventoryComponent_RemoveAllItems_Params
{
};

// Function GunfireRuntime.InventoryComponent.PutItemByID
struct UInventoryComponent_PutItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.PickupItem
struct UInventoryComponent_PickupItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.PickupAndEquipItem
struct UInventoryComponent_PickupAndEquipItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.OnRep_Items
struct UInventoryComponent_OnRep_Items_Params
{
};

// Function GunfireRuntime.InventoryComponent.OnInstanceDataChanged
struct UInventoryComponent_OnInstanceDataChanged_Params
{
};

// Function GunfireRuntime.InventoryComponent.MulticastOnInventoryChanged
struct UInventoryComponent_MulticastOnInventoryChanged_Params
{
};

// Function GunfireRuntime.InventoryComponent.MarkNotNew
struct UInventoryComponent_MarkNotNew_Params
{
};

// Function GunfireRuntime.InventoryComponent.IsInventoryItemInfiniteByType
struct UInventoryComponent_IsInventoryItemInfiniteByType_Params
{
};

// Function GunfireRuntime.InventoryComponent.IsInventoryItemInfiniteByID
struct UInventoryComponent_IsInventoryItemInfiniteByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.IsInventoryItemInfinite
struct UInventoryComponent_IsInventoryItemInfinite_Params
{
};

// Function GunfireRuntime.InventoryComponent.IsEquippedByID
struct UInventoryComponent_IsEquippedByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.IsEquipped
struct UInventoryComponent_IsEquipped_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasNewItemInInventory
struct UInventoryComponent_HasNewItemInInventory_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasItemSoft
struct UInventoryComponent_HasItemSoft_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasItemByType
struct UInventoryComponent_HasItemByType_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasItem
struct UInventoryComponent_HasItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasEquippedItemByType
struct UInventoryComponent_HasEquippedItemByType_Params
{
};

// Function GunfireRuntime.InventoryComponent.HasEquipmentSlot
struct UInventoryComponent_HasEquipmentSlot_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetSellValue
struct UInventoryComponent_GetSellValue_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetQuantity
struct UInventoryComponent_GetQuantity_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetPreviousItem
struct UInventoryComponent_GetPreviousItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetNextItem
struct UInventoryComponent_GetNextItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetNextActiveItem
struct UInventoryComponent_GetNextActiveItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetMaxBuyableFromInfo
struct UInventoryComponent_GetMaxBuyableFromInfo_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetItemTypeBySlotName
struct UInventoryComponent_GetItemTypeBySlotName_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetItems
struct UInventoryComponent_GetItems_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetItemInstanceData
struct UInventoryComponent_GetItemInstanceData_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetItemCount
struct UInventoryComponent_GetItemCount_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetInventoryForItemType
struct UInventoryComponent_GetInventoryForItemType_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetInventoryForItem
struct UInventoryComponent_GetInventoryForItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetEquippedItemBySlotName
struct UInventoryComponent_GetEquippedItemBySlotName_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetEquippedItem
struct UInventoryComponent_GetEquippedItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetEquipmentSlotIndexByNameID
struct UInventoryComponent_GetEquipmentSlotIndexByNameID_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetEquipmentSlotIndex
struct UInventoryComponent_GetEquipmentSlotIndex_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetEquipmentItemID
struct UInventoryComponent_GetEquipmentItemID_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetBuyValueFromInfo
struct UInventoryComponent_GetBuyValueFromInfo_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetBuyValue
struct UInventoryComponent_GetBuyValue_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetActiveItem
struct UInventoryComponent_GetActiveItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.GetActivationTypeBySlotName
struct UInventoryComponent_GetActivationTypeBySlotName_Params
{
};

// Function GunfireRuntime.InventoryComponent.FindItemByID
struct UInventoryComponent_FindItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.FindItemByEquipSlotNameID
struct UInventoryComponent_FindItemByEquipSlotNameID_Params
{
};

// Function GunfireRuntime.InventoryComponent.FindItem
struct UInventoryComponent_FindItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.EquipSkin
struct UInventoryComponent_EquipSkin_Params
{
};

// Function GunfireRuntime.InventoryComponent.EquipItemWithTransform
struct UInventoryComponent_EquipItemWithTransform_Params
{
};

// Function GunfireRuntime.InventoryComponent.EquipItemByID
struct UInventoryComponent_EquipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.EquipItem
struct UInventoryComponent_EquipItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.DropItemByID
struct UInventoryComponent_DropItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.DropItem
struct UInventoryComponent_DropItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.DropAll
struct UInventoryComponent_DropAll_Params
{
};

// Function GunfireRuntime.InventoryComponent.DidActiveItemChange
struct UInventoryComponent_DidActiveItemChange_Params
{
};

// Function GunfireRuntime.InventoryComponent.DetachItemByID
struct UInventoryComponent_DetachItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.CountItemByType
struct UInventoryComponent_CountItemByType_Params
{
};

// Function GunfireRuntime.InventoryComponent.ClientNotifyUpgradeItem
struct UInventoryComponent_ClientNotifyUpgradeItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ClientNotifyPickupItemInstance
struct UInventoryComponent_ClientNotifyPickupItemInstance_Params
{
};

// Function GunfireRuntime.InventoryComponent.ClientNotifyPickupItem
struct UInventoryComponent_ClientNotifyPickupItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.ClientNotifyInventoryFull
struct UInventoryComponent_ClientNotifyInventoryFull_Params
{
};

// Function GunfireRuntime.InventoryComponent.ClientForceUseItem
struct UInventoryComponent_ClientForceUseItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.CanEquipItemByID
struct UInventoryComponent_CanEquipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.CanAddItem
struct UInventoryComponent_CanAddItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.AutoEquipItemByID
struct UInventoryComponent_AutoEquipItemByID_Params
{
};

// Function GunfireRuntime.InventoryComponent.AutoEquipItem
struct UInventoryComponent_AutoEquipItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.AddItemSoft
struct UInventoryComponent_AddItemSoft_Params
{
};

// Function GunfireRuntime.InventoryComponent.AddItem
struct UInventoryComponent_AddItem_Params
{
};

// Function GunfireRuntime.InventoryComponent.AddInfiniteItem
struct UInventoryComponent_AddInfiniteItem_Params
{
};

// Function GunfireRuntime.ProgressionComponent.SetLevel
struct UProgressionComponent_SetLevel_Params
{
};

// Function GunfireRuntime.ProgressionComponent.OnRep_Level
struct UProgressionComponent_OnRep_Level_Params
{
};

// Function GunfireRuntime.ProgressionComponent.OnRep_Experience
struct UProgressionComponent_OnRep_Experience_Params
{
};

// Function GunfireRuntime.ProgressionComponent.OnComputeStats
struct UProgressionComponent_OnComputeStats_Params
{
};

// Function GunfireRuntime.ProgressionComponent.GetPercentageToNextLevel
struct UProgressionComponent_GetPercentageToNextLevel_Params
{
};

// Function GunfireRuntime.ProgressionComponent.GetExperienceTowardsNextLevel
struct UProgressionComponent_GetExperienceTowardsNextLevel_Params
{
};

// Function GunfireRuntime.ProgressionComponent.GetExperienceToNextLevel
struct UProgressionComponent_GetExperienceToNextLevel_Params
{
};

// Function GunfireRuntime.ProgressionComponent.CommitQueuedExperience
struct UProgressionComponent_CommitQueuedExperience_Params
{
};

// Function GunfireRuntime.ProgressionComponent.ClearQueuedExperience
struct UProgressionComponent_ClearQueuedExperience_Params
{
};

// Function GunfireRuntime.ProgressionComponent.AddExperience
struct UProgressionComponent_AddExperience_Params
{
};

// Function GunfireRuntime.Quest.SetObjectiveCounterMax
struct AQuest_SetObjectiveCounterMax_Params
{
};

// Function GunfireRuntime.Quest.ResetObjective
struct AQuest_ResetObjective_Params
{
};

// Function GunfireRuntime.Quest.ResetAllObjectives
struct AQuest_ResetAllObjectives_Params
{
};

// Function GunfireRuntime.Quest.OnResetQuest
struct AQuest_OnResetQuest_Params
{
};

// Function GunfireRuntime.Quest.OnQuestManagerReady
struct AQuest_OnQuestManagerReady_Params
{
};

// Function GunfireRuntime.Quest.OnQuestComplete
struct AQuest_OnQuestComplete_Params
{
};

// Function GunfireRuntime.Quest.OnPostInitializeQuest
struct AQuest_OnPostInitializeQuest_Params
{
};

// Function GunfireRuntime.Quest.OnPostCreateQuest
struct AQuest_OnPostCreateQuest_Params
{
};

// Function GunfireRuntime.Quest.OnObjectivesUpdated
struct AQuest_OnObjectivesUpdated_Params
{
};

// Function GunfireRuntime.Quest.OnObjectiveComplete
struct AQuest_OnObjectiveComplete_Params
{
};

// Function GunfireRuntime.Quest.OnObjectiveActivate
struct AQuest_OnObjectiveActivate_Params
{
};

// Function GunfireRuntime.Quest.OnInitializeQuest
struct AQuest_OnInitializeQuest_Params
{
};

// Function GunfireRuntime.Quest.OnDestroyQuest
struct AQuest_OnDestroyQuest_Params
{
};

// Function GunfireRuntime.Quest.OnDeinitializeQuest
struct AQuest_OnDeinitializeQuest_Params
{
};

// Function GunfireRuntime.Quest.OnCreateQuest
struct AQuest_OnCreateQuest_Params
{
};

// Function GunfireRuntime.Quest.OnBeginQuest
struct AQuest_OnBeginQuest_Params
{
};

// Function GunfireRuntime.Quest.NotifyQuestComplete
struct AQuest_NotifyQuestComplete_Params
{
};

// Function GunfireRuntime.Quest.IsQuestComplete
struct AQuest_IsQuestComplete_Params
{
};

// Function GunfireRuntime.Quest.IsQuestActive
struct AQuest_IsQuestActive_Params
{
};

// Function GunfireRuntime.Quest.IsObjectiveComplete
struct AQuest_IsObjectiveComplete_Params
{
};

// Function GunfireRuntime.Quest.IsObjectiveActive
struct AQuest_IsObjectiveActive_Params
{
};

// Function GunfireRuntime.Quest.IncrementObjectiveCounter
struct AQuest_IncrementObjectiveCounter_Params
{
};

// Function GunfireRuntime.Quest.HasActiveObjectives
struct AQuest_HasActiveObjectives_Params
{
};

// Function GunfireRuntime.Quest.GetUniqueName
struct AQuest_GetUniqueName_Params
{
};

// Function GunfireRuntime.Quest.GetRootQuestForScope
struct AQuest_GetRootQuestForScope_Params
{
};

// Function GunfireRuntime.Quest.GetQuestObjectives
struct AQuest_GetQuestObjectives_Params
{
};

// Function GunfireRuntime.Quest.GetQuestObjective
struct AQuest_GetQuestObjective_Params
{
};

// Function GunfireRuntime.Quest.GetParentQuest
struct AQuest_GetParentQuest_Params
{
};

// Function GunfireRuntime.Quest.GetObjectiveCountRemaining
struct AQuest_GetObjectiveCountRemaining_Params
{
};

// Function GunfireRuntime.Quest.GetObjectiveCounterMax
struct AQuest_GetObjectiveCounterMax_Params
{
};

// Function GunfireRuntime.Quest.GetObjectiveCounter
struct AQuest_GetObjectiveCounter_Params
{
};

// Function GunfireRuntime.Quest.CompleteQuest
struct AQuest_CompleteQuest_Params
{
};

// Function GunfireRuntime.Quest.CompleteObjective
struct AQuest_CompleteObjective_Params
{
};

// Function GunfireRuntime.Quest.AreAnyObjectivesActiveOrComplete
struct AQuest_AreAnyObjectivesActiveOrComplete_Params
{
};

// Function GunfireRuntime.Quest.ActivateObjective
struct AQuest_ActivateObjective_Params
{
};

// Function GunfireRuntime.QuestComponent.OnResetQuest
struct UQuestComponent_OnResetQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.OnQuestComplete
struct UQuestComponent_OnQuestComplete_Params
{
};

// Function GunfireRuntime.QuestComponent.OnPostInitializeQuest
struct UQuestComponent_OnPostInitializeQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.OnPostCreateQuest
struct UQuestComponent_OnPostCreateQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.OnObjectiveComplete
struct UQuestComponent_OnObjectiveComplete_Params
{
};

// Function GunfireRuntime.QuestComponent.OnObjectiveActivate
struct UQuestComponent_OnObjectiveActivate_Params
{
};

// Function GunfireRuntime.QuestComponent.OnInitializeQuest
struct UQuestComponent_OnInitializeQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.OnDeinitializeQuest
struct UQuestComponent_OnDeinitializeQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.OnCreateQuest
struct UQuestComponent_OnCreateQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.IsQuestActive
struct UQuestComponent_IsQuestActive_Params
{
};

// Function GunfireRuntime.QuestComponent.HasErrors
struct UQuestComponent_HasErrors_Params
{
};

// Function GunfireRuntime.QuestComponent.GetDebugProperties
struct UQuestComponent_GetDebugProperties_Params
{
};

// Function GunfireRuntime.QuestComponent.GetDebugLabel
struct UQuestComponent_GetDebugLabel_Params
{
};

// Function GunfireRuntime.QuestComponent.DeactivateQuest
struct UQuestComponent_DeactivateQuest_Params
{
};

// Function GunfireRuntime.QuestComponent.ActivateQuest
struct UQuestComponent_ActivateQuest_Params
{
};

// Function GunfireRuntime.QuestEntity.StartEventTree
struct UQuestEntity_StartEventTree_Params
{
};

// Function GunfireRuntime.QuestEntity.IsSpawned
struct UQuestEntity_IsSpawned_Params
{
};

// Function GunfireRuntime.QuestEntity.HasEventTree
struct UQuestEntity_HasEventTree_Params
{
};

// Function GunfireRuntime.QuestEntity.GetQuest
struct UQuestEntity_GetQuest_Params
{
};

// Function GunfireRuntime.QuestEntity.GetEventTreeByID
struct UQuestEntity_GetEventTreeByID_Params
{
};

// Function GunfireRuntime.QuestEntity.GetActor
struct UQuestEntity_GetActor_Params
{
};

// Function GunfireRuntime.QuestEntity.EndDialog
struct UQuestEntity_EndDialog_Params
{
};

// Function GunfireRuntime.QuestEntity.DialogTrigger
struct UQuestEntity_DialogTrigger_Params
{
};

// Function GunfireRuntime.QuestEntity.BeginDialog
struct UQuestEntity_BeginDialog_Params
{
};

// Function GunfireRuntime.QuestManager.SetupQuestVariables
struct UQuestManager_SetupQuestVariables_Params
{
};

// Function GunfireRuntime.QuestManager.NotifyQuestsUpdated
struct UQuestManager_NotifyQuestsUpdated_Params
{
};

// Function GunfireRuntime.QuestManager.NotifyQuestByName
struct UQuestManager_NotifyQuestByName_Params
{
};

// Function GunfireRuntime.QuestManager.GetQuestByType
struct UQuestManager_GetQuestByType_Params
{
};

// Function GunfireRuntime.QuestManager.GetInstance
struct UQuestManager_GetInstance_Params
{
};

// Function GunfireRuntime.QuestManager.FindQuestsInLevel
struct UQuestManager_FindQuestsInLevel_Params
{
};

// Function GunfireRuntime.QuestManager.FindQuestByNameID
struct UQuestManager_FindQuestByNameID_Params
{
};

// Function GunfireRuntime.QuestManager.FindQuestByID
struct UQuestManager_FindQuestByID_Params
{
};

// Function GunfireRuntime.QuestManager.DestroyQuest
struct UQuestManager_DestroyQuest_Params
{
};

// Function GunfireRuntime.QuestManager.AddQuest
struct UQuestManager_AddQuest_Params
{
};

// Function GunfireRuntime.SequencerManager.UpdateSkipStatus
struct USequencerManager_UpdateSkipStatus_Params
{
};

// Function GunfireRuntime.SequencerManager.SkipSequence
struct USequencerManager_SkipSequence_Params
{
};

// Function GunfireRuntime.SequencerManager.SetupSequence_Client
struct USequencerManager_SetupSequence_Client_Params
{
};

// Function GunfireRuntime.SequencerManager.ProposeToSkip
struct USequencerManager_ProposeToSkip_Params
{
};

// Function GunfireRuntime.SequencerManager.GetInstance
struct USequencerManager_GetInstance_Params
{
};

// Function GunfireRuntime.SilhouetteComponent.OnInventoryChanged
struct USilhouetteComponent_OnInventoryChanged_Params
{
};

// Function GunfireRuntime.SpawnFilterManager.SetSpawnFilter
struct USpawnFilterManager_SetSpawnFilter_Params
{
};

// Function GunfireRuntime.SpawnFilterManager.RemoveSpawnFilter
struct USpawnFilterManager_RemoveSpawnFilter_Params
{
};

// Function GunfireRuntime.SpawnFilterManager.GetInstance
struct USpawnFilterManager_GetInstance_Params
{
};

// Function GunfireRuntime.SpawnFilterManager.ClearAllSpawnFilters
struct USpawnFilterManager_ClearAllSpawnFilters_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ToggleSecondaryFlyCamera
struct UStateCameraComponent_ToggleSecondaryFlyCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ToggleFlyCamera
struct UStateCameraComponent_ToggleFlyCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.SetInputEnabled
struct UStateCameraComponent_SetInputEnabled_Params
{
};

// Function GunfireRuntime.StateCameraComponent.SetCameraState
struct UStateCameraComponent_SetCameraState_Params
{
};

// Function GunfireRuntime.StateCameraComponent.SetAnimatedCameraFOV
struct UStateCameraComponent_SetAnimatedCameraFOV_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ResetView
struct UStateCameraComponent_ResetView_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ResetFromCurrentView
struct UStateCameraComponent_ResetFromCurrentView_Params
{
};

// Function GunfireRuntime.StateCameraComponent.HardReset
struct UStateCameraComponent_HardReset_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetPlayerController
struct UStateCameraComponent_GetPlayerController_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCurrentCamera
struct UStateCameraComponent_GetCurrentCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCharacter
struct UStateCameraComponent_GetCharacter_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCameraTransform
struct UStateCameraComponent_GetCameraTransform_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCameraRotation
struct UStateCameraComponent_GetCameraRotation_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCameraLocation
struct UStateCameraComponent_GetCameraLocation_Params
{
};

// Function GunfireRuntime.StateCameraComponent.GetCameraActor
struct UStateCameraComponent_GetCameraActor_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ExitFlyCamera
struct UStateCameraComponent_ExitFlyCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.ExitAnimatedCamera
struct UStateCameraComponent_ExitAnimatedCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.EnterFlyCamera
struct UStateCameraComponent_EnterFlyCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.EnterAnimatedCamera
struct UStateCameraComponent_EnterAnimatedCamera_Params
{
};

// Function GunfireRuntime.StateCameraComponent.AnimatedCameraCut
struct UStateCameraComponent_AnimatedCameraCut_Params
{
};

// Function GunfireRuntime.UIActor.SetWidgetText
struct AUIActor_SetWidgetText_Params
{
};

// Function GunfireRuntime.UIActor.OnPushDialog
struct AUIActor_OnPushDialog_Params
{
};

// Function GunfireRuntime.UIActor.OnPopDialog
struct AUIActor_OnPopDialog_Params
{
};

// Function GunfireRuntime.UIActor.OnEndDialog
struct AUIActor_OnEndDialog_Params
{
};

// Function GunfireRuntime.UIActor.OnDialogLayer
struct AUIActor_OnDialogLayer_Params
{
};

// Function GunfireRuntime.UIActor.OnBeginDialog
struct AUIActor_OnBeginDialog_Params
{
};

// Function GunfireRuntime.UIActor.Focus
struct AUIActor_Focus_Params
{
};

// Function GunfireRuntime.UIActor.CreateInstance
struct AUIActor_CreateInstance_Params
{
};

// Function GunfireRuntime.EquipmentMod.UnequipMod
struct AEquipmentMod_UnequipMod_Params
{
};

// Function GunfireRuntime.EquipmentMod.ScaleStat
struct AEquipmentMod_ScaleStat_Params
{
};

// Function GunfireRuntime.EquipmentMod.OnPostComputeStats
struct AEquipmentMod_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.EquipmentMod.OnDetached
struct AEquipmentMod_OnDetached_Params
{
};

// Function GunfireRuntime.EquipmentMod.OnComputeStats
struct AEquipmentMod_OnComputeStats_Params
{
};

// Function GunfireRuntime.EquipmentMod.OnAttached
struct AEquipmentMod_OnAttached_Params
{
};

// Function GunfireRuntime.EquipmentMod.ModifyStat
struct AEquipmentMod_ModifyStat_Params
{
};

// Function GunfireRuntime.EquipmentMod.HasItemOrEquippedMod
struct AEquipmentMod_HasItemOrEquippedMod_Params
{
};

// Function GunfireRuntime.EquipmentMod.GetStat
struct AEquipmentMod_GetStat_Params
{
};

// Function GunfireRuntime.EquipmentMod.GetSlot
struct AEquipmentMod_GetSlot_Params
{
};

// Function GunfireRuntime.EquipmentMod.GetPreviewInspectInfoFromInventory
struct AEquipmentMod_GetPreviewInspectInfoFromInventory_Params
{
};

// Function GunfireRuntime.EquipmentMod.GetPreviewInspectInfo
struct AEquipmentMod_GetPreviewInspectInfo_Params
{
};

// Function GunfireRuntime.EquipmentMod.GetEquipment
struct AEquipmentMod_GetEquipment_Params
{
};

// Function GunfireRuntime.EquipmentMod.FindEquippedModInInventory
struct AEquipmentMod_FindEquippedModInInventory_Params
{
};

// Function GunfireRuntime.EquipmentMod.EquipModFromInventory
struct AEquipmentMod_EquipModFromInventory_Params
{
};

// Function GunfireRuntime.EquipmentMod.EquipMod
struct AEquipmentMod_EquipMod_Params
{
};

// Function GunfireRuntime.AchievementIncrementCallbackProxy.IncrementAchievementProgress
struct UAchievementIncrementCallbackProxy_IncrementAchievementProgress_Params
{
};

// Function GunfireRuntime.AchievementSetCallbackProxy.SetAchievementProgress
struct UAchievementSetCallbackProxy_SetAchievementProgress_Params
{
};

// Function GunfireRuntime.ActionComponent.StopActionByType
struct UActionComponent_StopActionByType_Params
{
};

// Function GunfireRuntime.ActionComponent.StopAction
struct UActionComponent_StopAction_Params
{
};

// Function GunfireRuntime.ActionComponent.OnRep_Actions
struct UActionComponent_OnRep_Actions_Params
{
};

// Function GunfireRuntime.ActionComponent.IsActionTypeRunning
struct UActionComponent_IsActionTypeRunning_Params
{
};

// Function GunfireRuntime.ActionComponent.IsActionRunning
struct UActionComponent_IsActionRunning_Params
{
};

// Function GunfireRuntime.ActionComponent.InvokeEventOnAll
struct UActionComponent_InvokeEventOnAll_Params
{
};

// Function GunfireRuntime.ActionComponent.InvokeEvent
struct UActionComponent_InvokeEvent_Params
{
};

// Function GunfireRuntime.ActionComponent.GetNumActionsOfType
struct UActionComponent_GetNumActionsOfType_Params
{
};

// Function GunfireRuntime.ActionComponent.GetAllActionsOfType
struct UActionComponent_GetAllActionsOfType_Params
{
};

// Function GunfireRuntime.ActionComponent.GetActionOfType
struct UActionComponent_GetActionOfType_Params
{
};

// Function GunfireRuntime.ActionComponent.GetActionByID
struct UActionComponent_GetActionByID_Params
{
};

// Function GunfireRuntime.ActionComponent.DoActionInternal
struct UActionComponent_DoActionInternal_Params
{
};

// Function GunfireRuntime.ActionComponent.DoAction
struct UActionComponent_DoAction_Params
{
};

// Function GunfireRuntime.ActionComponent.CanDoActionInternal
struct UActionComponent_CanDoActionInternal_Params
{
};

// Function GunfireRuntime.AdvImage.SetNameID
struct UAdvImage_SetNameID_Params
{
};

// Function GunfireRuntime.AdvImage.OnResetIconCache
struct UAdvImage_OnResetIconCache_Params
{
};

// Function GunfireRuntime.AdvImage.OnDeviceChanged
struct UAdvImage_OnDeviceChanged_Params
{
};

// Function GunfireRuntime.AdvTextBlock.StartTextFill
struct UAdvTextBlock_StartTextFill_Params
{
};

// Function GunfireRuntime.AdvTextBlock.SetText
struct UAdvTextBlock_SetText_Params
{
};

// Function GunfireRuntime.AdvTextBlock.SetLineHeightPercentage
struct UAdvTextBlock_SetLineHeightPercentage_Params
{
};

// Function GunfireRuntime.AdvTextBlock.SetCurrentPage
struct UAdvTextBlock_SetCurrentPage_Params
{
};

// Function GunfireRuntime.AdvTextBlock.PauseTextFill
struct UAdvTextBlock_PauseTextFill_Params
{
};

// Function GunfireRuntime.AdvTextBlock.OnDeviceChanged
struct UAdvTextBlock_OnDeviceChanged_Params
{
};

// Function GunfireRuntime.AdvTextBlock.IsTextFillPaused
struct UAdvTextBlock_IsTextFillPaused_Params
{
};

// Function GunfireRuntime.AdvTextBlock.GetNumPages
struct UAdvTextBlock_GetNumPages_Params
{
};

// Function GunfireRuntime.AdvTextBlock.ForceRecompute
struct UAdvTextBlock_ForceRecompute_Params
{
};

// Function GunfireRuntime.AdvTextBlock.ComputeDesiredSize
struct UAdvTextBlock_ComputeDesiredSize_Params
{
};

// Function GunfireRuntime.AdvTextBlock.CompleteTextFill
struct UAdvTextBlock_CompleteTextFill_Params
{
};

// Function GunfireRuntime.AdvTextBlock.ClearText
struct UAdvTextBlock_ClearText_Params
{
};

// Function GunfireRuntime.AIAwarenessManager.SendAwarenessSignalSegment
struct UAIAwarenessManager_SendAwarenessSignalSegment_Params
{
};

// Function GunfireRuntime.AIAwarenessManager.SendAwarenessSignal
struct UAIAwarenessManager_SendAwarenessSignal_Params
{
};

// Function GunfireRuntime.AIAwarenessManager.GetInstance
struct UAIAwarenessManager_GetInstance_Params
{
};

// Function GunfireRuntime.AICharacter.OnRep_POIAnimationTag
struct AAICharacter_OnRep_POIAnimationTag_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.UpdateAwareness
struct AAIControllerGunfire_UpdateAwareness_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.UnlockCurrentTarget
struct AAIControllerGunfire_UnlockCurrentTarget_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.SetSpawnLocation
struct AAIControllerGunfire_SetSpawnLocation_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.SetRelevantActorFilterClass
struct AAIControllerGunfire_SetRelevantActorFilterClass_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.SetCurrentTarget
struct AAIControllerGunfire_SetCurrentTarget_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.SendAwarenessSignal
struct AAIControllerGunfire_SendAwarenessSignal_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.ResetThreat
struct AAIControllerGunfire_ResetThreat_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.ResetAwareness
struct AAIControllerGunfire_ResetAwareness_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.OnSetTacticalPoint
struct AAIControllerGunfire_OnSetTacticalPoint_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.OnFactionChanged
struct AAIControllerGunfire_OnFactionChanged_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.OnClearTacticalPoint
struct AAIControllerGunfire_OnClearTacticalPoint_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.LockCurrentTarget
struct AAIControllerGunfire_LockCurrentTarget_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.HasLineOfSightToAnyPlayer
struct AAIControllerGunfire_HasLineOfSightToAnyPlayer_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.HasLineOfSight
struct AAIControllerGunfire_HasLineOfSight_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetThreatLeader
struct AAIControllerGunfire_GetThreatLeader_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetTargetChangedThisFrame
struct AAIControllerGunfire_GetTargetChangedThisFrame_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetTacticalPointValid
struct AAIControllerGunfire_GetTacticalPointValid_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetTacticalPoint
struct AAIControllerGunfire_GetTacticalPoint_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetPathTarget
struct AAIControllerGunfire_GetPathTarget_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetPathPoint
struct AAIControllerGunfire_GetPathPoint_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetNearbyAI
struct AAIControllerGunfire_GetNearbyAI_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.GetCurrentTarget
struct AAIControllerGunfire_GetCurrentTarget_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.AddThreat
struct AAIControllerGunfire_AddThreat_Params
{
};

// Function GunfireRuntime.AIControllerGunfire.AddPersistentTarget
struct AAIControllerGunfire_AddPersistentTarget_Params
{
};

// Function GunfireRuntime.AICoordinator.GetWeightForTarget
struct UAICoordinator_GetWeightForTarget_Params
{
};

// Function GunfireRuntime.AICoordinator.GetMaxWeightForTarget
struct UAICoordinator_GetMaxWeightForTarget_Params
{
};

// Function GunfireRuntime.AICoordinator.GetAICoordinator
struct UAICoordinator_GetAICoordinator_Params
{
};

// Function GunfireRuntime.AIDataComponent.SetState
struct UAIDataComponent_SetState_Params
{
};

// Function GunfireRuntime.AIDirector.Suspend
struct UAIDirector_Suspend_Params
{
};

// Function GunfireRuntime.AIDirector.StopEncounterGroup
struct UAIDirector_StopEncounterGroup_Params
{
};

// Function GunfireRuntime.AIDirector.StartEncounterGroup
struct UAIDirector_StartEncounterGroup_Params
{
};

// Function GunfireRuntime.AIDirector.Resume
struct UAIDirector_Resume_Params
{
};

// Function GunfireRuntime.AIDirector.OnNotifyHit
struct UAIDirector_OnNotifyHit_Params
{
};

// Function GunfireRuntime.AIDirector.OnEncounterEvent
struct UAIDirector_OnEncounterEvent_Params
{
};

// Function GunfireRuntime.AIDirector.OnActorSpawned
struct UAIDirector_OnActorSpawned_Params
{
};

// Function GunfireRuntime.AIDirector.OnActorDead
struct UAIDirector_OnActorDead_Params
{
};

// Function GunfireRuntime.AIDirector.HasActiveSpawns
struct UAIDirector_HasActiveSpawns_Params
{
};

// Function GunfireRuntime.AIDirector.GetAIDirectorDebugState
struct UAIDirector_GetAIDirectorDebugState_Params
{
};

// Function GunfireRuntime.AIDirector.ClearAllGroups
struct UAIDirector_ClearAllGroups_Params
{
};

// Function GunfireRuntime.AnimActorState.UpdateMovementParams
struct UAnimActorState_UpdateMovementParams_Params
{
};

// Function GunfireRuntime.AIJumpState.IsAIJumpComplete
struct UAIJumpState_IsAIJumpComplete_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.SetEnabled
struct AAIPointOfInterest_SetEnabled_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.OnValidate
struct AAIPointOfInterest_OnValidate_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.OnOccupied
struct AAIPointOfInterest_OnOccupied_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.OnEndUse
struct AAIPointOfInterest_OnEndUse_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.OnBeginUse
struct AAIPointOfInterest_OnBeginUse_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.EndUse
struct AAIPointOfInterest_EndUse_Params
{
};

// Function GunfireRuntime.AIPointOfInterest.BeginUse
struct AAIPointOfInterest_BeginUse_Params
{
};

// Function GunfireRuntime.AIPointOfInterestManager.GetInstance
struct UAIPointOfInterestManager_GetInstance_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnUninitialize
struct UAmbientSpawnManager_OnUninitialize_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnSpawnListLoaded
struct UAmbientSpawnManager_OnSpawnListLoaded_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnSetTileActive
struct UAmbientSpawnManager_OnSetTileActive_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnGenerateAmbientSpawns
struct UAmbientSpawnManager_OnGenerateAmbientSpawns_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnDead
struct UAmbientSpawnManager_OnDead_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnActorDestroyed
struct UAmbientSpawnManager_OnActorDestroyed_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.OnActorDead
struct UAmbientSpawnManager_OnActorDead_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.GetNumActiveActorsOfType
struct UAmbientSpawnManager_GetNumActiveActorsOfType_Params
{
};

// Function GunfireRuntime.AmbientSpawnManager.GetActiveCharacterCount
struct UAmbientSpawnManager_GetActiveCharacterCount_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.SetCamera
struct UAnimatedCameraComponent_SetCamera_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.SetAnimatedCameraFOV
struct UAnimatedCameraComponent_SetAnimatedCameraFOV_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.RestoreCamera
struct UAnimatedCameraComponent_RestoreCamera_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.ExitAnimatedCamera
struct UAnimatedCameraComponent_ExitAnimatedCamera_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.Exit
struct UAnimatedCameraComponent_Exit_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.EnterAnimatedCamera
struct UAnimatedCameraComponent_EnterAnimatedCamera_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.Enter
struct UAnimatedCameraComponent_Enter_Params
{
};

// Function GunfireRuntime.AnimatedCameraComponent.AnimatedCameraCut
struct UAnimatedCameraComponent_AnimatedCameraCut_Params
{
};

// Function GunfireRuntime.AssetCache.PreloadAssets
struct UAssetCache_PreloadAssets_Params
{
};

// Function GunfireRuntime.AssetCache.IsAssetCachedPreloaded
struct UAssetCache_IsAssetCachedPreloaded_Params
{
};

// Function GunfireRuntime.AssetCache.GetInstance
struct UAssetCache_GetInstance_Params
{
};

// Function GunfireRuntime.AttributesComponent.SetAttributePoints
struct UAttributesComponent_SetAttributePoints_Params
{
};

// Function GunfireRuntime.AttributesComponent.SetAttributeLevel
struct UAttributesComponent_SetAttributeLevel_Params
{
};

// Function GunfireRuntime.AttributesComponent.PreviewIncreaseAttribute
struct UAttributesComponent_PreviewIncreaseAttribute_Params
{
};

// Function GunfireRuntime.AttributesComponent.PreviewDecreaseAttribute
struct UAttributesComponent_PreviewDecreaseAttribute_Params
{
};

// Function GunfireRuntime.AttributesComponent.PreviewCommit
struct UAttributesComponent_PreviewCommit_Params
{
};

// Function GunfireRuntime.AttributesComponent.OnRep_Attributes
struct UAttributesComponent_OnRep_Attributes_Params
{
};

// Function GunfireRuntime.AttributesComponent.OnLevelUp
struct UAttributesComponent_OnLevelUp_Params
{
};

// Function GunfireRuntime.AttributesComponent.OnComputeStats
struct UAttributesComponent_OnComputeStats_Params
{
};

// Function GunfireRuntime.AttributesComponent.OnComputeDerivedStats
struct UAttributesComponent_OnComputeDerivedStats_Params
{
};

// Function GunfireRuntime.AttributesComponent.IsPreviewing
struct UAttributesComponent_IsPreviewing_Params
{
};

// Function GunfireRuntime.AttributesComponent.IncreaseAttribute
struct UAttributesComponent_IncreaseAttribute_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetPreviewStatValue
struct UAttributesComponent_GetPreviewStatValue_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetPreviewAvailableAttributePoints
struct UAttributesComponent_GetPreviewAvailableAttributePoints_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetPreviewAttributeLevel
struct UAttributesComponent_GetPreviewAttributeLevel_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetAvailableAttributePoints
struct UAttributesComponent_GetAvailableAttributePoints_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetAttributeLevel
struct UAttributesComponent_GetAttributeLevel_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetAttributeCost
struct UAttributesComponent_GetAttributeCost_Params
{
};

// Function GunfireRuntime.AttributesComponent.GetAttributeByID
struct UAttributesComponent_GetAttributeByID_Params
{
};

// Function GunfireRuntime.AttributesComponent.EndPreview
struct UAttributesComponent_EndPreview_Params
{
};

// Function GunfireRuntime.AttributesComponent.BeginPreview
struct UAttributesComponent_BeginPreview_Params
{
};

// Function GunfireRuntime.AudioCustomVolume.SetState
struct AAudioCustomVolume_SetState_Params
{
};

// Function GunfireRuntime.AudioCustomVolume.OnEndActiveVolume
struct AAudioCustomVolume_OnEndActiveVolume_Params
{
};

// Function GunfireRuntime.AudioCustomVolume.OnBeginActiveVolume
struct AAudioCustomVolume_OnBeginActiveVolume_Params
{
};

// Function GunfireRuntime.AudioCustomVolume.IsActiveVolume
struct AAudioCustomVolume_IsActiveVolume_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.SetFadeScreenSize
struct UBlueprintFunctionLibraryGunfire_SetFadeScreenSize_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.SetDamageInfoVariableObject
struct UBlueprintFunctionLibraryGunfire_SetDamageInfoVariableObject_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.SetDamageInfoVariableInt
struct UBlueprintFunctionLibraryGunfire_SetDamageInfoVariableInt_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.SetDamageInfoVariableFloat
struct UBlueprintFunctionLibraryGunfire_SetDamageInfoVariableFloat_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.SetDamageInfoVariableBool
struct UBlueprintFunctionLibraryGunfire_SetDamageInfoVariableBool_Params
{
};

// Function GunfireRuntime.BlueprintFunctionLibraryGunfire.GetDefaultObject
struct UBlueprintFunctionLibraryGunfire_GetDefaultObject_Params
{
};

// Function GunfireRuntime.BreakableComponent.Reset
struct UBreakableComponent_Reset_Params
{
};

// Function GunfireRuntime.BreakableComponent.OnHidePieces
struct UBreakableComponent_OnHidePieces_Params
{
};

// Function GunfireRuntime.BreakableComponent.IsUnbroken
struct UBreakableComponent_IsUnbroken_Params
{
};

// Function GunfireRuntime.BreakableComponent.IsBroken
struct UBreakableComponent_IsBroken_Params
{
};

// Function GunfireRuntime.BreakableComponent.IsBreaking
struct UBreakableComponent_IsBreaking_Params
{
};

// Function GunfireRuntime.BreakableComponent.Break
struct UBreakableComponent_Break_Params
{
};

// Function GunfireRuntime.Builder.TryPlace
struct ABuilder_TryPlace_Params
{
};

// Function GunfireRuntime.Builder.ServerTryPlace
struct ABuilder_ServerTryPlace_Params
{
};

// Function GunfireRuntime.Builder.ExitBuilder
struct ABuilder_ExitBuilder_Params
{
};

// Function GunfireRuntime.ChallengeComponent.UnlockChallenge
struct UChallengeComponent_UnlockChallenge_Params
{
};

// Function GunfireRuntime.ChallengeComponent.IsChallengeComplete
struct UChallengeComponent_IsChallengeComplete_Params
{
};

// Function GunfireRuntime.ChallengeComponent.IncrementObjectivesFromActor
struct UChallengeComponent_IncrementObjectivesFromActor_Params
{
};

// Function GunfireRuntime.ChallengeComponent.IncrementObjectives
struct UChallengeComponent_IncrementObjectives_Params
{
};

// Function GunfireRuntime.ChallengeComponent.GetChallengeRank
struct UChallengeComponent_GetChallengeRank_Params
{
};

// Function GunfireRuntime.CharacterManager.KillAllCharactersForOwner
struct UCharacterManager_KillAllCharactersForOwner_Params
{
};

// Function GunfireRuntime.CharacterManager.GetInstance
struct UCharacterManager_GetInstance_Params
{
};

// Function GunfireRuntime.CharacterManager.GetCharactersInAggroGroup
struct UCharacterManager_GetCharactersInAggroGroup_Params
{
};

// Function GunfireRuntime.CharacterManager.GetCharactersForOwner
struct UCharacterManager_GetCharactersForOwner_Params
{
};

// Function GunfireRuntime.CharacterManager.DestroyAllCharactersForOwner
struct UCharacterManager_DestroyAllCharactersForOwner_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.SetSwingConstraint
struct UCharacterMovementComponentGunfire_SetSwingConstraint_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.SetNavigationType
struct UCharacterMovementComponentGunfire_SetNavigationType_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.SetCanSwim
struct UCharacterMovementComponentGunfire_SetCanSwim_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.Is3DNavigating
struct UCharacterMovementComponentGunfire_Is3DNavigating_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetWaterBoundsActor
struct UCharacterMovementComponentGunfire_GetWaterBoundsActor_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetWaterBounds
struct UCharacterMovementComponentGunfire_GetWaterBounds_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetPhysicsBoundsActor
struct UCharacterMovementComponentGunfire_GetPhysicsBoundsActor_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetPhysicsBounds
struct UCharacterMovementComponentGunfire_GetPhysicsBounds_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetNavigationType
struct UCharacterMovementComponentGunfire_GetNavigationType_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetDebugInfo
struct UCharacterMovementComponentGunfire_GetDebugInfo_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetCurrentWaterBoundsType
struct UCharacterMovementComponentGunfire_GetCurrentWaterBoundsType_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.GetCurrentPhysicsBoundsType
struct UCharacterMovementComponentGunfire_GetCurrentPhysicsBoundsType_Params
{
};

// Function GunfireRuntime.CharacterMovementComponentGunfire.AddExternalVelocity
struct UCharacterMovementComponentGunfire_AddExternalVelocity_Params
{
};

// Function GunfireRuntime.SpawnPointBase.Warp
struct ASpawnPointBase_Warp_Params
{
};

// Function GunfireRuntime.SpawnPointBase.SpawnActor
struct ASpawnPointBase_SpawnActor_Params
{
};

// Function GunfireRuntime.SpawnPointBase.QueueSpawnActor
struct ASpawnPointBase_QueueSpawnActor_Params
{
};

// Function GunfireRuntime.SpawnPointBase.PreSpawn
struct ASpawnPointBase_PreSpawn_Params
{
};

// Function GunfireRuntime.SpawnPointBase.PostSpawn
struct ASpawnPointBase_PostSpawn_Params
{
};

// Function GunfireRuntime.SpawnPointBase.OnPreSpawn
struct ASpawnPointBase_OnPreSpawn_Params
{
};

// Function GunfireRuntime.SpawnPointBase.OnPostSpawn
struct ASpawnPointBase_OnPostSpawn_Params
{
};

// Function GunfireRuntime.SpawnPointBase.NotifySpawnComplete
struct ASpawnPointBase_NotifySpawnComplete_Params
{
};

// Function GunfireRuntime.SpawnPointBase.FinishSpawn
struct ASpawnPointBase_FinishSpawn_Params
{
};

// Function GunfireRuntime.SpawnPointBase.BeginSpawn
struct ASpawnPointBase_BeginSpawn_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.Spawn
struct ACharacterSpawnPoint_Spawn_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.ResumeSpawner
struct ACharacterSpawnPoint_ResumeSpawner_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.ResetSpawn
struct ACharacterSpawnPoint_ResetSpawn_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.RemoveCharacterProxy
struct ACharacterSpawnPoint_RemoveCharacterProxy_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.PostInitSpawnPoint
struct ACharacterSpawnPoint_PostInitSpawnPoint_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.PauseSpawner
struct ACharacterSpawnPoint_PauseSpawner_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnTriggerEndOverlap
struct ACharacterSpawnPoint_OnTriggerEndOverlap_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnTriggerBeginOverlap
struct ACharacterSpawnPoint_OnTriggerBeginOverlap_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnSphereEndOverlap
struct ACharacterSpawnPoint_OnSphereEndOverlap_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnSphereBeginOverlap
struct ACharacterSpawnPoint_OnSphereBeginOverlap_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnProxyDestroyed
struct ACharacterSpawnPoint_OnProxyDestroyed_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnCharacterDestroyed
struct ACharacterSpawnPoint_OnCharacterDestroyed_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.OnCharacterDead
struct ACharacterSpawnPoint_OnCharacterDead_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.GetNumAliveSpawns
struct ACharacterSpawnPoint_GetNumAliveSpawns_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.GetEnemyTypeOverride
struct ACharacterSpawnPoint_GetEnemyTypeOverride_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.EnableSpawnPoint
struct ACharacterSpawnPoint_EnableSpawnPoint_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.CanSpawnFromTriggers
struct ACharacterSpawnPoint_CanSpawnFromTriggers_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.CanSpawnFromDelay
struct ACharacterSpawnPoint_CanSpawnFromDelay_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.CanSpawn
struct ACharacterSpawnPoint_CanSpawn_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.CanRespawn
struct ACharacterSpawnPoint_CanRespawn_Params
{
};

// Function GunfireRuntime.CharacterSpawnPoint.AddCharacterProxy
struct ACharacterSpawnPoint_AddCharacterProxy_Params
{
};

// Function GunfireRuntime.ChargeableItem.ValidateUse
struct AChargeableItem_ValidateUse_Params
{
};

// Function GunfireRuntime.ChargeableItem.ServerKeyReleased
struct AChargeableItem_ServerKeyReleased_Params
{
};

// Function GunfireRuntime.ChargeableItem.ServerKeyPressed
struct AChargeableItem_ServerKeyPressed_Params
{
};

// Function GunfireRuntime.ChargeableItem.RemoveItem
struct AChargeableItem_RemoveItem_Params
{
};

// Function GunfireRuntime.ChargeableItem.OnRep_ChargeState
struct AChargeableItem_OnRep_ChargeState_Params
{
};

// Function GunfireRuntime.ChargeableItem.OnChargeSuccess
struct AChargeableItem_OnChargeSuccess_Params
{
};

// Function GunfireRuntime.ChargeableItem.OnChargeFail
struct AChargeableItem_OnChargeFail_Params
{
};

// Function GunfireRuntime.ChargeableItem.OnChargeComplete
struct AChargeableItem_OnChargeComplete_Params
{
};

// Function GunfireRuntime.ChargeableItem.OnChargeBegin
struct AChargeableItem_OnChargeBegin_Params
{
};

// Function GunfireRuntime.ChargeableItem.IsBusy
struct AChargeableItem_IsBusy_Params
{
};

// Function GunfireRuntime.CombatUtil.WeaponTrace
struct UCombatUtil_WeaponTrace_Params
{
};

// Function GunfireRuntime.CombatUtil.SpawnOverlapImpactEffects
struct UCombatUtil_SpawnOverlapImpactEffects_Params
{
};

// Function GunfireRuntime.CombatUtil.SpawnImpactEffectsFromTrace
struct UCombatUtil_SpawnImpactEffectsFromTrace_Params
{
};

// Function GunfireRuntime.CombatUtil.SpawnImpactEffects
struct UCombatUtil_SpawnImpactEffects_Params
{
};

// Function GunfireRuntime.CombatUtil.SpawnImpactEffectProjectile
struct UCombatUtil_SpawnImpactEffectProjectile_Params
{
};

// Function GunfireRuntime.CombatUtil.SpawnImpactEffectAOE
struct UCombatUtil_SpawnImpactEffectAOE_Params
{
};

// Function GunfireRuntime.CombatUtil.ResolveDamageType
struct UCombatUtil_ResolveDamageType_Params
{
};

// Function GunfireRuntime.CombatUtil.ResolveDamageOwner
struct UCombatUtil_ResolveDamageOwner_Params
{
};

// Function GunfireRuntime.CombatUtil.PredictLocation
struct UCombatUtil_PredictLocation_Params
{
};

// Function GunfireRuntime.CombatUtil.IsFriendly
struct UCombatUtil_IsFriendly_Params
{
};

// Function GunfireRuntime.CombatUtil.IsEnemy
struct UCombatUtil_IsEnemy_Params
{
};

// Function GunfireRuntime.CombatUtil.IsDamageable
struct UCombatUtil_IsDamageable_Params
{
};

// Function GunfireRuntime.CombatUtil.IsAlive
struct UCombatUtil_IsAlive_Params
{
};

// Function GunfireRuntime.CombatUtil.HasDamageClass
struct UCombatUtil_HasDamageClass_Params
{
};

// Function GunfireRuntime.CombatUtil.GetTargetVector
struct UCombatUtil_GetTargetVector_Params
{
};

// Function GunfireRuntime.CombatUtil.GetReticuleLocation
struct UCombatUtil_GetReticuleLocation_Params
{
};

// Function GunfireRuntime.CombatUtil.GetPlayerAimVector
struct UCombatUtil_GetPlayerAimVector_Params
{
};

// Function GunfireRuntime.CombatUtil.GetFaction
struct UCombatUtil_GetFaction_Params
{
};

// Function GunfireRuntime.CombatUtil.GetEyePos
struct UCombatUtil_GetEyePos_Params
{
};

// Function GunfireRuntime.CombatUtil.GetChestPos
struct UCombatUtil_GetChestPos_Params
{
};

// Function GunfireRuntime.CombatUtil.GetBasePos
struct UCombatUtil_GetBasePos_Params
{
};

// Function GunfireRuntime.CombatUtil.GetAimVector
struct UCombatUtil_GetAimVector_Params
{
};

// Function GunfireRuntime.CombatUtil.GetAimPos
struct UCombatUtil_GetAimPos_Params
{
};

// Function GunfireRuntime.CombatUtil.GetAffiliation
struct UCombatUtil_GetAffiliation_Params
{
};

// Function GunfireRuntime.CombatUtil.FireProjectileAsync
struct UCombatUtil_FireProjectileAsync_Params
{
};

// Function GunfireRuntime.CombatUtil.FireProjectile
struct UCombatUtil_FireProjectile_Params
{
};

// Function GunfireRuntime.CombatUtil.CreateDamageInfoFromTarget
struct UCombatUtil_CreateDamageInfoFromTarget_Params
{
};

// Function GunfireRuntime.CombatUtil.CreateDamageInfoFromHit
struct UCombatUtil_CreateDamageInfoFromHit_Params
{
};

// Function GunfireRuntime.CombatUtil.ComputeDamageFalloffFromDistance
struct UCombatUtil_ComputeDamageFalloffFromDistance_Params
{
};

// Function GunfireRuntime.CombatUtil.ComputeDamageFalloff
struct UCombatUtil_ComputeDamageFalloff_Params
{
};

// Function GunfireRuntime.CombatUtil.ApplyWeaponSpread
struct UCombatUtil_ApplyWeaponSpread_Params
{
};

// Function GunfireRuntime.CombatUtil.ApplyDamageInfo
struct UCombatUtil_ApplyDamageInfo_Params
{
};

// Function GunfireRuntime.CombatUtil.ApplyDamage
struct UCombatUtil_ApplyDamage_Params
{
};

// Function GunfireRuntime.CombatUtil.ApplyCustomWeaponSpread
struct UCombatUtil_ApplyCustomWeaponSpread_Params
{
};

// Function GunfireRuntime.CombatUtil.AllowsWeakSpots
struct UCombatUtil_AllowsWeakSpots_Params
{
};

// Function GunfireRuntime.CombatUtil.AllowsCriticalHits
struct UCombatUtil_AllowsCriticalHits_Params
{
};

// Function GunfireRuntime.ConditionList.EvaluateConditions
struct UConditionList_EvaluateConditions_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.TriggerDialogResponseInProximity
struct UContextualDialogComponent_TriggerDialogResponseInProximity_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.TriggerDialogResponse
struct UContextualDialogComponent_TriggerDialogResponse_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.ServerTriggerDialogResponse
struct UContextualDialogComponent_ServerTriggerDialogResponse_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.OnNotifyTakeDamage
struct UContextualDialogComponent_OnNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.OnNotifyHit
struct UContextualDialogComponent_OnNotifyHit_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.OnEvent
struct UContextualDialogComponent_OnEvent_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.OnDialogComplete
struct UContextualDialogComponent_OnDialogComplete_Params
{
};

// Function GunfireRuntime.ContextualDialogComponent.MulticastDialog
struct UContextualDialogComponent_MulticastDialog_Params
{
};

// Function GunfireRuntime.CraftingRecipeManager.GetInstance
struct UCraftingRecipeManager_GetInstance_Params
{
};

// Function GunfireRuntime.CraftingRecipeManager.GetAllMaterials
struct UCraftingRecipeManager_GetAllMaterials_Params
{
};

// Function GunfireRuntime.CraftingRecipeManager.BuildRecipeList
struct UCraftingRecipeManager_BuildRecipeList_Params
{
};

// Function GunfireRuntime.CraftingComponent.UpgradeItem
struct UCraftingComponent_UpgradeItem_Params
{
};

// Function GunfireRuntime.CraftingComponent.HasRecipesOfType
struct UCraftingComponent_HasRecipesOfType_Params
{
};

// Function GunfireRuntime.CraftingComponent.HasAvailableUpgrades
struct UCraftingComponent_HasAvailableUpgrades_Params
{
};

// Function GunfireRuntime.CraftingComponent.HasAvailableRecipes
struct UCraftingComponent_HasAvailableRecipes_Params
{
};

// Function GunfireRuntime.CraftingComponent.GetUpgrade
struct UCraftingComponent_GetUpgrade_Params
{
};

// Function GunfireRuntime.CraftingComponent.GetRecipesWithIngredient
struct UCraftingComponent_GetRecipesWithIngredient_Params
{
};

// Function GunfireRuntime.CraftingComponent.GetRecipesForItem
struct UCraftingComponent_GetRecipesForItem_Params
{
};

// Function GunfireRuntime.CraftingComponent.GetRecipes
struct UCraftingComponent_GetRecipes_Params
{
};

// Function GunfireRuntime.CraftingComponent.GetRecipeInfo
struct UCraftingComponent_GetRecipeInfo_Params
{
};

// Function GunfireRuntime.CraftingComponent.CraftItem
struct UCraftingComponent_CraftItem_Params
{
};

// Function GunfireRuntime.CutsceneTransientActor.OnLevelSequence
struct ACutsceneTransientActor_OnLevelSequence_Params
{
};

// Function GunfireRuntime.CutsceneTransientActor.OnCinematic
struct ACutsceneTransientActor_OnCinematic_Params
{
};

// Function GunfireRuntime.CutsceneTransientActor.ForceCutscene
struct ACutsceneTransientActor_ForceCutscene_Params
{
};

// Function GunfireRuntime.DamageableActor.UpdateVisualState
struct ADamageableActor_UpdateVisualState_Params
{
};

// Function GunfireRuntime.DamageableActor.SetHealth
struct ADamageableActor_SetHealth_Params
{
};

// Function GunfireRuntime.DamageableActor.PostComputeStats
struct ADamageableActor_PostComputeStats_Params
{
};

// Function GunfireRuntime.DamageableActor.OnRep_Health
struct ADamageableActor_OnRep_Health_Params
{
};

// Function GunfireRuntime.DamageableActor.OnNotifyTakeDamage
struct ADamageableActor_OnNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.DamageableActor.OnNotifyDead
struct ADamageableActor_OnNotifyDead_Params
{
};

// Function GunfireRuntime.DamageableActor.IsAlive
struct ADamageableActor_IsAlive_Params
{
};

// Function GunfireRuntime.DamageableActor.GetNumDamageStates
struct ADamageableActor_GetNumDamageStates_Params
{
};

// Function GunfireRuntime.DamageableActor.GetHealthPercentage
struct ADamageableActor_GetHealthPercentage_Params
{
};

// Function GunfireRuntime.DamageableActor.GetHealthMax
struct ADamageableActor_GetHealthMax_Params
{
};

// Function GunfireRuntime.DamageableActor.GetHealth
struct ADamageableActor_GetHealth_Params
{
};

// Function GunfireRuntime.DamageableActor.GetDamageState
struct ADamageableActor_GetDamageState_Params
{
};

// Function GunfireRuntime.DamageableActor.DifficultyChanged
struct ADamageableActor_DifficultyChanged_Params
{
};

// Function GunfireRuntime.DamageableActor.ComputeStats
struct ADamageableActor_ComputeStats_Params
{
};

// Function GunfireRuntime.DamageableActor.ApplyHealthDelta
struct ADamageableActor_ApplyHealthDelta_Params
{
};

// Function GunfireRuntime.DamageableInterface.FilterIncomingDamage
struct UDamageableInterface_FilterIncomingDamage_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.SetPower
struct UDamageInfoUtil_SetPower_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.SetIsSecondaryDamage
struct UDamageInfoUtil_SetIsSecondaryDamage_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.SetDamageType
struct UDamageInfoUtil_SetDamageType_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.SetDamage
struct UDamageInfoUtil_SetDamage_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.ModifyDamage
struct UDamageInfoUtil_ModifyDamage_Params
{
};

// Function GunfireRuntime.DamageInfoUtil.ModifyCrit
struct UDamageInfoUtil_ModifyCrit_Params
{
};

// Function GunfireRuntime.DamageNotifyInterface.OnNotifyTakeDamage
struct UDamageNotifyInterface_OnNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.DamageSourceInterface.ResolveOwner
struct UDamageSourceInterface_ResolveOwner_Params
{
};

// Function GunfireRuntime.DamageSourceInterface.NotifyHitTarget
struct UDamageSourceInterface_NotifyHitTarget_Params
{
};

// Function GunfireRuntime.DamageSourceInterface.ModifyDamage
struct UDamageSourceInterface_ModifyDamage_Params
{
};

// Function GunfireRuntime.DamageSourceInterface.GetDamageType
struct UDamageSourceInterface_GetDamageType_Params
{
};

// Function GunfireRuntime.DialogStage.SetupStage
struct ADialogStage_SetupStage_Params
{
};

// Function GunfireRuntime.DialogStage.SetCameraByName
struct ADialogStage_SetCameraByName_Params
{
};

// Function GunfireRuntime.DialogStage.SetCamera
struct ADialogStage_SetCamera_Params
{
};

// Function GunfireRuntime.DialogStage.SetActiveCameraComponent
struct ADialogStage_SetActiveCameraComponent_Params
{
};

// Function GunfireRuntime.DialogStage.RestoreCamera
struct ADialogStage_RestoreCamera_Params
{
};

// Function GunfireRuntime.DialogStage.PositionActorAtMark
struct ADialogStage_PositionActorAtMark_Params
{
};

// Function GunfireRuntime.DialogStage.PositionActor
struct ADialogStage_PositionActor_Params
{
};

// Function GunfireRuntime.DialogStage.GetActor
struct ADialogStage_GetActor_Params
{
};

// Function GunfireRuntime.DialogStage.End
struct ADialogStage_End_Params
{
};

// Function GunfireRuntime.DialogStage.Begin
struct ADialogStage_Begin_Params
{
};

// Function GunfireRuntime.DialogProviderInterface.SetupContextVariables
struct UDialogProviderInterface_SetupContextVariables_Params
{
};

// Function GunfireRuntime.DialogProviderInterface.QueryEventTree
struct UDialogProviderInterface_QueryEventTree_Params
{
};

// Function GunfireRuntime.DialogProviderInterface.GetEventTree
struct UDialogProviderInterface_GetEventTree_Params
{
};

// Function GunfireRuntime.DialogInitiatorInterface.ShouldExitDialogFromDamage
struct UDialogInitiatorInterface_ShouldExitDialogFromDamage_Params
{
};

// Function GunfireRuntime.DialogInitiatorInterface.ShouldExitDialog
struct UDialogInitiatorInterface_ShouldExitDialog_Params
{
};

// Function GunfireRuntime.EventTreeComponent.Stop
struct UEventTreeComponent_Stop_Params
{
};

// Function GunfireRuntime.EventTreeComponent.StartTree
struct UEventTreeComponent_StartTree_Params
{
};

// Function GunfireRuntime.EventTreeComponent.SetVariableAsObject
struct UEventTreeComponent_SetVariableAsObject_Params
{
};

// Function GunfireRuntime.EventTreeComponent.SetVariableAsBool
struct UEventTreeComponent_SetVariableAsBool_Params
{
};

// Function GunfireRuntime.EventTreeComponent.SetupContextVariables
struct UEventTreeComponent_SetupContextVariables_Params
{
};

// Function GunfireRuntime.EventTreeComponent.SetStage
struct UEventTreeComponent_SetStage_Params
{
};

// Function GunfireRuntime.EventTreeComponent.PushStage
struct UEventTreeComponent_PushStage_Params
{
};

// Function GunfireRuntime.EventTreeComponent.PopStage
struct UEventTreeComponent_PopStage_Params
{
};

// Function GunfireRuntime.EventTreeComponent.PeekNextNode
struct UEventTreeComponent_PeekNextNode_Params
{
};

// Function GunfireRuntime.EventTreeComponent.IsRunning
struct UEventTreeComponent_IsRunning_Params
{
};

// Function GunfireRuntime.EventTreeComponent.HasPendingEvents
struct UEventTreeComponent_HasPendingEvents_Params
{
};

// Function GunfireRuntime.EventTreeComponent.GetVariableObject
struct UEventTreeComponent_GetVariableObject_Params
{
};

// Function GunfireRuntime.EventTreeComponent.GetCurrentNode
struct UEventTreeComponent_GetCurrentNode_Params
{
};

// Function GunfireRuntime.EventTreeComponent.ExecuteTriggerFromEventTree
struct UEventTreeComponent_ExecuteTriggerFromEventTree_Params
{
};

// Function GunfireRuntime.EventTreeComponent.ExecuteSubroutine
struct UEventTreeComponent_ExecuteSubroutine_Params
{
};

// Function GunfireRuntime.EventTreeComponent.Clear
struct UEventTreeComponent_Clear_Params
{
};

// Function GunfireRuntime.EventTreeComponent.BeginEventTree
struct UEventTreeComponent_BeginEventTree_Params
{
};

// Function GunfireRuntime.DialogComponent.TokenValueSet
struct UDialogComponent_TokenValueSet_Params
{
};

// Function GunfireRuntime.DialogComponent.SelectOptionByName
struct UDialogComponent_SelectOptionByName_Params
{
};

// Function GunfireRuntime.DialogComponent.SelectOption
struct UDialogComponent_SelectOption_Params
{
};

// Function GunfireRuntime.DialogComponent.ResetStageFromCinematic
struct UDialogComponent_ResetStageFromCinematic_Params
{
};

// Function GunfireRuntime.DialogComponent.RemoveDialogProvider
struct UDialogComponent_RemoveDialogProvider_Params
{
};

// Function GunfireRuntime.DialogComponent.OnRep_Stage
struct UDialogComponent_OnRep_Stage_Params
{
};

// Function GunfireRuntime.DialogComponent.OnRep_Options
struct UDialogComponent_OnRep_Options_Params
{
};

// Function GunfireRuntime.DialogComponent.OnRep_Dialog
struct UDialogComponent_OnRep_Dialog_Params
{
};

// Function GunfireRuntime.DialogComponent.OnRep_Active
struct UDialogComponent_OnRep_Active_Params
{
};

// Function GunfireRuntime.DialogComponent.OnInitiatorTakeAnyDamage
struct UDialogComponent_OnInitiatorTakeAnyDamage_Params
{
};

// Function GunfireRuntime.DialogComponent.OnDialogFinished
struct UDialogComponent_OnDialogFinished_Params
{
};

// Function GunfireRuntime.DialogComponent.JoinInProgressServer
struct UDialogComponent_JoinInProgressServer_Params
{
};

// Function GunfireRuntime.DialogComponent.JoinInProgressClient
struct UDialogComponent_JoinInProgressClient_Params
{
};

// Function GunfireRuntime.DialogComponent.HasOption
struct UDialogComponent_HasOption_Params
{
};

// Function GunfireRuntime.DialogComponent.HasAttributeValueForStage
struct UDialogComponent_HasAttributeValueForStage_Params
{
};

// Function GunfireRuntime.DialogComponent.HasAttributeValueForOption
struct UDialogComponent_HasAttributeValueForOption_Params
{
};

// Function GunfireRuntime.DialogComponent.HasAttributeValue
struct UDialogComponent_HasAttributeValue_Params
{
};

// Function GunfireRuntime.DialogComponent.HandleEvent
struct UDialogComponent_HandleEvent_Params
{
};

// Function GunfireRuntime.DialogComponent.GetTokenReplacedText
struct UDialogComponent_GetTokenReplacedText_Params
{
};

// Function GunfireRuntime.DialogComponent.GetAttributeValueForStage
struct UDialogComponent_GetAttributeValueForStage_Params
{
};

// Function GunfireRuntime.DialogComponent.GetAttributeValueForOption
struct UDialogComponent_GetAttributeValueForOption_Params
{
};

// Function GunfireRuntime.DialogComponent.GetAttributeValue
struct UDialogComponent_GetAttributeValue_Params
{
};

// Function GunfireRuntime.DialogComponent.GetAttributeAssetForStage
struct UDialogComponent_GetAttributeAssetForStage_Params
{
};

// Function GunfireRuntime.DialogComponent.ExecuteTrigger
struct UDialogComponent_ExecuteTrigger_Params
{
};

// Function GunfireRuntime.DialogComponent.ExecuteItemTrigger
struct UDialogComponent_ExecuteItemTrigger_Params
{
};

// Function GunfireRuntime.DialogComponent.EventTreeStageEvent
struct UDialogComponent_EventTreeStageEvent_Params
{
};

// Function GunfireRuntime.DialogComponent.EventTreeNodeEvent
struct UDialogComponent_EventTreeNodeEvent_Params
{
};

// Function GunfireRuntime.DialogComponent.EventEnd
struct UDialogComponent_EventEnd_Params
{
};

// Function GunfireRuntime.DialogComponent.EventBegin
struct UDialogComponent_EventBegin_Params
{
};

// Function GunfireRuntime.DialogComponent.DialogAdvance
struct UDialogComponent_DialogAdvance_Params
{
};

// Function GunfireRuntime.DialogComponent.BeginDialog
struct UDialogComponent_BeginDialog_Params
{
};

// Function GunfireRuntime.DialogComponent.AddDialogProvider
struct UDialogComponent_AddDialogProvider_Params
{
};

// Function GunfireRuntime.DialogInstance.OnSubtitleComplete
struct UDialogInstance_OnSubtitleComplete_Params
{
};

// Function GunfireRuntime.DialogInstance.OnSubtitleAdded
struct UDialogInstance_OnSubtitleAdded_Params
{
};

// Function GunfireRuntime.DialogInstance.IsDialogSource
struct UDialogInstance_IsDialogSource_Params
{
};

// Function GunfireRuntime.DialogInstance.ForceComplete
struct UDialogInstance_ForceComplete_Params
{
};

// Function GunfireRuntime.DialogInstance.Complete
struct UDialogInstance_Complete_Params
{
};

// Function GunfireRuntime.DialogManager.StopDialog
struct UDialogManager_StopDialog_Params
{
};

// Function GunfireRuntime.DialogManager.StopActiveDialog
struct UDialogManager_StopActiveDialog_Params
{
};

// Function GunfireRuntime.DialogManager.PlayDialogFromSound
struct UDialogManager_PlayDialogFromSound_Params
{
};

// Function GunfireRuntime.DialogManager.PlayDialog
struct UDialogManager_PlayDialog_Params
{
};

// Function GunfireRuntime.DialogManager.GetDialogManager
struct UDialogManager_GetDialogManager_Params
{
};

// Function GunfireRuntime.DialogManager.GetActiveDialog
struct UDialogManager_GetActiveDialog_Params
{
};

// Function GunfireRuntime.DissolveComponent.DissolveOut
struct UDissolveComponent_DissolveOut_Params
{
};

// Function GunfireRuntime.DissolveComponent.DissolveIn
struct UDissolveComponent_DissolveIn_Params
{
};

// Function GunfireRuntime.DissolveComponent.Dissolve
struct UDissolveComponent_Dissolve_Params
{
};

// Function GunfireRuntime.EncounterInstance.StopEncounter
struct UEncounterInstance_StopEncounter_Params
{
};

// Function GunfireRuntime.EncounterInstance.SetAggroGroup
struct UEncounterInstance_SetAggroGroup_Params
{
};

// Function GunfireRuntime.EncounterInstance.ResumeEncounter
struct UEncounterInstance_ResumeEncounter_Params
{
};

// Function GunfireRuntime.EncounterInstance.PauseEncounter
struct UEncounterInstance_PauseEncounter_Params
{
};

// Function GunfireRuntime.EncounterInstance.OnSpawnListLoaded
struct UEncounterInstance_OnSpawnListLoaded_Params
{
};

// Function GunfireRuntime.EncounterInstance.NumQueuedSpawns
struct UEncounterInstance_NumQueuedSpawns_Params
{
};

// Function GunfireRuntime.EncounterInstance.NumActiveSpawns
struct UEncounterInstance_NumActiveSpawns_Params
{
};

// Function GunfireRuntime.EncounterInstance.IsComplete
struct UEncounterInstance_IsComplete_Params
{
};

// Function GunfireRuntime.EncounterInstance.InvokeEventOnActors
struct UEncounterInstance_InvokeEventOnActors_Params
{
};

// Function GunfireRuntime.EncounterInstance.GetSpawnedActors
struct UEncounterInstance_GetSpawnedActors_Params
{
};

// Function GunfireRuntime.EncounterManager.StopEncounter
struct UEncounterManager_StopEncounter_Params
{
};

// Function GunfireRuntime.EncounterManager.StopAllEncountersForOwner
struct UEncounterManager_StopAllEncountersForOwner_Params
{
};

// Function GunfireRuntime.EncounterManager.ResumeEncounter
struct UEncounterManager_ResumeEncounter_Params
{
};

// Function GunfireRuntime.EncounterManager.PauseEncounter
struct UEncounterManager_PauseEncounter_Params
{
};

// Function GunfireRuntime.EncounterManager.OnSpawnDestroyed
struct UEncounterManager_OnSpawnDestroyed_Params
{
};

// Function GunfireRuntime.EncounterManager.OnNotifyDead
struct UEncounterManager_OnNotifyDead_Params
{
};

// Function GunfireRuntime.EncounterManager.IsFullyExplored
struct UEncounterManager_IsFullyExplored_Params
{
};

// Function GunfireRuntime.EncounterManager.IsComplete
struct UEncounterManager_IsComplete_Params
{
};

// Function GunfireRuntime.EncounterManager.GetNumEncountersForOwner
struct UEncounterManager_GetNumEncountersForOwner_Params
{
};

// Function GunfireRuntime.EncounterManager.GetFrontTileID
struct UEncounterManager_GetFrontTileID_Params
{
};

// Function GunfireRuntime.EncounterManager.GetCurrentTileID
struct UEncounterManager_GetCurrentTileID_Params
{
};

// Function GunfireRuntime.EncounterManager.GetBehindTileID
struct UEncounterManager_GetBehindTileID_Params
{
};

// Function GunfireRuntime.EncounterManager.DoEncounter
struct UEncounterManager_DoEncounter_Params
{
};

// Function GunfireRuntime.EquipmentSkin.IsSkinEquipped
struct AEquipmentSkin_IsSkinEquipped_Params
{
};

// Function GunfireRuntime.EquipmentSkin.GetSkinsForItem
struct AEquipmentSkin_GetSkinsForItem_Params
{
};

// Function GunfireRuntime.EquipmentSkin.GetSkinForBP
struct AEquipmentSkin_GetSkinForBP_Params
{
};

// Function GunfireRuntime.EquipmentSkin.EquipSkin
struct AEquipmentSkin_EquipSkin_Params
{
};

// Function GunfireRuntime.EventHandlerInterface.HandleEvent
struct UEventHandlerInterface_HandleEvent_Params
{
};

// Function GunfireRuntime.EventTreeNode_Base.GetEditorLabel
struct UEventTreeNode_Base_GetEditorLabel_Params
{
};

// Function GunfireRuntime.EventTreeNode.Validate
struct UEventTreeNode_Validate_Params
{
};

// Function GunfireRuntime.EventTreeNode.Loop
struct UEventTreeNode_Loop_Params
{
};

// Function GunfireRuntime.EventTreeNode.Join
struct UEventTreeNode_Join_Params
{
};

// Function GunfireRuntime.EventTreeNode.IsComplete
struct UEventTreeNode_IsComplete_Params
{
};

// Function GunfireRuntime.EventTreeNode.End
struct UEventTreeNode_End_Params
{
};

// Function GunfireRuntime.EventTreeNode.Begin
struct UEventTreeNode_Begin_Params
{
};

// Function GunfireRuntime.EventTreeNode_Dialog.OnFinishedWaiting
struct UEventTreeNode_Dialog_OnFinishedWaiting_Params
{
};

// Function GunfireRuntime.EventTreeNode_Dialog.OnDialogComplete
struct UEventTreeNode_Dialog_OnDialogComplete_Params
{
};

// Function GunfireRuntime.EventTreeNode_Dialog.Complete
struct UEventTreeNode_Dialog_Complete_Params
{
};

// Function GunfireRuntime.EventTreeNode_DialogOptions.SelectOption
struct UEventTreeNode_DialogOptions_SelectOption_Params
{
};

// Function GunfireRuntime.EventTreeNode_LevelSequence.OnSequenceTriggerForEventTree
struct UEventTreeNode_LevelSequence_OnSequenceTriggerForEventTree_Params
{
};

// Function GunfireRuntime.EventTreeNode_LevelSequence.OnSequenceFinishedCallback
struct UEventTreeNode_LevelSequence_OnSequenceFinishedCallback_Params
{
};

// Function GunfireRuntime.Faction.GetAffiliationForActors
struct UFaction_GetAffiliationForActors_Params
{
};

// Function GunfireRuntime.Faction.GetAffiliation
struct UFaction_GetAffiliation_Params
{
};

// Function GunfireRuntime.FactionManager.GetFactionManager
struct UFactionManager_GetFactionManager_Params
{
};

// Function GunfireRuntime.FactionComponent.TakeDamage
struct UFactionComponent_TakeDamage_Params
{
};

// Function GunfireRuntime.FactionComponent.SetFactionOverride
struct UFactionComponent_SetFactionOverride_Params
{
};

// Function GunfireRuntime.FactionComponent.SetFaction
struct UFactionComponent_SetFaction_Params
{
};

// Function GunfireRuntime.FactionComponent.GetFactionOverride
struct UFactionComponent_GetFactionOverride_Params
{
};

// Function GunfireRuntime.FactionComponent.GetFaction
struct UFactionComponent_GetFaction_Params
{
};

// Function GunfireRuntime.FactionComponent.GetAffiliation
struct UFactionComponent_GetAffiliation_Params
{
};

// Function GunfireRuntime.FallDamageComponent.TriggerFallDeath
struct UFallDamageComponent_TriggerFallDeath_Params
{
};

// Function GunfireRuntime.FallDamageComponent.SetEnabled
struct UFallDamageComponent_SetEnabled_Params
{
};

// Function GunfireRuntime.FallDamageComponent.IsEnabled
struct UFallDamageComponent_IsEnabled_Params
{
};

// Function GunfireRuntime.FallDamageComponent.DisableUntilGrounded
struct UFallDamageComponent_DisableUntilGrounded_Params
{
};

// Function GunfireRuntime.FocusButtonSlot.SetVerticalAlignment
struct UFocusButtonSlot_SetVerticalAlignment_Params
{
};

// Function GunfireRuntime.FocusButtonSlot.SetPadding
struct UFocusButtonSlot_SetPadding_Params
{
};

// Function GunfireRuntime.FocusButtonSlot.SetHorizontalAlignment
struct UFocusButtonSlot_SetHorizontalAlignment_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetTexture
struct UFocusButtonWidget_SetTexture_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetMaterial
struct UFocusButtonWidget_SetMaterial_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetIsFocusable
struct UFocusButtonWidget_SetIsFocusable_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetForceFocusVisualState
struct UFocusButtonWidget_SetForceFocusVisualState_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetColorAndOpacity
struct UFocusButtonWidget_SetColorAndOpacity_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetBackgroundColor
struct UFocusButtonWidget_SetBackgroundColor_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.SetAllowMouseClick
struct UFocusButtonWidget_SetAllowMouseClick_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.IsPressed
struct UFocusButtonWidget_IsPressed_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.HasInactiveFocus
struct UFocusButtonWidget_HasInactiveFocus_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.HasFocus
struct UFocusButtonWidget_HasFocus_Params
{
};

// Function GunfireRuntime.FocusButtonWidget.GetAbsoluteCoords
struct UFocusButtonWidget_GetAbsoluteCoords_Params
{
};

// Function GunfireRuntime.FocusGroup.ShowInactiveFocus
struct UFocusGroup_ShowInactiveFocus_Params
{
};

// Function GunfireRuntime.FocusGroup.Focus
struct UFocusGroup_Focus_Params
{
};

// Function GunfireRuntime.FocusManager.RestorePanelFocus
struct UFocusManager_RestorePanelFocus_Params
{
};

// Function GunfireRuntime.FocusManager.RestoreFocus
struct UFocusManager_RestoreFocus_Params
{
};

// Function GunfireRuntime.FocusManager.ReleaseFocus
struct UFocusManager_ReleaseFocus_Params
{
};

// Function GunfireRuntime.FocusManager.GetWidgetByName
struct UFocusManager_GetWidgetByName_Params
{
};

// Function GunfireRuntime.FocusManager.GetRoot
struct UFocusManager_GetRoot_Params
{
};

// Function GunfireRuntime.FocusManager.GetParent
struct UFocusManager_GetParent_Params
{
};

// Function GunfireRuntime.FocusManager.GetInstance
struct UFocusManager_GetInstance_Params
{
};

// Function GunfireRuntime.FocusManager.FocusFirstAvailable
struct UFocusManager_FocusFirstAvailable_Params
{
};

// Function GunfireRuntime.FocusManager.FindWidgetByName
struct UFocusManager_FindWidgetByName_Params
{
};

// Function GunfireRuntime.FocusManager.EnableInput
struct UFocusManager_EnableInput_Params
{
};

// Function GunfireRuntime.FocusManager.DisableInput
struct UFocusManager_DisableInput_Params
{
};

// Function GunfireRuntime.FocusManager.AttemptSetButtonFocus
struct UFocusManager_AttemptSetButtonFocus_Params
{
};

// Function GunfireRuntime.FocusVisual.SetTexture
struct UFocusVisual_SetTexture_Params
{
};

// Function GunfireRuntime.FocusVisual.SetColorAndOpacity
struct UFocusVisual_SetColorAndOpacity_Params
{
};

// Function GunfireRuntime.FocusVisual.SetBackgroundColor
struct UFocusVisual_SetBackgroundColor_Params
{
};

// Function GunfireRuntime.FocusWidget.SetInactiveFocus
struct UFocusWidget_SetInactiveFocus_Params
{
};

// Function GunfireRuntime.FocusWidget.Remove
struct UFocusWidget_Remove_Params
{
};

// Function GunfireRuntime.FocusWidget.Focus
struct UFocusWidget_Focus_Params
{
};

// Function GunfireRuntime.FocusWidget.ClearFocus
struct UFocusWidget_ClearFocus_Params
{
};

// Function GunfireRuntime.FxActorDestroyerComponent.SoftDestroyOwner
struct UFxActorDestroyerComponent_SoftDestroyOwner_Params
{
};

// Function GunfireRuntime.FxActorDestroyerComponent.SoftDestroyActor
struct UFxActorDestroyerComponent_SoftDestroyActor_Params
{
};

// Function GunfireRuntime.FxActorDestroyerComponent.IsSoftDestroying
struct UFxActorDestroyerComponent_IsSoftDestroying_Params
{
};

// Function GunfireRuntime.GameRules.GetWeaponDamage
struct AGameRules_GetWeaponDamage_Params
{
};

// Function GunfireRuntime.GameRules.GetDamageInfo
struct AGameRules_GetDamageInfo_Params
{
};

// Function GunfireRuntime.UserSetting.ResetToDefault
struct UUserSetting_ResetToDefault_Params
{
};

// Function GunfireRuntime.UserSetting.GetDisplayValue
struct UUserSetting_GetDisplayValue_Params
{
};

// Function GunfireRuntime.UserSetting.Apply
struct UUserSetting_Apply_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.OnSetUserSettingInt
struct UGameUserSettingsGunfire_OnSetUserSettingInt_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.OnSetUserSettingFloat
struct UGameUserSettingsGunfire_OnSetUserSettingFloat_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.GetSettingsForCategory
struct UGameUserSettingsGunfire_GetSettingsForCategory_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.GetInputConflicts
struct UGameUserSettingsGunfire_GetInputConflicts_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.FindUserSetting
struct UGameUserSettingsGunfire_FindUserSetting_Params
{
};

// Function GunfireRuntime.GameUserSettingsGunfire.AllowsInputRebindings
struct UGameUserSettingsGunfire_AllowsInputRebindings_Params
{
};

// Function GunfireRuntime.BinaryUserSetting.SetValue
struct UBinaryUserSetting_SetValue_Params
{
};

// Function GunfireRuntime.BinaryUserSetting.GetValue
struct UBinaryUserSetting_GetValue_Params
{
};

// Function GunfireRuntime.IntUserSetting.SetValue
struct UIntUserSetting_SetValue_Params
{
};

// Function GunfireRuntime.IntUserSetting.GetValue
struct UIntUserSetting_GetValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.SetValue
struct UFloatUserSetting_SetValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.IncrementValue
struct UFloatUserSetting_IncrementValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.GetValue
struct UFloatUserSetting_GetValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.GetNormalizedValue
struct UFloatUserSetting_GetNormalizedValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.GetMinValue
struct UFloatUserSetting_GetMinValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.GetMaxValue
struct UFloatUserSetting_GetMaxValue_Params
{
};

// Function GunfireRuntime.FloatUserSetting.GetIncrement
struct UFloatUserSetting_GetIncrement_Params
{
};

// Function GunfireRuntime.FloatUserSetting.DecrementValue
struct UFloatUserSetting_DecrementValue_Params
{
};

// Function GunfireRuntime.EnumUserSetting.SetValueEnum
struct UEnumUserSetting_SetValueEnum_Params
{
};

// Function GunfireRuntime.EnumUserSetting.GetValueEnum
struct UEnumUserSetting_GetValueEnum_Params
{
};

// Function GunfireRuntime.EnumUserSetting.GetNumEntries
struct UEnumUserSetting_GetNumEntries_Params
{
};

// Function GunfireRuntime.EnumUserSetting.GetNextEntry
struct UEnumUserSetting_GetNextEntry_Params
{
};

// Function GunfireRuntime.EnumUserSetting.GetEnumEntryByValue
struct UEnumUserSetting_GetEnumEntryByValue_Params
{
};

// Function GunfireRuntime.EnumUserSetting.GetEnumEntryByIndex
struct UEnumUserSetting_GetEnumEntryByIndex_Params
{
};

// Function GunfireRuntime.EnumUserSetting.EnableValue
struct UEnumUserSetting_EnableValue_Params
{
};

// Function GunfireRuntime.EnumUserSetting.DisableValue
struct UEnumUserSetting_DisableValue_Params
{
};

// Function GunfireRuntime.AudioUserSetting.SetSoundClassMultiplier
struct UAudioUserSetting_SetSoundClassMultiplier_Params
{
};

// Function GunfireRuntime.AudioUserSetting.GetSoundClassMultiplier
struct UAudioUserSetting_GetSoundClassMultiplier_Params
{
};

// Function GunfireRuntime.ResolutionUserSetting.SetValue
struct UResolutionUserSetting_SetValue_Params
{
};

// Function GunfireRuntime.ResolutionUserSetting.ResetList
struct UResolutionUserSetting_ResetList_Params
{
};

// Function GunfireRuntime.ResolutionUserSetting.GetValue
struct UResolutionUserSetting_GetValue_Params
{
};

// Function GunfireRuntime.ResolutionUserSetting.GetNextResolution
struct UResolutionUserSetting_GetNextResolution_Params
{
};

// Function GunfireRuntime.RebindableInputSetting.SetValue
struct URebindableInputSetting_SetValue_Params
{
};

// Function GunfireRuntime.RebindableInputSetting.HasConflictGroup
struct URebindableInputSetting_HasConflictGroup_Params
{
};

// Function GunfireRuntime.RebindableInputSetting.GetValue
struct URebindableInputSetting_GetValue_Params
{
};

// Function GunfireRuntime.ColorblindUserSetting.GetValueEnumCVD
struct UColorblindUserSetting_GetValueEnumCVD_Params
{
};

// Function GunfireRuntime.ColorblindUserSetting.GetNumEntries
struct UColorblindUserSetting_GetNumEntries_Params
{
};

// Function GunfireRuntime.ColorblindUserSetting.GetNextEntry
struct UColorblindUserSetting_GetNextEntry_Params
{
};

// Function GunfireRuntime.ColorblindUserSetting.GetEnumCVDEntryByIndex
struct UColorblindUserSetting_GetEnumCVDEntryByIndex_Params
{
};

// Function GunfireRuntime.ToggleUserSetting.SetValue
struct UToggleUserSetting_SetValue_Params
{
};

// Function GunfireRuntime.ToggleUserSetting.GetValue
struct UToggleUserSetting_GetValue_Params
{
};

// Function GunfireRuntime.GameUtil.UE4ToAutodeskRotation
struct UGameUtil_UE4ToAutodeskRotation_Params
{
};

// Function GunfireRuntime.GameUtil.TransferPoseToSkeletalMesh
struct UGameUtil_TransferPoseToSkeletalMesh_Params
{
};

// Function GunfireRuntime.GameUtil.TransferPoseToPoseableMesh
struct UGameUtil_TransferPoseToPoseableMesh_Params
{
};

// Function GunfireRuntime.GameUtil.TestLineOfSightFromLocation
struct UGameUtil_TestLineOfSightFromLocation_Params
{
};

// Function GunfireRuntime.GameUtil.TestLineOfSight
struct UGameUtil_TestLineOfSight_Params
{
};

// Function GunfireRuntime.GameUtil.SweepCharacter
struct UGameUtil_SweepCharacter_Params
{
};

// Function GunfireRuntime.GameUtil.StuckCheckForClass
struct UGameUtil_StuckCheckForClass_Params
{
};

// Function GunfireRuntime.GameUtil.StuckCheck
struct UGameUtil_StuckCheck_Params
{
};

// Function GunfireRuntime.GameUtil.StreamInTextures
struct UGameUtil_StreamInTextures_Params
{
};

// Function GunfireRuntime.GameUtil.StopForceFeedback
struct UGameUtil_StopForceFeedback_Params
{
};

// Function GunfireRuntime.GameUtil.StopCameraShake
struct UGameUtil_StopCameraShake_Params
{
};

// Function GunfireRuntime.GameUtil.SpawnAIEx
struct UGameUtil_SpawnAIEx_Params
{
};

// Function GunfireRuntime.GameUtil.SpawnAdvancedDecalAttached
struct UGameUtil_SpawnAdvancedDecalAttached_Params
{
};

// Function GunfireRuntime.GameUtil.SpawnAdvancedDecalAtLocation
struct UGameUtil_SpawnAdvancedDecalAtLocation_Params
{
};

// Function GunfireRuntime.GameUtil.SpawnActorEx
struct UGameUtil_SpawnActorEx_Params
{
};

// Function GunfireRuntime.GameUtil.SortObjectArray
struct UGameUtil_SortObjectArray_Params
{
};

// Function GunfireRuntime.GameUtil.SortIntArray
struct UGameUtil_SortIntArray_Params
{
};

// Function GunfireRuntime.GameUtil.SortFloatArray
struct UGameUtil_SortFloatArray_Params
{
};

// Function GunfireRuntime.GameUtil.SortActorArrayByDistance
struct UGameUtil_SortActorArrayByDistance_Params
{
};

// Function GunfireRuntime.GameUtil.SnapToNavMesh
struct UGameUtil_SnapToNavMesh_Params
{
};

// Function GunfireRuntime.GameUtil.SnapToGround
struct UGameUtil_SnapToGround_Params
{
};

// Function GunfireRuntime.GameUtil.SnapCharacterToGround
struct UGameUtil_SnapCharacterToGround_Params
{
};

// Function GunfireRuntime.GameUtil.ShowRandomMesh
struct UGameUtil_ShowRandomMesh_Params
{
};

// Function GunfireRuntime.GameUtil.ShowComponents
struct UGameUtil_ShowComponents_Params
{
};

// Function GunfireRuntime.GameUtil.ShouldAsyncLoad
struct UGameUtil_ShouldAsyncLoad_Params
{
};

// Function GunfireRuntime.GameUtil.SetVisible
struct UGameUtil_SetVisible_Params
{
};

// Function GunfireRuntime.GameUtil.SetVisibilityFlag
struct UGameUtil_SetVisibilityFlag_Params
{
};

// Function GunfireRuntime.GameUtil.SetTickableWhenPaused
struct UGameUtil_SetTickableWhenPaused_Params
{
};

// Function GunfireRuntime.GameUtil.SetRenderCustomDepthForActor
struct UGameUtil_SetRenderCustomDepthForActor_Params
{
};

// Function GunfireRuntime.GameUtil.SetMaterialVectorParam
struct UGameUtil_SetMaterialVectorParam_Params
{
};

// Function GunfireRuntime.GameUtil.SetMaterialScalarParam
struct UGameUtil_SetMaterialScalarParam_Params
{
};

// Function GunfireRuntime.GameUtil.SetComponentMaterialVectorParamForAll
struct UGameUtil_SetComponentMaterialVectorParamForAll_Params
{
};

// Function GunfireRuntime.GameUtil.SetComponentMaterialVectorParam
struct UGameUtil_SetComponentMaterialVectorParam_Params
{
};

// Function GunfireRuntime.GameUtil.SetComponentMaterialScalarParamForAll
struct UGameUtil_SetComponentMaterialScalarParamForAll_Params
{
};

// Function GunfireRuntime.GameUtil.SetComponentMaterialScalarParam
struct UGameUtil_SetComponentMaterialScalarParam_Params
{
};

// Function GunfireRuntime.GameUtil.SetAllMaterialsTo
struct UGameUtil_SetAllMaterialsTo_Params
{
};

// Function GunfireRuntime.GameUtil.SetActorsVisible
struct UGameUtil_SetActorsVisible_Params
{
};

// Function GunfireRuntime.GameUtil.SetActive
struct UGameUtil_SetActive_Params
{
};

// Function GunfireRuntime.GameUtil.ResetCachedMaterials
struct UGameUtil_ResetCachedMaterials_Params
{
};

// Function GunfireRuntime.GameUtil.ResetActorDynamics
struct UGameUtil_ResetActorDynamics_Params
{
};

// Function GunfireRuntime.GameUtil.RemoveTag
struct UGameUtil_RemoveTag_Params
{
};

// Function GunfireRuntime.GameUtil.RemoveLevelInstanceByName
struct UGameUtil_RemoveLevelInstanceByName_Params
{
};

// Function GunfireRuntime.GameUtil.RemoveLevelInstance
struct UGameUtil_RemoveLevelInstance_Params
{
};

// Function GunfireRuntime.GameUtil.PlayForceFeedback
struct UGameUtil_PlayForceFeedback_Params
{
};

// Function GunfireRuntime.GameUtil.PlayCameraShake
struct UGameUtil_PlayCameraShake_Params
{
};

// Function GunfireRuntime.GameUtil.LoadSoftReference
struct UGameUtil_LoadSoftReference_Params
{
};

// Function GunfireRuntime.GameUtil.LoadSoftClassReference
struct UGameUtil_LoadSoftClassReference_Params
{
};

// Function GunfireRuntime.GameUtil.LoadObjectFromPath
struct UGameUtil_LoadObjectFromPath_Params
{
};

// Function GunfireRuntime.GameUtil.LoadFileToString
struct UGameUtil_LoadFileToString_Params
{
};

// Function GunfireRuntime.GameUtil.LineTraceByChannelWithContext
struct UGameUtil_LineTraceByChannelWithContext_Params
{
};

// Function GunfireRuntime.GameUtil.LatentDestroyActor
struct UGameUtil_LatentDestroyActor_Params
{
};

// Function GunfireRuntime.GameUtil.IsVisible
struct UGameUtil_IsVisible_Params
{
};

// Function GunfireRuntime.GameUtil.IsUsingTouchController
struct UGameUtil_IsUsingTouchController_Params
{
};

// Function GunfireRuntime.GameUtil.IsUsingKeyboardAndMouse
struct UGameUtil_IsUsingKeyboardAndMouse_Params
{
};

// Function GunfireRuntime.GameUtil.IsUsingGamepad
struct UGameUtil_IsUsingGamepad_Params
{
};

// Function GunfireRuntime.GameUtil.IsSwimmingUnderwater
struct UGameUtil_IsSwimmingUnderwater_Params
{
};

// Function GunfireRuntime.GameUtil.IsSwimmingOnSurface
struct UGameUtil_IsSwimmingOnSurface_Params
{
};

// Function GunfireRuntime.GameUtil.IsSwimming
struct UGameUtil_IsSwimming_Params
{
};

// Function GunfireRuntime.GameUtil.IsStereoEnabled
struct UGameUtil_IsStereoEnabled_Params
{
};

// Function GunfireRuntime.GameUtil.IsSoftDestroyed
struct UGameUtil_IsSoftDestroyed_Params
{
};

// Function GunfireRuntime.GameUtil.IsSingleplayerGame
struct UGameUtil_IsSingleplayerGame_Params
{
};

// Function GunfireRuntime.GameUtil.IsShippingBuild
struct UGameUtil_IsShippingBuild_Params
{
};

// Function GunfireRuntime.GameUtil.IsPlayingCinematic
struct UGameUtil_IsPlayingCinematic_Params
{
};

// Function GunfireRuntime.GameUtil.IsLocallyControlled
struct UGameUtil_IsLocallyControlled_Params
{
};

// Function GunfireRuntime.GameUtil.IsInWater
struct UGameUtil_IsInWater_Params
{
};

// Function GunfireRuntime.GameUtil.IsInEditor
struct UGameUtil_IsInEditor_Params
{
};

// Function GunfireRuntime.GameUtil.IsHMDWorn
struct UGameUtil_IsHMDWorn_Params
{
};

// Function GunfireRuntime.GameUtil.IsHDREnabled
struct UGameUtil_IsHDREnabled_Params
{
};

// Function GunfireRuntime.GameUtil.IsChildOfSoftClasses
struct UGameUtil_IsChildOfSoftClasses_Params
{
};

// Function GunfireRuntime.GameUtil.InvokeEvent
struct UGameUtil_InvokeEvent_Params
{
};

// Function GunfireRuntime.GameUtil.HideVisibleComponents
struct UGameUtil_HideVisibleComponents_Params
{
};

// Function GunfireRuntime.GameUtil.HasAnyRootMotion
struct UGameUtil_HasAnyRootMotion_Params
{
};

// Function GunfireRuntime.GameUtil.HasAnyRenderedSlaveMeshes
struct UGameUtil_HasAnyRenderedSlaveMeshes_Params
{
};

// Function GunfireRuntime.GameUtil.GetWaterSubmergeDepth
struct UGameUtil_GetWaterSubmergeDepth_Params
{
};

// Function GunfireRuntime.GameUtil.GetUniqueColor
struct UGameUtil_GetUniqueColor_Params
{
};

// Function GunfireRuntime.GameUtil.GetScriptStack
struct UGameUtil_GetScriptStack_Params
{
};

// Function GunfireRuntime.GameUtil.GetPropertyValueAsFloat
struct UGameUtil_GetPropertyValueAsFloat_Params
{
};

// Function GunfireRuntime.GameUtil.GetPrefix
struct UGameUtil_GetPrefix_Params
{
};

// Function GunfireRuntime.GameUtil.GetPlayerStates
struct UGameUtil_GetPlayerStates_Params
{
};

// Function GunfireRuntime.GameUtil.GetPlayerControllers
struct UGameUtil_GetPlayerControllers_Params
{
};

// Function GunfireRuntime.GameUtil.GetPlayerControllerForActor
struct UGameUtil_GetPlayerControllerForActor_Params
{
};

// Function GunfireRuntime.GameUtil.GetPlatformSubType
struct UGameUtil_GetPlatformSubType_Params
{
};

// Function GunfireRuntime.GameUtil.GetPlatform
struct UGameUtil_GetPlatform_Params
{
};

// Function GunfireRuntime.GameUtil.GetOwningCharacter
struct UGameUtil_GetOwningCharacter_Params
{
};

// Function GunfireRuntime.GameUtil.GetOwner
struct UGameUtil_GetOwner_Params
{
};

// Function GunfireRuntime.GameUtil.GetObjectPath
struct UGameUtil_GetObjectPath_Params
{
};

// Function GunfireRuntime.GameUtil.GetNumConnectedPlayers
struct UGameUtil_GetNumConnectedPlayers_Params
{
};

// Function GunfireRuntime.GameUtil.GetNodeTransform
struct UGameUtil_GetNodeTransform_Params
{
};

// Function GunfireRuntime.GameUtil.GetLocalizationLanguage
struct UGameUtil_GetLocalizationLanguage_Params
{
};

// Function GunfireRuntime.GameUtil.GetLevelScriptActor
struct UGameUtil_GetLevelScriptActor_Params
{
};

// Function GunfireRuntime.GameUtil.GetLevelPathName
struct UGameUtil_GetLevelPathName_Params
{
};

// Function GunfireRuntime.GameUtil.GetLevelInstance
struct UGameUtil_GetLevelInstance_Params
{
};

// Function GunfireRuntime.GameUtil.GetLevelForActor
struct UGameUtil_GetLevelForActor_Params
{
};

// Function GunfireRuntime.GameUtil.GetGameViewport
struct UGameUtil_GetGameViewport_Params
{
};

// Function GunfireRuntime.GameUtil.GetFrameCounter
struct UGameUtil_GetFrameCounter_Params
{
};

// Function GunfireRuntime.GameUtil.GetCurrentPlatformVRam
struct UGameUtil_GetCurrentPlatformVRam_Params
{
};

// Function GunfireRuntime.GameUtil.GetComponentByTag
struct UGameUtil_GetComponentByTag_Params
{
};

// Function GunfireRuntime.GameUtil.GetComponentByName
struct UGameUtil_GetComponentByName_Params
{
};

// Function GunfireRuntime.GameUtil.GetClosestUnblockedPointBetweenActors
struct UGameUtil_GetClosestUnblockedPointBetweenActors_Params
{
};

// Function GunfireRuntime.GameUtil.GetClosestPointInActor
struct UGameUtil_GetClosestPointInActor_Params
{
};

// Function GunfireRuntime.GameUtil.GetCleanLevelStreamingName
struct UGameUtil_GetCleanLevelStreamingName_Params
{
};

// Function GunfireRuntime.GameUtil.GetCleanLevelPackageName
struct UGameUtil_GetCleanLevelPackageName_Params
{
};

// Function GunfireRuntime.GameUtil.GetBuildType
struct UGameUtil_GetBuildType_Params
{
};

// Function GunfireRuntime.GameUtil.GetBuildNumber
struct UGameUtil_GetBuildNumber_Params
{
};

// Function GunfireRuntime.GameUtil.GetBoneTransform
struct UGameUtil_GetBoneTransform_Params
{
};

// Function GunfireRuntime.GameUtil.GetBoneRefTransform
struct UGameUtil_GetBoneRefTransform_Params
{
};

// Function GunfireRuntime.GameUtil.GetBestWaterBounds
struct UGameUtil_GetBestWaterBounds_Params
{
};

// Function GunfireRuntime.GameUtil.GetAttachSocketName
struct UGameUtil_GetAttachSocketName_Params
{
};

// Function GunfireRuntime.GameUtil.GetActorsWithTagEx
struct UGameUtil_GetActorsWithTagEx_Params
{
};

// Function GunfireRuntime.GameUtil.GetActorsInRangeEx
struct UGameUtil_GetActorsInRangeEx_Params
{
};

// Function GunfireRuntime.GameUtil.GetActorsInRange
struct UGameUtil_GetActorsInRange_Params
{
};

// Function GunfireRuntime.GameUtil.GetActorBoundsSafe
struct UGameUtil_GetActorBoundsSafe_Params
{
};

// Function GunfireRuntime.GameUtil.ForceGarbageCollection
struct UGameUtil_ForceGarbageCollection_Params
{
};

// Function GunfireRuntime.GameUtil.FinishSpawningDeferredActor
struct UGameUtil_FinishSpawningDeferredActor_Params
{
};

// Function GunfireRuntime.GameUtil.FindTeleportPositionNear
struct UGameUtil_FindTeleportPositionNear_Params
{
};

// Function GunfireRuntime.GameUtil.FindPlayerStart
struct UGameUtil_FindPlayerStart_Params
{
};

// Function GunfireRuntime.GameUtil.EnableStereo
struct UGameUtil_EnableStereo_Params
{
};

// Function GunfireRuntime.GameUtil.DrawDebugArrow
struct UGameUtil_DrawDebugArrow_Params
{
};

// Function GunfireRuntime.GameUtil.DoesPathIntersectWithBounds
struct UGameUtil_DoesPathIntersectWithBounds_Params
{
};

// Function GunfireRuntime.GameUtil.DoesGameHaveFocus
struct UGameUtil_DoesGameHaveFocus_Params
{
};

// Function GunfireRuntime.GameUtil.DebugDrawShapeWithOrientation
struct UGameUtil_DebugDrawShapeWithOrientation_Params
{
};

// Function GunfireRuntime.GameUtil.DebugDrawShape
struct UGameUtil_DebugDrawShape_Params
{
};

// Function GunfireRuntime.GameUtil.DebugDrawCollision
struct UGameUtil_DebugDrawCollision_Params
{
};

// Function GunfireRuntime.GameUtil.CustomError
struct UGameUtil_CustomError_Params
{
};

// Function GunfireRuntime.GameUtil.CheckInputAction
struct UGameUtil_CheckInputAction_Params
{
};

// Function GunfireRuntime.GameUtil.CenterViewportCursor
struct UGameUtil_CenterViewportCursor_Params
{
};

// Function GunfireRuntime.GameUtil.CalculateTraversableTeleportLocation
struct UGameUtil_CalculateTraversableTeleportLocation_Params
{
};

// Function GunfireRuntime.GameUtil.ApplyLinearImpulseToActorAtLocation
struct UGameUtil_ApplyLinearImpulseToActorAtLocation_Params
{
};

// Function GunfireRuntime.GameUtil.ApplyLinearImpulseToActor
struct UGameUtil_ApplyLinearImpulseToActor_Params
{
};

// Function GunfireRuntime.GameUtil.AGPlatformOverride
struct UGameUtil_AGPlatformOverride_Params
{
};

// Function GunfireRuntime.GameUtil.AddTag
struct UGameUtil_AddTag_Params
{
};

// Function GunfireRuntime.GameUtil.AddLevelInstance
struct UGameUtil_AddLevelInstance_Params
{
};

// Function GunfireRuntime.GameUtil.AddComponent
struct UGameUtil_AddComponent_Params
{
};

// Function GunfireRuntime.GameUtil.ActivateSceneComponents
struct UGameUtil_ActivateSceneComponents_Params
{
};

// Function GunfireRuntime.GameUtil.ActivateSceneComponent
struct UGameUtil_ActivateSceneComponent_Params
{
};

// Function GunfireRuntime.GlobalObjectPool.GetInstance
struct UGlobalObjectPool_GetInstance_Params
{
};

// Function GunfireRuntime.GlobalObjectPool.Empty
struct UGlobalObjectPool_Empty_Params
{
};

// Function GunfireRuntime.HeuristicBoundsComponent.SetOuterExtent
struct UHeuristicBoundsComponent_SetOuterExtent_Params
{
};

// Function GunfireRuntime.HeuristicBoundsComponent.GetWorldTransformForPanelAtSetDistance
struct UHeuristicBoundsComponent_GetWorldTransformForPanelAtSetDistance_Params
{
};

// Function GunfireRuntime.HeuristicBoundsComponent.GetWorldTransformForPanel
struct UHeuristicBoundsComponent_GetWorldTransformForPanel_Params
{
};

// Function GunfireRuntime.HeuristicBoundsComponent.GetBoundsBracketOnPlane
struct UHeuristicBoundsComponent_GetBoundsBracketOnPlane_Params
{
};

// Function GunfireRuntime.HitLogComponent.ResetAllHitLocationHealth
struct UHitLogComponent_ResetAllHitLocationHealth_Params
{
};

// Function GunfireRuntime.HitLogComponent.OnRep_LastHitLocation
struct UHitLogComponent_OnRep_LastHitLocation_Params
{
};

// Function GunfireRuntime.HitLogComponent.OnRep_DestroyedFlags
struct UHitLogComponent_OnRep_DestroyedFlags_Params
{
};

// Function GunfireRuntime.HitLogComponent.GetLastHitInfo
struct UHitLogComponent_GetLastHitInfo_Params
{
};

// Function GunfireRuntime.HitLogComponent.GetLastDamageInfo
struct UHitLogComponent_GetLastDamageInfo_Params
{
};

// Function GunfireRuntime.HitLogComponent.GetImpactDamageForHitLocation
struct UHitLogComponent_GetImpactDamageForHitLocation_Params
{
};

// Function GunfireRuntime.HitLogComponent.GetDamageForHitLocation
struct UHitLogComponent_GetDamageForHitLocation_Params
{
};

// Function GunfireRuntime.HitLogComponent.GetDamage
struct UHitLogComponent_GetDamage_Params
{
};

// Function GunfireRuntime.HitLogComponent.ClearHitLog
struct UHitLogComponent_ClearHitLog_Params
{
};

// Function GunfireRuntime.HitPauseUtil.ApplyHitPause
struct UHitPauseUtil_ApplyHitPause_Params
{
};

// Function GunfireRuntime.HitPauseUtil.AllowsHitPause
struct UHitPauseUtil_AllowsHitPause_Params
{
};

// Function GunfireRuntime.IdleTimerComponent.Ping
struct UIdleTimerComponent_Ping_Params
{
};

// Function GunfireRuntime.InputDeviceManager.ResetKeyboardIconCache
struct UInputDeviceManager_ResetKeyboardIconCache_Params
{
};

// Function GunfireRuntime.InputDeviceManager.OnImageSetLoaded
struct UInputDeviceManager_OnImageSetLoaded_Params
{
};

// Function GunfireRuntime.InputDeviceManager.IsUsingAltImageSet
struct UInputDeviceManager_IsUsingAltImageSet_Params
{
};

// Function GunfireRuntime.InputDeviceManager.GetInstance
struct UInputDeviceManager_GetInstance_Params
{
};

// Function GunfireRuntime.InputDeviceManager.GetImage
struct UInputDeviceManager_GetImage_Params
{
};

// Function GunfireRuntime.InputDeviceManager.GetCurrentDeviceInUse
struct UInputDeviceManager_GetCurrentDeviceInUse_Params
{
};

// Function GunfireRuntime.InputRebindings.ResetInputRebindings
struct UInputRebindings_ResetInputRebindings_Params
{
};

// Function GunfireRuntime.InputRebindings.RemoveAxisRebinding
struct UInputRebindings_RemoveAxisRebinding_Params
{
};

// Function GunfireRuntime.InputRebindings.RemoveActionRebinding
struct UInputRebindings_RemoveActionRebinding_Params
{
};

// Function GunfireRuntime.InputRebindings.AddAxisRebinding
struct UInputRebindings_AddAxisRebinding_Params
{
};

// Function GunfireRuntime.InputRebindings.AddActionRebinding
struct UInputRebindings_AddActionRebinding_Params
{
};

// Function GunfireRuntime.InputStateComponent.SetWalking
struct UInputStateComponent_SetWalking_Params
{
};

// Function GunfireRuntime.InputStateComponent.SetInputEnabled
struct UInputStateComponent_SetInputEnabled_Params
{
};

// Function GunfireRuntime.InputStateComponent.SetButtonStateByName
struct UInputStateComponent_SetButtonStateByName_Params
{
};

// Function GunfireRuntime.InputStateComponent.ResetButton
struct UInputStateComponent_ResetButton_Params
{
};

// Function GunfireRuntime.InputStateComponent.RemoveButtonListener
struct UInputStateComponent_RemoveButtonListener_Params
{
};

// Function GunfireRuntime.InputStateComponent.OnSwitchCamera
struct UInputStateComponent_OnSwitchCamera_Params
{
};

// Function GunfireRuntime.InputStateComponent.IsInputEnabled
struct UInputStateComponent_IsInputEnabled_Params
{
};

// Function GunfireRuntime.InputStateComponent.IsActionPressed
struct UInputStateComponent_IsActionPressed_Params
{
};

// Function GunfireRuntime.InputStateComponent.HasVerticalMoveInput
struct UInputStateComponent_HasVerticalMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.HasMoveInput
struct UInputStateComponent_HasMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.HasHorizontalMoveInput
struct UInputStateComponent_HasHorizontalMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetScreenRelativeMoveInput
struct UInputStateComponent_GetScreenRelativeMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetRelativeMoveInput
struct UInputStateComponent_GetRelativeMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetMoveInput
struct UInputStateComponent_GetMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetIsWalking
struct UInputStateComponent_GetIsWalking_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetCameraRotation
struct UInputStateComponent_GetCameraRotation_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetCameraRelativeMoveInput
struct UInputStateComponent_GetCameraRelativeMoveInput_Params
{
};

// Function GunfireRuntime.InputStateComponent.GetButtonStateByName
struct UInputStateComponent_GetButtonStateByName_Params
{
};

// Function GunfireRuntime.InputStateComponent.AddButtonListener
struct UInputStateComponent_AddButtonListener_Params
{
};

// Function GunfireRuntime.InspectableComponent.StartInspect
struct UInspectableComponent_StartInspect_Params
{
};

// Function GunfireRuntime.InspectableComponent.OnRep_IsOccupied
struct UInspectableComponent_OnRep_IsOccupied_Params
{
};

// Function GunfireRuntime.InspectableComponent.OnRep_IsActivePlayer
struct UInspectableComponent_OnRep_IsActivePlayer_Params
{
};

// Function GunfireRuntime.InspectableComponent.IsOccupied
struct UInspectableComponent_IsOccupied_Params
{
};

// Function GunfireRuntime.InspectableComponent.IsInTransition
struct UInspectableComponent_IsInTransition_Params
{
};

// Function GunfireRuntime.InspectableComponent.IsInteractingActorLocal
struct UInspectableComponent_IsInteractingActorLocal_Params
{
};

// Function GunfireRuntime.InspectableComponent.IsInteracting
struct UInspectableComponent_IsInteracting_Params
{
};

// Function GunfireRuntime.InspectableComponent.GetActivePlayerController
struct UInspectableComponent_GetActivePlayerController_Params
{
};

// Function GunfireRuntime.InspectableComponent.EndInspect
struct UInspectableComponent_EndInspect_Params
{
};

// Function GunfireRuntime.InspectUtil.SetInspectStat
struct UInspectUtil_SetInspectStat_Params
{
};

// Function GunfireRuntime.InspectUtil.GetInspectStat
struct UInspectUtil_GetInspectStat_Params
{
};

// Function GunfireRuntime.InspectUtil.ClearStats
struct UInspectUtil_ClearStats_Params
{
};

// Function GunfireRuntime.InterpolatedSoundMix.SetInterpolatePos
struct UInterpolatedSoundMix_SetInterpolatePos_Params
{
};

// Function GunfireRuntime.ItemGenerator.GenerateItems
struct UItemGenerator_GenerateItems_Params
{
};

// Function GunfireRuntime.ItemManager.GetItemsInRangeByType
struct UItemManager_GetItemsInRangeByType_Params
{
};

// Function GunfireRuntime.ItemManager.GetInstance
struct UItemManager_GetInstance_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.RequestReturnItemToInventory
struct UItemSocketComponent_RequestReturnItemToInventory_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.RequestAddItemFromInventoryById
struct UItemSocketComponent_RequestAddItemFromInventoryById_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.RequestAddItemFromInventoryByClass
struct UItemSocketComponent_RequestAddItemFromInventoryByClass_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.RequestAddItemFromInventory
struct UItemSocketComponent_RequestAddItemFromInventory_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.RemoveItem
struct UItemSocketComponent_RemoveItem_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.IsValid
struct UItemSocketComponent_IsValid_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.IsFull
struct UItemSocketComponent_IsFull_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.IsEmpty
struct UItemSocketComponent_IsEmpty_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.HasInteractableSlot
struct UItemSocketComponent_HasInteractableSlot_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.ForceFill
struct UItemSocketComponent_ForceFill_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.CanAddItemOfClass
struct UItemSocketComponent_CanAddItemOfClass_Params
{
};

// Function GunfireRuntime.ItemSocketComponent.AddItem
struct UItemSocketComponent_AddItem_Params
{
};

// Function GunfireRuntime.ItemUtil.ValidateDropPosition
struct UItemUtil_ValidateDropPosition_Params
{
};

// Function GunfireRuntime.ItemUtil.SpawnItem
struct UItemUtil_SpawnItem_Params
{
};

// Function GunfireRuntime.ItemUtil.PreSpawnDroppedItem
struct UItemUtil_PreSpawnDroppedItem_Params
{
};

// Function GunfireRuntime.ItemUtil.PostSpawnDroppedItem
struct UItemUtil_PostSpawnDroppedItem_Params
{
};

// Function GunfireRuntime.ItemUtil.GetInspectInfoFromInventory
struct UItemUtil_GetInspectInfoFromInventory_Params
{
};

// Function GunfireRuntime.ItemUtil.GetInspectInfo
struct UItemUtil_GetInspectInfo_Params
{
};

// Function GunfireRuntime.ItemUtil.DropLoot
struct UItemUtil_DropLoot_Params
{
};

// Function GunfireRuntime.ItemUtil.DropItem
struct UItemUtil_DropItem_Params
{
};

// Function GunfireRuntime.LevelInstance.OnLevelUnloaded
struct ULevelInstance_OnLevelUnloaded_Params
{
};

// Function GunfireRuntime.LevelInstance.OnLevelShown
struct ULevelInstance_OnLevelShown_Params
{
};

// Function GunfireRuntime.LevelInstance.OnLevelLoaded
struct ULevelInstance_OnLevelLoaded_Params
{
};

// Function GunfireRuntime.LevelInstance.OnLevelHidden
struct ULevelInstance_OnLevelHidden_Params
{
};

// Function GunfireRuntime.LevelInstance.OnChildUnloaded
struct ULevelInstance_OnChildUnloaded_Params
{
};

// Function GunfireRuntime.LevelInstance.OnChildShown
struct ULevelInstance_OnChildShown_Params
{
};

// Function GunfireRuntime.LevelInstance.OnChildLoaded
struct ULevelInstance_OnChildLoaded_Params
{
};

// Function GunfireRuntime.LevelInstance.OnChildHidden
struct ULevelInstance_OnChildHidden_Params
{
};

// Function GunfireRuntime.LevelLoadingManager.OnRep_LevelInstanceInfo
struct ULevelLoadingManager_OnRep_LevelInstanceInfo_Params
{
};

// Function GunfireRuntime.LevelLoadingManager.OnLevelUnloaded
struct ULevelLoadingManager_OnLevelUnloaded_Params
{
};

// Function GunfireRuntime.LevelLoadingManager.OnLevelShown
struct ULevelLoadingManager_OnLevelShown_Params
{
};

// Function GunfireRuntime.LevelLoadingManager.OnLevelLoaded
struct ULevelLoadingManager_OnLevelLoaded_Params
{
};

// Function GunfireRuntime.LevelLoadingManager.OnLevelHidden
struct ULevelLoadingManager_OnLevelHidden_Params
{
};

// Function GunfireRuntime.PlayableLevel.ChangeLevelState
struct APlayableLevel_ChangeLevelState_Params
{
};

// Function GunfireRuntime.PlayableLevelCollection.IsPreloaded
struct APlayableLevelCollection_IsPreloaded_Params
{
};

// Function GunfireRuntime.PlayableLevelCollection.GetPlayableLevelByPath
struct APlayableLevelCollection_GetPlayableLevelByPath_Params
{
};

// Function GunfireRuntime.PlayableLevelCollection.GetPlayableLevelByName
struct APlayableLevelCollection_GetPlayableLevelByName_Params
{
};

// Function GunfireRuntime.PlayableLevelCollection.ChangeCollectionState
struct APlayableLevelCollection_ChangeCollectionState_Params
{
};

// Function GunfireRuntime.PlayableLevelCollection.AddPlayableLevel
struct APlayableLevelCollection_AddPlayableLevel_Params
{
};

// Function GunfireRuntime.LODVolume.SetLODVisibility
struct ALODVolume_SetLODVisibility_Params
{
};

// Function GunfireRuntime.LODVolumeManager.UpdateVolumesVisibility
struct ULODVolumeManager_UpdateVolumesVisibility_Params
{
};

// Function GunfireRuntime.LODVolumeManager.UnregisterVolume
struct ULODVolumeManager_UnregisterVolume_Params
{
};

// Function GunfireRuntime.LODVolumeManager.RegisterVolume
struct ULODVolumeManager_RegisterVolume_Params
{
};

// Function GunfireRuntime.LODVolumeManager.OnFinishCooldown
struct ULODVolumeManager_OnFinishCooldown_Params
{
};

// Function GunfireRuntime.LODVolumeManager.GetPlayerRangeToVolume
struct ULODVolumeManager_GetPlayerRangeToVolume_Params
{
};

// Function GunfireRuntime.LODVolumeManager.GetInstance
struct ULODVolumeManager_GetInstance_Params
{
};

// Function GunfireRuntime.RandomTileActorInterface.SetRandomSeed
struct URandomTileActorInterface_SetRandomSeed_Params
{
};

// Function GunfireRuntime.MapLoader.TravelToTransitionMap
struct UMapLoader_TravelToTransitionMap_Params
{
};

// Function GunfireRuntime.MapLoader.TravelToNextMap
struct UMapLoader_TravelToNextMap_Params
{
};

// Function GunfireRuntime.MapLoader.OpenMapByName
struct UMapLoader_OpenMapByName_Params
{
};

// Function GunfireRuntime.MapLoader.OpenMap
struct UMapLoader_OpenMap_Params
{
};

// Function GunfireRuntime.MapLoader.OnPlayerEnterTransitionMap
struct UMapLoader_OnPlayerEnterTransitionMap_Params
{
};

// Function GunfireRuntime.MapLoader.OnPlayerEnterNextMapDelayed
struct UMapLoader_OnPlayerEnterNextMapDelayed_Params
{
};

// Function GunfireRuntime.MapLoader.OnNextMapVisible
struct UMapLoader_OnNextMapVisible_Params
{
};

// Function GunfireRuntime.MapLoader.OnFadeScreenCompleted
struct UMapLoader_OnFadeScreenCompleted_Params
{
};

// Function GunfireRuntime.MapLoader.LoadNotStreamableLevels
struct UMapLoader_LoadNotStreamableLevels_Params
{
};

// Function GunfireRuntime.MapLoader.GetNotStreamableMapSuffix
struct UMapLoader_GetNotStreamableMapSuffix_Params
{
};

// Function GunfireRuntime.MapLoader.GetMapLoader
struct UMapLoader_GetMapLoader_Params
{
};

// Function GunfireRuntime.MathUtil.StableRandomInteger
struct UMathUtil_StableRandomInteger_Params
{
};

// Function GunfireRuntime.MathUtil.SphereTriangleOverlap
struct UMathUtil_SphereTriangleOverlap_Params
{
};

// Function GunfireRuntime.MathUtil.SphereCapsuleIntersect
struct UMathUtil_SphereCapsuleIntersect_Params
{
};

// Function GunfireRuntime.MathUtil.SmoothCDFloat
struct UMathUtil_SmoothCDFloat_Params
{
};

// Function GunfireRuntime.MathUtil.SegmentCapsuleIntersect
struct UMathUtil_SegmentCapsuleIntersect_Params
{
};

// Function GunfireRuntime.MathUtil.ScaleValueByLevel
struct UMathUtil_ScaleValueByLevel_Params
{
};

// Function GunfireRuntime.MathUtil.RayIntersectsSphere
struct UMathUtil_RayIntersectsSphere_Params
{
};

// Function GunfireRuntime.MathUtil.NormalizeToRangeAndClamp
struct UMathUtil_NormalizeToRangeAndClamp_Params
{
};

// Function GunfireRuntime.MathUtil.IsPointInBounds
struct UMathUtil_IsPointInBounds_Params
{
};

// Function GunfireRuntime.MathUtil.IsInsideBox
struct UMathUtil_IsInsideBox_Params
{
};

// Function GunfireRuntime.MathUtil.GetRandomPointInsideSphere
struct UMathUtil_GetRandomPointInsideSphere_Params
{
};

// Function GunfireRuntime.MathUtil.GetRandomPointInsideHollowSphere
struct UMathUtil_GetRandomPointInsideHollowSphere_Params
{
};

// Function GunfireRuntime.MathUtil.GetRandomPointInsideCircle
struct UMathUtil_GetRandomPointInsideCircle_Params
{
};

// Function GunfireRuntime.MathUtil.GetPointAlongCircle
struct UMathUtil_GetPointAlongCircle_Params
{
};

// Function GunfireRuntime.MathUtil.GetHeading
struct UMathUtil_GetHeading_Params
{
};

// Function GunfireRuntime.MathUtil.GetDistanceScalar
struct UMathUtil_GetDistanceScalar_Params
{
};

// Function GunfireRuntime.MathUtil.GetDirectionVector
struct UMathUtil_GetDirectionVector_Params
{
};

// Function GunfireRuntime.MathUtil.GetCameraRelativeBasis
struct UMathUtil_GetCameraRelativeBasis_Params
{
};

// Function GunfireRuntime.MathUtil.GetAngleDiff
struct UMathUtil_GetAngleDiff_Params
{
};

// Function GunfireRuntime.MathUtil.GetAngleBetween
struct UMathUtil_GetAngleBetween_Params
{
};

// Function GunfireRuntime.MathUtil.FindClosestPointOnSpline
struct UMathUtil_FindClosestPointOnSpline_Params
{
};

// Function GunfireRuntime.MathUtil.FindBestFitPlane
struct UMathUtil_FindBestFitPlane_Params
{
};

// Function GunfireRuntime.MathUtil.ApplyMod
struct UMathUtil_ApplyMod_Params
{
};

// Function GunfireRuntime.MeshOutlinerComponent.SetOwnerOutlined
struct UMeshOutlinerComponent_SetOwnerOutlined_Params
{
};

// Function GunfireRuntime.MeshOutlinerComponent.IsCurrentlyOutlined
struct UMeshOutlinerComponent_IsCurrentlyOutlined_Params
{
};

// Function GunfireRuntime.MiniMapActor.UpdateLevelVisibility
struct AMiniMapActor_UpdateLevelVisibility_Params
{
};

// Function GunfireRuntime.MiniMapActor.SetShown
struct AMiniMapActor_SetShown_Params
{
};

// Function GunfireRuntime.MiniMapActor.Select
struct AMiniMapActor_Select_Params
{
};

// Function GunfireRuntime.MiniMapActor.OnShown
struct AMiniMapActor_OnShown_Params
{
};

// Function GunfireRuntime.MiniMapActor.OnSelected
struct AMiniMapActor_OnSelected_Params
{
};

// Function GunfireRuntime.MiniMapActor.OnMiniMapSet
struct AMiniMapActor_OnMiniMapSet_Params
{
};

// Function GunfireRuntime.MiniMapActor.OnHidden
struct AMiniMapActor_OnHidden_Params
{
};

// Function GunfireRuntime.MiniMapActor.OnDeSelected
struct AMiniMapActor_OnDeSelected_Params
{
};

// Function GunfireRuntime.MiniMapActor.IsSelected
struct AMiniMapActor_IsSelected_Params
{
};

// Function GunfireRuntime.MiniMapActor.GetRefActor
struct AMiniMapActor_GetRefActor_Params
{
};

// Function GunfireRuntime.MiniMapActor.GetMiniMapRefActor
struct AMiniMapActor_GetMiniMapRefActor_Params
{
};

// Function GunfireRuntime.MiniMapActor.GetMiniMap
struct AMiniMapActor_GetMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapActor.GetIsActorVisibleOnMiniMap
struct AMiniMapActor_GetIsActorVisibleOnMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapActor.GetContext
struct AMiniMapActor_GetContext_Params
{
};

// Function GunfireRuntime.MiniMapActor.DeSelect
struct AMiniMapActor_DeSelect_Params
{
};

// Function GunfireRuntime.MiniMapActor.DebugSetContext
struct AMiniMapActor_DebugSetContext_Params
{
};

// Function GunfireRuntime.MiniMapActor.Center
struct AMiniMapActor_Center_Params
{
};

// Function GunfireRuntime.MiniMapActor.CanSelect
struct AMiniMapActor_CanSelect_Params
{
};

// Function GunfireRuntime.MiniMapComponent.UpdateMiniMapLevel
struct UMiniMapComponent_UpdateMiniMapLevel_Params
{
};

// Function GunfireRuntime.MiniMapComponent.TryAutoAddToMiniMap
struct UMiniMapComponent_TryAutoAddToMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapComponent.SetMiniMapLevel
struct UMiniMapComponent_SetMiniMapLevel_Params
{
};

// Function GunfireRuntime.MiniMapComponent.RemoveFromMiniMap
struct UMiniMapComponent_RemoveFromMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapComponent.OnDead
struct UMiniMapComponent_OnDead_Params
{
};

// Function GunfireRuntime.MiniMapComponent.IsAddedToMiniMap
struct UMiniMapComponent_IsAddedToMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapComponent.AutoAddToMiniMap
struct UMiniMapComponent_AutoAddToMiniMap_Params
{
};

// Function GunfireRuntime.MiniMapComponent.AddToMiniMap
struct UMiniMapComponent_AddToMiniMap_Params
{
};

// Function GunfireRuntime.MoveDetachedCameraState.Snap
struct UMoveDetachedCameraState_Snap_Params
{
};

// Function GunfireRuntime.MoveDetachedCameraState.Rotate
struct UMoveDetachedCameraState_Rotate_Params
{
};

// Function GunfireRuntime.MusicDirector.OnRep_MusicIntensity
struct UMusicDirector_OnRep_MusicIntensity_Params
{
};

// Function GunfireRuntime.MusicManager.SetMusicState
struct UMusicManager_SetMusicState_Params
{
};

// Function GunfireRuntime.MusicManager.IsMusicSetActive
struct UMusicManager_IsMusicSetActive_Params
{
};

// Function GunfireRuntime.MusicManager.GetMusicManager
struct UMusicManager_GetMusicManager_Params
{
};

// Function GunfireRuntime.MusicManager.DeactivateMusicSet
struct UMusicManager_DeactivateMusicSet_Params
{
};

// Function GunfireRuntime.MusicManager.ActivateMusicSet
struct UMusicManager_ActivateMusicSet_Params
{
};

// Function GunfireRuntime.NamedActorComponent.SetNameID
struct UNamedActorComponent_SetNameID_Params
{
};

// Function GunfireRuntime.NamedActorManager.RemoveActor
struct UNamedActorManager_RemoveActor_Params
{
};

// Function GunfireRuntime.NamedActorManager.GetInstance
struct UNamedActorManager_GetInstance_Params
{
};

// Function GunfireRuntime.NamedActorManager.FindActorsByTags
struct UNamedActorManager_FindActorsByTags_Params
{
};

// Function GunfireRuntime.NamedActorManager.FindActorByName
struct UNamedActorManager_FindActorByName_Params
{
};

// Function GunfireRuntime.NamedActorManager.AddActor
struct UNamedActorManager_AddActor_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.SetLinkEnabledArea
struct UNavLinkGunfireComponent_SetLinkEnabledArea_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.SetLinkEnabled
struct UNavLinkGunfireComponent_SetLinkEnabled_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.SetLinkDisableArea
struct UNavLinkGunfireComponent_SetLinkDisableArea_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.IsLinkEnabled
struct UNavLinkGunfireComponent_IsLinkEnabled_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.GetLinkEnabledArea
struct UNavLinkGunfireComponent_GetLinkEnabledArea_Params
{
};

// Function GunfireRuntime.NavLinkGunfireComponent.GetLinkDisabledArea
struct UNavLinkGunfireComponent_GetLinkDisabledArea_Params
{
};

// Function GunfireRuntime.NavModifierGunfireComponent.SetState
struct UNavModifierGunfireComponent_SetState_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.SetTrackingMode
struct UNPCHeadTrackingComponent_SetTrackingMode_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.ResetLookTargets
struct UNPCHeadTrackingComponent_ResetLookTargets_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.ResetLookRotation
struct UNPCHeadTrackingComponent_ResetLookRotation_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.RemoveLookTarget
struct UNPCHeadTrackingComponent_RemoveLookTarget_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.RemoveActorLookTarget
struct UNPCHeadTrackingComponent_RemoveActorLookTarget_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.AddLookTarget
struct UNPCHeadTrackingComponent_AddLookTarget_Params
{
};

// Function GunfireRuntime.NPCHeadTrackingComponent.AddActorLookTarget
struct UNPCHeadTrackingComponent_AddActorLookTarget_Params
{
};

// Function GunfireRuntime.PersistenceKeysComponent.SetKey
struct UPersistenceKeysComponent_SetKey_Params
{
};

// Function GunfireRuntime.PersistenceKeysComponent.RemoveKey
struct UPersistenceKeysComponent_RemoveKey_Params
{
};

// Function GunfireRuntime.PersistenceKeysComponent.HasKey
struct UPersistenceKeysComponent_HasKey_Params
{
};

// Function GunfireRuntime.PersistenceKeysComponent.GetKeyValue
struct UPersistenceKeysComponent_GetKeyValue_Params
{
};

// Function GunfireRuntime.PersistenceKeysComponent.AddKey
struct UPersistenceKeysComponent_AddKey_Params
{
};

// Function GunfireRuntime.PhysicsSoundInstance.OnImpactTimerExpired
struct UPhysicsSoundInstance_OnImpactTimerExpired_Params
{
};

// Function GunfireRuntime.PhysicsSoundInstance.AudioComponentFinished
struct UPhysicsSoundInstance_AudioComponentFinished_Params
{
};

// Function GunfireRuntime.PhysicsActorGunfire.SoundInstanceFinished
struct APhysicsActorGunfire_SoundInstanceFinished_Params
{
};

// Function GunfireRuntime.PhysicsActorGunfire.OnHitCallback
struct APhysicsActorGunfire_OnHitCallback_Params
{
};

// Function GunfireRuntime.PhysicsBounds.OnEndAffectCharacter
struct APhysicsBounds_OnEndAffectCharacter_Params
{
};

// Function GunfireRuntime.PhysicsBounds.OnBeginAffectCharacter
struct APhysicsBounds_OnBeginAffectCharacter_Params
{
};

// Function GunfireRuntime.PhysicsBounds.GetForceToApplyScale
struct APhysicsBounds_GetForceToApplyScale_Params
{
};

// Function GunfireRuntime.PhysicsBoundsInterface.IsWaterBounds
struct UPhysicsBoundsInterface_IsWaterBounds_Params
{
};

// Function GunfireRuntime.PhysicsBoundsInterface.GetWaterLine
struct UPhysicsBoundsInterface_GetWaterLine_Params
{
};

// Function GunfireRuntime.PhysicsBoundsInterface.GetBoundsType
struct UPhysicsBoundsInterface_GetBoundsType_Params
{
};

// Function GunfireRuntime.PhysicsBoundsInterface.GetBoundsPriority
struct UPhysicsBoundsInterface_GetBoundsPriority_Params
{
};

// Function GunfireRuntime.PhysicsBoundsInterface.ConfirmOverlap
struct UPhysicsBoundsInterface_ConfirmOverlap_Params
{
};

// Function GunfireRuntime.PhysicsBoundsUtil.IsWaterBounds
struct UPhysicsBoundsUtil_IsWaterBounds_Params
{
};

// Function GunfireRuntime.PhysicsBoundsUtil.GetWaterSurfaceType
struct UPhysicsBoundsUtil_GetWaterSurfaceType_Params
{
};

// Function GunfireRuntime.PhysicsBoundsUtil.GetWaterLine
struct UPhysicsBoundsUtil_GetWaterLine_Params
{
};

// Function GunfireRuntime.PhysicsBoundsUtil.GetBoundsType
struct UPhysicsBoundsUtil_GetBoundsType_Params
{
};

// Function GunfireRuntime.PhysicsUtil.RestoreRigidBodies
struct UPhysicsUtil_RestoreRigidBodies_Params
{
};

// Function GunfireRuntime.PhysicsUtil.ResetOverlaps
struct UPhysicsUtil_ResetOverlaps_Params
{
};

// Function GunfireRuntime.PhysicsUtil.GetPhysicsMaterial
struct UPhysicsUtil_GetPhysicsMaterial_Params
{
};

// Function GunfireRuntime.PhysicsUtil.DisableRigidBodies
struct UPhysicsUtil_DisableRigidBodies_Params
{
};

// Function GunfireRuntime.PlacementHelperComponent.OnPostEditMove
struct UPlacementHelperComponent_OnPostEditMove_Params
{
};

// Function GunfireRuntime.PlayerCameraManagerGunfire.SetFadeLock
struct APlayerCameraManagerGunfire_SetFadeLock_Params
{
};

// Function GunfireRuntime.PlayStateComponent.IsLocallyControlled
struct UPlayStateComponent_IsLocallyControlled_Params
{
};

// Function GunfireRuntime.PlayStateComponent.GetOwningPlayerController
struct UPlayStateComponent_GetOwningPlayerController_Params
{
};

// Function GunfireRuntime.PlayStateComponent.GetElapsedTransitionTime
struct UPlayStateComponent_GetElapsedTransitionTime_Params
{
};

// Function GunfireRuntime.PlayStateComponent.GetActiveEffect
struct UPlayStateComponent_GetActiveEffect_Params
{
};

// Function GunfireRuntime.PlayStateUtils.RequestPlayStates
struct UPlayStateUtils_RequestPlayStates_Params
{
};

// Function GunfireRuntime.PlayStateUtils.RequestPlayState
struct UPlayStateUtils_RequestPlayState_Params
{
};

// Function GunfireRuntime.PlayStateUtils.IsTransitioningPlayStates
struct UPlayStateUtils_IsTransitioningPlayStates_Params
{
};

// Function GunfireRuntime.PlayStateUtils.GetRequestedPlayStateName
struct UPlayStateUtils_GetRequestedPlayStateName_Params
{
};

// Function GunfireRuntime.PlayStateUtils.GetCurrentPlayStateName
struct UPlayStateUtils_GetCurrentPlayStateName_Params
{
};

// Function GunfireRuntime.PlayStateUtils.GetActivePlayStateEffect
struct UPlayStateUtils_GetActivePlayStateEffect_Params
{
};

// Function GunfireRuntime.PlayStateUtils.ClearRequestedPlayStatesForAllReasons
struct UPlayStateUtils_ClearRequestedPlayStatesForAllReasons_Params
{
};

// Function GunfireRuntime.PlayStateUtils.ClearRequestedPlayState
struct UPlayStateUtils_ClearRequestedPlayState_Params
{
};

// Function GunfireRuntime.PlayStateEffect_ScreenFade.IsHidingScreen
struct UPlayStateEffect_ScreenFade_IsHidingScreen_Params
{
};

// Function GunfireRuntime.PostProcessSkylightComponent.GetCurrentSkylight
struct UPostProcessSkylightComponent_GetCurrentSkylight_Params
{
};

// Function GunfireRuntime.ProceduralDamageableActor.IsTriggerDamageType
struct AProceduralDamageableActor_IsTriggerDamageType_Params
{
};

// Function GunfireRuntime.ProceduralDamageableActor.GetVertices
struct AProceduralDamageableActor_GetVertices_Params
{
};

// Function GunfireRuntime.ProceduralDamageableActor.GetTriangleIndices
struct AProceduralDamageableActor_GetTriangleIndices_Params
{
};

// Function GunfireRuntime.ProceduralDamageableActor.ApplyRadialVertexColor
struct AProceduralDamageableActor_ApplyRadialVertexColor_Params
{
};

// Function GunfireRuntime.ProjectileBase.ValidateHit
struct AProjectileBase_ValidateHit_Params
{
};

// Function GunfireRuntime.ProjectileBase.SetMaxLifeTime
struct AProjectileBase_SetMaxLifeTime_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnStop
struct AProjectileBase_OnStop_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnProjectileStop
struct AProjectileBase_OnProjectileStop_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnProjectilePenetrate
struct AProjectileBase_OnProjectilePenetrate_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnProjectileHit
struct AProjectileBase_OnProjectileHit_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnNotifyTakeDamage
struct AProjectileBase_OnNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.ProjectileBase.OnHit
struct AProjectileBase_OnHit_Params
{
};

// Function GunfireRuntime.ProjectileBase.MulticastStop
struct AProjectileBase_MulticastStop_Params
{
};

// Function GunfireRuntime.ProjectileBase.MulticastImpactEffect
struct AProjectileBase_MulticastImpactEffect_Params
{
};

// Function GunfireRuntime.ProjectileBase.IsSprayHit
struct AProjectileBase_IsSprayHit_Params
{
};

// Function GunfireRuntime.ProjectileBase.IncrementNumPenetrations
struct AProjectileBase_IncrementNumPenetrations_Params
{
};

// Function GunfireRuntime.ProjectileBase.GetNumPenetrations
struct AProjectileBase_GetNumPenetrations_Params
{
};

// Function GunfireRuntime.ProjectileMovementComponentGunfire.SimulateBounce
struct UProjectileMovementComponentGunfire_SimulateBounce_Params
{
};

// Function GunfireRuntime.ProjectileMovementComponentGunfire.SetPenetrate
struct UProjectileMovementComponentGunfire_SetPenetrate_Params
{
};

// Function GunfireRuntime.ProjectileVisualization.VisualizeProjectileFromClass
struct AProjectileVisualization_VisualizeProjectileFromClass_Params
{
};

// Function GunfireRuntime.ProjectileVisualization.VisualizeProjectile
struct AProjectileVisualization_VisualizeProjectile_Params
{
};

// Function GunfireRuntime.ProjectileVisualization.PreDraw
struct AProjectileVisualization_PreDraw_Params
{
};

// Function GunfireRuntime.ProjectileVisualization.PostDrawPath
struct AProjectileVisualization_PostDrawPath_Params
{
};

// Function GunfireRuntime.ProjectileVisualization.ClearProjectileVisualization
struct AProjectileVisualization_ClearProjectileVisualization_Params
{
};

// Function GunfireRuntime.QuestObjective.SetTimer
struct UQuestObjective_SetTimer_Params
{
};

// Function GunfireRuntime.QuestObjective.SetRefActor
struct UQuestObjective_SetRefActor_Params
{
};

// Function GunfireRuntime.QuestObjective.SetPinned
struct UQuestObjective_SetPinned_Params
{
};

// Function GunfireRuntime.QuestObjective.SetCounter
struct UQuestObjective_SetCounter_Params
{
};

// Function GunfireRuntime.QuestObjective.ResetObjective
struct UQuestObjective_ResetObjective_Params
{
};

// Function GunfireRuntime.QuestObjective.ResetCounter
struct UQuestObjective_ResetCounter_Params
{
};

// Function GunfireRuntime.QuestObjective.OnRep_ObjectiveData
struct UQuestObjective_OnRep_ObjectiveData_Params
{
};

// Function GunfireRuntime.QuestObjective.OnInitializeQuest
struct UQuestObjective_OnInitializeQuest_Params
{
};

// Function GunfireRuntime.QuestObjective.IsObjectiveComplete
struct UQuestObjective_IsObjectiveComplete_Params
{
};

// Function GunfireRuntime.QuestObjective.IsObjectiveActive
struct UQuestObjective_IsObjectiveActive_Params
{
};

// Function GunfireRuntime.QuestObjective.IncrementCounter
struct UQuestObjective_IncrementCounter_Params
{
};

// Function GunfireRuntime.QuestObjective.GetNameID
struct UQuestObjective_GetNameID_Params
{
};

// Function GunfireRuntime.QuestObjective.CompleteObjective
struct UQuestObjective_CompleteObjective_Params
{
};

// Function GunfireRuntime.QuestObjective.ClearTimer
struct UQuestObjective_ClearTimer_Params
{
};

// Function GunfireRuntime.QuestObjective.ActivateObjective
struct UQuestObjective_ActivateObjective_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.RequestReturnItemToInventory
struct UReceptacleComponent_RequestReturnItemToInventory_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.RequestAddItemFromInventoryById
struct UReceptacleComponent_RequestAddItemFromInventoryById_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.RequestAddItemFromInventoryByClass
struct UReceptacleComponent_RequestAddItemFromInventoryByClass_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.RequestAddItemFromInventory
struct UReceptacleComponent_RequestAddItemFromInventory_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.RemoveItem
struct UReceptacleComponent_RemoveItem_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.IsValid
struct UReceptacleComponent_IsValid_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.IsFull
struct UReceptacleComponent_IsFull_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.IsEmpty
struct UReceptacleComponent_IsEmpty_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.HasInteractableSlot
struct UReceptacleComponent_HasInteractableSlot_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.GetSlots
struct UReceptacleComponent_GetSlots_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.CanAddItemOfClass
struct UReceptacleComponent_CanAddItemOfClass_Params
{
};

// Function GunfireRuntime.ReceptacleComponent.AddItem
struct UReceptacleComponent_AddItem_Params
{
};

// Function GunfireRuntime.RegionNotifyInterface.OnNotifyRegionEntered
struct URegionNotifyInterface_OnNotifyRegionEntered_Params
{
};

// Function GunfireRuntime.ReplicatedMovementComponent.ServerMoveUpdate
struct UReplicatedMovementComponent_ServerMoveUpdate_Params
{
};

// Function GunfireRuntime.ReplicatedMovementComponent.OnRep_MovementInfo
struct UReplicatedMovementComponent_OnRep_MovementInfo_Params
{
};

// Function GunfireRuntime.ReplicatedMovementComponent.ClientAckMove
struct UReplicatedMovementComponent_ClientAckMove_Params
{
};

// Function GunfireRuntime.ResourceSpawnManager.OnUninitialize
struct UResourceSpawnManager_OnUninitialize_Params
{
};

// Function GunfireRuntime.ResourceSpawnManager.OnSpawnListLoaded
struct UResourceSpawnManager_OnSpawnListLoaded_Params
{
};

// Function GunfireRuntime.ResourceSpawnManager.OnSetTileActive
struct UResourceSpawnManager_OnSetTileActive_Params
{
};

// Function GunfireRuntime.ResourceSpawnManager.OnGenerateResources
struct UResourceSpawnManager_OnGenerateResources_Params
{
};

// Function GunfireRuntime.RotatorComponent.Stop
struct URotatorComponent_Stop_Params
{
};

// Function GunfireRuntime.RotatorComponent.Play
struct URotatorComponent_Play_Params
{
};

// Function GunfireRuntime.SequenceInstance.OnFinished
struct USequenceInstance_OnFinished_Params
{
};

// Function GunfireRuntime.SequenceInstance.OnEventTreeTrackTriggerNotified
struct USequenceInstance_OnEventTreeTrackTriggerNotified_Params
{
};

// Function GunfireRuntime.SoundSetComponent.RemoveSoundTag
struct USoundSetComponent_RemoveSoundTag_Params
{
};

// Function GunfireRuntime.SoundSetComponent.PlaySound2D
struct USoundSetComponent_PlaySound2D_Params
{
};

// Function GunfireRuntime.SoundSetComponent.PlaySound
struct USoundSetComponent_PlaySound_Params
{
};

// Function GunfireRuntime.SoundSetComponent.HasSoundTag
struct USoundSetComponent_HasSoundTag_Params
{
};

// Function GunfireRuntime.SoundSetComponent.GetSoundTags
struct USoundSetComponent_GetSoundTags_Params
{
};

// Function GunfireRuntime.SoundSetComponent.GetSoundSoft
struct USoundSetComponent_GetSoundSoft_Params
{
};

// Function GunfireRuntime.SoundSetComponent.GetSoundCue
struct USoundSetComponent_GetSoundCue_Params
{
};

// Function GunfireRuntime.SoundSetComponent.GetSound
struct USoundSetComponent_GetSound_Params
{
};

// Function GunfireRuntime.SoundSetComponent.AddUniqueSoundTag
struct USoundSetComponent_AddUniqueSoundTag_Params
{
};

// Function GunfireRuntime.SpawnPoint.StartPreSpawn
struct ASpawnPoint_StartPreSpawn_Params
{
};

// Function GunfireRuntime.SpawnPoint.StartCoolDown
struct ASpawnPoint_StartCoolDown_Params
{
};

// Function GunfireRuntime.SpawnPoint.SetBusy
struct ASpawnPoint_SetBusy_Params
{
};

// Function GunfireRuntime.SpawnPoint.OnPostEditMove
struct ASpawnPoint_OnPostEditMove_Params
{
};

// Function GunfireRuntime.SpawnPoint.IsCooledDown
struct ASpawnPoint_IsCooledDown_Params
{
};

// Function GunfireRuntime.SpawnPoint.GetBusy
struct ASpawnPoint_GetBusy_Params
{
};

// Function GunfireRuntime.SpawnPointManager.SpawnCharacter
struct USpawnPointManager_SpawnCharacter_Params
{
};

// Function GunfireRuntime.SpawnPointManager.SpawnActorDeferred
struct USpawnPointManager_SpawnActorDeferred_Params
{
};

// Function GunfireRuntime.SpawnPointManager.Spawn
struct USpawnPointManager_Spawn_Params
{
};

// Function GunfireRuntime.SpawnPointManager.GetInstance
struct USpawnPointManager_GetInstance_Params
{
};

// Function GunfireRuntime.SpawnPointManager.FindSpawnPointOnNavMesh
struct USpawnPointManager_FindSpawnPointOnNavMesh_Params
{
};

// Function GunfireRuntime.SpawnPointManager.FindNearbySpawnPosition
struct USpawnPointManager_FindNearbySpawnPosition_Params
{
};

// Function GunfireRuntime.SpawnPointManager.FinalizeSpawnActor
struct USpawnPointManager_FinalizeSpawnActor_Params
{
};

// Function GunfireRuntime.SpawnTable.GenerateWithSeed
struct USpawnTable_GenerateWithSeed_Params
{
};

// Function GunfireRuntime.SpawnTable.Generate
struct USpawnTable_Generate_Params
{
};

// Function GunfireRuntime.SpawnUtil.PickSingleItem
struct USpawnUtil_PickSingleItem_Params
{
};

// Function GunfireRuntime.SpawnUtil.FindRadialSpawnPosition
struct USpawnUtil_FindRadialSpawnPosition_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.GetCurrentSplinePosition
struct ASplineCameraVolume_GetCurrentSplinePosition_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.GetCurrentSplineForwardVector
struct ASplineCameraVolume_GetCurrentSplineForwardVector_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.EndOverlap
struct ASplineCameraVolume_EndOverlap_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.Deactivate
struct ASplineCameraVolume_Deactivate_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.BeginOverlap
struct ASplineCameraVolume_BeginOverlap_Params
{
};

// Function GunfireRuntime.SplineCameraVolume.Activate
struct ASplineCameraVolume_Activate_Params
{
};

// Function GunfireRuntime.SplineFollowingComponent.SetSpline
struct USplineFollowingComponent_SetSpline_Params
{
};

// Function GunfireRuntime.SplineFollowingComponent.GetCurrentSplineTime
struct USplineFollowingComponent_GetCurrentSplineTime_Params
{
};

// Function GunfireRuntime.StateMachine.GetStateParent
struct UStateMachine_GetStateParent_Params
{
};

// Function GunfireRuntime.StateMachine.GetState
struct UStateMachine_GetState_Params
{
};

// Function GunfireRuntime.StateMachine.GetRootState
struct UStateMachine_GetRootState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.SetWindow
struct UStateMachineComponent_SetWindow_Params
{
};

// Function GunfireRuntime.StateMachineComponent.SetState
struct UStateMachineComponent_SetState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.SetEvent
struct UStateMachineComponent_SetEvent_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ServerSetTraversalState
struct UStateMachineComponent_ServerSetTraversalState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ServerSetState
struct UStateMachineComponent_ServerSetState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ServerSetInteractiveResult
struct UStateMachineComponent_ServerSetInteractiveResult_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ServerDoInteractive
struct UStateMachineComponent_ServerDoInteractive_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ResetStateToDefault
struct UStateMachineComponent_ResetStateToDefault_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ProcessStateMachine
struct UStateMachineComponent_ProcessStateMachine_Params
{
};

// Function GunfireRuntime.StateMachineComponent.OnRep_InteractiveInfo
struct UStateMachineComponent_OnRep_InteractiveInfo_Params
{
};

// Function GunfireRuntime.StateMachineComponent.OnRep_CurrentStateID
struct UStateMachineComponent_OnRep_CurrentStateID_Params
{
};

// Function GunfireRuntime.StateMachineComponent.OnPostComputeStats
struct UStateMachineComponent_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.StateMachineComponent.MulticastDoFlinch
struct UStateMachineComponent_MulticastDoFlinch_Params
{
};

// Function GunfireRuntime.StateMachineComponent.IsWindowSet
struct UStateMachineComponent_IsWindowSet_Params
{
};

// Function GunfireRuntime.StateMachineComponent.IsInterruptible
struct UStateMachineComponent_IsInterruptible_Params
{
};

// Function GunfireRuntime.StateMachineComponent.IsEventSet
struct UStateMachineComponent_IsEventSet_Params
{
};

// Function GunfireRuntime.StateMachineComponent.InitAnimInstance
struct UStateMachineComponent_InitAnimInstance_Params
{
};

// Function GunfireRuntime.StateMachineComponent.InInteractive
struct UStateMachineComponent_InInteractive_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetStateName
struct UStateMachineComponent_GetStateName_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetInteractiveOther
struct UStateMachineComponent_GetInteractiveOther_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetHitReactionType
struct UStateMachineComponent_GetHitReactionType_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetElapsedStateTime
struct UStateMachineComponent_GetElapsedStateTime_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetDebugInfo
struct UStateMachineComponent_GetDebugInfo_Params
{
};

// Function GunfireRuntime.StateMachineComponent.GetCurrentState
struct UStateMachineComponent_GetCurrentState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.DoInteractive
struct UStateMachineComponent_DoInteractive_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ClientSetState
struct UStateMachineComponent_ClientSetState_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ClientDoInteractive
struct UStateMachineComponent_ClientDoInteractive_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ClientAbortInteractive
struct UStateMachineComponent_ClientAbortInteractive_Params
{
};

// Function GunfireRuntime.StateMachineComponent.ClearWindow
struct UStateMachineComponent_ClearWindow_Params
{
};

// Function GunfireRuntime.StateMachineComponent.BeginLerp
struct UStateMachineComponent_BeginLerp_Params
{
};

// Function GunfireRuntime.ComputedStats.ScaleValueByLevel
struct UComputedStats_ScaleValueByLevel_Params
{
};

// Function GunfireRuntime.ComputedStats.ScaleStat
struct UComputedStats_ScaleStat_Params
{
};

// Function GunfireRuntime.ComputedStats.PostComputeStats
struct UComputedStats_PostComputeStats_Params
{
};

// Function GunfireRuntime.ComputedStats.OnPostComputeStats
struct UComputedStats_OnPostComputeStats_Params
{
};

// Function GunfireRuntime.ComputedStats.OnComputeStats
struct UComputedStats_OnComputeStats_Params
{
};

// Function GunfireRuntime.ComputedStats.OnComputeDerivedStats
struct UComputedStats_OnComputeDerivedStats_Params
{
};

// Function GunfireRuntime.ComputedStats.ModifyStat
struct UComputedStats_ModifyStat_Params
{
};

// Function GunfireRuntime.ComputedStats.HasStat
struct UComputedStats_HasStat_Params
{
};

// Function GunfireRuntime.ComputedStats.GetStatsOwner
struct UComputedStats_GetStatsOwner_Params
{
};

// Function GunfireRuntime.ComputedStats.GetStat
struct UComputedStats_GetStat_Params
{
};

// Function GunfireRuntime.ComputedStats.ComputeStats
struct UComputedStats_ComputeStats_Params
{
};

// Function GunfireRuntime.ComputedStats.ComputeDerivedStats
struct UComputedStats_ComputeDerivedStats_Params
{
};

// Function GunfireRuntime.StatsComponent.SetComputedStats
struct UStatsComponent_SetComputedStats_Params
{
};

// Function GunfireRuntime.StatsComponent.ScaleStat
struct UStatsComponent_ScaleStat_Params
{
};

// Function GunfireRuntime.StatsComponent.ModifyStat
struct UStatsComponent_ModifyStat_Params
{
};

// Function GunfireRuntime.StatsComponent.Invalidate
struct UStatsComponent_Invalidate_Params
{
};

// Function GunfireRuntime.StatsComponent.HasStat
struct UStatsComponent_HasStat_Params
{
};

// Function GunfireRuntime.StatsComponent.GetStatAsInt
struct UStatsComponent_GetStatAsInt_Params
{
};

// Function GunfireRuntime.StatsComponent.GetStatAsBool
struct UStatsComponent_GetStatAsBool_Params
{
};

// Function GunfireRuntime.StatsComponent.GetStat
struct UStatsComponent_GetStat_Params
{
};

// Function GunfireRuntime.StatsComponent.GetComputedStats
struct UStatsComponent_GetComputedStats_Params
{
};

// Function GunfireRuntime.StatsComponent.ApplyStats
struct UStatsComponent_ApplyStats_Params
{
};

// Function GunfireRuntime.StatsComponent.ApplyStatModsTo
struct UStatsComponent_ApplyStatModsTo_Params
{
};

// Function GunfireRuntime.StatStateDecorator.ComputeStats
struct UStatStateDecorator_ComputeStats_Params
{
};

// Function GunfireRuntime.SubtitleInstance.Remove
struct USubtitleInstance_Remove_Params
{
};

// Function GunfireRuntime.SubtitleInstance.OnSourceActorDestroyed
struct USubtitleInstance_OnSourceActorDestroyed_Params
{
};

// Function GunfireRuntime.SubtitleInstance.OnLoaded
struct USubtitleInstance_OnLoaded_Params
{
};

// Function GunfireRuntime.SubtitleInstance.CompleteAndRemove
struct USubtitleInstance_CompleteAndRemove_Params
{
};

// Function GunfireRuntime.SubtitleInstance.Complete
struct USubtitleInstance_Complete_Params
{
};

// Function GunfireRuntime.SubtitlesComponent.ServerRemoveSubtitle
struct USubtitlesComponent_ServerRemoveSubtitle_Params
{
};

// Function GunfireRuntime.SubtitlesComponent.RemoveSubtitle
struct USubtitlesComponent_RemoveSubtitle_Params
{
};

// Function GunfireRuntime.SubtitlesComponent.ClientRemoveSubtitle
struct USubtitlesComponent_ClientRemoveSubtitle_Params
{
};

// Function GunfireRuntime.SubtitlesComponent.ClientAddSubtitle
struct USubtitlesComponent_ClientAddSubtitle_Params
{
};

// Function GunfireRuntime.SubtitlesComponent.AddSubtitle
struct USubtitlesComponent_AddSubtitle_Params
{
};

// Function GunfireRuntime.SurfaceOrientComponent.SetEnableIK
struct USurfaceOrientComponent_SetEnableIK_Params
{
};

// Function GunfireRuntime.SwimmingCondition.GetSwimmingState
struct USwimmingCondition_GetSwimmingState_Params
{
};

// Function GunfireRuntime.TabButton.SetTexture
struct UTabButton_SetTexture_Params
{
};

// Function GunfireRuntime.TabButton.SetTabPanel
struct UTabButton_SetTabPanel_Params
{
};

// Function GunfireRuntime.TabButton.SetColorAndOpacity
struct UTabButton_SetColorAndOpacity_Params
{
};

// Function GunfireRuntime.TabButton.SetBackgroundColor
struct UTabButton_SetBackgroundColor_Params
{
};

// Function GunfireRuntime.TabButton.IsPressed
struct UTabButton_IsPressed_Params
{
};

// Function GunfireRuntime.TabButton.GetTabPanel
struct UTabButton_GetTabPanel_Params
{
};

// Function GunfireRuntime.TabButton.FocusTab
struct UTabButton_FocusTab_Params
{
};

// Function GunfireRuntime.TabButtonSlot.SetVerticalAlignment
struct UTabButtonSlot_SetVerticalAlignment_Params
{
};

// Function GunfireRuntime.TabButtonSlot.SetPadding
struct UTabButtonSlot_SetPadding_Params
{
};

// Function GunfireRuntime.TabButtonSlot.SetHorizontalAlignment
struct UTabButtonSlot_SetHorizontalAlignment_Params
{
};

// Function GunfireRuntime.TargetableComponent.SetCanBeTargeted
struct UTargetableComponent_SetCanBeTargeted_Params
{
};

// Function GunfireRuntime.TargetableComponent.SetAllowSoftTarget
struct UTargetableComponent_SetAllowSoftTarget_Params
{
};

// Function GunfireRuntime.TargetableComponent.OnUnTarget
struct UTargetableComponent_OnUnTarget_Params
{
};

// Function GunfireRuntime.TargetableComponent.OnTarget
struct UTargetableComponent_OnTarget_Params
{
};

// Function GunfireRuntime.TargetableComponent.OnOwnerDied
struct UTargetableComponent_OnOwnerDied_Params
{
};

// Function GunfireRuntime.TargetableComponent.GetTargetingActors
struct UTargetableComponent_GetTargetingActors_Params
{
};

// Function GunfireRuntime.TargetableComponent.CanBeTargeted
struct UTargetableComponent_CanBeTargeted_Params
{
};

// Function GunfireRuntime.TargetAlignComponent.GetAdjustNodeRotation
struct UTargetAlignComponent_GetAdjustNodeRotation_Params
{
};

// Function GunfireRuntime.TargetingComponent.OnNewTargetSet
struct UTargetingComponent_OnNewTargetSet_Params
{
};

// Function GunfireRuntime.TargetingComponent.GetTarget
struct UTargetingComponent_GetTarget_Params
{
};

// Function GunfireRuntime.TargetingComponent.GetSnapTarget
struct UTargetingComponent_GetSnapTarget_Params
{
};

// Function GunfireRuntime.TargetLockComponent.IsTargetLockEnabled
struct UTargetLockComponent_IsTargetLockEnabled_Params
{
};

// Function GunfireRuntime.TargetLockComponent.GetSoftTarget
struct UTargetLockComponent_GetSoftTarget_Params
{
};

// Function GunfireRuntime.TargetLockComponent.GetLockTarget
struct UTargetLockComponent_GetLockTarget_Params
{
};

// Function GunfireRuntime.TargetLockComponent.GetCameraTarget
struct UTargetLockComponent_GetCameraTarget_Params
{
};

// Function GunfireRuntime.TargetLockComponent.EnableTargetLock
struct UTargetLockComponent_EnableTargetLock_Params
{
};

// Function GunfireRuntime.TargetLockComponent.CycleLockTarget
struct UTargetLockComponent_CycleLockTarget_Params
{
};

// Function GunfireRuntime.TargetLockComponent.ClearLockTarget
struct UTargetLockComponent_ClearLockTarget_Params
{
};

// Function GunfireRuntime.TileUtil.IsVisible
struct UTileUtil_IsVisible_Params
{
};

// Function GunfireRuntime.TileUtil.HasEdge
struct UTileUtil_HasEdge_Params
{
};

// Function GunfireRuntime.TileLOD.SetLODOverride
struct ATileLOD_SetLODOverride_Params
{
};

// Function GunfireRuntime.TimeDilationManager.SetTimeDilation
struct UTimeDilationManager_SetTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.SetGlobalTimeDilation
struct UTimeDilationManager_SetGlobalTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.RefreshTimeDilationEffect
struct UTimeDilationManager_RefreshTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.PlayTimeDilationEffect
struct UTimeDilationManager_PlayTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.PlayGlobalTimeDilationEffect
struct UTimeDilationManager_PlayGlobalTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.OnCinematic
struct UTimeDilationManager_OnCinematic_Params
{
};

// Function GunfireRuntime.TimeDilationManager.IsTimeDilationEffectEasingOut
struct UTimeDilationManager_IsTimeDilationEffectEasingOut_Params
{
};

// Function GunfireRuntime.TimeDilationManager.IsTimeDilationEffectActive
struct UTimeDilationManager_IsTimeDilationEffectActive_Params
{
};

// Function GunfireRuntime.TimeDilationManager.IsPlayingHitPause
struct UTimeDilationManager_IsPlayingHitPause_Params
{
};

// Function GunfireRuntime.TimeDilationManager.GetTimeDilation
struct UTimeDilationManager_GetTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.GetGlobalTimeDilation
struct UTimeDilationManager_GetGlobalTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.EaseOutTimeDilationEffect
struct UTimeDilationManager_EaseOutTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.ClearTimeDilationEffect
struct UTimeDilationManager_ClearTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.ClearTimeDilation
struct UTimeDilationManager_ClearTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.ClearGlobalTimeDilationEffect
struct UTimeDilationManager_ClearGlobalTimeDilationEffect_Params
{
};

// Function GunfireRuntime.TimeDilationManager.ClearGlobalTimeDilation
struct UTimeDilationManager_ClearGlobalTimeDilation_Params
{
};

// Function GunfireRuntime.TimeDilationManager.ClearAllTimeDilation
struct UTimeDilationManager_ClearAllTimeDilation_Params
{
};

// Function GunfireRuntime.TutorialComponent.SetTutorialPrompt
struct UTutorialComponent_SetTutorialPrompt_Params
{
};

// Function GunfireRuntime.TutorialComponent.RemoveTutorialPrompt
struct UTutorialComponent_RemoveTutorialPrompt_Params
{
};

// Function GunfireRuntime.TutorialComponent.QueueTutorialPrompt
struct UTutorialComponent_QueueTutorialPrompt_Params
{
};

// Function GunfireRuntime.TutorialComponent.HasActiveTutorialPrompt
struct UTutorialComponent_HasActiveTutorialPrompt_Params
{
};

// Function GunfireRuntime.TutorialComponent.ClearTutorialPrompts
struct UTutorialComponent_ClearTutorialPrompts_Params
{
};

// Function GunfireRuntime.TutorialComponent.AreTutorialsEnabled
struct UTutorialComponent_AreTutorialsEnabled_Params
{
};

// Function GunfireRuntime.TweenComponent.StopTween
struct UTweenComponent_StopTween_Params
{
};

// Function GunfireRuntime.TweenComponent.StopAllTweens
struct UTweenComponent_StopAllTweens_Params
{
};

// Function GunfireRuntime.TweenComponent.SetLightIntensity
struct UTweenComponent_SetLightIntensity_Params
{
};

// Function GunfireRuntime.TweenComponent.SetComponentLightIntensity
struct UTweenComponent_SetComponentLightIntensity_Params
{
};

// Function GunfireRuntime.TweenComponent.ScaleComponent
struct UTweenComponent_ScaleComponent_Params
{
};

// Function GunfireRuntime.TweenComponent.Scale
struct UTweenComponent_Scale_Params
{
};

// Function GunfireRuntime.TweenComponent.RotateComponent
struct UTweenComponent_RotateComponent_Params
{
};

// Function GunfireRuntime.TweenComponent.Rotate
struct UTweenComponent_Rotate_Params
{
};

// Function GunfireRuntime.TweenComponent.MoveToTarget
struct UTweenComponent_MoveToTarget_Params
{
};

// Function GunfireRuntime.TweenComponent.MoveRelative
struct UTweenComponent_MoveRelative_Params
{
};

// Function GunfireRuntime.TweenComponent.MoveComponent
struct UTweenComponent_MoveComponent_Params
{
};

// Function GunfireRuntime.TweenComponent.MoveBezier
struct UTweenComponent_MoveBezier_Params
{
};

// Function GunfireRuntime.TweenComponent.Move
struct UTweenComponent_Move_Params
{
};

// Function GunfireRuntime.TweenComponent.IsTweenComplete
struct UTweenComponent_IsTweenComplete_Params
{
};

// Function GunfireRuntime.TweenComponent.GetElapsedTime
struct UTweenComponent_GetElapsedTime_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateVectorProperty
struct UTweenComponent_AnimateVectorProperty_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateVector4Property
struct UTweenComponent_AnimateVector4Property_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateRotatorProperty
struct UTweenComponent_AnimateRotatorProperty_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimatePrimitiveComponentMaterialVectorParam
struct UTweenComponent_AnimatePrimitiveComponentMaterialVectorParam_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimatePrimitiveComponentMaterialScalarParam
struct UTweenComponent_AnimatePrimitiveComponentMaterialScalarParam_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateMaterialVectorParamGlobal
struct UTweenComponent_AnimateMaterialVectorParamGlobal_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateMaterialVectorParam
struct UTweenComponent_AnimateMaterialVectorParam_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateMaterialScalarParamGlobal
struct UTweenComponent_AnimateMaterialScalarParamGlobal_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateMaterialScalarParam
struct UTweenComponent_AnimateMaterialScalarParam_Params
{
};

// Function GunfireRuntime.TweenComponent.AnimateFloatProperty
struct UTweenComponent_AnimateFloatProperty_Params
{
};

// Function GunfireRuntime.UIHudComponent.SetVisibility
struct UUIHudComponent_SetVisibility_Params
{
};

// Function GunfireRuntime.UIHudComponent.OnParentSetVisibility
struct UUIHudComponent_OnParentSetVisibility_Params
{
};

// Function GunfireRuntime.UIHudComponent.IsVisible
struct UUIHudComponent_IsVisible_Params
{
};

// Function GunfireRuntime.UIHudComponent.GetControllingPawn
struct UUIHudComponent_GetControllingPawn_Params
{
};

// Function GunfireRuntime.UIHudDamageNumberComponent.OnNotifyHitTarget
struct UUIHudDamageNumberComponent_OnNotifyHitTarget_Params
{
};

// Function GunfireRuntime.UIHudDamageNumberComponent.ClearNumberQueue
struct UUIHudDamageNumberComponent_ClearNumberQueue_Params
{
};

// Function GunfireRuntime.UIHudHitIndicatorComponent.OnNotifyTakeDamage
struct UUIHudHitIndicatorComponent_OnNotifyTakeDamage_Params
{
};

// Function GunfireRuntime.InteractiveInstigatorInterface.CanDoStateInteraction
struct UInteractiveInstigatorInterface_CanDoStateInteraction_Params
{
};

// Function GunfireRuntime.InteractiveInstigatorInterface.CanDoItemInteraction
struct UInteractiveInstigatorInterface_CanDoItemInteraction_Params
{
};

// Function GunfireRuntime.InteractiveInstigatorInterface.CanDoCharacterRevive
struct UInteractiveInstigatorInterface_CanDoCharacterRevive_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.OnInteractCancel
struct UUIHudInteractComponent_OnInteractCancel_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.OnInteract
struct UUIHudInteractComponent_OnInteract_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.Interact
struct UUIHudInteractComponent_Interact_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.HasFocusedInteractive
struct UUIHudInteractComponent_HasFocusedInteractive_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.GetMashPercentage
struct UUIHudInteractComponent_GetMashPercentage_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.GetMashInteractImage
struct UUIHudInteractComponent_GetMashInteractImage_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.GetFocusedInteractiveActor
struct UUIHudInteractComponent_GetFocusedInteractiveActor_Params
{
};

// Function GunfireRuntime.UIHudInteractComponent.GetFocusedIconScreenPosition
struct UUIHudInteractComponent_GetFocusedIconScreenPosition_Params
{
};

// Function GunfireRuntime.UIHudReticuleComponent.OnNotifyHitTarget
struct UUIHudReticuleComponent_OnNotifyHitTarget_Params
{
};

// Function GunfireRuntime.UIHudReticuleComponent.GetRangedWeapon
struct UUIHudReticuleComponent_GetRangedWeapon_Params
{
};

// Function GunfireRuntime.UIHudReticuleComponent.GetMeleeWeapon
struct UUIHudReticuleComponent_GetMeleeWeapon_Params
{
};

// Function GunfireRuntime.UIHudReticuleComponent.GetHitAlpha
struct UUIHudReticuleComponent_GetHitAlpha_Params
{
};

// Function GunfireRuntime.UIHudReticuleComponent.GetCurrentSpread
struct UUIHudReticuleComponent_GetCurrentSpread_Params
{
};

// Function GunfireRuntime.UIHudTutorialComponent.OnShowPrompt
struct UUIHudTutorialComponent_OnShowPrompt_Params
{
};

// Function GunfireRuntime.UIHudTutorialComponent.OnHidePrompt
struct UUIHudTutorialComponent_OnHidePrompt_Params
{
};

// Function GunfireRuntime.UIHudTutorialComponent.OnClearPrompt
struct UUIHudTutorialComponent_OnClearPrompt_Params
{
};

// Function GunfireRuntime.UITweenManager.StopTween
struct UUITweenManager_StopTween_Params
{
};

// Function GunfireRuntime.UITweenManager.StartTimer
struct UUITweenManager_StartTimer_Params
{
};

// Function GunfireRuntime.UITweenManager.Size
struct UUITweenManager_Size_Params
{
};

// Function GunfireRuntime.UITweenManager.ScaleByCurve
struct UUITweenManager_ScaleByCurve_Params
{
};

// Function GunfireRuntime.UITweenManager.Scale
struct UUITweenManager_Scale_Params
{
};

// Function GunfireRuntime.UITweenManager.MoveTo
struct UUITweenManager_MoveTo_Params
{
};

// Function GunfireRuntime.UITweenManager.MoveRelative
struct UUITweenManager_MoveRelative_Params
{
};

// Function GunfireRuntime.UITweenManager.Move
struct UUITweenManager_Move_Params
{
};

// Function GunfireRuntime.UITweenManager.IsTweenFinished
struct UUITweenManager_IsTweenFinished_Params
{
};

// Function GunfireRuntime.UITweenManager.InvalidateHandle
struct UUITweenManager_InvalidateHandle_Params
{
};

// Function GunfireRuntime.UITweenManager.GetInstance
struct UUITweenManager_GetInstance_Params
{
};

// Function GunfireRuntime.UITweenManager.FlashColor
struct UUITweenManager_FlashColor_Params
{
};

// Function GunfireRuntime.UITweenManager.ColorByCurve
struct UUITweenManager_ColorByCurve_Params
{
};

// Function GunfireRuntime.UITweenManager.AnimateColor
struct UUITweenManager_AnimateColor_Params
{
};

// Function GunfireRuntime.UITweenManager.AnimateAlpha
struct UUITweenManager_AnimateAlpha_Params
{
};

// Function GunfireRuntime.UseItemInterface.UseItem
struct UUseItemInterface_UseItem_Params
{
};

// Function GunfireRuntime.UseItemInterface.CanUseItem
struct UUseItemInterface_CanUseItem_Params
{
};

// Function GunfireRuntime.VariableComponent.SetVariableObject
struct UVariableComponent_SetVariableObject_Params
{
};

// Function GunfireRuntime.VariableComponent.SetVariableNumber
struct UVariableComponent_SetVariableNumber_Params
{
};

// Function GunfireRuntime.VariableComponent.SetVariableName
struct UVariableComponent_SetVariableName_Params
{
};

// Function GunfireRuntime.VariableComponent.SetVariableBool
struct UVariableComponent_SetVariableBool_Params
{
};

// Function GunfireRuntime.VariableComponent.GetVariableObject
struct UVariableComponent_GetVariableObject_Params
{
};

// Function GunfireRuntime.VariableComponent.GetVariableNumber
struct UVariableComponent_GetVariableNumber_Params
{
};

// Function GunfireRuntime.VariableComponent.GetVariableBool
struct UVariableComponent_GetVariableBool_Params
{
};

// Function GunfireRuntime.VisualComponent.UpdateSlots
struct UVisualComponent_UpdateSlots_Params
{
};

// Function GunfireRuntime.VisualComponent.StopAllStreamingRequests
struct UVisualComponent_StopAllStreamingRequests_Params
{
};

// Function GunfireRuntime.VisualComponent.SetVisualAt
struct UVisualComponent_SetVisualAt_Params
{
};

// Function GunfireRuntime.VisualComponent.SetVisual
struct UVisualComponent_SetVisual_Params
{
};

// Function GunfireRuntime.VisualComponent.SetupSlaveMeshes
struct UVisualComponent_SetupSlaveMeshes_Params
{
};

// Function GunfireRuntime.VisualComponent.SetSlotEnabled
struct UVisualComponent_SetSlotEnabled_Params
{
};

// Function GunfireRuntime.VisualComponent.PlayVisualFX
struct UVisualComponent_PlayVisualFX_Params
{
};

// Function GunfireRuntime.VisualComponent.OnVisualLoaded
struct UVisualComponent_OnVisualLoaded_Params
{
};

// Function GunfireRuntime.VisualComponent.GetVisualSlot
struct UVisualComponent_GetVisualSlot_Params
{
};

// Function GunfireRuntime.VisualComponent.GetVisualPositionInSlot
struct UVisualComponent_GetVisualPositionInSlot_Params
{
};

// Function GunfireRuntime.VisualComponent.GetSlotVisualID
struct UVisualComponent_GetSlotVisualID_Params
{
};

// Function GunfireRuntime.VisualComponent.GetNumVisualsForSlotID
struct UVisualComponent_GetNumVisualsForSlotID_Params
{
};

// Function GunfireRuntime.VisualComponent.ClearVisual
struct UVisualComponent_ClearVisual_Params
{
};

// Function GunfireRuntime.VitalityComponent.Reset
struct UVitalityComponent_Reset_Params
{
};

// Function GunfireRuntime.VitalityComponent.OnRep_Value
struct UVitalityComponent_OnRep_Value_Params
{
};

// Function GunfireRuntime.VitalityComponent.HasValidStatsComp
struct UVitalityComponent_HasValidStatsComp_Params
{
};

// Function GunfireRuntime.VitalityComponent.GetVitality
struct UVitalityComponent_GetVitality_Params
{
};

// Function GunfireRuntime.VitalityComponent.GetValuePercentage
struct UVitalityComponent_GetValuePercentage_Params
{
};

// Function GunfireRuntime.VitalityComponent.GetValueMax
struct UVitalityComponent_GetValueMax_Params
{
};

// Function GunfireRuntime.VitalityComponent.GetValue
struct UVitalityComponent_GetValue_Params
{
};

// Function GunfireRuntime.VitalityComponent.GetDebugInfo
struct UVitalityComponent_GetDebugInfo_Params
{
};

// Function GunfireRuntime.VitalityComponent.ApplyDeltaReplicated
struct UVitalityComponent_ApplyDeltaReplicated_Params
{
};

// Function GunfireRuntime.VitalityComponent.ApplyDelta
struct UVitalityComponent_ApplyDelta_Params
{
};

// Function GunfireRuntime.WaterFXComponent.IsInWater
struct UWaterFXComponent_IsInWater_Params
{
};

// Function GunfireRuntime.WaterFXComponent.GetWaterType
struct UWaterFXComponent_GetWaterType_Params
{
};

// Function GunfireRuntime.WaterFXComponent.GetWaterLevel
struct UWaterFXComponent_GetWaterLevel_Params
{
};

// Function GunfireRuntime.WaterFXComponent.GetWaterDepth
struct UWaterFXComponent_GetWaterDepth_Params
{
};

// Function GunfireRuntime.WaterFXComponent.GetSubmergeDepth
struct UWaterFXComponent_GetSubmergeDepth_Params
{
};

// Function GunfireRuntime.WaterOverlapComponent.OnEndOverlap
struct UWaterOverlapComponent_OnEndOverlap_Params
{
};

// Function GunfireRuntime.WaterOverlapComponent.OnEndComponentOverlap
struct UWaterOverlapComponent_OnEndComponentOverlap_Params
{
};

// Function GunfireRuntime.WaterOverlapComponent.OnBeginOverlap
struct UWaterOverlapComponent_OnBeginOverlap_Params
{
};

// Function GunfireRuntime.WaterOverlapComponent.OnBeginComponentOverlap
struct UWaterOverlapComponent_OnBeginComponentOverlap_Params
{
};

// Function GunfireRuntime.WaterOverlapComponent.InWater
struct UWaterOverlapComponent_InWater_Params
{
};

// Function GunfireRuntime.WeaponComponent.NotifyHitTarget
struct UWeaponComponent_NotifyHitTarget_Params
{
};

// Function GunfireRuntime.WeaponComponent.ModifyInspectInfo
struct UWeaponComponent_ModifyInspectInfo_Params
{
};

// Function GunfireRuntime.WeaponComponent.ModifyDamage
struct UWeaponComponent_ModifyDamage_Params
{
};

// Function GunfireRuntime.WeaponComponent.ComputeStats
struct UWeaponComponent_ComputeStats_Params
{
};

// Function GunfireRuntime.WeaponAffinityComponent.ComputeScalar
struct UWeaponAffinityComponent_ComputeScalar_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.StopWeaponPhantom
struct UWeaponPhantomComponent_StopWeaponPhantom_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.StopAllWeaponPhantoms
struct UWeaponPhantomComponent_StopAllWeaponPhantoms_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.StartWeaponPhantom
struct UWeaponPhantomComponent_StartWeaponPhantom_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.SetSuspended
struct UWeaponPhantomComponent_SetSuspended_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.MarkActorHit
struct UWeaponPhantomComponent_MarkActorHit_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.IsSuspended
struct UWeaponPhantomComponent_IsSuspended_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.HasRecentlyHitActor
struct UWeaponPhantomComponent_HasRecentlyHitActor_Params
{
};

// Function GunfireRuntime.WeaponPhantomComponent.HasAnyOverlappingDamageable
struct UWeaponPhantomComponent_HasAnyOverlappingDamageable_Params
{
};

// Function GunfireRuntime.WorldSoundComponent.SetAudioList
struct UWorldSoundComponent_SetAudioList_Params
{
};

// Function GunfireRuntime.WorldSoundComponent.ResetTimers
struct UWorldSoundComponent_ResetTimers_Params
{
};

// Function GunfireRuntime.WoundedComponent.StopReviveActor
struct UWoundedComponent_StopReviveActor_Params
{
};

// Function GunfireRuntime.WoundedComponent.ServerKillSelf
struct UWoundedComponent_ServerKillSelf_Params
{
};

// Function GunfireRuntime.WoundedComponent.ReviveActor
struct UWoundedComponent_ReviveActor_Params
{
};

// Function GunfireRuntime.WoundedComponent.Revive
struct UWoundedComponent_Revive_Params
{
};

// Function GunfireRuntime.WoundedComponent.OnRep_State
struct UWoundedComponent_OnRep_State_Params
{
};

// Function GunfireRuntime.WoundedComponent.OnCinematicPlaying
struct UWoundedComponent_OnCinematicPlaying_Params
{
};

// Function GunfireRuntime.WoundedComponent.MulticastOnWounded
struct UWoundedComponent_MulticastOnWounded_Params
{
};

// Function GunfireRuntime.WoundedComponent.MulticastOnTargetRevived
struct UWoundedComponent_MulticastOnTargetRevived_Params
{
};

// Function GunfireRuntime.WoundedComponent.MulticastOnRevived
struct UWoundedComponent_MulticastOnRevived_Params
{
};

// Function GunfireRuntime.WoundedComponent.Kill
struct UWoundedComponent_Kill_Params
{
};

// Function GunfireRuntime.WoundedComponent.GetWoundedHealthPct
struct UWoundedComponent_GetWoundedHealthPct_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
