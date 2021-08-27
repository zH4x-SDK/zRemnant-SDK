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

// Class Engine.BlueprintFunctionLibrary
// 0x0000
class UBlueprintFunctionLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}



};

// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000
class UOnlineBlueprintCallProxyBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}



	void Activate();
};

// Class Engine.Player
// 0x0000
class UPlayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}



};

// Class Engine.NetConnection
// 0x0000
class UNetConnection : public UPlayer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}



};

// Class Engine.NetDriver
// 0x0000
class UNetDriver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}



};

// Class Engine.BlueprintAsyncActionBase
// 0x0000
class UBlueprintAsyncActionBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}



	void Activate();
};

// Class Engine.Actor
// 0x0000
class AActor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}



	void WasRecentlyRendered();
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo();
	void SetTickGroup();
	void SetTickableWhenPaused();
	void SetReplicates();
	void SetReplicateMovement();
	void SetOwner();
	void SetNetDormancy();
	void SetLifeSpan();
	void SetActorTickInterval();
	void SetActorTickEnabled();
	void SetActorScale3D();
	void SetActorRelativeScale3D();
	void SetActorHiddenInGame();
	void SetActorEnableCollision();
	void RemoveTickPrerequisiteComponent();
	void RemoveTickPrerequisiteActor();
	void ReceiveTick();
	void ReceiveRadialDamage();
	void ReceivePointDamage();
	void ReceiveHit();
	void ReceiveEndPlay();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void ReceiveActorOnReleased();
	void ReceiveActorOnInputTouchLeave();
	void ReceiveActorOnInputTouchEnter();
	void ReceiveActorOnInputTouchEnd();
	void ReceiveActorOnInputTouchBegin();
	void ReceiveActorOnClicked();
	void ReceiveActorEndOverlap();
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap();
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise();
	void MakeMIDForMaterial();
	void K2_TeleportTo();
	void K2_SetActorTransform();
	void K2_SetActorRotation();
	void K2_SetActorRelativeTransform();
	void K2_SetActorRelativeRotation();
	void K2_SetActorRelativeLocation();
	void K2_SetActorLocationAndRotation();
	void K2_SetActorLocation();
	void K2_OnReset();
	void K2_OnEndViewTarget();
	void K2_OnBecomeViewTarget();
	void K2_GetRootComponent();
	void K2_GetActorRotation();
	void K2_GetActorLocation();
	void K2_DetachFromActor();
	void K2_DestroyComponent();
	void K2_DestroyActor();
	void K2_AttachToComponent();
	void K2_AttachToActor();
	void K2_AttachRootComponentToActor();
	void K2_AttachRootComponentTo();
	void K2_AddActorWorldTransform();
	void K2_AddActorWorldRotation();
	void K2_AddActorWorldOffset();
	void K2_AddActorLocalTransform();
	void K2_AddActorLocalRotation();
	void K2_AddActorLocalOffset();
	void IsOverlappingActor();
	void IsChildActor();
	void IsActorTickEnabled();
	void IsActorBeingDestroyed();
	void HasAuthority();
	void GetVerticalDistanceTo();
	void GetVelocity();
	void GetTransform();
	void GetTickableWhenPaused();
	void GetSquaredDistanceTo();
	void GetRemoteRole();
	void GetParentComponent();
	void GetParentActor();
	void GetOwner();
	void GetOverlappingComponents();
	void GetOverlappingActors();
	void GetLocalRole();
	void GetLifeSpan();
	void GetInstigatorController();
	void GetInstigator();
	void GetInputVectorAxisValue();
	void GetInputAxisValue();
	void GetInputAxisKeyValue();
	void GetHorizontalDotProductTo();
	void GetHorizontalDistanceTo();
	void GetGameTimeSinceCreation();
	void GetDotProductTo();
	void GetDistanceTo();
	void GetComponentsByTag();
	void GetComponentsByClass();
	void GetComponentByClass();
	void GetAttachParentSocketName();
	void GetAttachParentActor();
	void GetAttachedActors();
	void GetAllChildActors();
	void GetActorUpVector();
	void GetActorTimeDilation();
	void GetActorTickInterval();
	void GetActorScale3D();
	void GetActorRightVector();
	void GetActorRelativeScale3D();
	void GetActorForwardVector();
	void GetActorEyesViewPoint();
	void GetActorEnableCollision();
	void GetActorBounds();
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput();
	void DisableInput();
	void DetachRootComponentFromParent();
	void AddTickPrerequisiteComponent();
	void AddTickPrerequisiteActor();
	void AddComponent();
	void ActorHasTag();
};

// Class Engine.OnlineEngineInterface
// 0x0000
class UOnlineEngineInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}



};

// Class Engine.DeveloperSettings
// 0x0000
class UDeveloperSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}



};

// Class Engine.OnlineSession
// 0x0000
class UOnlineSession : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}



};

// Class Engine.ActorComponent
// 0x0000
class UActorComponent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}



	void ToggleActive();
	void SetTickGroup();
	void SetTickableWhenPaused();
	void SetIsReplicated();
	void SetComponentTickInterval();
	void SetComponentTickEnabled();
	void SetAutoActivate();
	void SetActive();
	void RemoveTickPrerequisiteComponent();
	void RemoveTickPrerequisiteActor();
	void ReceiveTick();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent();
	void IsComponentTickEnabled();
	void IsBeingDestroyed();
	void IsActive();
	void GetOwner();
	void GetComponentTickInterval();
	void Deactivate();
	void ComponentHasTag();
	void AddTickPrerequisiteComponent();
	void AddTickPrerequisiteActor();
	void Activate();
};

// Class Engine.SceneComponent
// 0x0000
class USceneComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}



	void ToggleVisibility();
	void SnapTo();
	void SetWorldScale3D();
	void SetVisibility();
	void SetShouldUpdatePhysicsVolume();
	void SetRelativeScale3D();
	void SetMobility();
	void SetHiddenInGame();
	void SetAbsolute();
	void ResetRelativeTransform();
	void OnRep_Visibility();
	void OnRep_Transform();
	void OnRep_RelativeRotation();
	void OnRep_RelativeLocation();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void OnRep_AttachChildren();
	void K2_SetWorldTransform();
	void K2_SetWorldRotation();
	void K2_SetWorldLocationAndRotation();
	void K2_SetWorldLocation();
	void K2_SetRelativeTransform();
	void K2_SetRelativeRotation();
	void K2_SetRelativeLocationAndRotation();
	void K2_SetRelativeLocation();
	void K2_GetComponentToWorld();
	void K2_GetComponentScale();
	void K2_GetComponentRotation();
	void K2_GetComponentLocation();
	void K2_DetachFromComponent();
	void K2_AttachToComponent();
	void K2_AttachTo();
	void K2_AddWorldTransform();
	void K2_AddWorldRotation();
	void K2_AddWorldOffset();
	void K2_AddRelativeRotation();
	void K2_AddRelativeLocation();
	void K2_AddLocalTransform();
	void K2_AddLocalRotation();
	void K2_AddLocalOffset();
	void IsVisible();
	void IsSimulatingPhysics();
	void IsAnySimulatingPhysics();
	void GetUpVector();
	void GetSocketTransform();
	void GetSocketRotation();
	void GetSocketQuaternion();
	void GetSocketLocation();
	void GetShouldUpdatePhysicsVolume();
	void GetRightVector();
	void GetRelativeTransform();
	void GetPhysicsVolume();
	void GetParentComponents();
	void GetNumChildrenComponents();
	void GetForwardVector();
	void GetComponentVelocity();
	void GetChildrenComponents();
	void GetChildComponent();
	void GetAttachSocketName();
	void GetAttachParent();
	void GetAllSocketNames();
	void DoesSocketExist();
	void DetachFromParent();
};

// Class Engine.PrimitiveComponent
// 0x0000
class UPrimitiveComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}



	void WakeRigidBody();
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride();
	void SetUseCCD();
	void SetTranslucentSortPriority();
	void SetSingleSampleShadowFromStationaryLights();
	void SetSimulatePhysics();
	void SetRenderInMainPass();
	void SetRenderCustomDepth();
	void SetReceivesDecals();
	void SetPhysMaterialOverride();
	void SetPhysicsMaxAngularVelocityInRadians();
	void SetPhysicsMaxAngularVelocityInDegrees();
	void SetPhysicsMaxAngularVelocity();
	void SetPhysicsLinearVelocity();
	void SetPhysicsAngularVelocityInRadians();
	void SetPhysicsAngularVelocityInDegrees();
	void SetPhysicsAngularVelocity();
	void SetOwnerNoSee();
	void SetOnlyOwnerSee();
	void SetNotifyRigidBodyCollision();
	void SetMaterialByName();
	void SetMaterial();
	void SetMassScale();
	void SetMassOverrideInKg();
	void SetLinearDamping();
	void SetGenerateOverlapEvents();
	void SetEnableGravity();
	void SetCustomDepthStencilWriteMask();
	void SetCustomDepthStencilValue();
	void SetCullDistance();
	void SetConstraintMode();
	void SetCollisionResponseToChannel();
	void SetCollisionResponseToAllChannels();
	void SetCollisionProfileName();
	void SetCollisionObjectType();
	void SetCollisionEnabled();
	void SetCenterOfMass();
	void SetCastShadow();
	void SetBoundsScale();
	void SetAngularDamping();
	void SetAllUseCCD();
	void SetAllPhysicsLinearVelocity();
	void SetAllPhysicsAngularVelocityInRadians();
	void SetAllPhysicsAngularVelocityInDegrees();
	void SetAllMassScale();
	void ScaleByMomentOfInertia();
	void PutRigidBodyToSleep();
	void K2_SphereTraceComponent();
	void K2_SphereOverlapComponent();
	void K2_LineTraceComponent();
	void K2_IsQueryCollisionEnabled();
	void K2_IsPhysicsCollisionEnabled();
	void K2_IsCollisionEnabled();
	void K2_BoxOverlapComponent();
	void IsOverlappingComponent();
	void IsOverlappingActor();
	void IsGravityEnabled();
	void IsAnyRigidBodyAwake();
	void IgnoreComponentWhenMoving();
	void IgnoreActorWhenMoving();
	void GetWalkableSlopeOverride();
	void GetPhysicsLinearVelocityAtPoint();
	void GetPhysicsLinearVelocity();
	void GetPhysicsAngularVelocityInRadians();
	void GetPhysicsAngularVelocityInDegrees();
	void GetPhysicsAngularVelocity();
	void GetOverlappingComponents();
	void GetOverlappingActors();
	void GetNumMaterials();
	void GetMaterialFromCollisionFaceIndex();
	void GetMaterial();
	void GetMassScale();
	void GetMass();
	void GetLinearDamping();
	void GetInertiaTensor();
	void GetGenerateOverlapEvents();
	void GetCollisionResponseToChannel();
	void GetCollisionProfileName();
	void GetCollisionObjectType();
	void GetCollisionEnabled();
	void GetClosestPointOnCollision();
	void GetCenterOfMass();
	void GetAngularDamping();
	void CreateDynamicMaterialInstance();
	void CreateAndSetMaterialInstanceDynamicFromMaterial();
	void CreateAndSetMaterialInstanceDynamic();
	void CopyArrayOfMoveIgnoreComponents();
	void CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreComponents();
	void ClearMoveIgnoreActors();
	void CanCharacterStepUp();
	void AddTorqueInRadians();
	void AddTorqueInDegrees();
	void AddTorque();
	void AddRadialImpulse();
	void AddRadialForce();
	void AddImpulseAtLocation();
	void AddImpulse();
	void AddForceAtLocationLocal();
	void AddForceAtLocation();
	void AddForce();
	void AddAngularImpulseInRadians();
	void AddAngularImpulseInDegrees();
	void AddAngularImpulse();
};

// Class Engine.CurveBase
// 0x0000
class UCurveBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}



	void GetValueRange();
	void GetTimeRange();
};

// Class Engine.CurveFloat
// 0x0000
class UCurveFloat : public UCurveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}



	void GetFloatValue();
};

// Class Engine.CurveLinearColor
// 0x0000
class UCurveLinearColor : public UCurveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}



	void GetLinearColorValue();
	void GetClampedLinearColorValue();
};

// Class Engine.Commandlet
// 0x0000
class UCommandlet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}



};

// Class Engine.GameInstance
// 0x0000
class UGameInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}



	void ReceiveShutdown();
	void ReceiveInit();
	void HandleTravelError();
	void HandleNetworkError();
	void DebugRemovePlayer();
	void DebugCreatePlayer();
};

// Class Engine.Subsystem
// 0x0000
class USubsystem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Subsystem");
		return ptr;
	}



};

// Class Engine.GameInstanceSubsystem
// 0x0000
class UGameInstanceSubsystem : public USubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstanceSubsystem");
		return ptr;
	}



};

// Class Engine.AssetUserData
// 0x0000
class UAssetUserData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}



};

// Class Engine.MeshComponent
// 0x0000
class UMeshComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}



	void SetVectorParameterValueOnMaterials();
	void SetScalarParameterValueOnMaterials();
	void PrestreamTextures();
	void IsMaterialSlotNameValid();
	void GetMaterialSlotNames();
	void GetMaterials();
	void GetMaterialIndex();
};

// Class Engine.SkinnedMeshComponent
// 0x0000
class USkinnedMeshComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}



	void UnHideBoneByName();
	void TransformToBoneSpace();
	void TransformFromBoneSpace();
	void ShowMaterialSection();
	void ShowAllMaterialSections();
	void SetVertexColorOverride_LinearColor();
	void SetSkinWeightOverride();
	void SetSkeletalMesh();
	void SetRenderStatic();
	void SetPhysicsAsset();
	void SetMinLOD();
	void SetMasterPoseComponent();
	void SetForcedLOD();
	void SetCastCapsuleIndirectShadow();
	void SetCastCapsuleDirectShadow();
	void SetCapsuleIndirectShadowMinVisibility();
	void IsMaterialSectionShown();
	void IsBoneHiddenByName();
	void HideBoneByName();
	void GetSocketBoneName();
	void GetRefPosePosition();
	void GetParentBone();
	void GetNumLODs();
	void GetNumBones();
	void GetDeltaTransformFromRefPose();
	void GetBoneName();
	void GetBoneIndex();
	void FindClosestBone_K2();
	void ClearVertexColorOverride();
	void ClearSkinWeightOverride();
	void BoneIsChildOf();
};

// Class Engine.SkeletalMeshComponent
// 0x0000
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}



	void UnbindClothFromMasterPoseComponent();
	void ToggleDisablePostProcessBlueprint();
	void TermBodiesBelow();
	void SuspendClothingSimulation();
	void Stop();
	void SnapshotPose();
	void SetUpdateAnimationInEditor();
	void SetTeleportRotationThreshold();
	void SetTeleportDistanceThreshold();
	void SetPosition();
	void SetPlayRate();
	void SetPhysicsBlendWeight();
	void SetNotifyRigidBodyCollisionBelow();
	void SetMorphTarget();
	void SetEnablePhysicsBlending();
	void SetEnableGravityOnAllBodiesBelow();
	void SetEnableBodyGravity();
	void SetDisablePostProcessBlueprint();
	void SetDisableAnimCurves();
	void SetConstraintProfileForAll();
	void SetConstraintProfile();
	void SetClothMaxDistanceScale();
	void SetBodyNotifyRigidBodyCollision();
	void SetAnimationMode();
	void SetAnimation();
	void SetAngularLimits();
	void SetAllowedAnimCurvesEvaluation();
	void SetAllowAnimCurveEvaluation();
	void SetAllMotorsAngularVelocityDrive();
	void SetAllMotorsAngularPositionDrive();
	void SetAllMotorsAngularDriveParams();
	void SetAllBodiesSimulatePhysics();
	void SetAllBodiesPhysicsBlendWeight();
	void SetAllBodiesBelowSimulatePhysics();
	void SetAllBodiesBelowPhysicsBlendWeight();
	void ResumeClothingSimulation();
	void ResetClothTeleportMode();
	void ResetAnimInstanceDynamics();
	void ResetAllowedAnimCurveEvaluation();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation();
	void Play();
	void OverrideAnimationData();
	void K2_SetAnimInstanceClass();
	void K2_GetClosestPointOnPhysicsAsset();
	void IsPlaying();
	void IsClothingSimulationSuspended();
	void IsBodyGravityEnabled();
	void HasValidAnimationInstance();
	void GetTeleportRotationThreshold();
	void GetTeleportDistanceThreshold();
	void GetSubInstanceByName();
	void GetSkeletalCenterOfMass();
	void GetPostProcessInstance();
	void GetPosition();
	void GetPlayRate();
	void GetMorphTarget();
	void GetDisablePostProcessBlueprint();
	void GetDisableAnimCurves();
	void GetCurrentJointAngles();
	void GetClothMaxDistanceScale();
	void GetClothingSimulationInteractor();
	void GetBoneMass();
	void GetAnimInstance();
	void GetAnimationMode();
	void GetAllowedAnimCurveEvaluate();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void FindConstraintBoneName();
	void ClearMorphTargets();
	void BreakConstraint();
	void BindClothToMasterPoseComponent();
	void AllowAnimCurveEvaluation();
	void AddImpulseToAllBodiesBelow();
	void AddForceToAllBodiesBelow();
	void AccumulateAllBodiesBelowPhysicsBlendWeight();
};

// Class Engine.AnimCompress
// 0x0000
class UAnimCompress : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}



};

// Class Engine.LevelScriptActor
// 0x0000
class ALevelScriptActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}



	void WorldOriginLocationChanged();
	void SetCinematicMode();
	void RemoteEvent();
	void LevelReset();
};

// Class Engine.SaveGame
// 0x0000
class USaveGame : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}



};

// Class Engine.MaterialExpression
// 0x0000
class UMaterialExpression : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureBase
// 0x0000
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSample
// 0x0000
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0000
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}



};

// Class Engine.Pawn
// 0x0000
class APawn : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}



	void SpawnDefaultController();
	void SetCanAffectNavigationGeneration();
	void ReceiveUnpossessed();
	void ReceivePossessed();
	void PawnMakeNoise();
	void OnRep_PlayerState();
	void OnRep_Controller();
	void LaunchPawn();
	void K2_GetMovementInputVector();
	void IsPlayerControlled();
	void IsMoveInputIgnored();
	void IsLocallyControlled();
	void IsControlled();
	void IsBotControlled();
	void GetPendingMovementInputVector();
	void GetNavAgentLocation();
	void GetMovementComponent();
	void GetMovementBaseActor();
	void GetLastMovementInputVector();
	void GetControlRotation();
	void GetController();
	void GetBaseAimRotation();
	void DetachFromControllerPendingDestroy();
	void ConsumeMovementInputVector();
	void AddMovementInput();
	void AddControllerYawInput();
	void AddControllerRollInput();
	void AddControllerPitchInput();
};

// Class Engine.Character
// 0x0000
class ACharacter : public APawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}



	void UnCrouch();
	void StopJumping();
	void StopAnimMontage();
	void ServerMoveOld();
	void ServerMoveNoBase();
	void ServerMoveDualNoBase();
	void ServerMoveDualHybridRootMotion();
	void ServerMoveDual();
	void ServerMove();
	void RootMotionDebugClientPrintOnScreen();
	void PlayAnimMontage();
	void OnWalkingOffLedge();
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_ReplayLastTransformUpdateTimeStamp();
	void OnRep_IsCrouched();
	void OnLaunched();
	void OnLanded();
	void OnJumped();
	void LaunchCharacter();
	void K2_UpdateCustomMovement();
	void K2_OnStartCrouch();
	void K2_OnMovementModeChanged();
	void K2_OnEndCrouch();
	void Jump();
	void IsPlayingRootMotion();
	void IsPlayingNetworkedRootMotionMontage();
	void IsJumpProvidingForce();
	void HasAnyRootMotion();
	void GetCurrentMontage();
	void GetBaseTranslationOffset();
	void GetBaseRotationOffsetRotator();
	void GetAnimRootMotionTranslationScale();
	void Crouch();
	void ClientVeryShortAdjustPosition();
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	void ClientAdjustRootMotionSourcePosition();
	void ClientAdjustRootMotionPosition();
	void ClientAdjustPosition();
	void ClientAckGoodMove();
	void CanJumpInternal();
	void CanJump();
	void CacheInitialMeshOffset();
};

// Class Engine.DataAsset
// 0x0000
class UDataAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}



};

// Class Engine.SplineComponent
// 0x0000
class USplineComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}



	void UpdateSpline();
	void SetWorldLocationAtSplinePoint();
	void SetUpVectorAtSplinePoint();
	void SetUnselectedSplineSegmentColor();
	void SetTangentsAtSplinePoint();
	void SetTangentAtSplinePoint();
	void SetSplineWorldPoints();
	void SetSplinePointType();
	void SetSplinePoints();
	void SetSplineLocalPoints();
	void SetSelectedSplineSegmentColor();
	void SetLocationAtSplinePoint();
	void SetDrawDebug();
	void SetDefaultUpVector();
	void SetClosedLoopAtPosition();
	void SetClosedLoop();
	void RemoveSplinePoint();
	void IsClosedLoop();
	void GetWorldTangentAtDistanceAlongSpline();
	void GetWorldRotationAtTime();
	void GetWorldRotationAtDistanceAlongSpline();
	void GetWorldLocationAtTime();
	void GetWorldLocationAtSplinePoint();
	void GetWorldLocationAtDistanceAlongSpline();
	void GetWorldDirectionAtTime();
	void GetWorldDirectionAtDistanceAlongSpline();
	void GetUpVectorAtTime();
	void GetUpVectorAtSplinePoint();
	void GetUpVectorAtDistanceAlongSpline();
	void GetTransformAtTime();
	void GetTransformAtSplinePoint();
	void GetTransformAtDistanceAlongSpline();
	void GetTangentAtTime();
	void GetTangentAtSplinePoint();
	void GetTangentAtDistanceAlongSpline();
	void GetSplinePointType();
	void GetSplineLength();
	void GetScaleAtTime();
	void GetScaleAtSplinePoint();
	void GetScaleAtDistanceAlongSpline();
	void GetRotationAtTime();
	void GetRotationAtSplinePoint();
	void GetRotationAtDistanceAlongSpline();
	void GetRollAtTime();
	void GetRollAtSplinePoint();
	void GetRollAtDistanceAlongSpline();
	void GetRightVectorAtTime();
	void GetRightVectorAtSplinePoint();
	void GetRightVectorAtDistanceAlongSpline();
	void GetNumberOfSplinePoints();
	void GetLocationAtTime();
	void GetLocationAtSplinePoint();
	void GetLocationAtDistanceAlongSpline();
	void GetLocationAndTangentAtSplinePoint();
	void GetLocalLocationAndTangentAtSplinePoint();
	void GetLeaveTangentAtSplinePoint();
	void GetInputKeyAtDistanceAlongSpline();
	void GetDistanceAlongSplineAtSplinePoint();
	void GetDirectionAtTime();
	void GetDirectionAtSplinePoint();
	void GetDirectionAtDistanceAlongSpline();
	void GetDefaultUpVector();
	void GetArriveTangentAtSplinePoint();
	void FindUpVectorClosestToWorldLocation();
	void FindTransformClosestToWorldLocation();
	void FindTangentClosestToWorldLocation();
	void FindScaleClosestToWorldLocation();
	void FindRotationClosestToWorldLocation();
	void FindRollClosestToWorldLocation();
	void FindRightVectorClosestToWorldLocation();
	void FindLocationClosestToWorldLocation();
	void FindInputKeyClosestToWorldLocation();
	void FindDirectionClosestToWorldLocation();
	void ClearSplinePoints();
	void AddSplineWorldPoint();
	void AddSplinePointAtIndex();
	void AddSplinePoint();
	void AddSplineLocalPoint();
	void AddPoints();
	void AddPoint();
};

// Class Engine.AnimInstance
// 0x0000
class UAnimInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}



	void UnlockAIResources();
	void TryGetPawnOwner();
	void StopSlotAnimation();
	void SnapshotPose();
	void SetRootMotionMode();
	void SetMorphTarget();
	void SavePoseSnapshot();
	void ResetDynamics();
	void PlaySlotAnimationAsDynamicMontage();
	void PlaySlotAnimation();
	void Montage_Stop();
	void Montage_SetPosition();
	void Montage_SetPlayRate();
	void Montage_SetNextSection();
	void Montage_Resume();
	void Montage_Play();
	void Montage_Pause();
	void Montage_JumpToSectionsEnd();
	void Montage_JumpToSection();
	void Montage_IsPlaying();
	void Montage_IsActive();
	void Montage_GetPosition();
	void Montage_GetPlayRate();
	void Montage_GetIsStopped();
	void Montage_GetCurrentSection();
	void Montage_GetBlendTime();
	void LockAIResources();
	void IsSyncGroupBetweenMarkers();
	void IsPlayingSlotAnimation();
	void IsAnyMontagePlaying();
	void HasMarkerBeenHitThisFrame();
	void GetTimeToClosestMarker();
	void GetSyncGroupPosition();
	void GetRelevantAnimTimeRemainingFraction();
	void GetRelevantAnimTimeRemaining();
	void GetRelevantAnimTimeFraction();
	void GetRelevantAnimTime();
	void GetRelevantAnimLength();
	void GetOwningComponent();
	void GetOwningActor();
	void GetInstanceTransitionTimeElapsedFraction();
	void GetInstanceTransitionTimeElapsed();
	void GetInstanceTransitionCrossfadeDuration();
	void GetInstanceStateWeight();
	void GetInstanceMachineWeight();
	void GetInstanceCurrentStateElapsedTime();
	void GetInstanceAssetPlayerTimeFromEndFraction();
	void GetInstanceAssetPlayerTimeFromEnd();
	void GetInstanceAssetPlayerTimeFraction();
	void GetInstanceAssetPlayerTime();
	void GetInstanceAssetPlayerLength();
	void GetCurveValue();
	void GetCurrentStateName();
	void GetCurrentActiveMontage();
	void GetAllCurveNames();
	void GetActiveCurveNames();
	void ClearMorphTargets();
	void CalculateDirection();
	void BlueprintUpdateAnimation();
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};

// Class Engine.AudioComponent
// 0x0000
class UAudioComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}



	void StopDelayed();
	void Stop();
	void SetWaveParameter();
	void SetVolumeMultiplier();
	void SetUISound();
	void SetSubmixSend();
	void SetSourceBusSendPreEffect();
	void SetSourceBusSendPostEffect();
	void SetSound();
	void SetPitchMultiplier();
	void SetPaused();
	void SetLowPassFilterFrequency();
	void SetLowPassFilterEnabled();
	void SetIntParameter();
	void SetFloatParameter();
	void SetBoolParameter();
	void Play();
	void IsPlaying();
	void HasCookedFFTData();
	void HasCookedAmplitudeEnvelopeData();
	void GetCookedFFTDataForAllPlayingSounds();
	void GetCookedFFTData();
	void GetCookedEnvelopeDataForAllPlayingSounds();
	void GetCookedEnvelopeData();
	void FadeOut();
	void FadeIn();
	void BP_GetAttenuationSettingsToApply();
	void AdjustVolume();
	void AdjustAttenuation();
};

// Class Engine.AssetImportData
// 0x0000
class UAssetImportData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}



};

// Class Engine.MovementComponent
// 0x0000
class UMovementComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}



	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent();
	void SetPlaneConstraintOrigin();
	void SetPlaneConstraintNormal();
	void SetPlaneConstraintFromVectors();
	void SetPlaneConstraintEnabled();
	void SetPlaneConstraintAxisSetting();
	void PhysicsVolumeChanged();
	void K2_MoveUpdatedComponent();
	void K2_GetModifiedMaxSpeed();
	void K2_GetMaxSpeedModifier();
	void IsExceedingMaxSpeed();
	void GetPlaneConstraintOrigin();
	void GetPlaneConstraintNormal();
	void GetPlaneConstraintAxisSetting();
	void GetPhysicsVolume();
	void GetMaxSpeed();
	void GetGravityZ();
	void ConstrainNormalToPlane();
	void ConstrainLocationToPlane();
	void ConstrainDirectionToPlane();
};

// Class Engine.NavMovementComponent
// 0x0000
class UNavMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}



	void StopMovementKeepPathing();
	void StopActiveMovement();
	void IsSwimming();
	void IsMovingOnGround();
	void IsFlying();
	void IsFalling();
	void IsCrouching();
};

// Class Engine.PawnMovementComponent
// 0x0000
class UPawnMovementComponent : public UNavMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}



	void K2_GetInputVector();
	void IsMoveInputIgnored();
	void GetPendingInputVector();
	void GetPawnOwner();
	void GetLastInputVector();
	void ConsumeInputVector();
	void AddInputVector();
};

// Class Engine.CharacterMovementComponent
// 0x0000
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}



	void SetWalkableFloorZ();
	void SetWalkableFloorAngle();
	void SetMovementMode();
	void SetGroupsToIgnoreMask();
	void SetGroupsToIgnore();
	void SetGroupsToAvoidMask();
	void SetGroupsToAvoid();
	void SetAvoidanceGroupMask();
	void SetAvoidanceGroup();
	void SetAvoidanceEnabled();
	void K2_GetWalkableFloorZ();
	void K2_GetWalkableFloorAngle();
	void K2_GetModifiedMaxAcceleration();
	void K2_FindFloor();
	void K2_ComputeFloorDist();
	void IsWalking();
	void IsWalkable();
	void GetValidPerchRadius();
	void GetPerchRadiusThreshold();
	void GetMovementBase();
	void GetMinAnalogSpeed();
	void GetMaxJumpHeightWithJumpTime();
	void GetMaxJumpHeight();
	void GetMaxBrakingDeceleration();
	void GetMaxAcceleration();
	void GetLastUpdateVelocity();
	void GetLastUpdateRotation();
	void GetLastUpdateLocation();
	void GetImpartedMovementBaseVelocity();
	void GetCurrentAcceleration();
	void GetCharacterOwner();
	void GetAnalogInputModifier();
	void DisableMovement();
	void ClearAccumulatedForces();
	void CapsuleTouched();
	void CalcVelocity();
	void AddImpulse();
	void AddForce();
};

// Class Engine.AnimNotify
// 0x0000
class UAnimNotify : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}



	void Received_Notify();
	void GetNotifyName();
};

// Class Engine.Info
// 0x0000
class AInfo : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}



};

// Class Engine.PlayerState
// 0x0000
class APlayerState : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}



	void ReceiveOverrideWith();
	void ReceiveCopyProperties();
	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_PlayerId();
	void OnRep_bIsInactive();
	void GetPlayerName();
};

// Class Engine.Controller
// 0x0000
class AController : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}



	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation();
	void SetIgnoreMoveInput();
	void SetIgnoreLookInput();
	void SetControlRotation();
	void ResetIgnoreMoveInput();
	void ResetIgnoreLookInput();
	void ResetIgnoreInputFlags();
	void ReceiveUnPossess();
	void ReceivePossess();
	void ReceiveInstigatedAnyDamage();
	void Possess();
	void OnRep_PlayerState();
	void OnRep_Pawn();
	void LineOfSightTo();
	void K2_GetPawn();
	void IsPlayerController();
	void IsMoveInputIgnored();
	void IsLookInputIgnored();
	void IsLocalPlayerController();
	void IsLocalController();
	void GetViewTarget();
	void GetDesiredRotation();
	void GetControlRotation();
	void ClientSetRotation();
	void ClientSetLocation();
	void CastToPlayerController();
};

// Class Engine.PlayerController
// 0x0000
class APlayerController : public AController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}



	void WasInputKeyJustReleased();
	void WasInputKeyJustPressed();
	void ToggleSpeaking();
	void SwitchLevel();
	void StopHapticEffect();
	void StartFire();
	void SetVirtualJoystickVisibility();
	void SetViewTargetWithBlend();
	void SetName();
	void SetMouseLocation();
	void SetMouseCursorWidget();
	void SetHapticsByValue();
	void SetDisableHaptics();
	void SetControllerLightColor();
	void SetCinematicMode();
	void SetAudioListenerOverride();
	void SetAudioListenerAttenuationOverride();
	void ServerViewSelf();
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateMultipleLevelsVisibility();
	void ServerUpdateLevelVisibility();
	void ServerUpdateCamera();
	void ServerUnmutePlayer();
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorWaiting();
	void ServerSetSpectatorLocation();
	void ServerRestartPlayer();
	void ServerPause();
	void ServerNotifyLoadedWorld();
	void ServerMutePlayer();
	void ServerCheckClientPossessionReliable();
	void ServerCheckClientPossession();
	void ServerChangeName();
	void ServerCamera();
	void ServerAcknowledgePossession();
	void SendToConsole();
	void RestartLevel();
	void ResetControllerLightColor();
	void ProjectWorldLocationToScreen();
	void PlayHapticEffect();
	void PlayDynamicForceFeedback();
	void Pause();
	void OnServerStartedVisualLogger();
	void LocalTravel();
	void K2_ClientPlayForceFeedback();
	void IsInputKeyDown();
	void GetViewportSize();
	void GetSpectatorPawn();
	void GetMousePosition();
	void GetInputVectorKeyState();
	void GetInputTouchState();
	void GetInputMouseDelta();
	void GetInputMotionState();
	void GetInputKeyTimeDown();
	void GetInputAnalogStickState();
	void GetInputAnalogKeyState();
	void GetHud();
	void GetHitResultUnderFingerForObjects();
	void GetHitResultUnderFingerByChannel();
	void GetHitResultUnderFinger();
	void GetHitResultUnderCursorForObjects();
	void GetHitResultUnderCursorByChannel();
	void GetHitResultUnderCursor();
	void GetFocalLocation();
	void FOV();
	void EnableCheats();
	void DeprojectScreenPositionToWorld();
	void DeprojectMousePositionToWorld();
	void ConsoleKey();
	void ClientWasKicked();
	void ClientVoiceHandshakeComplete();
	void ClientUpdateMultipleLevelsStreamingStatus();
	void ClientUpdateLevelStreamingStatus();
	void ClientUnmutePlayer();
	void ClientTravelInternal();
	void ClientTravel();
	void ClientTeamMessage();
	void ClientStopForceFeedback();
	void ClientStopCameraShake();
	void ClientStopCameraAnim();
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect();
	void ClientSetViewTarget();
	void ClientSetSpectatorWaiting();
	void ClientSetHUD();
	void ClientSetForceMipLevelsToBeResident();
	void ClientSetCinematicMode();
	void ClientSetCameraMode();
	void ClientSetCameraFade();
	void ClientSetBlockOnAsyncLoading();
	void ClientReturnToMainMenuWithTextReason();
	void ClientReturnToMainMenu();
	void ClientRetryClientRestart();
	void ClientRestart();
	void ClientReset();
	void ClientRepObjRef();
	void ClientReceiveLocalizedMessage();
	void ClientPrestreamTextures();
	void ClientPrepareMapChange();
	void ClientPlaySoundAtLocation();
	void ClientPlaySound();
	void ClientPlayForceFeedback_Internal();
	void ClientPlayCameraShake();
	void ClientPlayCameraAnim();
	void ClientMutePlayer();
	void ClientMessage();
	void ClientIgnoreMoveInput();
	void ClientIgnoreLookInput();
	void ClientGotoState();
	void ClientGameEnded();
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEndOnlineSession();
	void ClientEnableNetworkVoice();
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth();
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc();
	void ClearAudioListenerOverride();
	void ClearAudioListenerAttenuationOverride();
	void CanRestartPlayer();
	void Camera();
	void AddYawInput();
	void AddRollInput();
	void AddPitchInput();
	void ActivateTouchInterface();
};

// Class Engine.CheatManager
// 0x0000
class UCheatManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}



	void Walk();
	void ViewSelf();
	void ViewPlayer();
	void ViewClass();
	void ViewActor();
	void UpdateSafeArea();
	void ToggleServerStatReplicatorUpdateStatNet();
	void ToggleServerStatReplicatorClientOverwrite();
	void ToggleDebugCamera();
	void ToggleAILogging();
	void TestCollisionDistance();
	void Teleport();
	void Summon();
	void StreamLevelOut();
	void StreamLevelIn();
	void SpawnServerStatReplicator();
	void Slomo();
	void SetWorldOrigin();
	void SetMouseSensitivityToDefault();
	void ServerToggleAILogging();
	void ReceiveInitCheatManager();
	void ReceiveEndPlay();
	void PlayersOnly();
	void OnlyLoadLevel();
	void LogLoc();
	void InvertMouse();
	void God();
	void Ghost();
	void FreezeFrame();
	void Fly();
	void FlushLog();
	void EnableDebugCamera();
	void DumpVoiceMutingState();
	void DumpPartyState();
	void DumpOnlineSessionState();
	void DumpChatState();
	void DisableDebugCamera();
	void DestroyTarget();
	void DestroyServerStatReplicator();
	void DestroyPawns();
	void DestroyAllPawnsExceptTarget();
	void DestroyAll();
	void DebugCapsuleSweepSize();
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex();
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel();
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget();
	void CheatScript();
	void ChangeSize();
	void BugItStringCreator();
	void BugItGo();
	void BugIt();
};

// Class Engine.StaticMeshComponent
// 0x0000
class UStaticMeshComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}



	void SetStaticMesh();
	void SetReverseCulling();
	void SetForcedLodModel();
	void SetDistanceFieldSelfShadowBias();
	void OnRep_StaticMesh();
	void GetLocalBounds();
};

// Class Engine.GameModeBase
// 0x0000
class AGameModeBase : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}



	void StartPlay();
	void SpawnDefaultPawnFor();
	void SpawnDefaultPawnAtTransform();
	void ShouldReset();
	void ReturnToMainMenuHost();
	void RestartPlayerAtTransform();
	void RestartPlayerAtPlayerStart();
	void RestartPlayer();
	void ResetLevel();
	void PlayerCanRestart();
	void MustSpectate();
	void K2_PostLogin();
	void K2_OnSwapPlayerControllers();
	void K2_OnRestartPlayer();
	void K2_OnLogout();
	void K2_OnChangeName();
	void K2_FindPlayerStart();
	void InitStartSpot();
	void InitializeHUDForPlayer();
	void HasMatchStarted();
	void HandleStartingNewPlayer();
	void GetNumSpectators();
	void GetNumPlayers();
	void GetDefaultPawnClassForController();
	void FindPlayerStart();
	void ChoosePlayerStart();
	void ChangeName();
	void CanSpectate();
};

// Class Engine.GameMode
// 0x0000
class AGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}



	void StartMatch();
	void SetBandwidthLimit();
	void Say();
	void RestartGame();
	void ReadyToStartMatch();
	void ReadyToEndMatch();
	void K2_OnSetMatchState();
	void IsMatchInProgress();
	void HasMatchEnded();
	void GetMatchState();
	void EndMatch();
	void AbortMatch();
};

// Class Engine.GameSession
// 0x0000
class AGameSession : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}



};

// Class Engine.GameStateBase
// 0x0000
class AGameStateBase : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}



	void OnRep_SpectatorClass();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_ReplicatedHasBegunPlay();
	void OnRep_GameModeClass();
	void HasMatchStarted();
	void HasBegunPlay();
	void GetServerWorldTimeSeconds();
	void GetPlayerStartTime();
	void GetPlayerRespawnDelay();
};

// Class Engine.GameState
// 0x0000
class AGameState : public AGameStateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}



	void OnRep_MatchState();
	void OnRep_ElapsedTime();
};

// Class Engine.HUD
// 0x0000
class AHUD : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}



	void ShowHUD();
	void ShowDebugToggleSubCategory();
	void ShowDebugForReticleTargetToggle();
	void ShowDebug();
	void RemoveDebugText();
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease();
	void ReceiveHitBoxEndCursorOver();
	void ReceiveHitBoxClick();
	void ReceiveHitBoxBeginCursorOver();
	void ReceiveDrawHUD();
	void Project();
	void PreviousDebugTarget();
	void NextDebugTarget();
	void GetTextSize();
	void GetOwningPlayerController();
	void GetOwningPawn();
	void GetActorsInSelectionRectangle();
	void DrawTextureSimple();
	void DrawTexture();
	void DrawText();
	void DrawRect();
	void DrawMaterialTriangle();
	void DrawMaterialSimple();
	void DrawMaterial();
	void DrawLine();
	void Deproject();
	void AddHitBox();
	void AddDebugText();
};

// Class Engine.DefaultPawn
// 0x0000
class ADefaultPawn : public APawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}



	void TurnAtRate();
	void MoveUp_World();
	void MoveRight();
	void MoveForward();
	void LookUpAtRate();
};

// Class Engine.SpectatorPawn
// 0x0000
class ASpectatorPawn : public ADefaultPawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}



};

// Class Engine.CameraComponent
// 0x0000
class UCameraComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}



	void SetUseFieldOfViewForLOD();
	void SetProjectionMode();
	void SetPostProcessBlendWeight();
	void SetOrthoWidth();
	void SetOrthoNearClipPlane();
	void SetOrthoFarClipPlane();
	void SetFieldOfView();
	void SetConstraintAspectRatio();
	void SetAspectRatio();
	void RemoveBlendable();
	void GetCameraView();
	void AddOrUpdateBlendable();
};

// Class Engine.DecalComponent
// 0x0000
class UDecalComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}



	void SetSortOrder();
	void SetFadeScreenSize();
	void SetFadeOut();
	void SetFadeIn();
	void SetDecalMaterial();
	void GetFadeStartDelay();
	void GetFadeInStartDelay();
	void GetFadeInDuration();
	void GetFadeDuration();
	void GetDecalMaterial();
	void CreateDynamicMaterialInstance();
};

// Class Engine.NavAreaBase
// 0x0000
class UNavAreaBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaBase");
		return ptr;
	}



};

// Class Engine.AnimNotifyState
// 0x0000
class UAnimNotifyState : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}



	void Received_NotifyTick();
	void Received_NotifyEnd();
	void Received_NotifyBegin();
	void GetNotifyName();
};

// Class Engine.AnimNotify_PlayParticleEffect
// 0x0000
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}



};

// Class Engine.AnimNotifyState_Trail
// 0x0000
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}



	void OverridePSTemplate();
};

// Class Engine.Brush
// 0x0000
class ABrush : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}



};

// Class Engine.Volume
// 0x0000
class AVolume : public ABrush
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}



};

// Class Engine.AudioVolume
// 0x0000
class AAudioVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}



	void SetReverbSettings();
	void SetPriority();
	void SetInteriorSettings();
	void SetEnabled();
	void OnRep_bEnabled();
};

// Class Engine.CameraModifier
// 0x0000
class UCameraModifier : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}



	void IsDisabled();
	void GetViewTarget();
	void EnableModifier();
	void DisableModifier();
	void BlueprintModifyPostProcess();
	void BlueprintModifyCamera();
};

// Class Engine.DamageType
// 0x0000
class UDamageType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}



};

// Class Engine.GameUserSettings
// 0x0000
class UGameUserSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}



	void ValidateSettings();
	void SupportsHDRDisplayOutput();
	void SetVSyncEnabled();
	void SetVisualEffectQuality();
	void SetViewDistanceQuality();
	void SetToDefaults();
	void SetTextureQuality();
	void SetShadowQuality();
	void SetScreenResolution();
	void SetResolutionScaleValueEx();
	void SetResolutionScaleValue();
	void SetResolutionScaleNormalized();
	void SetPostProcessingQuality();
	void SetOverallScalabilityLevel();
	void SetFullscreenMode();
	void SetFrameRateLimit();
	void SetFoliageQuality();
	void SetDynamicResolutionEnabled();
	void SetBenchmarkFallbackValues();
	void SetAudioQualityLevel();
	void SetAntiAliasingQuality();
	void SaveSettings();
	void RunHardwareBenchmark();
	void RevertVideoMode();
	void ResetToCurrentSettings();
	void LoadSettings();
	void IsVSyncEnabled();
	void IsVSyncDirty();
	void IsScreenResolutionDirty();
	void IsHDREnabled();
	void IsFullscreenModeDirty();
	void IsDynamicResolutionEnabled();
	void IsDynamicResolutionDirty();
	void IsDirty();
	void GetVisualEffectQuality();
	void GetViewDistanceQuality();
	void GetTextureQuality();
	void GetSyncInterval();
	void GetShadowQuality();
	void GetScreenResolution();
	void GetResolutionScaleInformationEx();
	void GetResolutionScaleInformation();
	void GetRecommendedResolutionScale();
	void GetPreferredFullscreenMode();
	void GetPostProcessingQuality();
	void GetOverallScalabilityLevel();
	void GetLastConfirmedScreenResolution();
	void GetLastConfirmedFullscreenMode();
	void GetGameUserSettings();
	void GetFullscreenMode();
	void GetFrameRateLimit();
	void GetFoliageQuality();
	void GetDesktopResolution();
	void GetDefaultWindowPosition();
	void GetDefaultWindowMode();
	void GetDefaultResolutionScale();
	void GetDefaultResolution();
	void GetCurrentHDRDisplayNits();
	void GetAudioQualityLevel();
	void GetAntiAliasingQuality();
	void EnableHDRDisplayOutput();
	void ConfirmVideoMode();
	void ApplySettings();
	void ApplyResolutionSettings();
	void ApplyNonResolutionSettings();
	void ApplyHardwareBenchmarkResults();
};

// Class Engine.Engine
// 0x0000
class UEngine : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}



};

// Class Engine.ScriptViewportClient
// 0x0000
class UScriptViewportClient : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}



};

// Class Engine.GameViewportClient
// 0x0000
class UGameViewportClient : public UScriptViewportClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}



	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget();
};

// Class Engine.SoundMix
// 0x0000
class USoundMix : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}



};

// Class Engine.World
// 0x0000
class UWorld : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}



	void K2_GetWorldSettings();
	void HandleTimelineScrubbed();
};

// Class Engine.NavigationSystemBase
// 0x0000
class UNavigationSystemBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemBase");
		return ptr;
	}



};

// Class Engine.PlayerCameraManager
// 0x0000
class APlayerCameraManager : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}



	void StopCameraShake();
	void StopCameraFade();
	void StopCameraAnimInst();
	void StopAllInstancesOfCameraShake();
	void StopAllInstancesOfCameraAnim();
	void StopAllCameraShakes();
	void StopAllCameraAnims();
	void StartCameraFade();
	void SetManualCameraFade();
	void RemoveCameraModifier();
	void RemoveCameraLensEffect();
	void PlayCameraShake();
	void PlayCameraAnim();
	void PhotographyCameraModify();
	void OnPhotographySessionStart();
	void OnPhotographySessionEnd();
	void OnPhotographyMultiPartCaptureStart();
	void OnPhotographyMultiPartCaptureEnd();
	void GetOwningPlayerController();
	void GetFOVAngle();
	void GetCameraRotation();
	void GetCameraLocation();
	void FindCameraModifierByClass();
	void ClearCameraLensEffects();
	void BlueprintUpdateCamera();
	void AddNewCameraModifier();
	void AddCameraLensEffect();
};

// Class Engine.PostProcessComponent
// 0x0000
class UPostProcessComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}



	void AddOrUpdateBlendable();
};

// Class Engine.ProjectileMovementComponent
// 0x0000
class UProjectileMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}



	void StopSimulating();
	void SetVelocityInLocalSpace();
	void SetInterpolatedComponent();
	void ResetInterpolation();
	void OnProjectileStopDelegate__DelegateSignature();
	void OnProjectileBounceDelegate__DelegateSignature();
	void MoveInterpolationTarget();
	void LimitVelocity();
	void IsVelocityUnderSimulationThreshold();
	void IsInterpolationComplete();
};

// Class Engine.ShapeComponent
// 0x0000
class UShapeComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}



};

// Class Engine.CapsuleComponent
// 0x0000
class UCapsuleComponent : public UShapeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}



	void SetCapsuleSize();
	void SetCapsuleRadius();
	void SetCapsuleHalfHeight();
	void GetUnscaledCapsuleSize_WithoutHemisphere();
	void GetUnscaledCapsuleSize();
	void GetUnscaledCapsuleRadius();
	void GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	void GetUnscaledCapsuleHalfHeight();
	void GetShapeScale();
	void GetScaledCapsuleSize_WithoutHemisphere();
	void GetScaledCapsuleSize();
	void GetScaledCapsuleRadius();
	void GetScaledCapsuleHalfHeight_WithoutHemisphere();
	void GetScaledCapsuleHalfHeight();
};

// Class Engine.TextRenderComponent
// 0x0000
class UTextRenderComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}



	void SetYScale();
	void SetXScale();
	void SetWorldSize();
	void SetVertSpacingAdjust();
	void SetVerticalAlignment();
	void SetTextRenderColor();
	void SetTextMaterial();
	void SetText();
	void SetHorizSpacingAdjust();
	void SetHorizontalAlignment();
	void SetFont();
	void K2_SetText();
	void GetTextWorldSize();
	void GetTextLocalSize();
};

// Class Engine.LODActor
// 0x0000
class ALODActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}



};

// Class Engine.SkyLight
// 0x0000
class ASkyLight : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}



	void OnRep_bEnabled();
};

// Class Engine.Texture
// 0x0000
class UTexture : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}



};

// Class Engine.TextureCube
// 0x0000
class UTextureCube : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}



};

// Class Engine.InstancedStaticMeshComponent
// 0x0000
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}



	void UpdateInstanceTransform();
	void SetCullDistances();
	void RemoveInstance();
	void GetInstanceTransform();
	void GetInstancesOverlappingSphere();
	void GetInstancesOverlappingBox();
	void GetInstanceCount();
	void ClearInstances();
	void AddInstanceWorldSpace();
	void AddInstance();
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0000
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}



	void RemoveInstances();
};

// Class Engine.StaticMeshActor
// 0x0000
class AStaticMeshActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}



	void SetMobility();
};

// Class Engine.MaterialInterface
// 0x0000
class UMaterialInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}



	void SetForceMipLevelsToBeResident();
	void GetPhysicalMaterial();
	void GetBaseMaterial();
};

// Class Engine.MaterialInstance
// 0x0000
class UMaterialInstance : public UMaterialInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}



};

// Class Engine.MaterialInstanceConstant
// 0x0000
class UMaterialInstanceConstant : public UMaterialInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}



	void K2_GetVectorParameterValue();
	void K2_GetTextureParameterValue();
	void K2_GetScalarParameterValue();
};

// Class Engine.MaterialExpressionCustomOutput
// 0x0000
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}



};

// Class Engine.EngineCustomTimeStep
// 0x0000
class UEngineCustomTimeStep : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineCustomTimeStep");
		return ptr;
	}



};

// Class Engine.DynamicBlueprintBinding
// 0x0000
class UDynamicBlueprintBinding : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}



};

// Class Engine.BlueprintGeneratedClass
// 0x0000
class UBlueprintGeneratedClass : public UClass
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}



};

// Class Engine.CameraActor
// 0x0000
class ACameraActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}



	void GetAutoActivatePlayerIndex();
};

// Class Engine.SoundEffectPreset
// 0x0000
class USoundEffectPreset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectPreset");
		return ptr;
	}



};

// Class Engine.SoundEffectSubmixPreset
// 0x0000
class USoundEffectSubmixPreset : public USoundEffectPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSubmixPreset");
		return ptr;
	}



};

// Class Engine.SoundBase
// 0x0000
class USoundBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}



};

// Class Engine.SoundWave
// 0x0000
class USoundWave : public USoundBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}



};

// Class Engine.SoundWaveProcedural
// 0x0000
class USoundWaveProcedural : public USoundWave
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}



};

// Class Engine.BlueprintCore
// 0x0000
class UBlueprintCore : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}



};

// Class Engine.Blueprint
// 0x0000
class UBlueprint : public UBlueprintCore
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}



};

// Class Engine.Model
// 0x0000
class UModel : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}



};

// Class Engine.Channel
// 0x0000
class UChannel : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}



};

// Class Engine.ActorChannel
// 0x0000
class UActorChannel : public UChannel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}



};

// Class Engine.AnimationAsset
// 0x0000
class UAnimationAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}



};

// Class Engine.BlendSpaceBase
// 0x0000
class UBlendSpaceBase : public UAnimationAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}



};

// Class Engine.BlendSpace
// 0x0000
class UBlendSpace : public UBlendSpaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}



};

// Class Engine.AimOffsetBlendSpace
// 0x0000
class UAimOffsetBlendSpace : public UBlendSpace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}



};

// Class Engine.BlendSpace1D
// 0x0000
class UBlendSpace1D : public UBlendSpaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}



};

// Class Engine.AimOffsetBlendSpace1D
// 0x0000
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}



};

// Class Engine.AISystemBase
// 0x0000
class UAISystemBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}



};

// Class Engine.AmbientSound
// 0x0000
class AAmbientSound : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}



	void Stop();
	void Play();
	void FadeOut();
	void FadeIn();
	void AdjustVolume();
};

// Class Engine.AnimationSettings
// 0x0000
class UAnimationSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}



};

// Class Engine.AnimBlueprint
// 0x0000
class UAnimBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}



};

// Class Engine.AnimBlueprintGeneratedClass
// 0x0000
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}



};

// Class Engine.AnimClassData
// 0x0000
class UAnimClassData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}



};

// Class Engine.AnimClassInterface
// 0x0000
class UAnimClassInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}



};

// Class Engine.AnimSequenceBase
// 0x0000
class UAnimSequenceBase : public UAnimationAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}



	void GetPlayLength();
};

// Class Engine.AnimCompositeBase
// 0x0000
class UAnimCompositeBase : public UAnimSequenceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}



};

// Class Engine.AnimComposite
// 0x0000
class UAnimComposite : public UAnimCompositeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}



};

// Class Engine.AnimCompress_Automatic
// 0x0000
class UAnimCompress_Automatic : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}



};

// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}



};

// Class Engine.AnimCompress_LeastDestructive
// 0x0000
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}



};

// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0000
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}



};

// Class Engine.AnimCompress_PerTrackCompression
// 0x0000
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}



};

// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0000
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}



};

// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0000
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}



};

// Class Engine.AnimCurveCompressionCodec
// 0x0000
class UAnimCurveCompressionCodec : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec");
		return ptr;
	}



};

// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// 0x0000
class UAnimCurveCompressionCodec_CompressedRichCurve : public UAnimCurveCompressionCodec
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec_CompressedRichCurve");
		return ptr;
	}



};

// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// 0x0000
class UAnimCurveCompressionCodec_UniformlySampled : public UAnimCurveCompressionCodec
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionCodec_UniformlySampled");
		return ptr;
	}



};

// Class Engine.AnimCurveCompressionSettings
// 0x0000
class UAnimCurveCompressionSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCurveCompressionSettings");
		return ptr;
	}



};

// Class Engine.AnimMetaData
// 0x0000
class UAnimMetaData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}



};

// Class Engine.AnimMontage
// 0x0000
class UAnimMontage : public UAnimCompositeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}



	void GetDefaultBlendOutTime();
};

// Class Engine.AnimNotify_PauseClothingSimulation
// 0x0000
class UAnimNotify_PauseClothingSimulation : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PauseClothingSimulation");
		return ptr;
	}



};

// Class Engine.AnimNotify_PlaySound
// 0x0000
class UAnimNotify_PlaySound : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}



};

// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000
class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetClothingSimulation");
		return ptr;
	}



};

// Class Engine.AnimNotify_ResetDynamics
// 0x0000
class UAnimNotify_ResetDynamics : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetDynamics");
		return ptr;
	}



};

// Class Engine.AnimNotify_ResumeClothingSimulation
// 0x0000
class UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResumeClothingSimulation");
		return ptr;
	}



};

// Class Engine.AnimNotifyState_DisableRootMotion
// 0x0000
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_DisableRootMotion");
		return ptr;
	}



};

// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0000
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}



};

// Class Engine.AnimSequence
// 0x0000
class UAnimSequence : public UAnimSequenceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}



};

// Class Engine.AnimSet
// 0x0000
class UAnimSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}



};

// Class Engine.AnimSingleNodeInstance
// 0x0000
class UAnimSingleNodeInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}



	void StopAnim();
	void SetReverse();
	void SetPreviewCurveOverride();
	void SetPositionWithPreviousTime();
	void SetPosition();
	void SetPlayRate();
	void SetPlaying();
	void SetLooping();
	void SetBlendSpaceInput();
	void SetAnimationAsset();
	void PlayAnim();
	void GetLength();
	void GetAnimationAsset();
};

// Class Engine.AnimStateMachineTypes
// 0x0000
class UAnimStateMachineTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}



};

// Class Engine.ApplicationLifecycleComponent
// 0x0000
class UApplicationLifecycleComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}



};

// Class Engine.ArrowComponent
// 0x0000
class UArrowComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}



	void SetArrowColor();
};

// Class Engine.AssetExportTask
// 0x0000
class UAssetExportTask : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetExportTask");
		return ptr;
	}



};

// Class Engine.AssetManager
// 0x0000
class UAssetManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManager");
		return ptr;
	}



};

// Class Engine.AssetManagerSettings
// 0x0000
class UAssetManagerSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManagerSettings");
		return ptr;
	}



};

// Class Engine.AssetMappingTable
// 0x0000
class UAssetMappingTable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetMappingTable");
		return ptr;
	}



};

// Class Engine.AsyncActionLoadPrimaryAssetBase
// 0x0000
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetBase");
		return ptr;
	}



};

// Class Engine.AsyncActionLoadPrimaryAsset
// 0x0000
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAsset");
		return ptr;
	}



	void AsyncLoadPrimaryAsset();
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
// 0x0000
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClass");
		return ptr;
	}



	void AsyncLoadPrimaryAssetClass();
};

// Class Engine.AsyncActionLoadPrimaryAssetList
// 0x0000
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetList");
		return ptr;
	}



	void AsyncLoadPrimaryAssetList();
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
// 0x0000
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClassList");
		return ptr;
	}



	void AsyncLoadPrimaryAssetClassList();
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
// 0x0000
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionChangePrimaryAssetBundles");
		return ptr;
	}



	void AsyncChangeBundleStateForPrimaryAssetList();
	void AsyncChangeBundleStateForMatchingPrimaryAssets();
};

// Class Engine.AtmosphericFog
// 0x0000
class AAtmosphericFog : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}



};

// Class Engine.AtmosphericFogComponent
// 0x0000
class UAtmosphericFogComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}



	void StartPrecompute();
	void SetSunMultiplier();
	void SetStartDistance();
	void SetPrecomputeParams();
	void SetFogMultiplier();
	void SetDistanceScale();
	void SetDistanceOffset();
	void SetDensityOffset();
	void SetDensityMultiplier();
	void SetDefaultLightColor();
	void SetDefaultBrightness();
	void SetAltitudeScale();
	void DisableSunDisk();
	void DisableGroundScattering();
};

// Class Engine.AudioSettings
// 0x0000
class UAudioSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}



};

// Class Engine.AutomationTestSettings
// 0x0000
class UAutomationTestSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}



};

// Class Engine.AvoidanceManager
// 0x0000
class UAvoidanceManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}



	void RegisterMovementComponent();
	void GetObjectCount();
	void GetNewAvoidanceUID();
	void GetAvoidanceVelocityForComponent();
};

// Class Engine.BillboardComponent
// 0x0000
class UBillboardComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}



	void SetUV();
	void SetSpriteAndUV();
	void SetSprite();
};

// Class Engine.BlendableInterface
// 0x0000
class UBlendableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}



};

// Class Engine.Skeleton
// 0x0000
class USkeleton : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}



};

// Class Engine.BlendProfile
// 0x0000
class UBlendProfile : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}



};

// Class Engine.BlockingVolume
// 0x0000
class ABlockingVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}



};

// Class Engine.BlueprintMapLibrary
// 0x0000
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}



	void SetMapPropertyByName();
	void Map_Values();
	void Map_Remove();
	void Map_Length();
	void Map_Keys();
	void Map_Find();
	void Map_Contains();
	void Map_Clear();
	void Map_Add();
};

// Class Engine.BlueprintPathsLibrary
// 0x0000
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPathsLibrary");
		return ptr;
	}



	void VideoCaptureDir();
	void ValidatePath();
	void Split();
	void SourceConfigDir();
	void ShouldSaveToUserDir();
	void ShaderWorkingDir();
	void SetProjectFilePath();
	void SetExtension();
	void ScreenShotDir();
	void SandboxesDir();
	void RootDir();
	void RemoveDuplicateSlashes();
	void ProjectUserDir();
	void ProjectSavedDir();
	void ProjectPluginsDir();
	void ProjectPersistentDownloadDir();
	void ProjectModsDir();
	void ProjectLogDir();
	void ProjectIntermediateDir();
	void ProjectDir();
	void ProjectContentDir();
	void ProjectConfigDir();
	void ProfilingDir();
	void NormalizeFilename();
	void NormalizeDirectoryName();
	void MakeValidFileName();
	void MakeStandardFilename();
	void MakePlatformFilename();
	void MakePathRelativeTo();
	void LaunchDir();
	void IsSamePath();
	void IsRestrictedPath();
	void IsRelative();
	void IsProjectFilePathSet();
	void IsDrive();
	void HasProjectPersistentDownloadDir();
	void GetToolTipLocalizationPaths();
	void GetRestrictedFolderNames();
	void GetRelativePathToRoot();
	void GetPropertyNameLocalizationPaths();
	void GetProjectFilePath();
	void GetPath();
	void GetInvalidFileSystemChars();
	void GetGameLocalizationPaths();
	void GetExtension();
	void GetEngineLocalizationPaths();
	void GetEditorLocalizationPaths();
	void GetCleanFilename();
	void GetBaseFilename();
	void GeneratedConfigDir();
	void GameUserDeveloperDir();
	void GameSourceDir();
	void GameDevelopersDir();
	void GameAgnosticSavedDir();
	void FileExists();
	void FeaturePackDir();
	void EnterprisePluginsDir();
	void EnterpriseFeaturePackDir();
	void EnterpriseDir();
	void EngineVersionAgnosticUserDir();
	void EngineUserDir();
	void EngineSourceDir();
	void EngineSavedDir();
	void EnginePluginsDir();
	void EngineIntermediateDir();
	void EngineDir();
	void EngineContentDir();
	void EngineConfigDir();
	void DirectoryExists();
	void DiffDir();
	void CreateTempFilename();
	void ConvertToSandboxPath();
	void ConvertRelativePathToFull();
	void ConvertFromSandboxPath();
	void Combine();
	void CollapseRelativeDirectories();
	void CloudDir();
	void ChangeExtension();
	void BugItDir();
	void AutomationTransientDir();
	void AutomationLogDir();
	void AutomationDir();
};

// Class Engine.PlatformGameInstance
// 0x0000
class UPlatformGameInstance : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}



};

// Class Engine.BlueprintPlatformLibrary
// 0x0000
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}



	void ScheduleLocalNotificationFromNow();
	void ScheduleLocalNotificationBadgeFromNow();
	void ScheduleLocalNotificationBadgeAtTime();
	void ScheduleLocalNotificationAtTime();
	void GetLaunchNotification();
	void GetDeviceOrientation();
	void ClearAllLocalNotifications();
	void CancelLocalNotification();
};

// Class Engine.BlueprintSetLibrary
// 0x0000
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}



	void SetSetPropertyByName();
	void Set_Union();
	void Set_ToArray();
	void Set_RemoveItems();
	void Set_Remove();
	void Set_Length();
	void Set_Intersection();
	void Set_Difference();
	void Set_Contains();
	void Set_Clear();
	void Set_AddItems();
	void Set_Add();
};

// Class Engine.BodySetup
// 0x0000
class UBodySetup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}



};

// Class Engine.BoneMaskFilter
// 0x0000
class UBoneMaskFilter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}



};

// Class Engine.BookmarkBase
// 0x0000
class UBookmarkBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookmarkBase");
		return ptr;
	}



};

// Class Engine.BookMark
// 0x0000
class UBookMark : public UBookmarkBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}



};

// Class Engine.BookMark2D
// 0x0000
class UBookMark2D : public UBookmarkBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}



};

// Class Engine.BoxComponent
// 0x0000
class UBoxComponent : public UShapeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}



	void SetBoxExtent();
	void GetUnscaledBoxExtent();
	void GetScaledBoxExtent();
};

// Class Engine.ReflectionCapture
// 0x0000
class AReflectionCapture : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}



};

// Class Engine.BoxReflectionCapture
// 0x0000
class ABoxReflectionCapture : public AReflectionCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}



};

// Class Engine.ReflectionCaptureComponent
// 0x0000
class UReflectionCaptureComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}



};

// Class Engine.BoxReflectionCaptureComponent
// 0x0000
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}



};

// Class Engine.Breakpoint
// 0x0000
class UBreakpoint : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}



};

// Class Engine.BrushBuilder
// 0x0000
class UBrushBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}



};

// Class Engine.BrushComponent
// 0x0000
class UBrushComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}



};

// Class Engine.BrushShape
// 0x0000
class ABrushShape : public ABrush
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}



};

// Class Engine.ButtonStyleAsset
// 0x0000
class UButtonStyleAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}



};

// Class Engine.CameraAnim
// 0x0000
class UCameraAnim : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}



};

// Class Engine.CameraAnimInst
// 0x0000
class UCameraAnimInst : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}



	void Stop();
	void SetScale();
	void SetDuration();
};

// Class Engine.CameraBlockingVolume
// 0x0000
class ACameraBlockingVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}



};

// Class Engine.CameraModifier_CameraShake
// 0x0000
class UCameraModifier_CameraShake : public UCameraModifier
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}



};

// Class Engine.CameraShake
// 0x0000
class UCameraShake : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}



	void ReceiveStopShake();
	void ReceivePlayShake();
	void ReceiveIsFinished();
	void BlueprintUpdateCameraShake();
};

// Class Engine.Canvas
// 0x0000
class UCanvas : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}



	void K2_TextSize();
	void K2_StrLen();
	void K2_Project();
	void K2_DrawTriangle();
	void K2_DrawTexture();
	void K2_DrawText();
	void K2_DrawPolygon();
	void K2_DrawMaterialTriangle();
	void K2_DrawMaterial();
	void K2_DrawLine();
	void K2_DrawBox();
	void K2_DrawBorder();
	void K2_Deproject();
};

// Class Engine.TextureRenderTarget
// 0x0000
class UTextureRenderTarget : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}



};

// Class Engine.TextureRenderTarget2D
// 0x0000
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}



};

// Class Engine.CanvasRenderTarget2D
// 0x0000
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}



	void UpdateResource();
	void ReceiveUpdate();
	void GetSize();
	void CreateCanvasRenderTarget2D();
};

// Class Engine.CheckBoxStyleAsset
// 0x0000
class UCheckBoxStyleAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}



};

// Class Engine.ChildActorComponent
// 0x0000
class UChildActorComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}



	void SetChildActorClass();
};

// Class Engine.ChildConnection
// 0x0000
class UChildConnection : public UNetConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}



};

// Class Engine.PlatformInterfaceBase
// 0x0000
class UPlatformInterfaceBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}



};

// Class Engine.CloudStorageBase
// 0x0000
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}



};

// Class Engine.CollisionProfile
// 0x0000
class UCollisionProfile : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}



};

// Class Engine.ComponentDelegateBinding
// 0x0000
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}



};

// Class Engine.CurveTable
// 0x0000
class UCurveTable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}



};

// Class Engine.CompositeCurveTable
// 0x0000
class UCompositeCurveTable : public UCurveTable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeCurveTable");
		return ptr;
	}



};

// Class Engine.DataTable
// 0x0000
class UDataTable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}



};

// Class Engine.CompositeDataTable
// 0x0000
class UCompositeDataTable : public UDataTable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeDataTable");
		return ptr;
	}



};

// Class Engine.Console
// 0x0000
class UConsole : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}



};

// Class Engine.ControlChannel
// 0x0000
class UControlChannel : public UChannel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}



};

// Class Engine.ControlRigInterface
// 0x0000
class UControlRigInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlRigInterface");
		return ptr;
	}



};

// Class Engine.StreamingSettings
// 0x0000
class UStreamingSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}



};

// Class Engine.GarbageCollectionSettings
// 0x0000
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}



};

// Class Engine.CullDistanceVolume
// 0x0000
class ACullDistanceVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}



};

// Class Engine.CurveEdPresetCurve
// 0x0000
class UCurveEdPresetCurve : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}



};

// Class Engine.Texture2D
// 0x0000
class UTexture2D : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}



	void Blueprint_GetSizeY();
	void Blueprint_GetSizeX();
};

// Class Engine.CurveLinearColorAtlas
// 0x0000
class UCurveLinearColorAtlas : public UTexture2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColorAtlas");
		return ptr;
	}



	void GetCurvePosition();
};

// Class Engine.CurveSourceInterface
// 0x0000
class UCurveSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveSourceInterface");
		return ptr;
	}



	void GetCurveValue();
	void GetCurves();
	void GetBindingName();
};

// Class Engine.CurveVector
// 0x0000
class UCurveVector : public UCurveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}



	void GetVectorValue();
};

// Class Engine.PrimaryDataAsset
// 0x0000
class UPrimaryDataAsset : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryDataAsset");
		return ptr;
	}



};

// Class Engine.DataTableFunctionLibrary
// 0x0000
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}



	void GetDataTableRowNames();
	void GetDataTableRowFromName();
	void GetDataTableColumnAsString();
	void EvaluateCurveTableRow();
	void DoesDataTableRowExist();
};

// Class Engine.DebugCameraController
// 0x0000
class ADebugCameraController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}



	void ToggleDisplay();
	void ShowDebugSelectedInfo();
	void SetPawnMovementSpeedScale();
	void ReceiveOnDeactivate();
	void ReceiveOnActorSelected();
	void ReceiveOnActivate();
	void GetSelectedActor();
};

// Class Engine.DebugCameraHUD
// 0x0000
class ADebugCameraHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}



};

// Class Engine.DebugDrawService
// 0x0000
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}



};

// Class Engine.DecalActor
// 0x0000
class ADecalActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}



	void SetDecalMaterial();
	void GetDecalMaterial();
	void CreateDynamicMaterialInstance();
};

// Class Engine.PhysicsVolume
// 0x0000
class APhysicsVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}



};

// Class Engine.DefaultPhysicsVolume
// 0x0000
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}



};

// Class Engine.DemoNetConnection
// 0x0000
class UDemoNetConnection : public UNetConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}



};

// Class Engine.DemoNetDriver
// 0x0000
class UDemoNetDriver : public UNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}



};

// Class Engine.PendingNetGame
// 0x0000
class UPendingNetGame : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}



};

// Class Engine.DemoPendingNetGame
// 0x0000
class UDemoPendingNetGame : public UPendingNetGame
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}



};

// Class Engine.DestructibleInterface
// 0x0000
class UDestructibleInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleInterface");
		return ptr;
	}



};

// Class Engine.TextureLODSettings
// 0x0000
class UTextureLODSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}



};

// Class Engine.DeviceProfile
// 0x0000
class UDeviceProfile : public UTextureLODSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}



};

// Class Engine.DeviceProfileManager
// 0x0000
class UDeviceProfileManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}



};

// Class Engine.DialogueSoundWaveProxy
// 0x0000
class UDialogueSoundWaveProxy : public USoundBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}



};

// Class Engine.DialogueVoice
// 0x0000
class UDialogueVoice : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}



};

// Class Engine.DialogueWave
// 0x0000
class UDialogueWave : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}



};

// Class Engine.Light
// 0x0000
class ALight : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}



	void ToggleEnabled();
	void SetLightFunctionScale();
	void SetLightFunctionMaterial();
	void SetLightFunctionFadeDistance();
	void SetLightColor();
	void SetEnabled();
	void SetCastShadows();
	void SetBrightness();
	void SetAffectTranslucentLighting();
	void OnRep_bEnabled();
	void IsEnabled();
	void GetLightColor();
	void GetBrightness();
};

// Class Engine.DirectionalLight
// 0x0000
class ADirectionalLight : public ALight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}



};

// Class Engine.LightComponentBase
// 0x0000
class ULightComponentBase : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}



	void SetSamplesPerPixel();
	void SetCastVolumetricShadow();
	void SetCastShadows();
	void SetCastRaytracedShadow();
	void SetAffectReflection();
	void GetLightColor();
};

// Class Engine.LightComponent
// 0x0000
class ULightComponent : public ULightComponentBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}



	void SetVolumetricScatteringIntensity();
	void SetUseIESBrightness();
	void SetTransmission();
	void SetTemperature();
	void SetSpecularScale();
	void SetShadowBias();
	void SetLightFunctionScale();
	void SetLightFunctionMaterial();
	void SetLightFunctionFadeDistance();
	void SetLightFunctionDisabledBrightness();
	void SetLightColor();
	void SetIntensity();
	void SetIndirectLightingIntensity();
	void SetIESTexture();
	void SetIESBrightnessScale();
	void SetForceCachedShadowsForMovablePrimitives();
	void SetEnableLightShaftBloom();
	void SetBloomTint();
	void SetBloomThreshold();
	void SetBloomScale();
	void SetAffectTranslucentLighting();
	void SetAffectDynamicIndirectLighting();
};

// Class Engine.DirectionalLightComponent
// 0x0000
class UDirectionalLightComponent : public ULightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}



	void SetShadowDistanceFadeoutFraction();
	void SetOcclusionMaskDarkness();
	void SetLightShaftOverrideDirection();
	void SetEnableLightShaftOcclusion();
	void SetDynamicShadowDistanceStationaryLight();
	void SetDynamicShadowDistanceMovableLight();
	void SetDynamicShadowCascades();
	void SetCascadeTransitionFraction();
	void SetCascadeDistributionExponent();
};

// Class Engine.Distribution
// 0x0000
class UDistribution : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}



};

// Class Engine.DistributionFloat
// 0x0000
class UDistributionFloat : public UDistribution
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}



};

// Class Engine.DistributionFloatConstant
// 0x0000
class UDistributionFloatConstant : public UDistributionFloat
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}



};

// Class Engine.DistributionFloatConstantCurve
// 0x0000
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}



};

// Class Engine.DistributionFloatParameterBase
// 0x0000
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}



};

// Class Engine.DistributionFloatParticleParameter
// 0x0000
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}



};

// Class Engine.DistributionFloatUniform
// 0x0000
class UDistributionFloatUniform : public UDistributionFloat
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}



};

// Class Engine.DistributionFloatUniformCurve
// 0x0000
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}



};

// Class Engine.DistributionVector
// 0x0000
class UDistributionVector : public UDistribution
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}



};

// Class Engine.DistributionVectorConstant
// 0x0000
class UDistributionVectorConstant : public UDistributionVector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}



};

// Class Engine.DistributionVectorConstantCurve
// 0x0000
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}



};

// Class Engine.DistributionVectorParameterBase
// 0x0000
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}



};

// Class Engine.DistributionVectorParticleParameter
// 0x0000
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}



};

// Class Engine.DistributionVectorUniform
// 0x0000
class UDistributionVectorUniform : public UDistributionVector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}



};

// Class Engine.DistributionVectorUniformCurve
// 0x0000
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}



};

// Class Engine.DocumentationActor
// 0x0000
class ADocumentationActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}



};

// Class Engine.DPICustomScalingRule
// 0x0000
class UDPICustomScalingRule : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}



};

// Class Engine.DrawFrustumComponent
// 0x0000
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}



};

// Class Engine.SphereComponent
// 0x0000
class USphereComponent : public UShapeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}



	void SetSphereRadius();
	void GetUnscaledSphereRadius();
	void GetShapeScale();
	void GetScaledSphereRadius();
};

// Class Engine.DrawSphereComponent
// 0x0000
class UDrawSphereComponent : public USphereComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}



};

// Class Engine.EdGraph
// 0x0000
class UEdGraph : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}



};

// Class Engine.EdGraphNode
// 0x0000
class UEdGraphNode : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}



};

// Class Engine.EdGraphNode_Documentation
// 0x0000
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}



};

// Class Engine.EdGraphPin_Deprecated
// 0x0000
class UEdGraphPin_Deprecated : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}



};

// Class Engine.EdGraphSchema
// 0x0000
class UEdGraphSchema : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}



};

// Class Engine.Emitter
// 0x0000
class AEmitter : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}



	void ToggleActive();
	void SetVectorParameter();
	void SetTemplate();
	void SetMaterialParameter();
	void SetFloatParameter();
	void SetColorParameter();
	void SetActorParameter();
	void OnRep_bCurrentlyActive();
	void OnParticleSystemFinished();
	void IsActive();
	void Deactivate();
	void Activate();
};

// Class Engine.EmitterCameraLensEffectBase
// 0x0000
class AEmitterCameraLensEffectBase : public AEmitter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}



};

// Class Engine.EngineBaseTypes
// 0x0000
class UEngineBaseTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}



};

// Class Engine.EngineHandlerComponentFactory
// 0x0000
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}



};

// Class Engine.LocalMessage
// 0x0000
class ULocalMessage : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}



};

// Class Engine.EngineMessage
// 0x0000
class UEngineMessage : public ULocalMessage
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}



};

// Class Engine.DynamicSubsystem
// 0x0000
class UDynamicSubsystem : public USubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSubsystem");
		return ptr;
	}



};

// Class Engine.EngineSubsystem
// 0x0000
class UEngineSubsystem : public UDynamicSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineSubsystem");
		return ptr;
	}



};

// Class Engine.EngineTypes
// 0x0000
class UEngineTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}



};

// Class Engine.ExponentialHeightFog
// 0x0000
class AExponentialHeightFog : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}



	void OnRep_bEnabled();
};

// Class Engine.ExponentialHeightFogComponent
// 0x0000
class UExponentialHeightFogComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}



	void SetVolumetricFogScatteringDistribution();
	void SetVolumetricFogExtinctionScale();
	void SetVolumetricFogEmissive();
	void SetVolumetricFogDistance();
	void SetVolumetricFogAlbedo();
	void SetVolumetricFog();
	void SetStartDistance();
	void SetNonDirectionalInscatteringColorDistance();
	void SetInscatteringTextureTint();
	void SetInscatteringColorCubemapAngle();
	void SetInscatteringColorCubemap();
	void SetFullyDirectionalInscatteringColorDistance();
	void SetFogMaxOpacity();
	void SetFogInscatteringColor();
	void SetFogHeightFalloff();
	void SetFogDensity();
	void SetFogCutoffDistance();
	void SetDirectionalInscatteringStartDistance();
	void SetDirectionalInscatteringExponent();
	void SetDirectionalInscatteringColor();
};

// Class Engine.Exporter
// 0x0000
class UExporter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}



	void ScriptRunAssetExportTask();
	void RunAssetExportTasks();
	void RunAssetExportTask();
};

// Class Engine.FloatingPawnMovement
// 0x0000
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}



};

// Class Engine.Font
// 0x0000
class UFont : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}



};

// Class Engine.FontFace
// 0x0000
class UFontFace : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontFace");
		return ptr;
	}



};

// Class Engine.FontImportOptions
// 0x0000
class UFontImportOptions : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}



};

// Class Engine.ForceFeedbackAttenuation
// 0x0000
class UForceFeedbackAttenuation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackAttenuation");
		return ptr;
	}



};

// Class Engine.ForceFeedbackComponent
// 0x0000
class UForceFeedbackComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackComponent");
		return ptr;
	}



	void Stop();
	void SetIntensityMultiplier();
	void SetForceFeedbackEffect();
	void Play();
	void BP_GetAttenuationSettingsToApply();
	void AdjustAttenuation();
};

// Class Engine.ForceFeedbackEffect
// 0x0000
class UForceFeedbackEffect : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}



};

// Class Engine.GameEngine
// 0x0000
class UGameEngine : public UEngine
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}



};

// Class Engine.GameNetworkManager
// 0x0000
class AGameNetworkManager : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}



};

// Class Engine.GameplayStatics
// 0x0000
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}



	void UnloadStreamLevel();
	void SuggestProjectileVelocity_CustomArc();
	void SpawnSoundAttached();
	void SpawnSoundAtLocation();
	void SpawnSound2D();
	void SpawnObject();
	void SpawnForceFeedbackAttached();
	void SpawnForceFeedbackAtLocation();
	void SpawnEmitterAttached();
	void SpawnEmitterAtLocation();
	void SpawnDialogueAttached();
	void SpawnDialogueAtLocation();
	void SpawnDialogue2D();
	void SpawnDecalAttached();
	void SpawnDecalAtLocation();
	void SetWorldOriginLocation();
	void SetSubtitlesEnabled();
	void SetSoundMixClassOverride();
	void SetPlayerControllerID();
	void SetMaxAudioChannelsScaled();
	void SetGlobalTimeDilation();
	void SetGlobalPitchModulation();
	void SetGlobalListenerFocusParameters();
	void SetGamePaused();
	void SetEnableWorldRendering();
	void SetBaseSoundMix();
	void SaveGameToSlot();
	void RemovePlayer();
	void RebaseZeroOriginOntoLocal();
	void RebaseLocalOriginOntoZero();
	void PushSoundMixModifier();
	void ProjectWorldToScreen();
	void PopSoundMixModifier();
	void PlayWorldCameraShake();
	void PlaySoundAtLocation();
	void PlaySound2D();
	void PlayDialogueAtLocation();
	void PlayDialogue2D();
	void ParseOption();
	void OpenLevel();
	void MakeHitResult();
	void LoadStreamLevel();
	void LoadGameFromSlot();
	void IsGamePaused();
	void HasOption();
	void HasLaunchOption();
	void GrassOverlappingSphereCount();
	void GetWorldOriginLocation();
	void GetWorldDeltaSeconds();
	void GetUnpausedTimeSeconds();
	void GetTimeSeconds();
	void GetSurfaceType();
	void GetStreamingLevel();
	void GetRealTimeSeconds();
	void GetPlayerPawn();
	void GetPlayerControllerID();
	void GetPlayerController();
	void GetPlayerCharacter();
	void GetPlayerCameraManager();
	void GetPlatformName();
	void GetObjectClass();
	void GetMaxAudioChannelCount();
	void GetKeyValue();
	void GetIntOption();
	void GetGlobalTimeDilation();
	void GetGameState();
	void GetGameMode();
	void GetGameInstance();
	void GetEnableWorldRendering();
	void GetCurrentReverbEffect();
	void GetCurrentLevelName();
	void GetAudioTimeSeconds();
	void GetAllActorsWithTag();
	void GetAllActorsWithInterface();
	void GetAllActorsOfClass();
	void GetActorArrayBounds();
	void GetActorArrayAverageLocation();
	void GetAccurateRealTime();
	void FlushLevelStreaming();
	void FinishSpawningActor();
	void FindCollisionUV();
	void EnableLiveStreaming();
	void DoesSaveGameExist();
	void DeprojectScreenToWorld();
	void DeleteGameInSlot();
	void DeactivateReverbEffect();
	void CreateSound2D();
	void CreateSaveGameObjectFromBlueprint();
	void CreateSaveGameObject();
	void CreatePlayer();
	void ClearSoundMixModifiers();
	void ClearSoundMixClassOverride();
	void CancelAsyncLoading();
	void BreakHitResult();
	void BlueprintSuggestProjectileVelocity();
	void Blueprint_PredictProjectilePath_ByTraceChannel();
	void Blueprint_PredictProjectilePath_ByObjectType();
	void Blueprint_PredictProjectilePath_Advanced();
	void BeginSpawningActorFromClass();
	void BeginSpawningActorFromBlueprint();
	void BeginDeferredActorSpawnFromClass();
	void AreSubtitlesEnabled();
	void AreAnyListenersWithinRange();
	void ApplyRadialDamageWithFalloff();
	void ApplyRadialDamage();
	void ApplyPointDamage();
	void ApplyDamage();
	void ActivateReverbEffect();
};

// Class Engine.SpotLight
// 0x0000
class ASpotLight : public ALight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}



	void SetOuterConeAngle();
	void SetInnerConeAngle();
};

// Class Engine.GeneratedMeshAreaLight
// 0x0000
class AGeneratedMeshAreaLight : public ASpotLight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}



};

// Class Engine.HapticFeedbackEffect_Base
// 0x0000
class UHapticFeedbackEffect_Base : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}



};

// Class Engine.HapticFeedbackEffect_Buffer
// 0x0000
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}



};

// Class Engine.HapticFeedbackEffect_Curve
// 0x0000
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}



};

// Class Engine.HapticFeedbackEffect_SoundWave
// 0x0000
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}



};

// Class Engine.HealthSnapshotBlueprintLibrary
// 0x0000
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HealthSnapshotBlueprintLibrary");
		return ptr;
	}



	void StopPerformanceSnapshots();
	void StartPerformanceSnapshots();
	void LogPerformanceSnapshot();
};

// Class Engine.HLODProxy
// 0x0000
class UHLODProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HLODProxy");
		return ptr;
	}



};

// Class Engine.AmbisonicsSubmixSettingsBase
// 0x0000
class UAmbisonicsSubmixSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbisonicsSubmixSettingsBase");
		return ptr;
	}



};

// Class Engine.SpatializationPluginSourceSettingsBase
// 0x0000
class USpatializationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpatializationPluginSourceSettingsBase");
		return ptr;
	}



};

// Class Engine.OcclusionPluginSourceSettingsBase
// 0x0000
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OcclusionPluginSourceSettingsBase");
		return ptr;
	}



};

// Class Engine.SoundModulationPluginSourceSettingsBase
// 0x0000
class USoundModulationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundModulationPluginSourceSettingsBase");
		return ptr;
	}



};

// Class Engine.ReverbPluginSourceSettingsBase
// 0x0000
class UReverbPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbPluginSourceSettingsBase");
		return ptr;
	}



};

// Class Engine.ImportanceSamplingLibrary
// 0x0000
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportanceSamplingLibrary");
		return ptr;
	}



	void RandomSobolFloat();
	void RandomSobolCell3D();
	void RandomSobolCell2D();
	void NextSobolFloat();
	void NextSobolCell3D();
	void NextSobolCell2D();
	void MakeImportanceTexture();
	void ImportanceSample();
	void BreakImportanceTexture();
};

// Class Engine.ImportantToggleSettingInterface
// 0x0000
class UImportantToggleSettingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}



};

// Class Engine.InGameAdManager
// 0x0000
class UInGameAdManager : public UPlatformInterfaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}



};

// Class Engine.InheritableComponentHandler
// 0x0000
class UInheritableComponentHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}



};

// Class Engine.InputDelegateBinding
// 0x0000
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputActionDelegateBinding
// 0x0000
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputAxisDelegateBinding
// 0x0000
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputAxisKeyDelegateBinding
// 0x0000
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputComponent
// 0x0000
class UInputComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}



	void WasControllerKeyJustReleased();
	void WasControllerKeyJustPressed();
	void IsControllerKeyDown();
	void GetTouchState();
	void GetControllerVectorKeyState();
	void GetControllerMouseDelta();
	void GetControllerKeyTimeDown();
	void GetControllerAnalogStickState();
	void GetControllerAnalogKeyState();
};

// Class Engine.InputKeyDelegateBinding
// 0x0000
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputSettings
// 0x0000
class UInputSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}



	void SaveKeyMappings();
	void RemoveAxisMapping();
	void RemoveActionMapping();
	void GetInputSettings();
	void GetAxisNames();
	void GetAxisMappingByName();
	void GetActionNames();
	void GetActionMappingByName();
	void ForceRebuildKeymaps();
	void AddAxisMapping();
	void AddActionMapping();
};

// Class Engine.InputTouchDelegateBinding
// 0x0000
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}



};

// Class Engine.InputVectorAxisDelegateBinding
// 0x0000
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}



};

// Class Engine.Interface_AssetUserData
// 0x0000
class UInterface_AssetUserData : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}



};

// Class Engine.Interface_CollisionDataProvider
// 0x0000
class UInterface_CollisionDataProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}



};

// Class Engine.Interface_PostProcessVolume
// 0x0000
class UInterface_PostProcessVolume : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}



};

// Class Engine.Interface_PreviewMeshProvider
// 0x0000
class UInterface_PreviewMeshProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PreviewMeshProvider");
		return ptr;
	}



};

// Class Engine.InterpCurveEdSetup
// 0x0000
class UInterpCurveEdSetup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}



};

// Class Engine.InterpData
// 0x0000
class UInterpData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}



};

// Class Engine.InterpFilter
// 0x0000
class UInterpFilter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}



};

// Class Engine.InterpFilter_Classes
// 0x0000
class UInterpFilter_Classes : public UInterpFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}



};

// Class Engine.InterpFilter_Custom
// 0x0000
class UInterpFilter_Custom : public UInterpFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}



};

// Class Engine.InterpGroup
// 0x0000
class UInterpGroup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}



};

// Class Engine.InterpGroupCamera
// 0x0000
class UInterpGroupCamera : public UInterpGroup
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}



};

// Class Engine.InterpGroupDirector
// 0x0000
class UInterpGroupDirector : public UInterpGroup
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}



};

// Class Engine.InterpGroupInst
// 0x0000
class UInterpGroupInst : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}



};

// Class Engine.InterpGroupInstCamera
// 0x0000
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}



};

// Class Engine.InterpGroupInstDirector
// 0x0000
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}



};

// Class Engine.InterpToMovementComponent
// 0x0000
class UInterpToMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}



	void StopSimulating();
	void RestartMovement();
	void OnInterpToWaitEndDelegate__DelegateSignature();
	void OnInterpToWaitBeginDelegate__DelegateSignature();
	void OnInterpToStopDelegate__DelegateSignature();
	void OnInterpToReverseDelegate__DelegateSignature();
	void OnInterpToResetDelegate__DelegateSignature();
	void FinaliseControlPoints();
};

// Class Engine.InterpTrack
// 0x0000
class UInterpTrack : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}



};

// Class Engine.InterpTrackFloatBase
// 0x0000
class UInterpTrackFloatBase : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}



};

// Class Engine.InterpTrackAnimControl
// 0x0000
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}



};

// Class Engine.InterpTrackVectorBase
// 0x0000
class UInterpTrackVectorBase : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}



};

// Class Engine.InterpTrackAudioMaster
// 0x0000
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}



};

// Class Engine.InterpTrackBoolProp
// 0x0000
class UInterpTrackBoolProp : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}



};

// Class Engine.InterpTrackColorProp
// 0x0000
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackColorScale
// 0x0000
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}



};

// Class Engine.InterpTrackDirector
// 0x0000
class UInterpTrackDirector : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}



};

// Class Engine.InterpTrackEvent
// 0x0000
class UInterpTrackEvent : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}



};

// Class Engine.InterpTrackFade
// 0x0000
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}



};

// Class Engine.InterpTrackFloatAnimBPParam
// 0x0000
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}



};

// Class Engine.InterpTrackFloatMaterialParam
// 0x0000
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}



};

// Class Engine.InterpTrackFloatParticleParam
// 0x0000
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}



};

// Class Engine.InterpTrackFloatProp
// 0x0000
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInst
// 0x0000
class UInterpTrackInst : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}



};

// Class Engine.InterpTrackInstAnimControl
// 0x0000
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}



};

// Class Engine.InterpTrackInstAudioMaster
// 0x0000
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}



};

// Class Engine.InterpTrackInstProperty
// 0x0000
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}



};

// Class Engine.InterpTrackInstBoolProp
// 0x0000
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInstColorProp
// 0x0000
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInstColorScale
// 0x0000
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}



};

// Class Engine.InterpTrackInstDirector
// 0x0000
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}



};

// Class Engine.InterpTrackInstEvent
// 0x0000
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}



};

// Class Engine.InterpTrackInstFade
// 0x0000
class UInterpTrackInstFade : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}



};

// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0000
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}



};

// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0000
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}



};

// Class Engine.InterpTrackInstFloatParticleParam
// 0x0000
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}



};

// Class Engine.InterpTrackInstFloatProp
// 0x0000
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInstLinearColorProp
// 0x0000
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInstMove
// 0x0000
class UInterpTrackInstMove : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}



};

// Class Engine.InterpTrackInstParticleReplay
// 0x0000
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}



};

// Class Engine.InterpTrackInstSlomo
// 0x0000
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}



};

// Class Engine.InterpTrackInstSound
// 0x0000
class UInterpTrackInstSound : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}



};

// Class Engine.InterpTrackInstToggle
// 0x0000
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}



};

// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0000
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}



};

// Class Engine.InterpTrackInstVectorProp
// 0x0000
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackInstVisibility
// 0x0000
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}



};

// Class Engine.InterpTrackLinearColorBase
// 0x0000
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}



};

// Class Engine.InterpTrackLinearColorProp
// 0x0000
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackMove
// 0x0000
class UInterpTrackMove : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}



};

// Class Engine.InterpTrackMoveAxis
// 0x0000
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}



};

// Class Engine.InterpTrackParticleReplay
// 0x0000
class UInterpTrackParticleReplay : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}



};

// Class Engine.InterpTrackSlomo
// 0x0000
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}



};

// Class Engine.InterpTrackSound
// 0x0000
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}



};

// Class Engine.InterpTrackToggle
// 0x0000
class UInterpTrackToggle : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}



};

// Class Engine.InterpTrackVectorMaterialParam
// 0x0000
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}



};

// Class Engine.InterpTrackVectorProp
// 0x0000
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}



};

// Class Engine.InterpTrackVisibility
// 0x0000
class UInterpTrackVisibility : public UInterpTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}



};

// Class Engine.IntSerialization
// 0x0000
class UIntSerialization : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}



};

// Class Engine.KillZVolume
// 0x0000
class AKillZVolume : public APhysicsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}



};

// Class Engine.KismetArrayLibrary
// 0x0000
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}



	void SetArrayPropertyByName();
	void FilterArray();
	void Array_Swap();
	void Array_Shuffle();
	void Array_Set();
	void Array_Resize();
	void Array_RemoveItem();
	void Array_Remove();
	void Array_Length();
	void Array_LastIndex();
	void Array_IsValidIndex();
	void Array_Insert();
	void Array_Identical();
	void Array_Get();
	void Array_Find();
	void Array_Contains();
	void Array_Clear();
	void Array_Append();
	void Array_AddUnique();
	void Array_Add();
};

// Class Engine.KismetGuidLibrary
// 0x0000
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}



	void Parse_StringToGuid();
	void NotEqual_GuidGuid();
	void NewGuid();
	void IsValid_Guid();
	void Invalidate_Guid();
	void EqualEqual_GuidGuid();
	void Conv_GuidToString();
};

// Class Engine.KismetInputLibrary
// 0x0000
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}



	void PointerEvent_IsTouchEvent();
	void PointerEvent_IsMouseButtonDown();
	void PointerEvent_GetWheelDelta();
	void PointerEvent_GetUserIndex();
	void PointerEvent_GetTouchpadIndex();
	void PointerEvent_GetScreenSpacePosition();
	void PointerEvent_GetPointerIndex();
	void PointerEvent_GetLastScreenSpacePosition();
	void PointerEvent_GetGestureType();
	void PointerEvent_GetGestureDelta();
	void PointerEvent_GetEffectingButton();
	void PointerEvent_GetCursorDelta();
	void Key_IsVectorAxis();
	void Key_IsValid();
	void Key_IsMouseButton();
	void Key_IsModifierKey();
	void Key_IsKeyboardKey();
	void Key_IsGamepadKey();
	void Key_IsFloatAxis();
	void Key_GetDisplayName();
	void InputEvent_IsShiftDown();
	void InputEvent_IsRightShiftDown();
	void InputEvent_IsRightControlDown();
	void InputEvent_IsRightCommandDown();
	void InputEvent_IsRightAltDown();
	void InputEvent_IsRepeat();
	void InputEvent_IsLeftShiftDown();
	void InputEvent_IsLeftControlDown();
	void InputEvent_IsLeftCommandDown();
	void InputEvent_IsLeftAltDown();
	void InputEvent_IsControlDown();
	void InputEvent_IsCommandDown();
	void InputEvent_IsAltDown();
	void GetUserIndex();
	void GetKey();
	void GetAnalogValue();
	void EqualEqual_KeyKey();
	void EqualEqual_InputChordInputChord();
	void CalibrateTilt();
};

// Class Engine.KismetInternationalizationLibrary
// 0x0000
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInternationalizationLibrary");
		return ptr;
	}



	void SetCurrentLocale();
	void SetCurrentLanguageAndLocale();
	void SetCurrentLanguage();
	void SetCurrentCulture();
	void SetCurrentAssetGroupCulture();
	void GetSuitableCulture();
	void GetNativeCulture();
	void GetLocalizedCultures();
	void GetCurrentLocale();
	void GetCurrentLanguage();
	void GetCurrentCulture();
	void GetCurrentAssetGroupCulture();
	void GetCultureDisplayName();
	void ClearCurrentAssetGroupCulture();
};

// Class Engine.KismetMaterialLibrary
// 0x0000
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}



	void SetVectorParameterValue();
	void SetScalarParameterValue();
	void GetVectorParameterValue();
	void GetScalarParameterValue();
	void CreateDynamicMaterialInstance();
};

// Class Engine.KismetMathLibrary
// 0x0000
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}



	void Xor_IntInt();
	void Xor_Int64Int64();
	void VSizeXYSquared();
	void VSizeXY();
	void VSizeSquared();
	void VSize2DSquared();
	void VSize2D();
	void VSize();
	void VLerp();
	void VInterpTo_Constant();
	void VInterpTo();
	void VectorSpringInterp();
	void Vector_Zero();
	void Vector_Up();
	void Vector_UnwindEuler();
	void Vector_UnitCartesianToSpherical();
	void Vector_ToRadians();
	void Vector_ToDegrees();
	void Vector_SnappedToGrid();
	void Vector_Set();
	void Vector_Right();
	void Vector_Reciprocal();
	void Vector_ProjectOnToNormal();
	void Vector_One();
	void Vector_NormalUnsafe();
	void Vector_Normalize();
	void Vector_Normal2D();
	void Vector_MirrorByPlane();
	void Vector_Left();
	void Vector_IsZero();
	void Vector_IsUnit();
	void Vector_IsUniform();
	void Vector_IsNormal();
	void Vector_IsNearlyZero();
	void Vector_IsNAN();
	void Vector_HeadingAngle();
	void Vector_GetSignVector();
	void Vector_GetProjection();
	void Vector_GetAbsMin();
	void Vector_GetAbsMax();
	void Vector_GetAbs();
	void Vector_Forward();
	void Vector_Down();
	void Vector_DistanceSquared();
	void Vector_Distance2DSquared();
	void Vector_Distance2D();
	void Vector_Distance();
	void Vector_CosineAngle2D();
	void Vector_ComponentMin();
	void Vector_ComponentMax();
	void Vector_ClampSizeMax2D();
	void Vector_ClampSizeMax();
	void Vector_ClampSize2D();
	void Vector_BoundedToCube();
	void Vector_BoundedToBox();
	void Vector_Backward();
	void Vector_Assign();
	void Vector_AddBounded();
	void Vector4_Zero();
	void Vector4_SizeSquared3();
	void Vector4_SizeSquared();
	void Vector4_Size3();
	void Vector4_Size();
	void Vector4_Set();
	void Vector4_NormalUnsafe3();
	void Vector4_Normalize3();
	void Vector4_Normal3();
	void Vector4_Negated();
	void Vector4_MirrorByVector3();
	void Vector4_IsZero();
	void Vector4_IsUnit3();
	void Vector4_IsNormal3();
	void Vector4_IsNearlyZero3();
	void Vector4_IsNAN();
	void Vector4_DotProduct3();
	void Vector4_DotProduct();
	void Vector4_CrossProduct3();
	void Vector4_Assign();
	void Vector2DInterpTo_Constant();
	void Vector2DInterpTo();
	void Vector2D_Zero();
	void Vector2D_Unit45Deg();
	void Vector2D_One();
	void VEase();
	void UtcNow();
	void TransformRotation();
	void TransformLocation();
	void TransformDirection();
	void Transform_Determinant();
	void ToSign2D();
	void ToRounded2D();
	void ToDirectionAndLength2D();
	void Today();
	void TLerp();
	void TInterpTo();
	void TimespanZeroValue();
	void TimespanRatio();
	void TimespanMinValue();
	void TimespanMaxValue();
	void TimespanFromString();
	void TEase();
	void Tan();
	void Subtract_VectorVector();
	void Subtract_VectorInt();
	void Subtract_VectorFloat();
	void Subtract_Vector4Vector4();
	void Subtract_Vector2DVector2D();
	void Subtract_Vector2DFloat();
	void Subtract_TimespanTimespan();
	void Subtract_QuatQuat();
	void Subtract_LinearColorLinearColor();
	void Subtract_IntInt();
	void Subtract_Int64Int64();
	void Subtract_FloatFloat();
	void Subtract_DateTimeTimespan();
	void Subtract_DateTimeDateTime();
	void Subtract_ByteByte();
	void Square();
	void Sqrt();
	void Spherical2DToUnitCartesian();
	void Sin();
	void SignOfInteger64();
	void SignOfInteger();
	void SignOfFloat();
	void SetRandomStreamSeed();
	void Set2D();
	void SelectVector();
	void SelectTransform();
	void SelectString();
	void SelectRotator();
	void SelectObject();
	void SelectInt();
	void SelectFloat();
	void SelectColor();
	void SelectClass();
	void SeedRandomStream();
	void Round64();
	void Round();
	void RotatorFromAxisAndAngle();
	void RotateAngleAxis();
	void RLerp();
	void RInterpTo_Constant();
	void RInterpTo();
	void RGBToHSV_Vector();
	void RGBToHSV();
	void RGBLinearToHSV();
	void ResetVectorSpringState();
	void ResetRandomStream();
	void ResetFloatSpringState();
	void REase();
	void RandomUnitVectorInEllipticalConeInRadiansFromStream();
	void RandomUnitVectorInEllipticalConeInRadians();
	void RandomUnitVectorInEllipticalConeInDegreesFromStream();
	void RandomUnitVectorInEllipticalConeInDegrees();
	void RandomUnitVectorInConeInRadiansFromStream();
	void RandomUnitVectorInConeInRadians();
	void RandomUnitVectorInConeInDegreesFromStream();
	void RandomUnitVectorInConeInDegrees();
	void RandomUnitVectorFromStream();
	void RandomUnitVector();
	void RandomRotatorFromStream();
	void RandomRotator();
	void RandomPointInBoundingBox();
	void RandomIntegerInRangeFromStream();
	void RandomIntegerInRange();
	void RandomIntegerFromStream();
	void RandomInteger64InRange();
	void RandomInteger64();
	void RandomInteger();
	void RandomFloatInRangeFromStream();
	void RandomFloatInRange();
	void RandomFloatFromStream();
	void RandomFloat();
	void RandomBoolWithWeightFromStream();
	void RandomBoolWithWeight();
	void RandomBoolFromStream();
	void RandomBool();
	void RadiansToDegrees();
	void Quat_VectorUp();
	void Quat_VectorRight();
	void Quat_VectorForward();
	void Quat_UnrotateVector();
	void Quat_SizeSquared();
	void Quat_Size();
	void Quat_SetFromEuler();
	void Quat_SetComponents();
	void Quat_Rotator();
	void Quat_RotateVector();
	void Quat_Normalized();
	void Quat_Normalize();
	void Quat_MakeFromEuler();
	void Quat_Log();
	void Quat_IsNormalized();
	void Quat_IsNonFinite();
	void Quat_IsIdentity();
	void Quat_IsFinite();
	void Quat_Inversed();
	void Quat_Identity();
	void Quat_GetRotationAxis();
	void Quat_GetAxisZ();
	void Quat_GetAxisY();
	void Quat_GetAxisX();
	void Quat_GetAngle();
	void Quat_Exp();
	void Quat_Euler();
	void Quat_EnforceShortestArcWith();
	void Quat_AngularDistance();
	void ProjectVectorOnToVector();
	void ProjectVectorOnToPlane();
	void ProjectPointOnToPlane();
	void PointsAreCoplanar();
	void PerlinNoise1D();
	void Percent_IntInt();
	void Percent_FloatFloat();
	void Percent_ByteByte();
	void Or_IntInt();
	void Or_Int64Int64();
	void Now();
	void NotEqualExactly_VectorVector();
	void NotEqualExactly_Vector4Vector4();
	void NotEqualExactly_Vector2DVector2D();
	void NotEqual_VectorVector();
	void NotEqual_Vector4Vector4();
	void NotEqual_Vector2DVector2D();
	void NotEqual_TimespanTimespan();
	void NotEqual_RotatorRotator();
	void NotEqual_QuatQuat();
	void NotEqual_ObjectObject();
	void NotEqual_NameName();
	void NotEqual_LinearColorLinearColor();
	void NotEqual_IntInt();
	void NotEqual_Int64Int64();
	void NotEqual_FloatFloat();
	void NotEqual_DateTimeDateTime();
	void NotEqual_ClassClass();
	void NotEqual_ByteByte();
	void NotEqual_BoolBool();
	void Not_PreBool();
	void Not_Int64();
	void Not_Int();
	void NormalSafe2D();
	void NormalizeToRange();
	void NormalizedDeltaRotator();
	void NormalizeAxis();
	void Normalize2D();
	void Normal2D();
	void Normal();
	void NegateVector();
	void NegateRotator();
	void Negated2D();
	void NearlyEqual_TransformTransform();
	void NearlyEqual_FloatFloat();
	void MultiplyMultiply_FloatFloat();
	void MultiplyByPi();
	void Multiply_VectorVector();
	void Multiply_VectorInt();
	void Multiply_VectorFloat();
	void Multiply_Vector4Vector4();
	void Multiply_Vector2DVector2D();
	void Multiply_Vector2DFloat();
	void Multiply_TimespanFloat();
	void Multiply_RotatorInt();
	void Multiply_RotatorFloat();
	void Multiply_QuatQuat();
	void Multiply_LinearColorLinearColor();
	void Multiply_LinearColorFloat();
	void Multiply_IntInt();
	void Multiply_IntFloat();
	void Multiply_Int64Int64();
	void Multiply_FloatFloat();
	void Multiply_ByteByte();
	void MirrorVectorByNormal();
	void MinOfIntArray();
	void MinOfFloatArray();
	void MinOfByteArray();
	void MinInt64();
	void MinimumAreaRectangle();
	void Min();
	void MaxOfIntArray();
	void MaxOfFloatArray();
	void MaxOfByteArray();
	void MaxInt64();
	void Max();
	void Matrix_GetOrigin();
	void MapRangeUnclamped();
	void MapRangeClamped();
	void MakeVector4();
	void MakeVector2D();
	void MakeVector();
	void MakeTransform();
	void MakeTimespan2();
	void MakeTimespan();
	void MakeRotFromZY();
	void MakeRotFromZX();
	void MakeRotFromZ();
	void MakeRotFromYZ();
	void MakeRotFromYX();
	void MakeRotFromY();
	void MakeRotFromXZ();
	void MakeRotFromXY();
	void MakeRotFromX();
	void MakeRotator();
	void MakeRotationFromAxes();
	void MakeRelativeTransform();
	void MakeRandomStream();
	void MakeQualifiedFrameTime();
	void MakePulsatingValue();
	void MakePlaneFromPointAndNormal();
	void MakeFrameRate();
	void MakeDateTime();
	void MakeColor();
	void MakeBox2D();
	void MakeBox();
	void Loge();
	void Log();
	void LinePlaneIntersection_OriginNormal();
	void LinePlaneIntersection();
	void LinearColorLerpUsingHSV();
	void LinearColorLerp();
	void LinearColor_Yellow();
	void LinearColor_White();
	void LinearColor_Transparent();
	void LinearColor_ToRGBE();
	void LinearColor_ToNewOpacity();
	void LinearColor_SetTemperature();
	void LinearColor_SetRGBA();
	void LinearColor_SetRandomHue();
	void LinearColor_SetFromSRGB();
	void LinearColor_SetFromPow22();
	void LinearColor_SetFromHSV();
	void LinearColor_Set();
	void LinearColor_Red();
	void LinearColor_QuantizeRound();
	void LinearColor_Quantize();
	void LinearColor_IsNearEqual();
	void LinearColor_Green();
	void LinearColor_Gray();
	void LinearColor_GetMin();
	void LinearColor_GetMax();
	void LinearColor_GetLuminance();
	void LinearColor_Distance();
	void LinearColor_Desaturated();
	void LinearColor_Blue();
	void LinearColor_Black();
	void LessLess_VectorRotator();
	void LessEqual_TimespanTimespan();
	void LessEqual_IntInt();
	void LessEqual_Int64Int64();
	void LessEqual_FloatFloat();
	void LessEqual_DateTimeDateTime();
	void LessEqual_ByteByte();
	void Less_TimespanTimespan();
	void Less_IntInt();
	void Less_Int64Int64();
	void Less_FloatFloat();
	void Less_DateTimeDateTime();
	void Less_ByteByte();
	void Lerp();
	void IsZero2D();
	void IsPointInBoxWithTransform();
	void IsPointInBox();
	void IsNearlyZero2D();
	void IsMorning();
	void IsLeapYear();
	void IsAfternoon();
	void InvertTransform();
	void InverseTransformRotation();
	void InverseTransformLocation();
	void InverseTransformDirection();
	void InRange_IntInt();
	void InRange_Int64Int64();
	void InRange_FloatFloat();
	void Hypotenuse();
	void HSVToRGBLinear();
	void HSVToRGB_Vector();
	void HSVToRGB();
	void GridSnap_Float();
	void GreaterGreater_VectorRotator();
	void GreaterEqual_TimespanTimespan();
	void GreaterEqual_IntInt();
	void GreaterEqual_Int64Int64();
	void GreaterEqual_FloatFloat();
	void GreaterEqual_DateTimeDateTime();
	void GreaterEqual_ByteByte();
	void Greater_TimespanTimespan();
	void Greater_IntInt();
	void Greater_Int64Int64();
	void Greater_FloatFloat();
	void Greater_DateTimeDateTime();
	void Greater_ByteByte();
	void GetYear();
	void GetYawPitchFromVector();
	void GetVectorArrayAverage();
	void GetUpVector();
	void GetTotalSeconds();
	void GetTotalMinutes();
	void GetTotalMilliseconds();
	void GetTotalHours();
	void GetTotalDays();
	void GetTimeOfDay();
	void GetTAU();
	void GetSlopeDegreeAngles();
	void GetSeconds();
	void GetSecond();
	void GetRotated2D();
	void GetRightVector();
	void GetReflectionVector();
	void GetPointDistanceToSegment();
	void GetPointDistanceToLine();
	void GetPI();
	void GetMonth();
	void GetMinutes();
	void GetMinute();
	void GetMinElement();
	void GetMin2D();
	void GetMilliseconds();
	void GetMillisecond();
	void GetMaxElement();
	void GetMax2D();
	void GetHours();
	void GetHour12();
	void GetHour();
	void GetForwardVector();
	void GetDuration();
	void GetDirectionUnitVector();
	void GetDays();
	void GetDayOfYear();
	void GetDay();
	void GetDate();
	void GetAzimuthAndElevation();
	void GetAxes();
	void GetAbsMax2D();
	void GetAbs2D();
	void FTruncVector();
	void FTrunc64();
	void FTrunc();
	void FromSeconds();
	void FromMinutes();
	void FromMilliseconds();
	void FromHours();
	void FromDays();
	void Fraction();
	void FMod();
	void FMin();
	void FMax();
	void FloatSpringInterp();
	void FixedTurn();
	void FInterpTo_Constant();
	void FInterpTo();
	void FInterpEaseInOut();
	void FindNearestPointsOnLineSegments();
	void FindLookAtRotation();
	void FindClosestPointOnSegment();
	void FindClosestPointOnLine();
	void FFloor64();
	void FFloor();
	void FClamp();
	void FCeil64();
	void FCeil();
	void Exp();
	void EqualExactly_VectorVector();
	void EqualExactly_Vector4Vector4();
	void EqualExactly_Vector2DVector2D();
	void EqualEqual_VectorVector();
	void EqualEqual_Vector4Vector4();
	void EqualEqual_Vector2DVector2D();
	void EqualEqual_TransformTransform();
	void EqualEqual_TimespanTimespan();
	void EqualEqual_RotatorRotator();
	void EqualEqual_QuatQuat();
	void EqualEqual_ObjectObject();
	void EqualEqual_NameName();
	void EqualEqual_LinearColorLinearColor();
	void EqualEqual_IntInt();
	void EqualEqual_Int64Int64();
	void EqualEqual_FloatFloat();
	void EqualEqual_DateTimeDateTime();
	void EqualEqual_ClassClass();
	void EqualEqual_ByteByte();
	void EqualEqual_BoolBool();
	void Ease();
	void DotProduct2D();
	void Dot_VectorVector();
	void Divide_VectorVector();
	void Divide_VectorInt();
	void Divide_VectorFloat();
	void Divide_Vector4Vector4();
	void Divide_Vector2DVector2D();
	void Divide_Vector2DFloat();
	void Divide_TimespanFloat();
	void Divide_LinearColorLinearColor();
	void Divide_IntInt();
	void Divide_Int64Int64();
	void Divide_FloatFloat();
	void Divide_ByteByte();
	void DistanceSquared2D();
	void Distance2D();
	void DegTan();
	void DegSin();
	void DegreesToRadians();
	void DegCos();
	void DegAtan2();
	void DegAtan();
	void DegAsin();
	void DegAcos();
	void DaysInYear();
	void DaysInMonth();
	void DateTimeMinValue();
	void DateTimeMaxValue();
	void DateTimeFromString();
	void DateTimeFromIsoString();
	void CrossProduct2D();
	void Cross_VectorVector();
	void CreateVectorFromYawPitch();
	void Cos();
	void ConvertTransformToRelative();
	void Conv_VectorToVector2D();
	void Conv_VectorToTransform();
	void Conv_VectorToRotator();
	void Conv_VectorToQuaterion();
	void Conv_VectorToLinearColor();
	void Conv_Vector4ToVector();
	void Conv_Vector4ToRotator();
	void Conv_Vector4ToQuaterion();
	void Conv_Vector2DToVector();
	void Conv_Vector2DToIntPoint();
	void Conv_RotatorToVector();
	void Conv_RotatorToTransform();
	void Conv_MatrixToTransform();
	void Conv_MatrixToRotator();
	void Conv_LinearColorToVector();
	void Conv_LinearColorToColor();
	void Conv_IntVectorToVector();
	void Conv_IntToIntVector();
	void Conv_IntToInt64();
	void Conv_IntToFloat();
	void Conv_IntToByte();
	void Conv_IntToBool();
	void Conv_FloatToVector();
	void Conv_FloatToLinearColor();
	void Conv_ColorToLinearColor();
	void Conv_ByteToInt();
	void Conv_ByteToFloat();
	void Conv_BoolToInt();
	void Conv_BoolToFloat();
	void Conv_BoolToByte();
	void ComposeTransforms();
	void ComposeRotators();
	void ClassIsChildOf();
	void ClampVectorSize();
	void ClampInt64();
	void ClampAxis();
	void ClampAxes2D();
	void ClampAngle();
	void Clamp();
	void CInterpTo();
	void BreakVector4();
	void BreakVector2D();
	void BreakVector();
	void BreakTransform();
	void BreakTimespan2();
	void BreakTimespan();
	void BreakRotIntoAxes();
	void BreakRotator();
	void BreakRandomStream();
	void BreakQualifiedFrameTime();
	void BreakFrameRate();
	void BreakDateTime();
	void BreakColor();
	void BooleanXOR();
	void BooleanOR();
	void BooleanNOR();
	void BooleanNAND();
	void BooleanAND();
	void BMin();
	void BMax();
	void Atan2();
	void Atan();
	void Asin();
	void And_IntInt();
	void And_Int64Int64();
	void Add_VectorVector();
	void Add_VectorInt();
	void Add_VectorFloat();
	void Add_Vector4Vector4();
	void Add_Vector2DVector2D();
	void Add_Vector2DFloat();
	void Add_TimespanTimespan();
	void Add_QuatQuat();
	void Add_LinearColorLinearColor();
	void Add_IntInt();
	void Add_Int64Int64();
	void Add_FloatFloat();
	void Add_DateTimeTimespan();
	void Add_ByteByte();
	void Acos();
	void Abs_Int64();
	void Abs_Int();
	void Abs();
};

// Class Engine.KismetNodeHelperLibrary
// 0x0000
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}



	void MarkBit();
	void HasUnmarkedBit();
	void HasMarkedBit();
	void GetValidValue();
	void GetUnmarkedBit();
	void GetRandomUnmarkedBit();
	void GetFirstUnmarkedBit();
	void GetEnumeratorValueFromIndex();
	void GetEnumeratorUserFriendlyName();
	void GetEnumeratorName();
	void ClearBit();
	void ClearAllBits();
	void BitIsMarked();
};

// Class Engine.KismetRenderingLibrary
// 0x0000
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}



	void RenderTargetCreateStaticTexture2DEditorOnly();
	void ReleaseRenderTarget2D();
	void ReadRenderTargetUV();
	void ReadRenderTargetRawUV();
	void ReadRenderTargetRawPixel();
	void ReadRenderTargetPixel();
	void MakeSkinWeightInfo();
	void ImportFileAsTexture2D();
	void ImportBufferAsTexture2D();
	void ExportTexture2D();
	void ExportRenderTarget();
	void EndDrawCanvasToRenderTarget();
	void DrawMaterialToRenderTarget();
	void CreateRenderTarget2D();
	void ConvertRenderTargetToTexture2DEditorOnly();
	void ClearRenderTarget2D();
	void BreakSkinWeightInfo();
	void BeginDrawCanvasToRenderTarget();
};

// Class Engine.KismetStringLibrary
// 0x0000
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}



	void TrimTrailing();
	void Trim();
	void ToUpper();
	void ToLower();
	void TimeSecondsToString();
	void StartsWith();
	void Split();
	void RightPad();
	void RightChop();
	void Right();
	void Reverse();
	void ReplaceInline();
	void Replace();
	void ParseIntoArray();
	void NotEqual_StrStr();
	void NotEqual_StriStri();
	void Mid();
	void MatchesWildcard();
	void Len();
	void LeftPad();
	void LeftChop();
	void Left();
	void JoinStringArray();
	void IsNumeric();
	void GetSubstring();
	void GetCharacterAsNumber();
	void GetCharacterArrayFromString();
	void FindSubstring();
	void EqualEqual_StrStr();
	void EqualEqual_StriStri();
	void EndsWith();
	void CullArray();
	void Conv_VectorToString();
	void Conv_Vector2dToString();
	void Conv_TransformToString();
	void Conv_StringToVector2D();
	void Conv_StringToVector();
	void Conv_StringToRotator();
	void Conv_StringToName();
	void Conv_StringToInt();
	void Conv_StringToFloat();
	void Conv_StringToColor();
	void Conv_RotatorToString();
	void Conv_ObjectToString();
	void Conv_NameToString();
	void Conv_IntVectorToString();
	void Conv_IntToString();
	void Conv_FloatToString();
	void Conv_ColorToString();
	void Conv_ByteToString();
	void Conv_BoolToString();
	void Contains();
	void Concat_StrStr();
	void BuildString_Vector2d();
	void BuildString_Vector();
	void BuildString_Rotator();
	void BuildString_Object();
	void BuildString_Name();
	void BuildString_IntVector();
	void BuildString_Int();
	void BuildString_Float();
	void BuildString_Color();
	void BuildString_Bool();
};

// Class Engine.KismetStringTableLibrary
// 0x0000
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
		return ptr;
	}



	void IsRegisteredTableId();
	void IsRegisteredTableEntry();
	void GetTableNamespace();
	void GetTableEntrySourceString();
	void GetTableEntryMetaData();
	void GetRegisteredStringTables();
	void GetMetaDataIdsFromStringTableEntry();
	void GetKeysFromStringTable();
};

// Class Engine.KismetSystemLibrary
// 0x0000
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}



	void UnregisterForRemoteNotifications();
	void UnloadPrimaryAssetList();
	void UnloadPrimaryAsset();
	void TransactObject();
	void StackTrace();
	void SphereTraceSingleForObjects();
	void SphereTraceSingleByProfile();
	void SphereTraceSingle();
	void SphereTraceMultiForObjects();
	void SphereTraceMultiByProfile();
	void SphereTraceMulti();
	void SphereOverlapComponents();
	void SphereOverlapActors();
	void ShowPlatformSpecificLeaderboardScreen();
	void ShowPlatformSpecificAchievementsScreen();
	void ShowInterstitialAd();
	void ShowAdBanner();
	void SetWindowTitle();
	void SetVolumeButtonsHandledBySystem();
	void SetVectorPropertyByName();
	void SetUserActivity();
	void SetTransformPropertyByName();
	void SetTextPropertyByName();
	void SetSuppressViewportTransitionMessage();
	void SetStructurePropertyByName();
	void SetStringPropertyByName();
	void SetSoftObjectPropertyByName();
	void SetSoftClassPropertyByName();
	void SetRotatorPropertyByName();
	void SetObjectPropertyByName();
	void SetNamePropertyByName();
	void SetLinearColorPropertyByName();
	void SetIntPropertyByName();
	void SetInterfacePropertyByName();
	void SetInt64PropertyByName();
	void SetFloatPropertyByName();
	void SetCollisionProfileNameProperty();
	void SetClassPropertyByName();
	void SetBytePropertyByName();
	void SetBoolPropertyByName();
	void RetriggerableDelay();
	void ResetGamepadAssignmentToController();
	void ResetGamepadAssignments();
	void RegisterForRemoteNotifications();
	void QuitGame();
	void PrintWarning();
	void PrintText();
	void PrintString();
	void OnAssetLoaded__DelegateSignature();
	void OnAssetClassLoaded__DelegateSignature();
	void NotEqual_SoftObjectReference();
	void NotEqual_SoftClassReference();
	void NotEqual_PrimaryAssetType();
	void NotEqual_PrimaryAssetId();
	void NormalizeFilename();
	void MoveComponentTo();
	void MakeSoftObjectPath();
	void MakeSoftClassPath();
	void MakeLiteralText();
	void MakeLiteralString();
	void MakeLiteralName();
	void MakeLiteralInt();
	void MakeLiteralFloat();
	void MakeLiteralByte();
	void MakeLiteralBool();
	void LoadInterstitialAd();
	void LoadAssetClass();
	void LoadAsset_Blocking();
	void LoadAsset();
	void LineTraceSingleForObjects();
	void LineTraceSingleByProfile();
	void LineTraceSingle();
	void LineTraceMultiForObjects();
	void LineTraceMultiByProfile();
	void LineTraceMulti();
	void LaunchURL();
	void K2_UnPauseTimerHandle();
	void K2_UnPauseTimerDelegate();
	void K2_UnPauseTimer();
	void K2_TimerExistsHandle();
	void K2_TimerExistsDelegate();
	void K2_TimerExists();
	void K2_SetTimerDelegate();
	void K2_SetTimer();
	void K2_PauseTimerHandle();
	void K2_PauseTimerDelegate();
	void K2_PauseTimer();
	void K2_IsValidTimerHandle();
	void K2_IsTimerPausedHandle();
	void K2_IsTimerPausedDelegate();
	void K2_IsTimerPaused();
	void K2_IsTimerActiveHandle();
	void K2_IsTimerActiveDelegate();
	void K2_IsTimerActive();
	void K2_InvalidateTimerHandle();
	void K2_GetTimerRemainingTimeHandle();
	void K2_GetTimerRemainingTimeDelegate();
	void K2_GetTimerRemainingTime();
	void K2_GetTimerElapsedTimeHandle();
	void K2_GetTimerElapsedTimeDelegate();
	void K2_GetTimerElapsedTime();
	void K2_ClearTimerHandle();
	void K2_ClearTimerDelegate();
	void K2_ClearTimer();
	void K2_ClearAndInvalidateTimerHandle();
	void IsValidSoftObjectReference();
	void IsValidSoftClassReference();
	void IsValidPrimaryAssetType();
	void IsValidPrimaryAssetId();
	void IsValidClass();
	void IsValid();
	void IsUnattended();
	void IsStandalone();
	void IsServer();
	void IsScreensaverEnabled();
	void IsPackagedForDistribution();
	void IsLoggedIn();
	void IsInterstitialAdRequested();
	void IsInterstitialAdAvailable();
	void IsDedicatedServer();
	void IsControllerAssignedToGamepad();
	void HideAdBanner();
	void GetVolumeButtonsHandledBySystem();
	void GetUniqueDeviceId();
	void GetSupportedFullscreenResolutions();
	void GetSoftObjectReferenceFromPrimaryAssetId();
	void GetSoftClassReferenceFromPrimaryAssetId();
	void GetRenderingMaterialQualityLevel();
	void GetRenderingDetailMode();
	void GetProjectSavedDirectory();
	void GetProjectDirectory();
	void GetProjectContentDirectory();
	void GetPrimaryAssetsWithBundleState();
	void GetPrimaryAssetIdList();
	void GetPrimaryAssetIdFromSoftObjectReference();
	void GetPrimaryAssetIdFromSoftClassReference();
	void GetPrimaryAssetIdFromObject();
	void GetPrimaryAssetIdFromClass();
	void GetPreferredLanguages();
	void GetPlatformUserName();
	void GetPathName();
	void GetOuterObject();
	void GetObjectName();
	void GetObjectFromPrimaryAssetId();
	void GetMinYResolutionForUI();
	void GetMinYResolutionFor3DView();
	void GetLocalCurrencySymbol();
	void GetLocalCurrencyCode();
	void GetGameTimeInSeconds();
	void GetGamepadControllerName();
	void GetGameName();
	void GetGameBundleId();
	void GetEngineVersion();
	void GetDisplayName();
	void GetDeviceId();
	void GetDefaultLocale();
	void GetDefaultLanguage();
	void GetCurrentBundleState();
	void GetConvenientWindowedResolutions();
	void GetConsoleVariableIntValue();
	void GetConsoleVariableFloatValue();
	void GetConsoleVariableBoolValue();
	void GetComponentBounds();
	void GetCommandLine();
	void GetClassFromPrimaryAssetId();
	void GetClassDisplayName();
	void GetAdIDCount();
	void GetActorListFromComponentList();
	void GetActorBounds();
	void ForceCloseAdBanner();
	void FlushPersistentDebugLines();
	void FlushDebugStrings();
	void ExecuteConsoleCommand();
	void EqualEqual_SoftObjectReference();
	void EqualEqual_SoftClassReference();
	void EqualEqual_PrimaryAssetType();
	void EqualEqual_PrimaryAssetId();
	void EndTransaction();
	void DrawDebugString();
	void DrawDebugSphere();
	void DrawDebugPoint();
	void DrawDebugPlane();
	void DrawDebugLine();
	void DrawDebugFrustum();
	void DrawDebugFloatHistoryTransform();
	void DrawDebugFloatHistoryLocation();
	void DrawDebugCylinder();
	void DrawDebugCoordinateSystem();
	void DrawDebugConeInDegrees();
	void DrawDebugCone();
	void DrawDebugCircle();
	void DrawDebugCapsule();
	void DrawDebugCamera();
	void DrawDebugBox();
	void DrawDebugArrow();
	void DoesImplementInterface();
	void Delay();
	void CreateCopyForUndoBuffer();
	void ConvertToRelativePath();
	void ConvertToAbsolutePath();
	void Conv_SoftObjPathToSoftObjRef();
	void Conv_SoftObjectReferenceToString();
	void Conv_SoftObjectReferenceToObject();
	void Conv_SoftClassReferenceToString();
	void Conv_SoftClassReferenceToClass();
	void Conv_PrimaryAssetTypeToString();
	void Conv_PrimaryAssetIdToString();
	void Conv_ObjectToSoftObjectReference();
	void Conv_InterfaceToObject();
	void Conv_ClassToSoftClassReference();
	void ControlScreensaver();
	void ComponentOverlapComponents();
	void ComponentOverlapActors();
	void CollectGarbage();
	void CapsuleTraceSingleForObjects();
	void CapsuleTraceSingleByProfile();
	void CapsuleTraceSingle();
	void CapsuleTraceMultiForObjects();
	void CapsuleTraceMultiByProfile();
	void CapsuleTraceMulti();
	void CapsuleOverlapComponents();
	void CapsuleOverlapActors();
	void CanLaunchURL();
	void CancelTransaction();
	void BreakSoftObjectPath();
	void BreakSoftClassPath();
	void BoxTraceSingleForObjects();
	void BoxTraceSingleByProfile();
	void BoxTraceSingle();
	void BoxTraceMultiForObjects();
	void BoxTraceMultiByProfile();
	void BoxTraceMulti();
	void BoxOverlapComponents();
	void BoxOverlapActors();
	void BeginTransaction();
	void AddFloatHistorySample();
};

// Class Engine.KismetTextLibrary
// 0x0000
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}



	void TextTrimTrailing();
	void TextTrimPrecedingAndTrailing();
	void TextTrimPreceding();
	void TextToUpper();
	void TextToLower();
	void TextIsTransient();
	void TextIsFromStringTable();
	void TextIsEmpty();
	void TextIsCultureInvariant();
	void TextFromStringTable();
	void StringTableIdAndKeyFromText();
	void PolyglotDataToText();
	void NotEqual_TextText();
	void NotEqual_IgnoreCase_TextText();
	void IsPolyglotDataValid();
	void GetEmptyText();
	void Format();
	void FindTextInLocalizationTable();
	void EqualEqual_TextText();
	void EqualEqual_IgnoreCase_TextText();
	void Conv_VectorToText();
	void Conv_Vector2dToText();
	void Conv_TransformToText();
	void Conv_TextToString();
	void Conv_StringToText();
	void Conv_RotatorToText();
	void Conv_ObjectToText();
	void Conv_NameToText();
	void Conv_IntToText();
	void Conv_FloatToText();
	void Conv_ColorToText();
	void Conv_ByteToText();
	void Conv_BoolToText();
	void AsTimeZoneTime_DateTime();
	void AsTimeZoneDateTime_DateTime();
	void AsTimeZoneDate_DateTime();
	void AsTimespan_Timespan();
	void AsTime_DateTime();
	void AsPercent_Float();
	void AsDateTime_DateTime();
	void AsDate_DateTime();
	void AsCurrencyBase();
	void AsCurrency_Integer();
	void AsCurrency_Float();
};

// Class Engine.Layer
// 0x0000
class ULayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}



};

// Class Engine.Level
// 0x0000
class ULevel : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}



};

// Class Engine.LevelActorContainer
// 0x0000
class ULevelActorContainer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelActorContainer");
		return ptr;
	}



};

// Class Engine.LevelBounds
// 0x0000
class ALevelBounds : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}



};

// Class Engine.LevelScriptBlueprint
// 0x0000
class ULevelScriptBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}



};

// Class Engine.LevelStreaming
// 0x0000
class ULevelStreaming : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}



	void ShouldBeLoaded();
	void SetShouldBeVisible();
	void SetShouldBeLoaded();
	void SetPriority();
	void SetLevelLODIndex();
	void IsStreamingStatePending();
	void IsLevelVisible();
	void IsLevelLoaded();
	void GetWorldAssetPackageFName();
	void GetLoadedLevel();
	void GetLevelScriptActor();
	void CreateInstance();
};

// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}



};

// Class Engine.LevelStreamingDynamic
// 0x0000
class ULevelStreamingDynamic : public ULevelStreaming
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDynamic");
		return ptr;
	}



	void LoadLevelInstanceBySoftObjectPtr();
	void LoadLevelInstance();
};

// Class Engine.LevelStreamingPersistent
// 0x0000
class ULevelStreamingPersistent : public ULevelStreaming
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}



};

// Class Engine.LevelStreamingVolume
// 0x0000
class ALevelStreamingVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}



};

// Class Engine.LightmappedSurfaceCollection
// 0x0000
class ULightmappedSurfaceCollection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}



};

// Class Engine.LightMapTexture2D
// 0x0000
class ULightMapTexture2D : public UTexture2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}



};

// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}



};

// Class Engine.LightmassImportanceVolume
// 0x0000
class ALightmassImportanceVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}



};

// Class Engine.LightmassPortal
// 0x0000
class ALightmassPortal : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}



};

// Class Engine.LightmassPortalComponent
// 0x0000
class ULightmassPortalComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}



};

// Class Engine.LightmassPrimitiveSettingsObject
// 0x0000
class ULightmassPrimitiveSettingsObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}



};

// Class Engine.LineBatchComponent
// 0x0000
class ULineBatchComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}



};

// Class Engine.LocalLightComponent
// 0x0000
class ULocalLightComponent : public ULightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalLightComponent");
		return ptr;
	}



	void SetIntensityUnits();
	void SetAttenuationRadius();
	void GetUnitsConversionFactor();
};

// Class Engine.LocalPlayer
// 0x0000
class ULocalPlayer : public UPlayer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}



};

// Class Engine.LocalPlayerSubsystem
// 0x0000
class ULocalPlayerSubsystem : public USubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayerSubsystem");
		return ptr;
	}



};

// Class Engine.MapBuildDataRegistry
// 0x0000
class UMapBuildDataRegistry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapBuildDataRegistry");
		return ptr;
	}



};

// Class Engine.Material
// 0x0000
class UMaterial : public UMaterialInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}



};

// Class Engine.MaterialBillboardComponent
// 0x0000
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}



	void SetElements();
	void AddElement();
};

// Class Engine.MaterialExpressionAbs
// 0x0000
class UMaterialExpressionAbs : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}



};

// Class Engine.MaterialExpressionActorPositionWS
// 0x0000
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAdd
// 0x0000
class UMaterialExpressionAdd : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0000
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAppendVector
// 0x0000
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArccosine
// 0x0000
class UMaterialExpressionArccosine : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosine");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArccosineFast
// 0x0000
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosineFast");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArcsine
// 0x0000
class UMaterialExpressionArcsine : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsine");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArcsineFast
// 0x0000
class UMaterialExpressionArcsineFast : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsineFast");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArctangent
// 0x0000
class UMaterialExpressionArctangent : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArctangent2
// 0x0000
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArctangent2Fast
// 0x0000
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2Fast");
		return ptr;
	}



};

// Class Engine.MaterialExpressionArctangentFast
// 0x0000
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangentFast");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0000
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAtmosphericLightColor
// 0x0000
class UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightColor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionAtmosphericLightVector
// 0x0000
class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightVector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionBentNormalCustomOutput
// 0x0000
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBentNormalCustomOutput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionBlackBody
// 0x0000
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}



};

// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x0000
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlendMaterialAttributes");
		return ptr;
	}



};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0000
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}



};

// Class Engine.MaterialExpressionBumpOffset
// 0x0000
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCeil
// 0x0000
class UMaterialExpressionCeil : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParameter
// 0x0000
class UMaterialExpressionParameter : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionVectorParameter
// 0x0000
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionChannelMaskParameter
// 0x0000
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionChannelMaskParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionClamp
// 0x0000
class UMaterialExpressionClamp : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}



};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0000
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCollectionParameter
// 0x0000
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionComment
// 0x0000
class UMaterialExpressionComment : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}



};

// Class Engine.MaterialExpressionComponentMask
// 0x0000
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}



};

// Class Engine.MaterialExpressionConstant
// 0x0000
class UMaterialExpressionConstant : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}



};

// Class Engine.MaterialExpressionConstant2Vector
// 0x0000
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionConstant3Vector
// 0x0000
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionConstant4Vector
// 0x0000
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionConstantBiasScale
// 0x0000
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCosine
// 0x0000
class UMaterialExpressionCosine : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCrossProduct
// 0x0000
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}



};

// Class Engine.MaterialExpressionScalarParameter
// 0x0000
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
// 0x0000
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCurveAtlasRowParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionCustom
// 0x0000
class UMaterialExpressionCustom : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDDX
// 0x0000
class UMaterialExpressionDDX : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDDY
// 0x0000
class UMaterialExpressionDDY : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDecalDerivative
// 0x0000
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0000
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDeltaTime
// 0x0000
class UMaterialExpressionDeltaTime : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeltaTime");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDepthFade
// 0x0000
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0000
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0000
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDesaturation
// 0x0000
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDistance
// 0x0000
class UMaterialExpressionDistance : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0000
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0000
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDivide
// 0x0000
class UMaterialExpressionDivide : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDotProduct
// 0x0000
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}



};

// Class Engine.MaterialExpressionDynamicParameter
// 0x0000
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0000
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFloor
// 0x0000
class UMaterialExpressionFloor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFmod
// 0x0000
class UMaterialExpressionFmod : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFontSample
// 0x0000
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFontSampleParameter
// 0x0000
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFrac
// 0x0000
class UMaterialExpressionFrac : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFresnel
// 0x0000
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFunctionInput
// 0x0000
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionFunctionOutput
// 0x0000
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x0000
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGetMaterialAttributes");
		return ptr;
	}



};

// Class Engine.MaterialExpressionGIReplace
// 0x0000
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}



};

// Class Engine.MaterialExpressionIf
// 0x0000
class UMaterialExpressionIf : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLightmapUVs
// 0x0000
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLightmassReplace
// 0x0000
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLightVector
// 0x0000
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLinearInterpolate
// 0x0000
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLogarithm10
// 0x0000
class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm10");
		return ptr;
	}



};

// Class Engine.MaterialExpressionLogarithm2
// 0x0000
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0000
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMaterialAttributeLayers
// 0x0000
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialAttributeLayers");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0000
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMaterialLayerOutput
// 0x0000
class UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialLayerOutput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0000
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMax
// 0x0000
class UMaterialExpressionMax : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMin
// 0x0000
class UMaterialExpressionMin : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}



};

// Class Engine.MaterialExpressionMultiply
// 0x0000
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}



};

// Class Engine.MaterialExpressionNoise
// 0x0000
class UMaterialExpressionNoise : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}



};

// Class Engine.MaterialExpressionNormalize
// 0x0000
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}



};

// Class Engine.MaterialExpressionObjectBounds
// 0x0000
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}



};

// Class Engine.MaterialExpressionObjectOrientation
// 0x0000
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}



};

// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionObjectRadius
// 0x0000
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}



};

// Class Engine.MaterialExpressionOneMinus
// 0x0000
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPanner
// 0x0000
class UMaterialExpressionPanner : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleColor
// 0x0000
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleDirection
// 0x0000
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleRadius
// 0x0000
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleRandom
// 0x0000
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleSize
// 0x0000
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleSpeed
// 0x0000
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}



};

// Class Engine.MaterialExpressionParticleSubUV
// 0x0000
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPixelDepth
// 0x0000
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPower
// 0x0000
class UMaterialExpressionPower : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPreSkinnedNormal
// 0x0000
class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedNormal");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPreSkinnedPosition
// 0x0000
class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedPosition");
		return ptr;
	}



};

// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x0000
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreviousFrameSwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionQualitySwitch
// 0x0000
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
// 0x0000
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRayTracingQualitySwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0000
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionReroute
// 0x0000
class UMaterialExpressionReroute : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReroute");
		return ptr;
	}



};

// Class Engine.MaterialExpressionRotateAboutAxis
// 0x0000
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}



};

// Class Engine.MaterialExpressionRotator
// 0x0000
class UMaterialExpressionRotator : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}



};

// Class Engine.MaterialExpressionRound
// 0x0000
class UMaterialExpressionRound : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRound");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSaturate
// 0x0000
class UMaterialExpressionSaturate : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSaturate");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSceneColor
// 0x0000
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSceneDepth
// 0x0000
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSceneTexture
// 0x0000
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}



};

// Class Engine.MaterialExpressionScreenPosition
// 0x0000
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSetMaterialAttributes
// 0x0000
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSetMaterialAttributes");
		return ptr;
	}



};

// Class Engine.MaterialExpressionShadingPathSwitch
// 0x0000
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadingPathSwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionShadowReplace
// 0x0000
class UMaterialExpressionShadowReplace : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadowReplace");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSign
// 0x0000
class UMaterialExpressionSign : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSign");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSine
// 0x0000
class UMaterialExpressionSine : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSobol
// 0x0000
class UMaterialExpressionSobol : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSobol");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSpeedTree
// 0x0000
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSphereMask
// 0x0000
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0000
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSquareRoot
// 0x0000
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}



};

// Class Engine.MaterialExpressionStaticBool
// 0x0000
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}



};

// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0000
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0000
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionStaticSwitch
// 0x0000
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}



};

// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0000
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionSubtract
// 0x0000
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTangent
// 0x0000
class UMaterialExpressionTangent : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangent");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTangentOutput
// 0x0000
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTemporalSobol
// 0x0000
class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTemporalSobol");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureCoordinate
// 0x0000
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureObject
// 0x0000
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureProperty
// 0x0000
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0000
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTextureSampleParameterVolume
// 0x0000
class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterVolume");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTime
// 0x0000
class UMaterialExpressionTime : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTransform
// 0x0000
class UMaterialExpressionTransform : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTransformPosition
// 0x0000
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTruncate
// 0x0000
class UMaterialExpressionTruncate : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTruncate");
		return ptr;
	}



};

// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}



};

// Class Engine.MaterialExpressionVectorNoise
// 0x0000
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorNoise");
		return ptr;
	}



};

// Class Engine.MaterialExpressionVertexColor
// 0x0000
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}



};

// Class Engine.MaterialExpressionVertexInterpolator
// 0x0000
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexInterpolator");
		return ptr;
	}



};

// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}



};

// Class Engine.MaterialExpressionViewProperty
// 0x0000
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}



};

// Class Engine.MaterialExpressionViewSize
// 0x0000
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}



};

// Class Engine.MaterialExpressionWorldPosition
// 0x0000
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}



};

// Class Engine.MaterialFunctionInterface
// 0x0000
class UMaterialFunctionInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInterface");
		return ptr;
	}



};

// Class Engine.MaterialFunction
// 0x0000
class UMaterialFunction : public UMaterialFunctionInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}



};

// Class Engine.MaterialFunctionInstance
// 0x0000
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInstance");
		return ptr;
	}



};

// Class Engine.MaterialFunctionMaterialLayer
// 0x0000
class UMaterialFunctionMaterialLayer : public UMaterialFunction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayer");
		return ptr;
	}



};

// Class Engine.MaterialFunctionMaterialLayerInstance
// 0x0000
class UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerInstance");
		return ptr;
	}



};

// Class Engine.MaterialFunctionMaterialLayerBlend
// 0x0000
class UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlend");
		return ptr;
	}



};

// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// 0x0000
class UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlendInstance");
		return ptr;
	}



};

// Class Engine.MaterialInstanceActor
// 0x0000
class AMaterialInstanceActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}



};

// Class Engine.MaterialInstanceDynamic
// 0x0000
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}



	void SetVectorParameterValue();
	void SetTextureParameterValue();
	void SetScalarParameterValue();
	void K2_InterpolateMaterialInstanceParams();
	void K2_GetVectorParameterValue();
	void K2_GetTextureParameterValue();
	void K2_GetScalarParameterValue();
	void K2_CopyMaterialInstanceParameters();
	void CopyParameterOverrides();
	void CopyInterpParameters();
};

// Class Engine.MaterialParameterCollection
// 0x0000
class UMaterialParameterCollection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}



};

// Class Engine.MaterialParameterCollectionInstance
// 0x0000
class UMaterialParameterCollectionInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}



};

// Class Engine.MatineeActor
// 0x0000
class AMatineeActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}



	void Stop();
	void SetPosition();
	void SetLoopingState();
	void Reverse();
	void Play();
	void Pause();
	void EnableGroupByName();
	void ChangePlaybackDirection();
};

// Class Engine.MatineeActorCameraAnim
// 0x0000
class AMatineeActorCameraAnim : public AMatineeActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}



};

// Class Engine.MatineeAnimInterface
// 0x0000
class UMatineeAnimInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}



};

// Class Engine.MatineeInterface
// 0x0000
class UMatineeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}



};

// Class Engine.MeshMergeCullingVolume
// 0x0000
class AMeshMergeCullingVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshMergeCullingVolume");
		return ptr;
	}



};

// Class Engine.MeshSimplificationSettings
// 0x0000
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshSimplificationSettings");
		return ptr;
	}



};

// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}



	void RemovePaintedVertices();
	void PaintVerticesSingleColor();
	void PaintVerticesLerpAlongAxis();
};

// Class Engine.MicroTransactionBase
// 0x0000
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}



};

// Class Engine.ModelComponent
// 0x0000
class UModelComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}



};

// Class Engine.MorphTarget
// 0x0000
class UMorphTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}



};

// Class Engine.NavAgentInterface
// 0x0000
class UNavAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}



};

// Class Engine.NavCollisionBase
// 0x0000
class UNavCollisionBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollisionBase");
		return ptr;
	}



};

// Class Engine.NavEdgeProviderInterface
// 0x0000
class UNavEdgeProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}



};

// Class Engine.NavigationDataChunk
// 0x0000
class UNavigationDataChunk : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}



};

// Class Engine.NavigationDataInterface
// 0x0000
class UNavigationDataInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataInterface");
		return ptr;
	}



};

// Class Engine.NavigationObjectBase
// 0x0000
class ANavigationObjectBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}



};

// Class Engine.NavigationSystem
// 0x0000
class UNavigationSystem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}



	void SimpleMoveToLocation();
	void SimpleMoveToActor();
};

// Class Engine.NavigationSystemConfig
// 0x0000
class UNavigationSystemConfig : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemConfig");
		return ptr;
	}



};

// Class Engine.NullNavSysConfig
// 0x0000
class UNullNavSysConfig : public UNavigationSystemConfig
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NullNavSysConfig");
		return ptr;
	}



};

// Class Engine.NavLinkDefinition
// 0x0000
class UNavLinkDefinition : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}



};

// Class Engine.NavPathObserverInterface
// 0x0000
class UNavPathObserverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}



};

// Class Engine.NavRelevantInterface
// 0x0000
class UNavRelevantInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}



};

// Class Engine.SimulatedClientNetConnection
// 0x0000
class USimulatedClientNetConnection : public UNetConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulatedClientNetConnection");
		return ptr;
	}



};

// Class Engine.NetworkPredictionInterface
// 0x0000
class UNetworkPredictionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}



};

// Class Engine.NetworkSettings
// 0x0000
class UNetworkSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}



};

// Class Engine.NodeMappingContainer
// 0x0000
class UNodeMappingContainer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingContainer");
		return ptr;
	}



};

// Class Engine.NodeMappingProviderInterface
// 0x0000
class UNodeMappingProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingProviderInterface");
		return ptr;
	}



};

// Class Engine.Note
// 0x0000
class ANote : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}



};

// Class Engine.ObjectLibrary
// 0x0000
class UObjectLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}



};

// Class Engine.ObjectReferencer
// 0x0000
class UObjectReferencer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}



};

// Class Engine.PackageMapClient
// 0x0000
class UPackageMapClient : public UPackageMap
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}



};

// Class Engine.PainCausingVolume
// 0x0000
class APainCausingVolume : public APhysicsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}



};

// Class Engine.ParticleEmitter
// 0x0000
class UParticleEmitter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}



};

// Class Engine.ParticleEventManager
// 0x0000
class AParticleEventManager : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}



};

// Class Engine.ParticleLODLevel
// 0x0000
class UParticleLODLevel : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}



};

// Class Engine.ParticleModule
// 0x0000
class UParticleModule : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}



};

// Class Engine.ParticleModuleAccelerationBase
// 0x0000
class UParticleModuleAccelerationBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleAcceleration
// 0x0000
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}



};

// Class Engine.ParticleModuleAccelerationConstant
// 0x0000
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}



};

// Class Engine.ParticleModuleAccelerationDrag
// 0x0000
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}



};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0000
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0000
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}



};

// Class Engine.ParticleModuleAttractorBase
// 0x0000
class UParticleModuleAttractorBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleAttractorLine
// 0x0000
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}



};

// Class Engine.ParticleModuleAttractorParticle
// 0x0000
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}



};

// Class Engine.ParticleModuleAttractorPoint
// 0x0000
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}



};

// Class Engine.ParticleModuleAttractorPointGravity
// 0x0000
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}



};

// Class Engine.ParticleModuleBeamBase
// 0x0000
class UParticleModuleBeamBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleBeamModifier
// 0x0000
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}



};

// Class Engine.ParticleModuleBeamNoise
// 0x0000
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}



};

// Class Engine.ParticleModuleBeamSource
// 0x0000
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}



};

// Class Engine.ParticleModuleBeamTarget
// 0x0000
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}



};

// Class Engine.ParticleModuleCameraBase
// 0x0000
class UParticleModuleCameraBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleCameraOffset
// 0x0000
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}



};

// Class Engine.ParticleModuleCollisionBase
// 0x0000
class UParticleModuleCollisionBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleCollision
// 0x0000
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}



};

// Class Engine.ParticleModuleCollisionGPU
// 0x0000
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}



};

// Class Engine.ParticleModuleColorBase
// 0x0000
class UParticleModuleColorBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleColor
// 0x0000
class UParticleModuleColor : public UParticleModuleColorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}



};

// Class Engine.ParticleModuleColor_Seeded
// 0x0000
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleColorOverLife
// 0x0000
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleColorScaleOverLife
// 0x0000
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventBase
// 0x0000
class UParticleModuleEventBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventGenerator
// 0x0000
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventReceiverBase
// 0x0000
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0000
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventReceiverSpawn
// 0x0000
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}



};

// Class Engine.ParticleModuleEventSendToGame
// 0x0000
class UParticleModuleEventSendToGame : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}



};

// Class Engine.ParticleModuleKillBase
// 0x0000
class UParticleModuleKillBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleKillBox
// 0x0000
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}



};

// Class Engine.ParticleModuleKillHeight
// 0x0000
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}



};

// Class Engine.ParticleModuleLifetimeBase
// 0x0000
class UParticleModuleLifetimeBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleLifetime
// 0x0000
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}



};

// Class Engine.ParticleModuleLifetime_Seeded
// 0x0000
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleLightBase
// 0x0000
class UParticleModuleLightBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleLight
// 0x0000
class UParticleModuleLight : public UParticleModuleLightBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}



};

// Class Engine.ParticleModuleLight_Seeded
// 0x0000
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationBase
// 0x0000
class UParticleModuleLocationBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocation
// 0x0000
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocation_Seeded
// 0x0000
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationBoneSocket
// 0x0000
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationDirect
// 0x0000
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationEmitter
// 0x0000
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0000
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0000
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0000
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0000
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0000
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0000
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x0000
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0000
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}



};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0000
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleMaterialBase
// 0x0000
class UParticleModuleMaterialBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshMaterial
// 0x0000
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationBase
// 0x0000
class UParticleModuleRotationBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotation
// 0x0000
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0000
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationRateBase
// 0x0000
class UParticleModuleRotationRateBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotationRate
// 0x0000
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0000
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0000
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0000
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleOrbitBase
// 0x0000
class UParticleModuleOrbitBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleOrbit
// 0x0000
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}



};

// Class Engine.ParticleModuleOrientationBase
// 0x0000
class UParticleModuleOrientationBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleOrientationAxisLock
// 0x0000
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}



};

// Class Engine.ParticleModuleParameterBase
// 0x0000
class UParticleModuleParameterBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleParameterDynamic
// 0x0000
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}



};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0000
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModulePivotOffset
// 0x0000
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}



};

// Class Engine.ParticleModuleRequired
// 0x0000
class UParticleModuleRequired : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotation
// 0x0000
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotation_Seeded
// 0x0000
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationOverLifetime
// 0x0000
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationRate
// 0x0000
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0000
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0000
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleSizeBase
// 0x0000
class UParticleModuleSizeBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleSize
// 0x0000
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}



};

// Class Engine.ParticleModuleSize_Seeded
// 0x0000
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0000
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleSizeScale
// 0x0000
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}



};

// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0000
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}



};

// Class Engine.ParticleModuleSourceMovement
// 0x0000
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}



};

// Class Engine.ParticleModuleSpawnBase
// 0x0000
class UParticleModuleSpawnBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleSpawn
// 0x0000
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}



};

// Class Engine.ParticleModuleSpawnPerUnit
// 0x0000
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}



};

// Class Engine.ParticleModuleSubUVBase
// 0x0000
class UParticleModuleSubUVBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleSubUV
// 0x0000
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}



};

// Class Engine.ParticleModuleSubUVMovie
// 0x0000
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}



};

// Class Engine.ParticleModuleTrailBase
// 0x0000
class UParticleModuleTrailBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleTrailSource
// 0x0000
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataBase
// 0x0000
class UParticleModuleTypeDataBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0000
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataBeam2
// 0x0000
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataGpu
// 0x0000
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataMesh
// 0x0000
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}



};

// Class Engine.ParticleModuleTypeDataRibbon
// 0x0000
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldBase
// 0x0000
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0000
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldLocal
// 0x0000
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldRotation
// 0x0000
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0000
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldScale
// 0x0000
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}



};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0000
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocityBase
// 0x0000
class UParticleModuleVelocityBase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocity
// 0x0000
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocity_Seeded
// 0x0000
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocityCone
// 0x0000
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocityInheritParent
// 0x0000
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}



};

// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0000
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}



};

// Class Engine.ParticleSpriteEmitter
// 0x0000
class UParticleSpriteEmitter : public UParticleEmitter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}



};

// Class Engine.ParticleSystem
// 0x0000
class UParticleSystem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}



	void ContainsEmitterType();
};

// Class Engine.ParticleSystemComponent
// 0x0000
class UParticleSystemComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}



	void SetVectorParameter();
	void SetTrailSourceData();
	void SetTemplate();
	void SetMaterialParameter();
	void SetFloatParameter();
	void SetEmitterEnable();
	void SetColorParameter();
	void SetBeamTargetTangent();
	void SetBeamTargetStrength();
	void SetBeamTargetPoint();
	void SetBeamSourceTangent();
	void SetBeamSourceStrength();
	void SetBeamSourcePoint();
	void SetBeamEndPoint();
	void SetAutoAttachParams();
	void SetAutoAttachmentParameters();
	void SetActorParameter();
	void ReleaseToPool();
	void GetNumActiveParticles();
	void GetNamedMaterial();
	void GetBeamTargetTangent();
	void GetBeamTargetStrength();
	void GetBeamTargetPoint();
	void GetBeamSourceTangent();
	void GetBeamSourceStrength();
	void GetBeamSourcePoint();
	void GetBeamEndPoint();
	void GenerateParticleEvent();
	void EndTrails();
	void CreateNamedDynamicMaterialInstance();
	void BeginTrails();
};

// Class Engine.ParticleSystemReplay
// 0x0000
class UParticleSystemReplay : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}



};

// Class Engine.PathFollowingAgentInterface
// 0x0000
class UPathFollowingAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathFollowingAgentInterface");
		return ptr;
	}



};

// Class Engine.PawnNoiseEmitterComponent
// 0x0000
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}



	void MakeNoise();
};

// Class Engine.PhysicalAnimationComponent
// 0x0000
class UPhysicalAnimationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}



	void SetStrengthMultiplyer();
	void SetSkeletalMeshComponent();
	void GetBodyTargetTransform();
	void ApplyPhysicalAnimationSettingsBelow();
	void ApplyPhysicalAnimationSettings();
	void ApplyPhysicalAnimationProfileBelow();
};

// Class Engine.PhysicalMaterial
// 0x0000
class UPhysicalMaterial : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}



};

// Class Engine.PhysicalMaterialPropertyBase
// 0x0000
class UPhysicalMaterialPropertyBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}



};

// Class Engine.PhysicsAsset
// 0x0000
class UPhysicsAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}



};

// Class Engine.SkeletalBodySetup
// 0x0000
class USkeletalBodySetup : public UBodySetup
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}



};

// Class Engine.PhysicsCollisionHandler
// 0x0000
class UPhysicsCollisionHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}



};

// Class Engine.RigidBodyBase
// 0x0000
class ARigidBodyBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}



};

// Class Engine.PhysicsConstraintActor
// 0x0000
class APhysicsConstraintActor : public ARigidBodyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}



};

// Class Engine.PhysicsConstraintComponent
// 0x0000
class UPhysicsConstraintComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}



	void SetOrientationDriveTwistAndSwing();
	void SetOrientationDriveSLERP();
	void SetLinearZLimit();
	void SetLinearYLimit();
	void SetLinearXLimit();
	void SetLinearVelocityTarget();
	void SetLinearVelocityDrive();
	void SetLinearPositionTarget();
	void SetLinearPositionDrive();
	void SetLinearDriveParams();
	void SetLinearBreakable();
	void SetDisableCollision();
	void SetConstraintReferencePosition();
	void SetConstraintReferenceOrientation();
	void SetConstraintReferenceFrame();
	void SetConstrainedComponents();
	void SetAngularVelocityTarget();
	void SetAngularVelocityDriveTwistAndSwing();
	void SetAngularVelocityDriveSLERP();
	void SetAngularVelocityDrive();
	void SetAngularTwistLimit();
	void SetAngularSwing2Limit();
	void SetAngularSwing1Limit();
	void SetAngularOrientationTarget();
	void SetAngularOrientationDrive();
	void SetAngularDriveParams();
	void SetAngularDriveMode();
	void SetAngularBreakable();
	void IsBroken();
	void GetCurrentTwist();
	void GetCurrentSwing2();
	void GetCurrentSwing1();
	void GetConstraintForce();
	void BreakConstraint();
};

// Class Engine.PhysicsConstraintTemplate
// 0x0000
class UPhysicsConstraintTemplate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}



};

// Class Engine.PhysicsHandleComponent
// 0x0000
class UPhysicsHandleComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}



	void SetTargetRotation();
	void SetTargetLocationAndRotation();
	void SetTargetLocation();
	void SetLinearStiffness();
	void SetLinearDamping();
	void SetInterpolationSpeed();
	void SetAngularStiffness();
	void SetAngularDamping();
	void ReleaseComponent();
	void GrabComponentAtLocationWithRotation();
	void GrabComponentAtLocation();
	void GrabComponent();
	void GetTargetLocationAndRotation();
	void GetGrabbedComponent();
};

// Class Engine.PhysicsSettings
// 0x0000
class UPhysicsSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}



};

// Class Engine.PhysicsSpringComponent
// 0x0000
class UPhysicsSpringComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}



	void GetSpringRestingPoint();
	void GetSpringDirection();
	void GetSpringCurrentEndPoint();
	void GetNormalizedCompressionScalar();
};

// Class Engine.PhysicsThruster
// 0x0000
class APhysicsThruster : public ARigidBodyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}



};

// Class Engine.PhysicsThrusterComponent
// 0x0000
class UPhysicsThrusterComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}



};

// Class Engine.SceneCapture
// 0x0000
class ASceneCapture : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}



};

// Class Engine.PlanarReflection
// 0x0000
class APlanarReflection : public ASceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}



	void OnInterpToggle();
};

// Class Engine.SceneCaptureComponent
// 0x0000
class USceneCaptureComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}



	void ShowOnlyComponent();
	void ShowOnlyActorComponents();
	void SetCaptureSortPriority();
	void RemoveShowOnlyComponent();
	void RemoveShowOnlyActorComponents();
	void HideComponent();
	void HideActorComponents();
	void ClearShowOnlyComponents();
	void ClearHiddenComponents();
};

// Class Engine.PlanarReflectionComponent
// 0x0000
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}



};

// Class Engine.PlaneReflectionCapture
// 0x0000
class APlaneReflectionCapture : public AReflectionCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}



};

// Class Engine.PlaneReflectionCaptureComponent
// 0x0000
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}



};

// Class Engine.PlatformEventsComponent
// 0x0000
class UPlatformEventsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}



	void SupportsConvertibleLaptops();
	void PlatformEventDelegate__DelegateSignature();
	void IsInTabletMode();
	void IsInLaptopMode();
};

// Class Engine.PlatformInterfaceWebResponse
// 0x0000
class UPlatformInterfaceWebResponse : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}



	void GetNumHeaders();
	void GetHeaderValue();
	void GetHeader();
};

// Class Engine.PlayerInput
// 0x0000
class UPlayerInput : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}



	void SetMouseSensitivity();
	void SetBind();
	void InvertAxisKey();
	void InvertAxis();
	void ClearSmoothing();
};

// Class Engine.PlayerStart
// 0x0000
class APlayerStart : public ANavigationObjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}



};

// Class Engine.PlayerStartPIE
// 0x0000
class APlayerStartPIE : public APlayerStart
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}



};

// Class Engine.PluginCommandlet
// 0x0000
class UPluginCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}



};

// Class Engine.PointLight
// 0x0000
class APointLight : public ALight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}



	void SetRadius();
	void SetLightFalloffExponent();
};

// Class Engine.PointLightComponent
// 0x0000
class UPointLightComponent : public ULocalLightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}



	void SetSourceRadius();
	void SetSourceLength();
	void SetSoftSourceRadius();
	void SetLightFalloffExponent();
};

// Class Engine.Polys
// 0x0000
class UPolys : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}



};

// Class Engine.PoseableMeshComponent
// 0x0000
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}



	void SetBoneTransformByName();
	void SetBoneScaleByName();
	void SetBoneRotationByName();
	void SetBoneLocationByName();
	void ResetBoneTransformByName();
	void GetBoneTransformByName();
	void GetBoneScaleByName();
	void GetBoneRotationByName();
	void GetBoneLocationByName();
	void CopyPoseFromSkeletalComponent();
};

// Class Engine.PoseAsset
// 0x0000
class UPoseAsset : public UAnimationAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}



};

// Class Engine.PoseWatch
// 0x0000
class UPoseWatch : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}



};

// Class Engine.PostProcessVolume
// 0x0000
class APostProcessVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}



	void AddOrUpdateBlendable();
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0000
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}



};

// Class Engine.PrecomputedVisibilityVolume
// 0x0000
class APrecomputedVisibilityVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}



};

// Class Engine.PreviewCollectionInterface
// 0x0000
class UPreviewCollectionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewCollectionInterface");
		return ptr;
	}



};

// Class Engine.PreviewMeshCollection
// 0x0000
class UPreviewMeshCollection : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewMeshCollection");
		return ptr;
	}



};

// Class Engine.PrimaryAssetLabel
// 0x0000
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryAssetLabel");
		return ptr;
	}



};

// Class Engine.ProxyLODMeshSimplificationSettings
// 0x0000
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyLODMeshSimplificationSettings");
		return ptr;
	}



};

// Class Engine.RadialForceActor
// 0x0000
class ARadialForceActor : public ARigidBodyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}



	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};

// Class Engine.RadialForceComponent
// 0x0000
class URadialForceComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}



	void RemoveObjectTypeToAffect();
	void FireImpulse();
	void AddObjectTypeToAffect();
};

// Class Engine.RectLight
// 0x0000
class ARectLight : public ALight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLight");
		return ptr;
	}



};

// Class Engine.RectLightComponent
// 0x0000
class URectLightComponent : public ULocalLightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLightComponent");
		return ptr;
	}



	void SetSourceWidth();
	void SetSourceTexture();
	void SetSourceHeight();
	void SetBarnDoorLength();
	void SetBarnDoorAngle();
};

// Class Engine.RendererSettings
// 0x0000
class URendererSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}



};

// Class Engine.RendererOverrideSettings
// 0x0000
class URendererOverrideSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}



};

// Class Engine.ReplicationDriver
// 0x0000
class UReplicationDriver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationDriver");
		return ptr;
	}



};

// Class Engine.ReplicationConnectionDriver
// 0x0000
class UReplicationConnectionDriver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationConnectionDriver");
		return ptr;
	}



};

// Class Engine.ReporterBase
// 0x0000
class UReporterBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}



};

// Class Engine.ReporterGraph
// 0x0000
class UReporterGraph : public UReporterBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}



};

// Class Engine.ReverbEffect
// 0x0000
class UReverbEffect : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}



};

// Class Engine.Rig
// 0x0000
class URig : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}



};

// Class Engine.RotatingMovementComponent
// 0x0000
class URotatingMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}



};

// Class Engine.RVOAvoidanceInterface
// 0x0000
class URVOAvoidanceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}



};

// Class Engine.Scene
// 0x0000
class UScene : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}



};

// Class Engine.SceneCapture2D
// 0x0000
class ASceneCapture2D : public ASceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}



	void OnInterpToggle();
};

// Class Engine.SceneCaptureComponent2D
// 0x0000
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}



	void CaptureScene();
	void AddOrUpdateBlendable();
};

// Class Engine.SceneCaptureComponentCube
// 0x0000
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}



	void CaptureScene();
};

// Class Engine.SceneCaptureCube
// 0x0000
class ASceneCaptureCube : public ASceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}



	void OnInterpToggle();
};

// Class Engine.SCS_Node
// 0x0000
class USCS_Node : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}



};

// Class Engine.Selection
// 0x0000
class USelection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}



};

// Class Engine.ServerStatReplicator
// 0x0000
class AServerStatReplicator : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerStatReplicator");
		return ptr;
	}



};

// Class Engine.ShadowMapTexture2D
// 0x0000
class UShadowMapTexture2D : public UTexture2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}



};

// Class Engine.SimpleConstructionScript
// 0x0000
class USimpleConstructionScript : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}



};

// Class Engine.SkeletalMesh
// 0x0000
class USkeletalMesh : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}



	void SetLODSettings();
	void NumSockets();
	void IsSectionUsingCloth();
	void GetSocketByIndex();
	void GetNodeMappingContainer();
	void GetImportedBounds();
	void GetBounds();
	void FindSocketInfo();
	void FindSocketAndIndex();
	void FindSocket();
};

// Class Engine.SkeletalMeshActor
// 0x0000
class ASkeletalMeshActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}



	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};

// Class Engine.SkeletalMeshLODSettings
// 0x0000
class USkeletalMeshLODSettings : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshLODSettings");
		return ptr;
	}



};

// Class Engine.SkeletalMeshSimplificationSettings
// 0x0000
class USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSimplificationSettings");
		return ptr;
	}



};

// Class Engine.SkeletalMeshSocket
// 0x0000
class USkeletalMeshSocket : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}



	void InitializeSocketFromLocation();
	void GetSocketLocation();
};

// Class Engine.SkyLightComponent
// 0x0000
class USkyLightComponent : public ULightComponentBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}



	void SetVolumetricScatteringIntensity();
	void SetOcclusionTint();
	void SetOcclusionExponent();
	void SetOcclusionContrast();
	void SetMinOcclusion();
	void SetLowerHemisphereColor();
	void SetLightColor();
	void SetIntensity();
	void SetIndirectLightingIntensity();
	void SetCubemapBlend();
	void SetCubemap();
	void RecaptureSky();
};

// Class Engine.SlateBrushAsset
// 0x0000
class USlateBrushAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}



};

// Class Engine.SlateTextureAtlasInterface
// 0x0000
class USlateTextureAtlasInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}



};

// Class Engine.SmokeTestCommandlet
// 0x0000
class USmokeTestCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}



};

// Class Engine.SoundAttenuation
// 0x0000
class USoundAttenuation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}



};

// Class Engine.SoundClass
// 0x0000
class USoundClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}



};

// Class Engine.SoundConcurrency
// 0x0000
class USoundConcurrency : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}



};

// Class Engine.SoundCue
// 0x0000
class USoundCue : public USoundBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}



};

// Class Engine.SoundEffectSourcePreset
// 0x0000
class USoundEffectSourcePreset : public USoundEffectPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePreset");
		return ptr;
	}



};

// Class Engine.SoundEffectSourcePresetChain
// 0x0000
class USoundEffectSourcePresetChain : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePresetChain");
		return ptr;
	}



};

// Class Engine.SoundGroups
// 0x0000
class USoundGroups : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}



};

// Class Engine.SoundNode
// 0x0000
class USoundNode : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}



};

// Class Engine.SoundNodeAssetReferencer
// 0x0000
class USoundNodeAssetReferencer : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}



};

// Class Engine.SoundNodeAttenuation
// 0x0000
class USoundNodeAttenuation : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}



};

// Class Engine.SoundNodeBranch
// 0x0000
class USoundNodeBranch : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}



};

// Class Engine.SoundNodeConcatenator
// 0x0000
class USoundNodeConcatenator : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}



};

// Class Engine.SoundNodeDelay
// 0x0000
class USoundNodeDelay : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}



};

// Class Engine.SoundNodeDialoguePlayer
// 0x0000
class USoundNodeDialoguePlayer : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}



};

// Class Engine.SoundNodeDistanceCrossFade
// 0x0000
class USoundNodeDistanceCrossFade : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}



};

// Class Engine.SoundNodeDoppler
// 0x0000
class USoundNodeDoppler : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}



};

// Class Engine.SoundNodeEnveloper
// 0x0000
class USoundNodeEnveloper : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}



};

// Class Engine.SoundNodeGroupControl
// 0x0000
class USoundNodeGroupControl : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}



};

// Class Engine.SoundNodeLooping
// 0x0000
class USoundNodeLooping : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}



};

// Class Engine.SoundNodeMature
// 0x0000
class USoundNodeMature : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}



};

// Class Engine.SoundNodeMixer
// 0x0000
class USoundNodeMixer : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}



};

// Class Engine.SoundNodeModulator
// 0x0000
class USoundNodeModulator : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}



};

// Class Engine.SoundNodeModulatorContinuous
// 0x0000
class USoundNodeModulatorContinuous : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}



};

// Class Engine.SoundNodeOscillator
// 0x0000
class USoundNodeOscillator : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}



};

// Class Engine.SoundNodeParamCrossFade
// 0x0000
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}



};

// Class Engine.SoundNodeQualityLevel
// 0x0000
class USoundNodeQualityLevel : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}



};

// Class Engine.SoundNodeRandom
// 0x0000
class USoundNodeRandom : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}



};

// Class Engine.SoundNodeSoundClass
// 0x0000
class USoundNodeSoundClass : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}



};

// Class Engine.SoundNodeSwitch
// 0x0000
class USoundNodeSwitch : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}



};

// Class Engine.SoundNodeWaveParam
// 0x0000
class USoundNodeWaveParam : public USoundNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}



};

// Class Engine.SoundNodeWavePlayer
// 0x0000
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}



};

// Class Engine.SoundSourceBus
// 0x0000
class USoundSourceBus : public USoundWave
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSourceBus");
		return ptr;
	}



};

// Class Engine.SoundSubmix
// 0x0000
class USoundSubmix : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmix");
		return ptr;
	}



	void StopRecordingOutput();
	void StopEnvelopeFollowing();
	void StartRecordingOutput();
	void StartEnvelopeFollowing();
	void AddEnvelopeFollowerDelegate();
};

// Class Engine.SpectatorPawnMovement
// 0x0000
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}



};

// Class Engine.SphereReflectionCapture
// 0x0000
class ASphereReflectionCapture : public AReflectionCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}



};

// Class Engine.SphereReflectionCaptureComponent
// 0x0000
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}



};

// Class Engine.SplineMeshActor
// 0x0000
class ASplineMeshActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}



};

// Class Engine.SplineMeshComponent
// 0x0000
class USplineMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}



	void UpdateMesh();
	void SetStartTangent();
	void SetStartScale();
	void SetStartRoll();
	void SetStartPosition();
	void SetStartOffset();
	void SetStartAndEnd();
	void SetSplineUpDir();
	void SetForwardAxis();
	void SetEndTangent();
	void SetEndScale();
	void SetEndRoll();
	void SetEndPosition();
	void SetEndOffset();
	void SetBoundaryMin();
	void SetBoundaryMax();
	void GetStartTangent();
	void GetStartScale();
	void GetStartRoll();
	void GetStartPosition();
	void GetStartOffset();
	void GetSplineUpDir();
	void GetForwardAxis();
	void GetEndTangent();
	void GetEndScale();
	void GetEndRoll();
	void GetEndPosition();
	void GetEndOffset();
	void GetBoundaryMin();
	void GetBoundaryMax();
};

// Class Engine.SpotLightComponent
// 0x0000
class USpotLightComponent : public UPointLightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}



	void SetOuterConeAngle();
	void SetInnerConeAngle();
};

// Class Engine.SpringArmComponent
// 0x0000
class USpringArmComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}



	void IsCollisionFixApplied();
	void GetUnfixedCameraPosition();
	void GetTargetRotation();
};

// Class Engine.StaticMesh
// 0x0000
class UStaticMesh : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}



	void GetNumSections();
	void GetNumLODs();
	void GetMaterialIndex();
	void GetMaterial();
	void GetBounds();
	void GetBoundingBox();
	void FindSocket();
};

// Class Engine.StaticMeshSocket
// 0x0000
class UStaticMeshSocket : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}



};

// Class Engine.StereoLayerComponent
// 0x0000
class UStereoLayerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}



	void SetUVRect();
	void SetTexture();
	void SetQuadSize();
	void SetPriority();
	void MarkTextureForUpdate();
	void GetUVRect();
	void GetTexture();
	void GetQuadSize();
	void GetPriority();
};

// Class Engine.StereoLayerFunctionLibrary
// 0x0000
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}



	void ShowSplashScreen();
	void SetSplashScreen();
	void HideSplashScreen();
	void EnableAutoLoadingSplashScreen();
};

// Class Engine.StringTable
// 0x0000
class UStringTable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringTable");
		return ptr;
	}



};

// Class Engine.SubsurfaceProfile
// 0x0000
class USubsurfaceProfile : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}



};

// Class Engine.SubsystemBlueprintLibrary
// 0x0000
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsystemBlueprintLibrary");
		return ptr;
	}



	void GetLocalPlayerSubSystemFromPlayerController();
	void GetLocalPlayerSubsystem();
	void GetGameInstanceSubsystem();
	void GetEngineSubsystem();
};

// Class Engine.SubUVAnimation
// 0x0000
class USubUVAnimation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}



};

// Class Engine.TimecodeProvider
// 0x0000
class UTimecodeProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimecodeProvider");
		return ptr;
	}



	void GetTimecode();
	void GetSynchronizationState();
	void GetFrameRate();
};

// Class Engine.SystemTimeTimecodeProvider
// 0x0000
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SystemTimeTimecodeProvider");
		return ptr;
	}



	void SetFrameRate();
};

// Class Engine.TargetPoint
// 0x0000
class ATargetPoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}



};

// Class Engine.TextPropertyTestObject
// 0x0000
class UTextPropertyTestObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}



};

// Class Engine.TextRenderActor
// 0x0000
class ATextRenderActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}



};

// Class Engine.Texture2DDynamic
// 0x0000
class UTexture2DDynamic : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}



};

// Class Engine.TextureLightProfile
// 0x0000
class UTextureLightProfile : public UTexture2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}



};

// Class Engine.TextureRenderTargetCube
// 0x0000
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}



};

// Class Engine.ThumbnailInfo
// 0x0000
class UThumbnailInfo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}



};

// Class Engine.TimelineComponent
// 0x0000
class UTimelineComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}



	void Stop();
	void SetVectorCurve();
	void SetTimelineLengthMode();
	void SetTimelineLength();
	void SetPlayRate();
	void SetPlaybackPosition();
	void SetNewTime();
	void SetLooping();
	void SetLinearColorCurve();
	void SetIgnoreTimeDilation();
	void SetFloatCurve();
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_Timeline();
	void IsReversing();
	void IsPlaying();
	void IsLooping();
	void GetTimelineLength();
	void GetPlayRate();
	void GetPlaybackPosition();
	void GetIgnoreTimeDilation();
};

// Class Engine.TimelineTemplate
// 0x0000
class UTimelineTemplate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}



};

// Class Engine.TireType
// 0x0000
class UTireType : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}



};

// Class Engine.TouchInterface
// 0x0000
class UTouchInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}



};

// Class Engine.TriggerBase
// 0x0000
class ATriggerBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}



};

// Class Engine.TriggerBox
// 0x0000
class ATriggerBox : public ATriggerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}



};

// Class Engine.TriggerCapsule
// 0x0000
class ATriggerCapsule : public ATriggerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}



};

// Class Engine.TriggerSphere
// 0x0000
class ATriggerSphere : public ATriggerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}



};

// Class Engine.TriggerVolume
// 0x0000
class ATriggerVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}



};

// Class Engine.TwitterIntegrationBase
// 0x0000
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}



	void TwitterRequest();
	void ShowTweetUI();
	void Init();
	void GetNumAccounts();
	void GetAccountName();
	void CanShowTweetUI();
	void AuthorizeAccounts();
};

// Class Engine.UserDefinedEnum
// 0x0000
class UUserDefinedEnum : public UEnum
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}



};

// Class Engine.UserDefinedStruct
// 0x0000
class UUserDefinedStruct : public UScriptStruct
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}



};

// Class Engine.UserInterfaceSettings
// 0x0000
class UUserInterfaceSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}



};

// Class Engine.VectorField
// 0x0000
class UVectorField : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}



};

// Class Engine.VectorFieldAnimated
// 0x0000
class UVectorFieldAnimated : public UVectorField
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}



};

// Class Engine.VectorFieldComponent
// 0x0000
class UVectorFieldComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}



	void SetIntensity();
};

// Class Engine.VectorFieldStatic
// 0x0000
class UVectorFieldStatic : public UVectorField
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}



};

// Class Engine.VectorFieldVolume
// 0x0000
class AVectorFieldVolume : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}



};

// Class Engine.VirtualTexture
// 0x0000
class UVirtualTexture : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTexture");
		return ptr;
	}



};

// Class Engine.LightMapVirtualTexture
// 0x0000
class ULightMapVirtualTexture : public UVirtualTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTexture");
		return ptr;
	}



};

// Class Engine.VirtualTextureSpace
// 0x0000
class UVirtualTextureSpace : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTextureSpace");
		return ptr;
	}



};

// Class Engine.LightMapVirtualTextureSpace
// 0x0000
class ULightMapVirtualTextureSpace : public UVirtualTextureSpace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTextureSpace");
		return ptr;
	}



};

// Class Engine.VisualLoggerAutomationTests
// 0x0000
class UVisualLoggerAutomationTests : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}



};

// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000
class UVisualLoggerDebugSnapshotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}



};

// Class Engine.VisualLoggerKismetLibrary
// 0x0000
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}



	void RedirectVislog();
	void LogText();
	void LogSegment();
	void LogLocation();
	void LogBox();
	void EnableRecording();
};

// Class Engine.VoiceChannel
// 0x0000
class UVoiceChannel : public UChannel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}



};

// Class Engine.VOIPTalker
// 0x0000
class UVOIPTalker : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPTalker");
		return ptr;
	}



	void RegisterWithPlayerState();
	void GetVoiceLevel();
	void CreateTalkerForPlayer();
	void BPOnTalkingEnd();
	void BPOnTalkingBegin();
};

// Class Engine.VOIPStatics
// 0x0000
class UVOIPStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPStatics");
		return ptr;
	}



	void SetMicThreshold();
};

// Class Engine.VolumeTexture
// 0x0000
class UVolumeTexture : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTexture");
		return ptr;
	}



};

// Class Engine.VolumetricLightmapDensityVolume
// 0x0000
class AVolumetricLightmapDensityVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumetricLightmapDensityVolume");
		return ptr;
	}



};

// Class Engine.WindDirectionalSource
// 0x0000
class AWindDirectionalSource : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}



};

// Class Engine.WindDirectionalSourceComponent
// 0x0000
class UWindDirectionalSourceComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}



	void SetWindType();
	void SetStrength();
	void SetSpeed();
	void SetRadius();
	void SetMinimumGustAmount();
	void SetMaximumGustAmount();
};

// Class Engine.WorldComposition
// 0x0000
class UWorldComposition : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}



};

// Class Engine.HierarchicalLODSetup
// 0x0000
class UHierarchicalLODSetup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalLODSetup");
		return ptr;
	}



};

// Class Engine.WorldSettings
// 0x0000
class AWorldSettings : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}



	void OnRep_WorldGravityZ();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
