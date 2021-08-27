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

// Enum Engine.ETextGender
enum class Engine_ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	ETextGender__Feminine          = 1,
	ETextGender__Neuter            = 2,
	ETextGender__ETextGender_MAX   = 3,

};

// Enum Engine.EFormatArgumentType
enum class Engine_EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	EFormatArgumentType__UInt      = 1,
	EFormatArgumentType__Float     = 2,
	EFormatArgumentType__Double    = 3,
	EFormatArgumentType__Text      = 4,
	EFormatArgumentType__Gender    = 5,
	EFormatArgumentType__EFormatArgumentType_MAX = 6,

};

// Enum Engine.EEndPlayReason
enum class Engine_EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5,

};

// Enum Engine.ETickingGroup
enum class Engine_ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8,

};

// Enum Engine.EComponentCreationMethod
enum class Engine_EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4,

};

// Enum Engine.ETemperatureSeverityType
enum class Engine_ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown = 0,
	ETemperatureSeverityType__Good = 1,
	ETemperatureSeverityType__Bad  = 2,
	ETemperatureSeverityType__Serious = 3,
	ETemperatureSeverityType__Critical = 4,
	ETemperatureSeverityType__NumSeverities = 5,
	ETemperatureSeverityType__ETemperatureSeverityType_MAX = 6,

};

// Enum Engine.EPlaneConstraintAxisSetting
enum class Engine_EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5,

};

// Enum Engine.EInterpToBehaviourType
enum class Engine_EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4,

};

// Enum Engine.EPlatformInterfaceDataType
enum class Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,

};

// Enum Engine.EMovementMode
enum class Engine_EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,

};

// Enum Engine.ENetworkFailure
enum class Engine_ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11,

};

// Enum Engine.ETravelFailure
enum class Engine_ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12,

};

// Enum Engine.EScreenOrientation
enum class Engine_EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	EScreenOrientation__Portrait   = 1,
	EScreenOrientation__PortraitUpsideDown = 2,
	EScreenOrientation__LandscapeLeft = 3,
	EScreenOrientation__LandscapeRight = 4,
	EScreenOrientation__FaceUp     = 5,
	EScreenOrientation__FaceDown   = 6,
	EScreenOrientation__EScreenOrientation_MAX = 7,

};

// Enum Engine.EApplicationState
enum class Engine_EApplicationState : uint8_t
{
	EApplicationState__Unknown     = 0,
	EApplicationState__Inactive    = 1,
	EApplicationState__Background  = 2,
	EApplicationState__Active      = 3,
	EApplicationState__EApplicationState_MAX = 4,

};

// Enum Engine.EObjectTypeQuery
enum class Engine_EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,

};

// Enum Engine.EDrawDebugTrace
enum class Engine_EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4,

};

// Enum Engine.ETraceTypeQuery
enum class Engine_ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,

};

// Enum Engine.EMoveComponentAction
enum class Engine_EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3,

};

// Enum Engine.EQuitPreference
enum class Engine_EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2,

};

// Enum Engine.EMouseLockMode
enum class Engine_EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	EMouseLockMode__LockOnCapture  = 1,
	EMouseLockMode__LockAlways     = 2,
	EMouseLockMode__LockInFullscreen = 3,
	EMouseLockMode__EMouseLockMode_MAX = 4,

};

// Enum Engine.EWindowTitleBarMode
enum class Engine_EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	EWindowTitleBarMode__VerticalBox = 1,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2,

};

// Enum Engine.ERelativeTransformSpace
enum class Engine_ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4,

};

// Enum Engine.EAttachLocation
enum class Engine_EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4,

};

// Enum Engine.EAttachmentRule
enum class Engine_EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3,

};

// Enum Engine.EDetachmentRule
enum class Engine_EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2,

};

// Enum Engine.EComponentMobility
enum class Engine_EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3,

};

// Enum Engine.EDetailMode
enum class Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,

};

// Enum Engine.EAlphaBlendOption
enum class Engine_EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15,

};

// Enum Engine.EAnimGroupRole
enum class Engine_EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__TransitionFollower = 4,
	EAnimGroupRole__EAnimGroupRole_MAX = 5,

};

// Enum Engine.ERawCurveTrackTypes
enum class Engine_ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	ERawCurveTrackTypes__RCT_Vector = 1,
	ERawCurveTrackTypes__RCT_Transform = 2,
	ERawCurveTrackTypes__RCT_MAX   = 3,

};

// Enum Engine.EAnimAssetCurveFlags
enum class Engine_EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7,

};

// Enum Engine.AnimationCompressionFormat
enum class Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,

};

// Enum Engine.EAdditiveBasePoseType
enum class Engine_EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4,

};

// Enum Engine.ERootMotionMode
enum class Engine_ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4,

};

// Enum Engine.ERootMotionRootLock
enum class Engine_ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3,

};

// Enum Engine.EMontagePlayReturnType
enum class Engine_EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	EMontagePlayReturnType__Duration = 1,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2,

};

// Enum Engine.EDrawDebugItemType
enum class Engine_EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	EDrawDebugItemType__Sphere     = 1,
	EDrawDebugItemType__Line       = 2,
	EDrawDebugItemType__OnScreenMessage = 3,
	EDrawDebugItemType__CoordinateSystem = 4,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 5,

};

// Enum Engine.EAnimLinkMethod
enum class Engine_EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3,

};

// Enum Engine.EMontageSubStepResult
enum class Engine_EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved   = 0,
	EMontageSubStepResult__NotMoved = 1,
	EMontageSubStepResult__InvalidSection = 2,
	EMontageSubStepResult__InvalidMontage = 3,
	EMontageSubStepResult__EMontageSubStepResult_MAX = 4,

};

// Enum Engine.EAnimNotifyEventType
enum class Engine_EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2,

};

// Enum Engine.EEvaluatorMode
enum class Engine_EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3,

};

// Enum Engine.EEvaluatorDataSource
enum class Engine_EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2,

};

// Enum Engine.ECopyType
enum class Engine_ECopyType : uint8_t
{
	ECopyType__MemCopy             = 0,
	ECopyType__BoolProperty        = 1,
	ECopyType__StructProperty      = 2,
	ECopyType__ObjectProperty      = 3,
	ECopyType__ECopyType_MAX       = 4,

};

// Enum Engine.EPostCopyOperation
enum class Engine_EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2,

};

// Enum Engine.EPinHidingMode
enum class Engine_EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4,

};

// Enum Engine.AnimPhysCollisionType
enum class Engine_EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4,

};

// Enum Engine.AnimPhysTwistAxis
enum class Engine_EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3,

};

// Enum Engine.AnimationKeyFormat
enum class Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,

};

// Enum Engine.ETypeAdvanceAnim
enum class Engine_ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,

};

// Enum Engine.ETransitionLogicType
enum class Engine_ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_MAX  = 2,

};

// Enum Engine.ETransitionBlendMode
enum class Engine_ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2,

};

// Enum Engine.EComponentType
enum class Engine_EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11,

};

// Enum Engine.EAxisOption
enum class Engine_EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__Custom            = 6,
	EAxisOption__EAxisOption_MAX   = 7,

};

// Enum Engine.EAnimInterpolationType
enum class Engine_EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	EAnimInterpolationType__Step   = 1,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 2,

};

// Enum Engine.ECurveBlendOption
enum class Engine_ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3,

};

// Enum Engine.EAdditiveAnimationType
enum class Engine_EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,

};

// Enum Engine.ENotifyFilterType
enum class Engine_ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2,

};

// Enum Engine.EMontageNotifyTickType
enum class Engine_EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2,

};

// Enum Engine.EBoneRotationSource
enum class Engine_EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,

};

// Enum Engine.EBoneControlSpace
enum class Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,

};

// Enum Engine.EBoneAxis
enum class Engine_EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,

};

// Enum Engine.EPrimaryAssetCookRule
enum class Engine_EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	EPrimaryAssetCookRule__NeverCook = 1,
	EPrimaryAssetCookRule__DevelopmentCook = 2,
	EPrimaryAssetCookRule__DevelopmentAlwaysCook = 3,
	EPrimaryAssetCookRule__AlwaysCook = 4,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 5,

};

// Enum Engine.EAttenuationShape
enum class Engine_EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4,

};

// Enum Engine.EAttenuationDistanceModel
enum class Engine_EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	EAttenuationDistanceModel__Logarithmic = 1,
	EAttenuationDistanceModel__Inverse = 2,
	EAttenuationDistanceModel__LogReverse = 3,
	EAttenuationDistanceModel__NaturalSound = 4,
	EAttenuationDistanceModel__Custom = 5,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6,

};

// Enum Engine.EMonoChannelUpmixMethod
enum class Engine_EMonoChannelUpmixMethod : uint8_t
{
	EMonoChannelUpmixMethod__Linear = 0,
	EMonoChannelUpmixMethod__EqualPower = 1,
	EMonoChannelUpmixMethod__FullVolume = 2,
	EMonoChannelUpmixMethod__EMonoChannelUpmixMethod_MAX = 3,

};

// Enum Engine.EPanningMethod
enum class Engine_EPanningMethod : uint8_t
{
	EPanningMethod__Linear         = 0,
	EPanningMethod__EqualPower     = 1,
	EPanningMethod__EPanningMethod_MAX = 2,

};

// Enum Engine.EVoiceSampleRate
enum class Engine_EVoiceSampleRate : uint8_t
{
	EVoiceSampleRate__Low16000Hz   = 0,
	EVoiceSampleRate__Normal24000Hz = 1,
	EVoiceSampleRate__EVoiceSampleRate_MAX = 2,

};

// Enum Engine.ReverbPreset
enum class Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,

};

// Enum Engine.EBlendableLocation
enum class Engine_EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5,

};

// Enum Engine.ENotifyTriggerMode
enum class Engine_ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3,

};

// Enum Engine.EBlendSpaceAxis
enum class Engine_EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3,

};

// Enum Engine.EBlueprintNativizationFlag
enum class Engine_EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	EBlueprintNativizationFlag__Dependency = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3,

};

// Enum Engine.EBlueprintCompileMode
enum class Engine_EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3,

};

// Enum Engine.EBlueprintType
enum class Engine_EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,

};

// Enum Engine.EBlueprintStatus
enum class Engine_EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,

};

// Enum Engine.EDOFMode
enum class Engine_EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7,

};

// Enum Engine.EBodyCollisionResponse
enum class Engine_EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2,

};

// Enum Engine.EPhysicsType
enum class Engine_EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,

};

// Enum Engine.ECollisionTraceFlag
enum class Engine_ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4,

};

// Enum Engine.EBrushType
enum class Engine_EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,

};

// Enum Engine.ECsgOper
enum class Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,

};

// Enum Engine.EInitialOscillatorOffset
enum class Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum Engine.EOscillatorWaveform
enum class Engine_EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave  = 0,
	EOscillatorWaveform__PerlinNoise = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 2,

};

// Enum Engine.ECameraAlphaBlendMode
enum class Engine_ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2,

};

// Enum Engine.ECameraAnimPlaySpace
enum class Engine_ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3,

};

// Enum Engine.ECameraProjectionMode
enum class Engine_ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2,

};

// Enum Engine.ECloudStorageDelegate
enum class Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,

};

// Enum Engine.EAngularDriveMode
enum class Engine_EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2,

};

// Enum Engine.ELinearConstraintMotion
enum class Engine_ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,

};

// Enum Engine.ECurveTableMode
enum class Engine_ECurveTableMode : uint8_t
{
	ECurveTableMode__Empty         = 0,
	ECurveTableMode__SimpleCurves  = 1,
	ECurveTableMode__RichCurves    = 2,
	ECurveTableMode__ECurveTableMode_MAX = 3,

};

// Enum Engine.EEvaluateCurveTableResult
enum class Engine_EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2,

};

// Enum Engine.EGrammaticalNumber
enum class Engine_EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2,

};

// Enum Engine.EGrammaticalGender
enum class Engine_EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4,

};

// Enum Engine.DistributionParamMode
enum class Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,

};

// Enum Engine.EDistributionVectorMirrorFlags
enum class Engine_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Engine.EDistributionVectorLockFlags
enum class Engine_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Engine.ENodeEnabledState
enum class Engine_ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3,

};

// Enum Engine.ENodeAdvancedPins
enum class Engine_ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3,

};

// Enum Engine.ENodeTitleType
enum class Engine_ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5,

};

// Enum Engine.EPinContainerType
enum class Engine_EPinContainerType : uint8_t
{
	EPinContainerType__None        = 0,
	EPinContainerType__Array       = 1,
	EPinContainerType__Set         = 2,
	EPinContainerType__Map         = 3,
	EPinContainerType__EPinContainerType_MAX = 4,

};

// Enum Engine.EEdGraphPinDirection
enum class Engine_EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,

};

// Enum Engine.EBlueprintPinStyleType
enum class Engine_EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,

};

// Enum Engine.ECanCreateConnectionResponse
enum class Engine_ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6,

};

// Enum Engine.EGraphType
enum class Engine_EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,

};

// Enum Engine.EConsoleType
enum class Engine_EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2,

};

// Enum Engine.ETransitionType
enum class Engine_ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7,

};

// Enum Engine.EFullyLoadPackageType
enum class Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,

};

// Enum Engine.EViewModeIndex
enum class Engine_EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_Max                        = 26,
	VMI_Unknown                    = 27,

};

// Enum Engine.EDemoPlayFailure
enum class Engine_EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__InitBase     = 4,
	EDemoPlayFailure__GameSpecificHeader = 5,
	EDemoPlayFailure__ReplayStreamerInternal = 6,
	EDemoPlayFailure__LoadMap      = 7,
	EDemoPlayFailure__Serialization = 8,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 9,

};

// Enum Engine.ETravelType
enum class Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,

};

// Enum Engine.ENetworkLagState
enum class Engine_ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2,

};

// Enum Engine.EMouseCaptureMode
enum class Engine_EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	EMouseCaptureMode__CapturePermanently = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode__CaptureDuringMouseDown = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 5,

};

// Enum Engine.EInputEvent
enum class Engine_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class Engine_ECustomTimeStepSynchronizationState : uint8_t
{
	ECustomTimeStepSynchronizationState__Closed = 0,
	ECustomTimeStepSynchronizationState__Error = 1,
	ECustomTimeStepSynchronizationState__Synchronized = 2,
	ECustomTimeStepSynchronizationState__Synchronizing = 3,
	ECustomTimeStepSynchronizationState__ECustomTimeStepSynchronizationState_MAX = 4,

};

// Enum Engine.EMeshBufferAccess
enum class Engine_EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	EMeshBufferAccess__ForceCPUAndGPU = 1,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 2,

};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class Engine_ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5,

};

// Enum Engine.EConstraintFrame
enum class Engine_EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2,

};

// Enum Engine.EAngularConstraintMotion
enum class Engine_EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,

};

// Enum Engine.EComponentSocketType
enum class Engine_EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3,

};

// Enum Engine.EPhysicalSurface
enum class Engine_EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,

};

// Enum Engine.EWalkableSlopeBehavior
enum class Engine_EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,

};

// Enum Engine.ERotatorQuantization
enum class Engine_ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2,

};

// Enum Engine.EVectorQuantization
enum class Engine_EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3,

};

// Enum Engine.EAutoPossessAI
enum class Engine_EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4,

};

// Enum Engine.EAutoReceiveInput
enum class Engine_EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9,

};

// Enum Engine.ENetDormancy
enum class Engine_ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5,

};

// Enum Engine.ENetRole
enum class Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,

};

// Enum Engine.EUpdateRateShiftBucket
enum class Engine_EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7,

};

// Enum Engine.ETeleportType
enum class Engine_ETeleportType : uint8_t
{
	ETeleportType__None            = 0,
	ETeleportType__TeleportPhysics = 1,
	ETeleportType__ResetPhysics    = 2,
	ETeleportType__ETeleportType_MAX = 3,

};

// Enum Engine.EShadowMapFlags
enum class Engine_EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,

};

// Enum Engine.ELightMapPaddingType
enum class Engine_ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,

};

// Enum Engine.ECollisionEnabled
enum class Engine_ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4,

};

// Enum Engine.ETimelineSigType
enum class Engine_ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,

};

// Enum Engine.ESleepFamily
enum class Engine_ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3,

};

// Enum Engine.ERadialImpulseFalloff
enum class Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,

};

// Enum Engine.EFilterInterpolationType
enum class Engine_EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3,

};

// Enum Engine.ECollisionResponse
enum class Engine_ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,

};

// Enum Engine.EOverlapFilterOption
enum class Engine_EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,

};

// Enum Engine.ECollisionChannel
enum class Engine_ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,

};

// Enum Engine.ENetworkSmoothingMode
enum class Engine_ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__Replay  = 3,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4,

};

// Enum Engine.ELightingBuildQuality
enum class Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,

};

// Enum Engine.EMaterialSamplerType
enum class Engine_EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_External           = 8,
	SAMPLERTYPE_MAX                = 9,

};

// Enum Engine.EMaterialTessellationMode
enum class Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,

};

// Enum Engine.EMaterialShadingModel
enum class Engine_EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10,

};

// Enum Engine.EParticleCollisionMode
enum class Engine_EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2,

};

// Enum Engine.ETrailWidthMode
enum class Engine_ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,

};

// Enum Engine.EGBufferFormat
enum class Engine_EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	EGBufferFormat__Default        = 1,
	EGBufferFormat__HighPrecisionNormals = 2,
	EGBufferFormat__Force16BitsPerChannel = 3,
	EGBufferFormat__EGBufferFormat_MAX = 4,

};

// Enum Engine.ESceneCaptureCompositeMode
enum class Engine_ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3,

};

// Enum Engine.ESceneCaptureSource
enum class Engine_ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_MAX                        = 8,

};

// Enum Engine.ETranslucentSortPolicy
enum class Engine_ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3,

};

// Enum Engine.ERefractionMode
enum class Engine_ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2,

};

// Enum Engine.ETranslucencyLightingMode
enum class Engine_ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6,

};

// Enum Engine.ESamplerSourceMode
enum class Engine_ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3,

};

// Enum Engine.EBlendMode
enum class Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6,

};

// Enum Engine.EOcclusionCombineMode
enum class Engine_EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2,

};

// Enum Engine.ELightmapType
enum class Engine_ELightmapType : uint8_t
{
	ELightmapType__Default         = 0,
	ELightmapType__ForceSurface    = 1,
	ELightmapType__ForceVolumetric = 2,
	ELightmapType__ELightmapType_MAX = 3,

};

// Enum Engine.EIndirectLightingCacheQuality
enum class Engine_EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,

};

// Enum Engine.ESceneDepthPriorityGroup
enum class Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,

};

// Enum Engine.EAspectRatioAxisConstraint
enum class Engine_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,

};

// Enum Engine.EFontCacheType
enum class Engine_EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2,

};

// Enum Engine.EFontImportCharacterSet
enum class Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,

};

// Enum Engine.EStandbyType
enum class Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,

};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class Engine_ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3,

};

// Enum Engine.EWindowMode
enum class Engine_EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__EWindowMode_MAX   = 3,

};

// Enum Engine.EImportanceWeight
enum class Engine_EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance   = 0,
	EImportanceWeight__Red         = 1,
	EImportanceWeight__Green       = 2,
	EImportanceWeight__Blue        = 3,
	EImportanceWeight__Alpha       = 4,
	EImportanceWeight__EImportanceWeight_MAX = 5,

};

// Enum Engine.EAdManagerDelegate
enum class Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,

};

// Enum Engine.EControllerAnalogStick
enum class Engine_EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2,

};

// Enum Engine.EAnimAlphaInputType
enum class Engine_EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float     = 0,
	EAnimAlphaInputType__Bool      = 1,
	EAnimAlphaInputType__Curve     = 2,
	EAnimAlphaInputType__EAnimAlphaInputType_MAX = 3,

};

// Enum Engine.ETrackActiveCondition
enum class Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,

};

// Enum Engine.EInterpTrackMoveRotMode
enum class Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,

};

// Enum Engine.EInterpMoveAxis
enum class Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,

};

// Enum Engine.ETrackToggleAction
enum class Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,

};

// Enum Engine.EVisibilityTrackCondition
enum class Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,

};

// Enum Engine.EVisibilityTrackAction
enum class Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,

};

// Enum Engine.ESlateGesture
enum class Engine_ESlateGesture : uint8_t
{
	ESlateGesture__None            = 0,
	ESlateGesture__Scroll          = 1,
	ESlateGesture__Magnify         = 2,
	ESlateGesture__Swipe           = 3,
	ESlateGesture__Rotate          = 4,
	ESlateGesture__LongPress       = 5,
	ESlateGesture__ESlateGesture_MAX = 6,

};

// Enum Engine.ELerpInterpolationMode
enum class Engine_ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	ELerpInterpolationMode__EulerInterp = 1,
	ELerpInterpolationMode__DualQuatInterp = 2,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3,

};

// Enum Engine.EEasingFunc
enum class Engine_EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14,

};

// Enum Engine.ERoundingMode
enum class Engine_ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,

};

// Enum Engine.EStreamingVolumeUsage
enum class Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,

};

// Enum Engine.EMaterialDecalResponse
enum class Engine_EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,

};

// Enum Engine.EDecalBlendMode
enum class Engine_EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17,

};

// Enum Engine.ETextureColorChannel
enum class Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,

};

// Enum Engine.EMaterialAttributeBlend
enum class Engine_EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	EMaterialAttributeBlend__UseA  = 1,
	EMaterialAttributeBlend__UseB  = 2,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3,

};

// Enum Engine.EChannelMaskParameterColor
enum class Engine_EChannelMaskParameterColor : uint8_t
{
	EChannelMaskParameterColor__Red = 0,
	EChannelMaskParameterColor__Green = 1,
	EChannelMaskParameterColor__Blue = 2,
	EChannelMaskParameterColor__Alpha = 3,
	EChannelMaskParameterColor__EChannelMaskParameterColor_MAX = 4,

};

// Enum Engine.EClampMode
enum class Engine_EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,

};

// Enum Engine.ECustomMaterialOutputType
enum class Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,

};

// Enum Engine.EDepthOfFieldFunctionValue
enum class Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4,

};

// Enum Engine.EFunctionInputType
enum class Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_VolumeTexture    = 6,
	FunctionInput_StaticBool       = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_TextureExternal  = 9,
	FunctionInput_MAX              = 10,

};

// Enum Engine.ENoiseFunction
enum class Engine_ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6,

};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class Engine_EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2,

};

// Enum Engine.ESceneTextureId
enum class Engine_ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_MAX                        = 29,

};

// Enum Engine.ESpeedTreeLODType
enum class Engine_ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,

};

// Enum Engine.ESpeedTreeWindType
enum class Engine_ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7,

};

// Enum Engine.ESpeedTreeGeometryType
enum class Engine_ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,

};

// Enum Engine.EMaterialExposedTextureProperty
enum class Engine_EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2,

};

// Enum Engine.ETextureMipValueMode
enum class Engine_ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,

};

// Enum Engine.EMaterialVectorCoordTransform
enum class Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6,

};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6,

};

// Enum Engine.EMaterialPositionTransformSource
enum class Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6,

};

// Enum Engine.EVectorNoiseFunction
enum class Engine_EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5,

};

// Enum Engine.EMaterialExposedViewProperty
enum class Engine_EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7,

};

// Enum Engine.EWorldPositionIncludedOffsets
enum class Engine_EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,

};

// Enum Engine.EMaterialFunctionUsage
enum class Engine_EMaterialFunctionUsage : uint8_t
{
	Default                        = 0,
	MaterialLayer                  = 1,
	MaterialLayerBlend             = 2,
	EMaterialFunctionUsage_MAX     = 3,

};

// Enum Engine.EMaterialUsage
enum class Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_Clothing              = 8,
	MATUSAGE_NiagaraSprites        = 9,
	MATUSAGE_NiagaraRibbons        = 10,
	MATUSAGE_NiagaraMeshParticles  = 11,
	MATUSAGE_GeometryCache         = 12,
	MATUSAGE_MAX                   = 13,

};

// Enum Engine.EMaterialParameterAssociation
enum class Engine_EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3,

};

// Enum Engine.EMaterialMergeType
enum class Engine_EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2,

};

// Enum Engine.ETextureSizingType
enum class Engine_ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4,

};

// Enum Engine.EMaterialDomain
enum class Engine_EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6,

};

// Enum Engine.EMeshInstancingReplacementMethod
enum class Engine_EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors = 0,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 2,

};

// Enum Engine.EUVOutput
enum class Engine_EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel  = 0,
	EUVOutput__OutputChannel       = 1,
	EUVOutput__EUVOutput_MAX       = 2,

};

// Enum Engine.EMeshMergeType
enum class Engine_EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	EMeshMergeType__MeshMergeType_MergeActor = 1,
	EMeshMergeType__MeshMergeType_MAX = 2,

};

// Enum Engine.EMeshLODSelectionType
enum class Engine_EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	EMeshLODSelectionType__SpecificLOD = 1,
	EMeshLODSelectionType__CalculateLOD = 2,
	EMeshLODSelectionType__LowestDetailLOD = 3,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4,

};

// Enum Engine.EProxyNormalComputationMethod
enum class Engine_EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted = 0,
	EProxyNormalComputationMethod__AreaWeighted = 1,
	EProxyNormalComputationMethod__EqualWeighted = 2,
	EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 3,

};

// Enum Engine.ELandscapeCullingPrecision
enum class Engine_ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	ELandscapeCullingPrecision__Medium = 1,
	ELandscapeCullingPrecision__Low = 2,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3,

};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class Engine_EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles = 0,
	EStaticMeshReductionTerimationCriterion__Vertices = 1,
	EStaticMeshReductionTerimationCriterion__Any = 2,
	EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 3,

};

// Enum Engine.EMeshFeatureImportance
enum class Engine_EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6,

};

// Enum Engine.EVertexPaintAxis
enum class Engine_EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3,

};

// Enum Engine.EMicroTransactionResult
enum class Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,

};

// Enum Engine.EMicroTransactionDelegate
enum class Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,

};

// Enum Engine.FNavigationSystemRunMode
enum class Engine_EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5,

};

// Enum Engine.ENavigationQueryResult
enum class Engine_ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4,

};

// Enum Engine.ENavPathEvent
enum class Engine_ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__MetaPathUpdate  = 6,
	ENavPathEvent__Custom          = 7,
	ENavPathEvent__ENavPathEvent_MAX = 8,

};

// Enum Engine.ENavDataGatheringModeConfig
enum class Engine_ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3,

};

// Enum Engine.ENavDataGatheringMode
enum class Engine_ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3,

};

// Enum Engine.ENavigationOptionFlag
enum class Engine_ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3,

};

// Enum Engine.ENavLinkDirection
enum class Engine_ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3,

};

// Enum Engine.EEmitterRenderMode
enum class Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,

};

// Enum Engine.EParticleSubUVInterpMethod
enum class Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,

};

// Enum Engine.EParticleBurstMethod
enum class Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,

};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class Engine_EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	EParticleSystemInsignificanceReaction__Complete = 1,
	EParticleSystemInsignificanceReaction__DisableTick = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction__Num = 4,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5,

};

// Enum Engine.EParticleSignificanceLevel
enum class Engine_EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	EParticleSignificanceLevel__Medium = 1,
	EParticleSignificanceLevel__High = 2,
	EParticleSignificanceLevel__Critical = 3,
	EParticleSignificanceLevel__Num = 4,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5,

};

// Enum Engine.EParticleDetailMode
enum class Engine_EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3,

};

// Enum Engine.EParticleSourceSelectionMethod
enum class Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,

};

// Enum Engine.EModuleType
enum class Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9,

};

// Enum Engine.EAttractorParticleSelectionMethod
enum class Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,

};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,

};

// Enum Engine.Beam2SourceTargetMethod
enum class Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,

};

// Enum Engine.BeamModifierType
enum class Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,

};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,

};

// Enum Engine.EParticleCollisionComplete
enum class Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,

};

// Enum Engine.EParticleCollisionResponse
enum class Engine_EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3,

};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,

};

// Enum Engine.ELocationBoneSocketSource
enum class Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,

};

// Enum Engine.ELocationEmitterSelectionMethod
enum class Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,

};

// Enum Engine.CylinderHeightAxis
enum class Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,

};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,

};

// Enum Engine.EOrbitChainMode
enum class Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,

};

// Enum Engine.EParticleAxisLock
enum class Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,

};

// Enum Engine.EEmitterDynamicParameterValue
enum class Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6,

};

// Enum Engine.EEmitterNormalsMode
enum class Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,

};

// Enum Engine.EParticleSortMode
enum class Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,

};

// Enum Engine.EParticleUVFlipMode
enum class Engine_EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8,

};

// Enum Engine.ETrail2SourceMethod
enum class Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,

};

// Enum Engine.EBeamTaperMethod
enum class Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,

};

// Enum Engine.EBeam2Method
enum class Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,

};

// Enum Engine.EMeshCameraFacingOptions
enum class Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,

};

// Enum Engine.EMeshCameraFacingUpAxis
enum class Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,

};

// Enum Engine.EMeshScreenAlignment
enum class Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,

};

// Enum Engine.ETrailsRenderAxisOption
enum class Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,

};

// Enum Engine.EParticleScreenAlignment
enum class Engine_EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7,

};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,

};

// Enum Engine.ParticleSystemLODMethod
enum class Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,

};

// Enum Engine.EParticleSystemUpdateMode
enum class Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,

};

// Enum Engine.EParticleEventType
enum class Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,

};

// Enum Engine.ParticleReplayState
enum class Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,

};

// Enum Engine.EParticleSysParamType
enum class Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8,

};

// Enum Engine.ESettingsLockedAxis
enum class Engine_ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5,

};

// Enum Engine.ESettingsDOF
enum class Engine_ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4,

};

// Enum Engine.EFrictionCombineMode
enum class Engine_EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3,

};

// Enum Engine.EViewTargetBlendFunction
enum class Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5,

};

// Enum Engine.EDynamicForceFeedbackAction
enum class Engine_EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3,

};

// Enum Engine.ERendererStencilMask
enum class Engine_ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	ERendererStencilMask__ERSM     = 1,
	ERendererStencilMask__ERSM01   = 2,
	ERendererStencilMask__ERSM02   = 3,
	ERendererStencilMask__ERSM03   = 4,
	ERendererStencilMask__ERSM04   = 5,
	ERendererStencilMask__ERSM05   = 6,
	ERendererStencilMask__ERSM06   = 7,
	ERendererStencilMask__ERSM07   = 8,
	ERendererStencilMask__ERSM08   = 9,
	ERendererStencilMask__ERSM_MAX = 10,

};

// Enum Engine.EHasCustomNavigableGeometry
enum class Engine_EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4,

};

// Enum Engine.ECanBeCharacterBase
enum class Engine_ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,

};

// Enum Engine.ERichCurveExtrapolation
enum class Engine_ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,

};

// Enum Engine.ERichCurveInterpMode
enum class Engine_ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,

};

// Enum Engine.EReflectionSourceType
enum class Engine_EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	EReflectionSourceType__SpecifiedCubemap = 1,
	EReflectionSourceType__EReflectionSourceType_MAX = 2,

};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class Engine_EDefaultBackBufferPixelFormat : uint8_t
{
	EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8 = 0,
	EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 1,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED = 2,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA = 3,
	EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10 = 4,
	EDefaultBackBufferPixelFormat__DBBPF_MAX = 5,

};

// Enum Engine.EAutoExposureMethodUI
enum class Engine_EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	EAutoExposureMethodUI__AEM_Basic = 1,
	EAutoExposureMethodUI__AEM_Manual = 2,
	EAutoExposureMethodUI__AEM_MAX = 3,

};

// Enum Engine.EAlphaChannelMode
enum class Engine_EAlphaChannelMode : uint8_t
{
	EAlphaChannelMode__Disabled    = 0,
	EAlphaChannelMode__LinearColorSpaceOnly = 1,
	EAlphaChannelMode__AllowThroughTonemapper = 2,
	EAlphaChannelMode__EAlphaChannelMode_MAX = 3,

};

// Enum Engine.EEarlyZPass
enum class Engine_EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4,

};

// Enum Engine.ECustomDepthStencil
enum class Engine_ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4,

};

// Enum Engine.EMobileMSAASampleCount
enum class Engine_EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	EMobileMSAASampleCount__Two    = 1,
	EMobileMSAASampleCount__Four   = 2,
	EMobileMSAASampleCount__Eight  = 3,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4,

};

// Enum Engine.ECompositingSampleCount
enum class Engine_ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4,

};

// Enum Engine.EClearSceneOptions
enum class Engine_EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3,

};

// Enum Engine.EReporterLineStyle
enum class Engine_EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2,

};

// Enum Engine.ELegendPosition
enum class Engine_ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2,

};

// Enum Engine.EGraphDataStyle
enum class Engine_EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2,

};

// Enum Engine.EGraphAxisStyle
enum class Engine_EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3,

};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class Engine_ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2,

};

// Enum Engine.ERichCurveCompressionFormat
enum class Engine_ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_MAX                       = 5,

};

// Enum Engine.ERichCurveTangentWeightMode
enum class Engine_ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,

};

// Enum Engine.ERichCurveTangentMode
enum class Engine_ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,

};

// Enum Engine.EConstraintTransform
enum class Engine_EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2,

};

// Enum Engine.EControlConstraint
enum class Engine_EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__MAX        = 2,

};

// Enum Engine.ERootMotionFinishVelocityMode
enum class Engine_ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode__SetVelocity = 1,
	ERootMotionFinishVelocityMode__ClampVelocity = 2,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3,

};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class Engine_ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 2,

};

// Enum Engine.ERootMotionSourceStatusFlags
enum class Engine_ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3,

};

// Enum Engine.ERootMotionAccumulateMode
enum class Engine_ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2,

};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class Engine_EReflectedAndRefractedRayTracedShadows : uint8_t
{
	EReflectedAndRefractedRayTracedShadows__Disabled = 0,
	EReflectedAndRefractedRayTracedShadows__Hard_shadows = 1,
	EReflectedAndRefractedRayTracedShadows__Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows__EReflectedAndRefractedRayTracedShadows_MAX = 3,

};

// Enum Engine.ETranslucencyType
enum class Engine_ETranslucencyType : uint8_t
{
	ETranslucencyType__Raster      = 0,
	ETranslucencyType__RayTracing  = 1,
	ETranslucencyType__ETranslucencyType_MAX = 2,

};

// Enum Engine.EReflectionsType
enum class Engine_EReflectionsType : uint8_t
{
	EReflectionsType__ScreenSpace  = 0,
	EReflectionsType__RayTracing   = 1,
	EReflectionsType__EReflectionsType_MAX = 2,

};

// Enum Engine.ELightUnits
enum class Engine_ELightUnits : uint8_t
{
	ELightUnits__Unitless          = 0,
	ELightUnits__Candelas          = 1,
	ELightUnits__Lumens            = 2,
	ELightUnits__ELightUnits_MAX   = 3,

};

// Enum Engine.EBloomMethod
enum class Engine_EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2,

};

// Enum Engine.EAutoExposureMethod
enum class Engine_EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3,

};

// Enum Engine.EAntiAliasingMethod
enum class Engine_EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4,

};

// Enum Engine.EDepthOfFieldMethod
enum class Engine_EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,

};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class Engine_ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 2,
	ESceneCapturePrimitiveRenderMode__PRM_MAX = 3,

};

// Enum Engine.EMaterialProperty
enum class Engine_EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_CustomData0                 = 14,
	MP_CustomData1                 = 15,
	MP_AmbientOcclusion            = 16,
	MP_Refraction                  = 17,
	MP_CustomizedUVs0              = 18,
	MP_CustomizedUVs1              = 19,
	MP_CustomizedUVs2              = 20,
	MP_CustomizedUVs3              = 21,
	MP_CustomizedUVs4              = 22,
	MP_CustomizedUVs5              = 23,
	MP_CustomizedUVs6              = 24,
	MP_CustomizedUVs7              = 25,
	MP_PixelDepthOffset            = 26,
	MP_MaterialAttributes          = 27,
	MP_CustomOutput                = 28,
	MP_MAX                         = 29,

};

// Enum Engine.EPhysicsTransformUpdateMode
enum class Engine_EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2,

};

// Enum Engine.EAnimationMode
enum class Engine_EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3,

};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class Engine_EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2,

};

// Enum Engine.EAnimCurveType
enum class Engine_EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	EAnimCurveType__MaterialCurve  = 1,
	EAnimCurveType__MorphTargetCurve = 2,
	EAnimCurveType__MaxAnimCurveType = 3,
	EAnimCurveType__EAnimCurveType_MAX = 4,

};

// Enum Engine.EBoneFilterActionOption
enum class Engine_EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove = 0,
	EBoneFilterActionOption__Keep  = 1,
	EBoneFilterActionOption__Invalid = 2,
	EBoneFilterActionOption__EBoneFilterActionOption_MAX = 3,

};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,

};

// Enum Engine.SkeletalMeshOptimizationType
enum class Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3,

};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class Engine_ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6,

};

// Enum Engine.EBoneTranslationRetargetingMode
enum class Engine_EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__OrientAndScale = 4,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 5,

};

// Enum Engine.EBoneSpaces
enum class Engine_EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2,

};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class Engine_EVisibilityBasedAnimTickOption : uint8_t
{
	EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones = 0,
	EVisibilityBasedAnimTickOption__AlwaysTickPose = 1,
	EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered = 2,
	EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption__EVisibilityBasedAnimTickOption_MAX = 4,

};

// Enum Engine.EPhysBodyOp
enum class Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2,

};

// Enum Engine.EBoneVisibilityStatus
enum class Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,

};

// Enum Engine.ESkyLightSourceType
enum class Engine_ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,

};

// Enum Engine.EReverbSendMethod
enum class Engine_EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear      = 0,
	EReverbSendMethod__CustomCurve = 1,
	EReverbSendMethod__Manual      = 2,
	EReverbSendMethod__EReverbSendMethod_MAX = 3,

};

// Enum Engine.EAirAbsorptionMethod
enum class Engine_EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear   = 0,
	EAirAbsorptionMethod__CustomCurve = 1,
	EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 2,

};

// Enum Engine.ESoundSpatializationAlgorithm
enum class Engine_ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2,

};

// Enum Engine.ESoundDistanceCalc
enum class Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,

};

// Enum Engine.EVirtualizationMode
enum class Engine_EVirtualizationMode : uint8_t
{
	EVirtualizationMode__Disabled  = 0,
	EVirtualizationMode__PlayWhenSilent = 1,
	EVirtualizationMode__Restart   = 2,
	EVirtualizationMode__EVirtualizationMode_MAX = 3,

};

// Enum Engine.EAudioOutputTarget
enum class Engine_EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3,

};

// Enum Engine.EMaxConcurrentResolutionRule
enum class Engine_EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7,

};

// Enum Engine.ESoundGroup
enum class Engine_ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,

};

// Enum Engine.ModulationParamMode
enum class Engine_EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,

};

// Enum Engine.ESourceBusChannels
enum class Engine_ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono       = 0,
	ESourceBusChannels__Stereo     = 1,
	ESourceBusChannels__ESourceBusChannels_MAX = 2,

};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class Engine_ESourceBusSendLevelControlMethod : uint8_t
{
	ESourceBusSendLevelControlMethod__Linear = 0,
	ESourceBusSendLevelControlMethod__CustomCurve = 1,
	ESourceBusSendLevelControlMethod__Manual = 2,
	ESourceBusSendLevelControlMethod__ESourceBusSendLevelControlMethod_MAX = 3,

};

// Enum Engine.ESendLevelControlMethod
enum class Engine_ESendLevelControlMethod : uint8_t
{
	ESendLevelControlMethod__Linear = 0,
	ESendLevelControlMethod__CustomCurve = 1,
	ESendLevelControlMethod__Manual = 2,
	ESendLevelControlMethod__ESendLevelControlMethod_MAX = 3,

};

// Enum Engine.EAudioRecordingExportType
enum class Engine_EAudioRecordingExportType : uint8_t
{
	EAudioRecordingExportType__SoundWave = 0,
	EAudioRecordingExportType__WavFile = 1,
	EAudioRecordingExportType__EAudioRecordingExportType_MAX = 2,

};

// Enum Engine.ESubmixChannelFormat
enum class Engine_ESubmixChannelFormat : uint8_t
{
	ESubmixChannelFormat__Device   = 0,
	ESubmixChannelFormat__Stereo   = 1,
	ESubmixChannelFormat__Quad     = 2,
	ESubmixChannelFormat__FiveDotOne = 3,
	ESubmixChannelFormat__SevenDotOne = 4,
	ESubmixChannelFormat__Ambisonics = 5,
	ESubmixChannelFormat__Count    = 6,
	ESubmixChannelFormat__ESubmixChannelFormat_MAX = 7,

};

// Enum Engine.ESoundWaveFFTSize
enum class Engine_ESoundWaveFFTSize : uint8_t
{
	ESoundWaveFFTSize__VerySmall   = 0,
	ESoundWaveFFTSize__Small       = 1,
	ESoundWaveFFTSize__Medium      = 2,
	ESoundWaveFFTSize__Large       = 3,
	ESoundWaveFFTSize__VeryLarge   = 4,
	ESoundWaveFFTSize__ESoundWaveFFTSize_MAX = 5,

};

// Enum Engine.EDecompressionType
enum class Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,

};

// Enum Engine.ESplineCoordinateSpace
enum class Engine_ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2,

};

// Enum Engine.ESplinePointType
enum class Engine_ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5,

};

// Enum Engine.ESplineMeshAxis
enum class Engine_ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3,

};

// Enum Engine.EOptimizationType
enum class Engine_EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,

};

// Enum Engine.EImportanceLevel
enum class Engine_EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,

};

// Enum Engine.ENormalMode
enum class Engine_ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,

};

// Enum Engine.EStereoLayerShape
enum class Engine_EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3,

};

// Enum Engine.EStereoLayerType
enum class Engine_EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3,

};

// Enum Engine.EOpacitySourceMode
enum class Engine_EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5,

};

// Enum Engine.ESubUVBoundingVertexCount
enum class Engine_ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2,

};

// Enum Engine.EVerticalTextAligment
enum class Engine_EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,

};

// Enum Engine.EHorizTextAligment
enum class Engine_EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,

};

// Enum Engine.ETextureCompressionQuality
enum class Engine_ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6,

};

// Enum Engine.ETextureSourceFormat
enum class Engine_ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8,

};

// Enum Engine.ETextureSourceArtType
enum class Engine_ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3,

};

// Enum Engine.ETextureMipCount
enum class Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,

};

// Enum Engine.ECompositeTextureMode
enum class Engine_ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,

};

// Enum Engine.TextureAddress
enum class Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,

};

// Enum Engine.TextureFilter
enum class Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,

};

// Enum Engine.TextureCompressionSettings
enum class Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12,

};

// Enum Engine.ETextureSamplerFilter
enum class Engine_ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5,

};

// Enum Engine.ETexturePowerOfTwoSetting
enum class Engine_ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3,

};

// Enum Engine.TextureMipGenSettings
enum class Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,

};

// Enum Engine.TextureGroup
enum class Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_Project01         = 32,
	TEXTUREGROUP_Project02         = 33,
	TEXTUREGROUP_Project03         = 34,
	TEXTUREGROUP_Project04         = 35,
	TEXTUREGROUP_Project05         = 36,
	TEXTUREGROUP_Project06         = 37,
	TEXTUREGROUP_Project07         = 38,
	TEXTUREGROUP_Project08         = 39,
	TEXTUREGROUP_Project09         = 40,
	TEXTUREGROUP_Project10         = 41,
	TEXTUREGROUP_MAX               = 42,

};

// Enum Engine.ETextureRenderTargetFormat
enum class Engine_ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_R16f                       = 3,
	RTF_RG16f                      = 4,
	RTF_RGBA16f                    = 5,
	RTF_R32f                       = 6,
	RTF_RG32f                      = 7,
	RTF_RGBA32f                    = 8,
	RTF_RGB10A2                    = 9,
	RTF_MAX                        = 10,

};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class Engine_ETimecodeProviderSynchronizationState : uint8_t
{
	ETimecodeProviderSynchronizationState__Closed = 0,
	ETimecodeProviderSynchronizationState__Error = 1,
	ETimecodeProviderSynchronizationState__Synchronized = 2,
	ETimecodeProviderSynchronizationState__Synchronizing = 3,
	ETimecodeProviderSynchronizationState__ETimecodeProviderSynchronizationState_MAX = 4,

};

// Enum Engine.ETimelineDirection
enum class Engine_ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2,

};

// Enum Engine.ETimelineLengthMode
enum class Engine_ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,

};

// Enum Engine.ETimeStretchCurveMapping
enum class Engine_ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original = 0,
	ETimeStretchCurveMapping__T_TargetMin = 1,
	ETimeStretchCurveMapping__T_TargetMax = 2,
	ETimeStretchCurveMapping__MAX  = 3,

};

// Enum Engine.ETwitterIntegrationDelegate
enum class Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,

};

// Enum Engine.ETwitterRequestMethod
enum class Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,

};

// Enum Engine.EUserDefinedStructureStatus
enum class Engine_EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,

};

// Enum Engine.EUIScalingRule
enum class Engine_EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5,

};

// Enum Engine.ERenderFocusRule
enum class Engine_ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4,

};

// Enum Engine.EVectorFieldConstructionOp
enum class Engine_EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,

};

// Enum Engine.PageTableFormat
enum class Engine_EPageTableFormat : uint8_t
{
	PTF                            = 0,
	PTF01                          = 1,
	PTF_MAX                        = 2,

};

// Enum Engine.EWindSourceType
enum class Engine_EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	EWindSourceType__Point         = 1,
	EWindSourceType__EWindSourceType_MAX = 2,

};

// Enum Engine.EPSCPoolMethod
enum class Engine_EPSCPoolMethod : uint8_t
{
	EPSCPoolMethod__None           = 0,
	EPSCPoolMethod__AutoRelease    = 1,
	EPSCPoolMethod__ManualRelease  = 2,
	EPSCPoolMethod__ManualRelease_OnComplete = 3,
	EPSCPoolMethod__FreeInPool     = 4,
	EPSCPoolMethod__EPSCPoolMethod_MAX = 5,

};

// Enum Engine.EVolumeLightingMethod
enum class Engine_EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2,

};

// Enum Engine.EVisibilityAggressiveness
enum class Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.DistributionLookupTable
// 0x0000
struct FDistributionLookupTable
{

};

// ScriptStruct Engine.RawDistribution
// 0x0000
struct FRawDistribution
{

};

// ScriptStruct Engine.FloatDistribution
// 0x0000
struct FFloatDistribution
{

};

// ScriptStruct Engine.VectorDistribution
// 0x0000
struct FVectorDistribution
{

};

// ScriptStruct Engine.Vector4Distribution
// 0x0000
struct FVector4Distribution
{

};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0000
struct FFloatRK4SpringInterpolator
{

};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0000
struct FVectorRK4SpringInterpolator
{

};

// ScriptStruct Engine.FormatArgumentData
// 0x0000
struct FFormatArgumentData
{

};

// ScriptStruct Engine.ExpressionInput
// 0x0000
struct FExpressionInput
{

};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0000
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.ExpressionOutput
// 0x0000
struct FExpressionOutput
{

};

// ScriptStruct Engine.MaterialInput
// 0x0000
struct FMaterialInput
{

};

// ScriptStruct Engine.ColorMaterialInput
// 0x0000
struct FColorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0000
struct FScalarMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0000
struct FVectorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0000
struct FVector2MaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.HitResult
// 0x0000
struct FHitResult
{

};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0000
struct FBranchingPointNotifyPayload
{

};

// ScriptStruct Engine.SimpleMemberReference
// 0x0000
struct FSimpleMemberReference
{

};

// ScriptStruct Engine.TickFunction
// 0x0000
struct FTickFunction
{

};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0000
struct FActorComponentTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SubtitleCue
// 0x0000
struct FSubtitleCue
{

};

// ScriptStruct Engine.InterpControlPoint
// 0x0000
struct FInterpControlPoint
{

};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0000
struct FPlatformInterfaceDelegateResult
{

};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0000
struct FPlatformInterfaceData
{

};

// ScriptStruct Engine.DebugFloatHistory
// 0x0000
struct FDebugFloatHistory
{

};

// ScriptStruct Engine.LatentActionInfo
// 0x0000
struct FLatentActionInfo
{

};

// ScriptStruct Engine.TimerHandle
// 0x0000
struct FTimerHandle
{

};

// ScriptStruct Engine.CollisionProfileName
// 0x0000
struct FCollisionProfileName
{

};

// ScriptStruct Engine.GenericStruct
// 0x0000
struct FGenericStruct
{

};

// ScriptStruct Engine.UserActivity
// 0x0000
struct FUserActivity
{

};

// ScriptStruct Engine.DamageEvent
// 0x0000
struct FDamageEvent
{

};

// ScriptStruct Engine.TableRowBase
// 0x0000
struct FTableRowBase
{

};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0000
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{

};

// ScriptStruct Engine.DirectoryPath
// 0x0000
struct FDirectoryPath
{

};

// ScriptStruct Engine.PerPlatformFloat
// 0x0000
struct FPerPlatformFloat
{

};

// ScriptStruct Engine.PerPlatformInt
// 0x0000
struct FPerPlatformInt
{

};

// ScriptStruct Engine.PerPlatformBool
// 0x0000
struct FPerPlatformBool
{

};

// ScriptStruct Engine.AnimNode_Base
// 0x0000
struct FAnimNode_Base
{

};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0000
struct FInputScaleBiasClamp
{

};

// ScriptStruct Engine.InputRange
// 0x0000
struct FInputRange
{

};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0000
struct FInputAlphaBoolBlend
{

};

// ScriptStruct Engine.AlphaBlend
// 0x0000
struct FAlphaBlend
{

};

// ScriptStruct Engine.InputScaleBias
// 0x0000
struct FInputScaleBias
{

};

// ScriptStruct Engine.PoseLinkBase
// 0x0000
struct FPoseLinkBase
{

};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0000
struct FAnimInstanceProxy
{

};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0000
struct FRuntimeFloatCurve
{

};

// ScriptStruct Engine.IndexedCurve
// 0x0000
struct FIndexedCurve
{

};

// ScriptStruct Engine.KeyHandleMap
// 0x0000
struct FKeyHandleMap
{

};

// ScriptStruct Engine.RealCurve
// 0x0000
struct FRealCurve : public FIndexedCurve
{

};

// ScriptStruct Engine.RichCurve
// 0x0000
struct FRichCurve : public FRealCurve
{

};

// ScriptStruct Engine.RichCurveKey
// 0x0000
struct FRichCurveKey
{

};

// ScriptStruct Engine.NavigationLinkBase
// 0x0000
struct FNavigationLinkBase
{

};

// ScriptStruct Engine.NavAgentSelector
// 0x0000
struct FNavAgentSelector
{

};

// ScriptStruct Engine.InterpolationParameter
// 0x0000
struct FInterpolationParameter
{

};

// ScriptStruct Engine.PoseLink
// 0x0000
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.BlendSampleData
// 0x0000
struct FBlendSampleData
{

};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0000
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{

};

// ScriptStruct Engine.InteriorSettings
// 0x0000
struct FInteriorSettings
{

};

// ScriptStruct Engine.ReverbSettings
// 0x0000
struct FReverbSettings
{

};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0000
struct FInputActionKeyMapping
{

};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0000
struct FInputAxisKeyMapping
{

};

// ScriptStruct Engine.LightingChannels
// 0x0000
struct FLightingChannels
{

};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0000
struct FKeyHandleLookupTable
{

};

// ScriptStruct Engine.BoneReference
// 0x0000
struct FBoneReference
{

};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0000
struct FPerBoneBlendWeight
{

};

// ScriptStruct Engine.InputBlendPose
// 0x0000
struct FInputBlendPose
{

};

// ScriptStruct Engine.BranchFilter
// 0x0000
struct FBranchFilter
{

};

// ScriptStruct Engine.PoseSnapshot
// 0x0000
struct FPoseSnapshot
{

};

// ScriptStruct Engine.AnimCurveParam
// 0x0000
struct FAnimCurveParam
{

};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x0000
struct FActorComponentInstanceData
{

};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0000
struct FActorComponentDuplicatedObjectData
{

};

// ScriptStruct Engine.SceneComponentInstanceData
// 0x0000
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{

};

// ScriptStruct Engine.RepAttachment
// 0x0000
struct FRepAttachment
{

};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepMovement
// 0x0000
struct FRepMovement
{

};

// ScriptStruct Engine.ActorTickFunction
// 0x0000
struct FActorTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.KAggregateGeom
// 0x0000
struct FKAggregateGeom
{

};

// ScriptStruct Engine.KShapeElem
// 0x0000
struct FKShapeElem
{

};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0000
struct FKTaperedCapsuleElem : public FKShapeElem
{

};

// ScriptStruct Engine.KConvexElem
// 0x0000
struct FKConvexElem : public FKShapeElem
{

};

// ScriptStruct Engine.KSphylElem
// 0x0000
struct FKSphylElem : public FKShapeElem
{

};

// ScriptStruct Engine.KBoxElem
// 0x0000
struct FKBoxElem : public FKShapeElem
{

};

// ScriptStruct Engine.KSphereElem
// 0x0000
struct FKSphereElem : public FKShapeElem
{

};

// ScriptStruct Engine.AnimationGroupReference
// 0x0000
struct FAnimationGroupReference
{

};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0000
struct FRootMotionMovementParams
{

};

// ScriptStruct Engine.AnimGroupInstance
// 0x0000
struct FAnimGroupInstance
{

};

// ScriptStruct Engine.AnimTickRecord
// 0x0000
struct FAnimTickRecord
{

};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0000
struct FMarkerSyncAnimPosition
{

};

// ScriptStruct Engine.BlendFilter
// 0x0000
struct FBlendFilter
{

};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0000
struct FAnimationRecordingSettings
{

};

// ScriptStruct Engine.ComponentSpacePose
// 0x0000
struct FComponentSpacePose
{

};

// ScriptStruct Engine.LocalSpacePose
// 0x0000
struct FLocalSpacePose
{

};

// ScriptStruct Engine.NamedTransform
// 0x0000
struct FNamedTransform
{

};

// ScriptStruct Engine.NamedColor
// 0x0000
struct FNamedColor
{

};

// ScriptStruct Engine.NamedVector
// 0x0000
struct FNamedVector
{

};

// ScriptStruct Engine.NamedFloat
// 0x0000
struct FNamedFloat
{

};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0000
struct FAnimParentNodeAssetOverride
{

};

// ScriptStruct Engine.AnimGroupInfo
// 0x0000
struct FAnimGroupInfo
{

};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0000
struct FAnimBlueprintDebugData
{

};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0000
struct FAnimationFrameSnapshot
{

};

// ScriptStruct Engine.StateMachineDebugData
// 0x0000
struct FStateMachineDebugData
{

};

// ScriptStruct Engine.AnimTrack
// 0x0000
struct FAnimTrack
{

};

// ScriptStruct Engine.AnimSegment
// 0x0000
struct FAnimSegment
{

};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0000
struct FRootMotionExtractionStep
{

};

// ScriptStruct Engine.RawCurveTracks
// 0x0000
struct FRawCurveTracks
{

};

// ScriptStruct Engine.AnimCurveBase
// 0x0000
struct FAnimCurveBase
{

};

// ScriptStruct Engine.SmartName
// 0x0000
struct FSmartName
{

};

// ScriptStruct Engine.FloatCurve
// 0x0000
struct FFloatCurve : public FAnimCurveBase
{

};

// ScriptStruct Engine.TransformCurve
// 0x0000
struct FTransformCurve : public FAnimCurveBase
{

};

// ScriptStruct Engine.VectorCurve
// 0x0000
struct FVectorCurve : public FAnimCurveBase
{

};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0000
struct FSlotEvaluationPose
{

};

// ScriptStruct Engine.A2Pose
// 0x0000
struct FA2Pose
{

};

// ScriptStruct Engine.A2CSPose
// 0x0000
struct FA2CSPose : public FA2Pose
{

};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0000
struct FQueuedDrawDebugItem
{

};

// ScriptStruct Engine.AnimLinkableElement
// 0x0000
struct FAnimLinkableElement
{

};

// ScriptStruct Engine.AnimMontageInstance
// 0x0000
struct FAnimMontageInstance
{

};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0000
struct FAnimNotifyEvent : public FAnimLinkableElement
{

};

// ScriptStruct Engine.BranchingPointMarker
// 0x0000
struct FBranchingPointMarker
{

};

// ScriptStruct Engine.BranchingPoint
// 0x0000
struct FBranchingPoint : public FAnimLinkableElement
{

};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0000
struct FSlotAnimationTrack
{

};

// ScriptStruct Engine.CompositeSection
// 0x0000
struct FCompositeSection : public FAnimLinkableElement
{

};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0000
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0000
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0000
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0000
struct FAnimNode_StateMachine : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0000
struct FAnimationPotentialTransition
{

};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0000
struct FAnimationActiveTransitionEntry
{

};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0000
struct FAnimNode_SubInput : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0000
struct FAnimNode_SubInstance : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0000
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0000
struct FAnimNode_TransitionResult : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0000
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{

};

// ScriptStruct Engine.ExposedValueHandler
// 0x0000
struct FExposedValueHandler
{

};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0000
struct FExposedValueCopyRecord
{

};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0000
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0000
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0000
struct FAnimNotifyQueue
{

};

// ScriptStruct Engine.AnimNotifyArray
// 0x0000
struct FAnimNotifyArray
{

};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0000
struct FAnimNotifyEventReference
{

};

// ScriptStruct Engine.CompressedSegment
// 0x0000
struct FCompressedSegment
{

};

// ScriptStruct Engine.CompressedTrack
// 0x0000
struct FCompressedTrack
{

};

// ScriptStruct Engine.CurveTrack
// 0x0000
struct FCurveTrack
{

};

// ScriptStruct Engine.ScaleTrack
// 0x0000
struct FScaleTrack
{

};

// ScriptStruct Engine.RotationTrack
// 0x0000
struct FRotationTrack
{

};

// ScriptStruct Engine.TranslationTrack
// 0x0000
struct FTranslationTrack
{

};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0000
struct FTrackToSkeletonMap
{

};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0000
struct FAnimSequenceTrackContainer
{

};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0000
struct FRawAnimSequenceTrack
{

};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0000
struct FAnimSetMeshLinkup
{

};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0000
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0000
struct FAnimNode_SingleNode : public FAnimNode_Base
{

};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0000
struct FBakedAnimationStateMachine
{

};

// ScriptStruct Engine.AnimationStateBase
// 0x0000
struct FAnimationStateBase
{

};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0000
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{

};

// ScriptStruct Engine.BakedAnimationState
// 0x0000
struct FBakedAnimationState
{

};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0000
struct FBakedStateExitTransition
{

};

// ScriptStruct Engine.AnimationState
// 0x0000
struct FAnimationState : public FAnimationStateBase
{

};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0000
struct FAnimationTransitionRule
{

};

// ScriptStruct Engine.MarkerSyncData
// 0x0000
struct FMarkerSyncData
{

};

// ScriptStruct Engine.AnimSyncMarker
// 0x0000
struct FAnimSyncMarker
{

};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0000
struct FAnimNotifyTrack
{

};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0000
struct FPerBoneBlendWeights
{

};

// ScriptStruct Engine.AssetImportInfo
// 0x0000
struct FAssetImportInfo
{

};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x0000
struct FPrimaryAssetRulesCustomOverride
{

};

// ScriptStruct Engine.PrimaryAssetRules
// 0x0000
struct FPrimaryAssetRules
{

};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x0000
struct FPrimaryAssetRulesOverride
{

};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0000
struct FAssetManagerRedirect
{

};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0000
struct FPrimaryAssetTypeInfo
{

};

// ScriptStruct Engine.AssetMapping
// 0x0000
struct FAssetMapping
{

};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// 0x0000
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x0000
struct FAtmospherePrecomputeParameters
{

};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x0000
struct FBaseAttenuationSettings
{

};

// ScriptStruct Engine.AudioComponentParam
// 0x0000
struct FAudioComponentParam
{

};

// ScriptStruct Engine.AudioQualitySettings
// 0x0000
struct FAudioQualitySettings
{

};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0000
struct FLaunchOnTestSettings
{

};

// ScriptStruct Engine.FilePath
// 0x0000
struct FFilePath
{

};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0000
struct FEditorMapPerformanceTestDefinition
{

};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x0000
struct FBuildPromotionTestSettings
{

};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0000
struct FBuildPromotionNewProjectSettings
{

};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0000
struct FBuildPromotionOpenAssetSettings
{

};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0000
struct FBuildPromotionImportWorkflowSettings
{

};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0000
struct FEditorImportWorkflowDefinition
{

};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0000
struct FImportFactorySettingValues
{

};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0000
struct FBlueprintEditorPromotionSettings
{

};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0000
struct FParticleEditorPromotionSettings
{

};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0000
struct FMaterialEditorPromotionSettings
{

};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0000
struct FEditorImportExportTestDefinition
{

};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0000
struct FExternalToolDefinition
{

};

// ScriptStruct Engine.NavAvoidanceData
// 0x0000
struct FNavAvoidanceData
{

};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0000
struct FBlendProfileBoneEntry
{

};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0000
struct FPerBoneInterpolation
{

};

// ScriptStruct Engine.GridBlendSample
// 0x0000
struct FGridBlendSample
{

};

// ScriptStruct Engine.EditorElement
// 0x0000
struct FEditorElement
{

};

// ScriptStruct Engine.BlendSample
// 0x0000
struct FBlendSample
{

};

// ScriptStruct Engine.BlendParameter
// 0x0000
struct FBlendParameter
{

};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0000
struct FBPEditorBookmarkNode
{

};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0000
struct FEditedDocumentInfo
{

};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0000
struct FBPInterfaceDescription
{

};

// ScriptStruct Engine.BPVariableDescription
// 0x0000
struct FBPVariableDescription
{

};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0000
struct FBPVariableMetaDataEntry
{

};

// ScriptStruct Engine.EdGraphPinType
// 0x0000
struct FEdGraphPinType
{

};

// ScriptStruct Engine.EdGraphTerminalType
// 0x0000
struct FEdGraphTerminalType
{

};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0000
struct FBlueprintMacroCosmeticInfo
{

};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0000
struct FCompilerNativizationOptions
{

};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0000
struct FBlueprintCookedComponentInstancingData
{

};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0000
struct FBlueprintComponentChangedPropertyInfo
{

};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0000
struct FEventGraphFastCallPair
{

};

// ScriptStruct Engine.BlueprintDebugData
// 0x0000
struct FBlueprintDebugData
{

};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0000
struct FPointerToUberGraphFrame
{

};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0000
struct FDebuggingInfoForSingleFunction
{

};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0000
struct FNodeToCodeAssociation
{

};

// ScriptStruct Engine.BodyInstance
// 0x0000
struct FBodyInstance
{

};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0000
struct FWalkableSlopeOverride
{

};

// ScriptStruct Engine.CollisionResponse
// 0x0000
struct FCollisionResponse
{

};

// ScriptStruct Engine.ResponseChannel
// 0x0000
struct FResponseChannel
{

};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0000
struct FCollisionResponseContainer
{

};

// ScriptStruct Engine.AnimCurveType
// 0x0000
struct FAnimCurveType
{

};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0000
struct FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0000
struct FBookmark2DJumpToSettings
{

};

// ScriptStruct Engine.GeomSelection
// 0x0000
struct FGeomSelection
{

};

// ScriptStruct Engine.BuilderPoly
// 0x0000
struct FBuilderPoly
{

};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0000
struct FCachedAnimTransitionData
{

};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x0000
struct FCachedAnimRelevancyData
{

};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0000
struct FCachedAnimAssetPlayerData
{

};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0000
struct FCachedAnimStateArray
{

};

// ScriptStruct Engine.CachedAnimStateData
// 0x0000
struct FCachedAnimStateData
{

};

// ScriptStruct Engine.PooledCameraShakes
// 0x0000
struct FPooledCameraShakes
{

};

// ScriptStruct Engine.VOscillator
// 0x0000
struct FVOscillator
{

};

// ScriptStruct Engine.FOscillator
// 0x0000
struct FFOscillator
{

};

// ScriptStruct Engine.ROscillator
// 0x0000
struct FROscillator
{

};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0000
struct FDummySpacerCameraTypes
{

};

// ScriptStruct Engine.MinimalViewInfo
// 0x0000
struct FMinimalViewInfo
{

};

// ScriptStruct Engine.PostProcessSettings
// 0x0000
struct FPostProcessSettings
{

};

// ScriptStruct Engine.WeightedBlendables
// 0x0000
struct FWeightedBlendables
{

};

// ScriptStruct Engine.WeightedBlendable
// 0x0000
struct FWeightedBlendable
{

};

// ScriptStruct Engine.CanvasIcon
// 0x0000
struct FCanvasIcon
{

};

// ScriptStruct Engine.WrappedStringElement
// 0x0000
struct FWrappedStringElement
{

};

// ScriptStruct Engine.TextSizingParameters
// 0x0000
struct FTextSizingParameters
{

};

// ScriptStruct Engine.BasedMovementInfo
// 0x0000
struct FBasedMovementInfo
{

};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0000
struct FSimulatedRootMotionReplicatedMove
{

};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0000
struct FRepRootMotionMontage
{

};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0000
struct FRootMotionSourceGroup
{

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0000
struct FRootMotionSourceSettings
{

};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0000
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.FindFloorResult
// 0x0000
struct FFindFloorResult
{

};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0x0000
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x0000
struct FChildActorAttachedActorInfo
{

};

// ScriptStruct Engine.CustomProfile
// 0x0000
struct FCustomProfile
{

};

// ScriptStruct Engine.CustomChannelSetup
// 0x0000
struct FCustomChannelSetup
{

};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0000
struct FCollisionResponseTemplate
{

};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0000
struct FBlueprintComponentDelegateBinding
{

};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0000
struct FMeshUVChannelInfo
{

};

// ScriptStruct Engine.AutoCompleteNode
// 0x0000
struct FAutoCompleteNode
{

};

// ScriptStruct Engine.AngularDriveConstraint
// 0x0000
struct FAngularDriveConstraint
{

};

// ScriptStruct Engine.ConstraintDrive
// 0x0000
struct FConstraintDrive
{

};

// ScriptStruct Engine.LinearDriveConstraint
// 0x0000
struct FLinearDriveConstraint
{

};

// ScriptStruct Engine.ConstraintInstance
// 0x0000
struct FConstraintInstance
{

};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0000
struct FConstraintProfileProperties
{

};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0000
struct FConstraintBaseParams
{

};

// ScriptStruct Engine.TwistConstraint
// 0x0000
struct FTwistConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.ConeConstraint
// 0x0000
struct FConeConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.LinearConstraint
// 0x0000
struct FLinearConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0000
struct FCullDistanceSizePair
{

};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0000
struct FRuntimeCurveLinearColor
{

};

// ScriptStruct Engine.NamedCurveValue
// 0x0000
struct FNamedCurveValue
{

};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0000
struct FCurveTableRowHandle
{

};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0000
struct FDataTableCategoryHandle
{

};

// ScriptStruct Engine.DataTableRowHandle
// 0x0000
struct FDataTableRowHandle
{

};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0000
struct FDebugDisplayProperty
{

};

// ScriptStruct Engine.DebugTextInfo
// 0x0000
struct FDebugTextInfo
{

};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x0000
struct FRollbackNetStartupActorInfo
{

};

// ScriptStruct Engine.LevelNameAndTime
// 0x0000
struct FLevelNameAndTime
{

};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0000
struct FDialogueWaveParameter
{

};

// ScriptStruct Engine.DialogueContext
// 0x0000
struct FDialogueContext
{

};

// ScriptStruct Engine.DialogueContextMapping
// 0x0000
struct FDialogueContextMapping
{

};

// ScriptStruct Engine.RawDistributionFloat
// 0x0000
struct FRawDistributionFloat : public FRawDistribution
{

};

// ScriptStruct Engine.RawDistributionVector
// 0x0000
struct FRawDistributionVector : public FRawDistribution
{

};

// ScriptStruct Engine.GraphReference
// 0x0000
struct FGraphReference
{

};

// ScriptStruct Engine.EdGraphPinReference
// 0x0000
struct FEdGraphPinReference
{

};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0000
struct FEdGraphSchemaAction
{

};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0000
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{

};

// ScriptStruct Engine.PluginRedirect
// 0x0000
struct FPluginRedirect
{

};

// ScriptStruct Engine.StructRedirect
// 0x0000
struct FStructRedirect
{

};

// ScriptStruct Engine.ClassRedirect
// 0x0000
struct FClassRedirect
{

};

// ScriptStruct Engine.GameNameRedirect
// 0x0000
struct FGameNameRedirect
{

};

// ScriptStruct Engine.ScreenMessageString
// 0x0000
struct FScreenMessageString
{

};

// ScriptStruct Engine.DropNoteInfo
// 0x0000
struct FDropNoteInfo
{

};

// ScriptStruct Engine.StatColorMapping
// 0x0000
struct FStatColorMapping
{

};

// ScriptStruct Engine.StatColorMapEntry
// 0x0000
struct FStatColorMapEntry
{

};

// ScriptStruct Engine.WorldContext
// 0x0000
struct FWorldContext
{

};

// ScriptStruct Engine.NamedNetDriver
// 0x0000
struct FNamedNetDriver
{

};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0000
struct FLevelStreamingStatus
{

};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0000
struct FFullyLoadedPackagesInfo
{

};

// ScriptStruct Engine.URL
// 0x0000
struct FURL
{

};

// ScriptStruct Engine.NetDriverDefinition
// 0x0000
struct FNetDriverDefinition
{

};

// ScriptStruct Engine.ExposureSettings
// 0x0000
struct FExposureSettings
{

};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0000
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.TickPrerequisite
// 0x0000
struct FTickPrerequisite
{

};

// ScriptStruct Engine.CanvasUVTri
// 0x0000
struct FCanvasUVTri
{

};

// ScriptStruct Engine.FontRenderInfo
// 0x0000
struct FFontRenderInfo
{

};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0000
struct FDepthFieldGlowInfo
{

};

// ScriptStruct Engine.Redirector
// 0x0000
struct FRedirector
{

};

// ScriptStruct Engine.CollectionReference
// 0x0000
struct FCollectionReference
{

};

// ScriptStruct Engine.ComponentReference
// 0x0000
struct FComponentReference
{

};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0000
struct FConstrainComponentPropName
{

};

// ScriptStruct Engine.RadialDamageEvent
// 0x0000
struct FRadialDamageEvent : public FDamageEvent
{

};

// ScriptStruct Engine.RadialDamageParams
// 0x0000
struct FRadialDamageParams
{

};

// ScriptStruct Engine.PointDamageEvent
// 0x0000
struct FPointDamageEvent : public FDamageEvent
{

};

// ScriptStruct Engine.MeshBuildSettings
// 0x0000
struct FMeshBuildSettings
{

};

// ScriptStruct Engine.POV
// 0x0000
struct FPOV
{

};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0000
struct FAnimUpdateRateParameters
{

};

// ScriptStruct Engine.AnimSlotDesc
// 0x0000
struct FAnimSlotDesc
{

};

// ScriptStruct Engine.AnimSlotInfo
// 0x0000
struct FAnimSlotInfo
{

};

// ScriptStruct Engine.MTDResult
// 0x0000
struct FMTDResult
{

};

// ScriptStruct Engine.OverlapResult
// 0x0000
struct FOverlapResult
{

};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0000
struct FPrimitiveMaterialRef
{

};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0000
struct FSwarmDebugOptions
{

};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0000
struct FLightmassDebugOptions
{

};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0000
struct FLightmassPrimitiveSettings
{

};

// ScriptStruct Engine.LightmassLightSettings
// 0x0000
struct FLightmassLightSettings
{

};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0000
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.BasedPosition
// 0x0000
struct FBasedPosition
{

};

// ScriptStruct Engine.FractureEffect
// 0x0000
struct FFractureEffect
{

};

// ScriptStruct Engine.CollisionImpactData
// 0x0000
struct FCollisionImpactData
{

};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0000
struct FRigidBodyContactInfo
{

};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0000
struct FRigidBodyErrorCorrection
{

};

// ScriptStruct Engine.RigidBodyState
// 0x0000
struct FRigidBodyState
{

};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x0000
struct FExponentialHeightFogData
{

};

// ScriptStruct Engine.FontCharacter
// 0x0000
struct FFontCharacter
{

};

// ScriptStruct Engine.FontImportOptionsData
// 0x0000
struct FFontImportOptionsData
{

};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0000
struct FActiveForceFeedbackEffect
{

};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x0000
struct FForceFeedbackParameters
{

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0000
struct FForceFeedbackChannelDetails
{

};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x0000
struct FPredictProjectilePathResult
{

};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x0000
struct FPredictProjectilePathPointData
{

};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0000
struct FPredictProjectilePathParams
{

};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0000
struct FActiveHapticFeedbackEffect
{

};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0000
struct FHapticFeedbackDetails_Curve
{

};

// ScriptStruct Engine.ClusterNode
// 0x0000
struct FClusterNode
{

};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0000
struct FClusterNode_DEPRECATED
{

};

// ScriptStruct Engine.HLODProxyMesh
// 0x0000
struct FHLODProxyMesh
{

};

// ScriptStruct Engine.SoundModulation
// 0x0000
struct FSoundModulation
{

};

// ScriptStruct Engine.ImportanceTexture
// 0x0000
struct FImportanceTexture
{

};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0000
struct FComponentOverrideRecord
{

};

// ScriptStruct Engine.ComponentKey
// 0x0000
struct FComponentKey
{

};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0000
struct FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0000
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0000
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0000
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0000
struct FCachedKeyToActionInfo
{

};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0000
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x0000
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x0000
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0000
struct FInstancedStaticMeshInstanceData
{

};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x0000
struct FInstancedStaticMeshLightMapInstanceData
{

};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0000
struct FInstancedStaticMeshMappingInfo
{

};

// ScriptStruct Engine.IntegralCurve
// 0x0000
struct FIntegralCurve : public FIndexedCurve
{

};

// ScriptStruct Engine.IntegralKey
// 0x0000
struct FIntegralKey
{

};

// ScriptStruct Engine.CurveEdTab
// 0x0000
struct FCurveEdTab
{

};

// ScriptStruct Engine.CurveEdEntry
// 0x0000
struct FCurveEdEntry
{

};

// ScriptStruct Engine.InterpEdSelKey
// 0x0000
struct FInterpEdSelKey
{

};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0000
struct FCameraPreviewInfo
{

};

// ScriptStruct Engine.SubTrackGroup
// 0x0000
struct FSubTrackGroup
{

};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0000
struct FSupportedSubTrackInfo
{

};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0000
struct FAnimControlTrackKey
{

};

// ScriptStruct Engine.BoolTrackKey
// 0x0000
struct FBoolTrackKey
{

};

// ScriptStruct Engine.DirectorTrackCut
// 0x0000
struct FDirectorTrackCut
{

};

// ScriptStruct Engine.EventTrackKey
// 0x0000
struct FEventTrackKey
{

};

// ScriptStruct Engine.InterpLookupTrack
// 0x0000
struct FInterpLookupTrack
{

};

// ScriptStruct Engine.InterpLookupPoint
// 0x0000
struct FInterpLookupPoint
{

};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x0000
struct FParticleReplayTrackKey
{

};

// ScriptStruct Engine.SoundTrackKey
// 0x0000
struct FSoundTrackKey
{

};

// ScriptStruct Engine.ToggleTrackKey
// 0x0000
struct FToggleTrackKey
{

};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0000
struct FVisibilityTrackKey
{

};

// ScriptStruct Engine.VectorSpringState
// 0x0000
struct FVectorSpringState
{

};

// ScriptStruct Engine.FloatSpringState
// 0x0000
struct FFloatSpringState
{

};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0000
struct FDrawToRenderTargetContext
{

};

// ScriptStruct Engine.LatentActionManager
// 0x0000
struct FLatentActionManager
{

};

// ScriptStruct Engine.LayerActorStats
// 0x0000
struct FLayerActorStats
{

};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0000
struct FReplicatedStaticActorDestructionInfo
{

};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0000
struct FLevelSimplificationDetails
{

};

// ScriptStruct Engine.MaterialProxySettings
// 0x0000
struct FMaterialProxySettings
{

};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0000
struct FStreamableTextureInstance
{

};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0000
struct FDynamicTextureInstance : public FStreamableTextureInstance
{

};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x0000
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.BatchedPoint
// 0x0000
struct FBatchedPoint
{

};

// ScriptStruct Engine.BatchedLine
// 0x0000
struct FBatchedLine
{

};

// ScriptStruct Engine.ClientReceiveData
// 0x0000
struct FClientReceiveData
{

};

// ScriptStruct Engine.ParameterGroupData
// 0x0000
struct FParameterGroupData
{

};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0000
struct FMaterialParameterCollectionInfo
{

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0000
struct FMaterialFunctionInfo
{

};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0000
struct FMaterialSpriteElement
{

};

// ScriptStruct Engine.CustomInput
// 0x0000
struct FCustomInput
{

};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0000
struct FFunctionExpressionOutput
{

};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0000
struct FFunctionExpressionInput
{

};

// ScriptStruct Engine.FontParameterValue
// 0x0000
struct FFontParameterValue
{

};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0000
struct FMaterialParameterInfo
{

};

// ScriptStruct Engine.TextureParameterValue
// 0x0000
struct FTextureParameterValue
{

};

// ScriptStruct Engine.VectorParameterValue
// 0x0000
struct FVectorParameterValue
{

};

// ScriptStruct Engine.ScalarParameterValue
// 0x0000
struct FScalarParameterValue
{

};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0000
struct FScalarParameterAtlasInstanceData
{

};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0000
struct FMaterialInstanceBasePropertyOverrides
{

};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0000
struct FMaterialTextureInfo
{

};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0000
struct FLightmassMaterialInterfaceSettings
{

};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0000
struct FMaterialLayersFunctions
{

};

// ScriptStruct Engine.CollectionParameterBase
// 0x0000
struct FCollectionParameterBase
{

};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0000
struct FCollectionVectorParameter : public FCollectionParameterBase
{

};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0000
struct FCollectionScalarParameter : public FCollectionParameterBase
{

};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0000
struct FInterpGroupActorInfo
{

};

// ScriptStruct Engine.CameraCutInfo
// 0x0000
struct FCameraCutInfo
{

};

// ScriptStruct Engine.MemberReference
// 0x0000
struct FMemberReference
{

};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0000
struct FMeshInstancingSettings
{

};

// ScriptStruct Engine.MeshMergingSettings
// 0x0000
struct FMeshMergingSettings
{

};

// ScriptStruct Engine.MeshProxySettings
// 0x0000
struct FMeshProxySettings
{

};

// ScriptStruct Engine.MeshReductionSettings
// 0x0000
struct FMeshReductionSettings
{

};

// ScriptStruct Engine.PurchaseInfo
// 0x0000
struct FPurchaseInfo
{

};

// ScriptStruct Engine.NameCurve
// 0x0000
struct FNameCurve : public FIndexedCurve
{

};

// ScriptStruct Engine.NameCurveKey
// 0x0000
struct FNameCurveKey
{

};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0000
struct FNavAvoidanceMask
{

};

// ScriptStruct Engine.MovementProperties
// 0x0000
struct FMovementProperties
{

};

// ScriptStruct Engine.NavAgentProperties
// 0x0000
struct FNavAgentProperties : public FMovementProperties
{

};

// ScriptStruct Engine.NavDataConfig
// 0x0000
struct FNavDataConfig : public FNavAgentProperties
{

};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0000
struct FNavigationSegmentLink : public FNavigationLinkBase
{

};

// ScriptStruct Engine.NavigationLink
// 0x0000
struct FNavigationLink : public FNavigationLinkBase
{

};

// ScriptStruct Engine.ChannelDefinition
// 0x0000
struct FChannelDefinition
{

};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0000
struct FPacketSimulationSettings
{

};

// ScriptStruct Engine.FastArraySerializer
// 0x0000
struct FFastArraySerializer
{

};

// ScriptStruct Engine.FastArraySerializerItem
// 0x0000
struct FFastArraySerializerItem
{

};

// ScriptStruct Engine.NodeItem
// 0x0000
struct FNodeItem
{

};

// ScriptStruct Engine.ParticleBurst
// 0x0000
struct FParticleBurst
{

};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0000
struct FParticleRandomSeedInfo
{

};

// ScriptStruct Engine.ParticleCurvePair
// 0x0000
struct FParticleCurvePair
{

};

// ScriptStruct Engine.BeamModifierOptions
// 0x0000
struct FBeamModifierOptions
{

};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0000
struct FParticleEvent_GenerateInfo
{

};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0000
struct FLocationBoneSocketInfo
{

};

// ScriptStruct Engine.OrbitOptions
// 0x0000
struct FOrbitOptions
{

};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0000
struct FEmitterDynamicParameter
{

};

// ScriptStruct Engine.BeamTargetData
// 0x0000
struct FBeamTargetData
{

};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0000
struct FGPUSpriteResourceData
{

};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x0000
struct FGPUSpriteEmitterInfo
{

};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0000
struct FGPUSpriteLocalVectorFieldInfo
{

};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0000
struct FNamedEmitterMaterial
{

};

// ScriptStruct Engine.LODSoloTrack
// 0x0000
struct FLODSoloTrack
{

};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0000
struct FParticleSystemLOD
{

};

// ScriptStruct Engine.ParticleSysParam
// 0x0000
struct FParticleSysParam
{

};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0x0000
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0000
struct FParticleSystemReplayFrame
{

};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0000
struct FParticleEmitterReplayFrame
{

};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0000
struct FPhysicalAnimationData
{

};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0000
struct FTireFrictionScalePair
{

};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x0000
struct FPhysicalAnimationProfile
{

};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0000
struct FPhysicsConstraintProfileHandle
{

};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x0000
struct FPhysicalSurfaceName
{

};

// ScriptStruct Engine.DelegateArray
// 0x0000
struct FDelegateArray
{

};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0000
struct FViewTargetTransitionParams
{

};

// ScriptStruct Engine.TViewTarget
// 0x0000
struct FTViewTarget
{

};

// ScriptStruct Engine.CameraCacheEntry
// 0x0000
struct FCameraCacheEntry
{

};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0000
struct FUpdateLevelVisibilityLevelInfo
{

};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0000
struct FUpdateLevelStreamingLevelStatus
{

};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0000
struct FInputAxisConfigEntry
{

};

// ScriptStruct Engine.InputAxisProperties
// 0x0000
struct FInputAxisProperties
{

};

// ScriptStruct Engine.KeyBind
// 0x0000
struct FKeyBind
{

};

// ScriptStruct Engine.PlayerMuteList
// 0x0000
struct FPlayerMuteList
{

};

// ScriptStruct Engine.PoseDataContainer
// 0x0000
struct FPoseDataContainer
{

};

// ScriptStruct Engine.PoseData
// 0x0000
struct FPoseData
{

};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0000
struct FPreviewAssetAttachContainer
{

};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0000
struct FPreviewAttachedObjectPair
{

};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0000
struct FPreviewMeshCollectionEntry
{

};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0x0000
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0000
struct FSpriteCategoryInfo
{

};

// ScriptStruct Engine.CompressedRichCurve
// 0x0000
struct FCompressedRichCurve
{

};

// ScriptStruct Engine.TransformBase
// 0x0000
struct FTransformBase
{

};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0000
struct FTransformBaseConstraint
{

};

// ScriptStruct Engine.RigTransformConstraint
// 0x0000
struct FRigTransformConstraint
{

};

// ScriptStruct Engine.Node
// 0x0000
struct FNode
{

};

// ScriptStruct Engine.RootMotionSource
// 0x0000
struct FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0000
struct FRootMotionFinishVelocitySettings
{

};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0000
struct FRootMotionSourceStatus
{

};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0000
struct FRootMotionSource_JumpForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0000
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0000
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0000
struct FRootMotionSource_RadialForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0000
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{

};

// ScriptStruct Engine.CameraExposureSettings
// 0x0000
struct FCameraExposureSettings
{

};

// ScriptStruct Engine.LensSettings
// 0x0000
struct FLensSettings
{

};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0000
struct FLensImperfectionSettings
{

};

// ScriptStruct Engine.LensBloomSettings
// 0x0000
struct FLensBloomSettings
{

};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0000
struct FConvolutionBloomSettings
{

};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0000
struct FGaussianSumBloomSettings
{

};

// ScriptStruct Engine.FilmStockSettings
// 0x0000
struct FFilmStockSettings
{

};

// ScriptStruct Engine.ColorGradingSettings
// 0x0000
struct FColorGradingSettings
{

};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0000
struct FColorGradePerRangeSettings
{

};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0000
struct FEngineShowFlagsSetting
{

};

// ScriptStruct Engine.SimpleCurve
// 0x0000
struct FSimpleCurve : public FRealCurve
{

};

// ScriptStruct Engine.SimpleCurveKey
// 0x0000
struct FSimpleCurveKey
{

};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0000
struct FSingleAnimationPlayData
{

};

// ScriptStruct Engine.SkeletalMaterial
// 0x0000
struct FSkeletalMaterial
{

};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0000
struct FClothingAssetData_Legacy
{

};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0000
struct FClothPhysicsProperties_Legacy
{

};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0000
struct FSkeletalMeshLODInfo
{

};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0000
struct FSkeletalMeshOptimizationSettings
{

};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0000
struct FSkeletalMeshClothBuildParams
{

};

// ScriptStruct Engine.BoneMirrorExport
// 0x0000
struct FBoneMirrorExport
{

};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0000
struct FBoneMirrorInfo
{

};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0000
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0000
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0000
struct FSkeletalMeshLODGroupSettings
{

};

// ScriptStruct Engine.BoneFilter
// 0x0000
struct FBoneFilter
{

};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0000
struct FSkeletalMeshSamplingInfo
{

};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0000
struct FSkeletalMeshSamplingBuiltData
{

};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0000
struct FSkeletalMeshSamplingRegionBuiltData
{

};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0000
struct FSkeletalMeshSamplingLODBuiltData
{

};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0000
struct FSkeletalMeshSamplingRegion
{

};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x0000
struct FSkeletalMeshSamplingRegionBoneFilter
{

};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0000
struct FSkeletalMeshSamplingRegionMaterialFilter
{

};

// ScriptStruct Engine.VirtualBone
// 0x0000
struct FVirtualBone
{

};

// ScriptStruct Engine.AnimSlotGroup
// 0x0000
struct FAnimSlotGroup
{

};

// ScriptStruct Engine.RigConfiguration
// 0x0000
struct FRigConfiguration
{

};

// ScriptStruct Engine.NameMapping
// 0x0000
struct FNameMapping
{

};

// ScriptStruct Engine.BoneReductionSetting
// 0x0000
struct FBoneReductionSetting
{

};

// ScriptStruct Engine.ReferencePose
// 0x0000
struct FReferencePose
{

};

// ScriptStruct Engine.BoneNode
// 0x0000
struct FBoneNode
{

};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0000
struct FSkeletonToMeshLinkup
{

};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0000
struct FSkelMeshComponentLODInfo
{

};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0000
struct FSkelMeshSkinWeightInfo
{

};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0x0000
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.SmartNameContainer
// 0x0000
struct FSmartNameContainer
{

};

// ScriptStruct Engine.SmartNameMapping
// 0x0000
struct FSmartNameMapping
{

};

// ScriptStruct Engine.CurveMetaData
// 0x0000
struct FCurveMetaData
{

};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0000
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0000
struct FSoundAttenuationPluginSettings
{

};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0000
struct FPassiveSoundMixModifier
{

};

// ScriptStruct Engine.SoundClassProperties
// 0x0000
struct FSoundClassProperties
{

};

// ScriptStruct Engine.SoundClassEditorData
// 0x0000
struct FSoundClassEditorData
{

};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0000
struct FSoundConcurrencySettings
{

};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0000
struct FSoundNodeEditorData
{

};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0000
struct FSourceEffectChainEntry
{

};

// ScriptStruct Engine.SoundGroup
// 0x0000
struct FSoundGroup
{

};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0000
struct FSoundClassAdjuster
{

};

// ScriptStruct Engine.AudioEQEffect
// 0x0000
struct FAudioEQEffect
{

};

// ScriptStruct Engine.DistanceDatum
// 0x0000
struct FDistanceDatum
{

};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0000
struct FModulatorContinuousParams
{

};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x0000
struct FSoundSourceBusSendInfo
{

};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x0000
struct FSoundSubmixSendInfo
{

};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x0000
struct FSoundWaveEnvelopeTimeData
{

};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x0000
struct FSoundWaveSpectralTimeData
{

};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x0000
struct FSoundWaveSpectralDataEntry
{

};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x0000
struct FSoundWaveEnvelopeDataPerSound
{

};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x0000
struct FSoundWaveSpectralDataPerSound
{

};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x0000
struct FSoundWaveSpectralData
{

};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0000
struct FStreamedAudioPlatformData
{

};

// ScriptStruct Engine.SplineInstanceData
// 0x0000
struct FSplineInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.SplineCurves
// 0x0000
struct FSplineCurves
{

};

// ScriptStruct Engine.SplinePoint
// 0x0000
struct FSplinePoint
{

};

// ScriptStruct Engine.SplineMeshInstanceData
// 0x0000
struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.SplineMeshParams
// 0x0000
struct FSplineMeshParams
{

};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0000
struct FMaterialRemapIndex
{

};

// ScriptStruct Engine.StaticMaterial
// 0x0000
struct FStaticMaterial
{

};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0000
struct FAssetEditorOrbitCameraPosition
{

};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0000
struct FMeshSectionInfoMap
{

};

// ScriptStruct Engine.MeshSectionInfo
// 0x0000
struct FMeshSectionInfo
{

};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0000
struct FStaticMeshSourceModel
{

};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x0000
struct FStaticMeshOptimizationSettings
{

};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x0000
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{

};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x0000
struct FStreamingTextureBuildInfo
{

};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x0000
struct FStaticMeshVertexColorLODData
{

};

// ScriptStruct Engine.PaintedVertex
// 0x0000
struct FPaintedVertex
{

};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0000
struct FStaticMeshComponentLODInfo
{

};

// ScriptStruct Engine.StaticParameterSet
// 0x0000
struct FStaticParameterSet
{

};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0000
struct FStaticMaterialLayersParameter
{

};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0000
struct FStaticTerrainLayerWeightParameter
{

};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0000
struct FStaticComponentMaskParameter
{

};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0000
struct FStaticSwitchParameter
{

};

// ScriptStruct Engine.StringCurve
// 0x0000
struct FStringCurve : public FIndexedCurve
{

};

// ScriptStruct Engine.StringCurveKey
// 0x0000
struct FStringCurveKey
{

};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0000
struct FSubsurfaceProfileStruct
{

};

// ScriptStruct Engine.TexturePlatformData
// 0x0000
struct FTexturePlatformData
{

};

// ScriptStruct Engine.TextureSource
// 0x0000
struct FTextureSource
{

};

// ScriptStruct Engine.TextureLODGroup
// 0x0000
struct FTextureLODGroup
{

};

// ScriptStruct Engine.StreamingTexturePrimitiveInfo
// 0x0000
struct FStreamingTexturePrimitiveInfo
{

};

// ScriptStruct Engine.Timeline
// 0x0000
struct FTimeline
{

};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0000
struct FTimelineLinearColorTrack
{

};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0000
struct FTimelineFloatTrack
{

};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0000
struct FTimelineVectorTrack
{

};

// ScriptStruct Engine.TimelineEventEntry
// 0x0000
struct FTimelineEventEntry
{

};

// ScriptStruct Engine.TTTrackBase
// 0x0000
struct FTTTrackBase
{

};

// ScriptStruct Engine.TTPropertyTrack
// 0x0000
struct FTTPropertyTrack : public FTTTrackBase
{

};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0000
struct FTTLinearColorTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTVectorTrack
// 0x0000
struct FTTVectorTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTFloatTrack
// 0x0000
struct FTTFloatTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTEventTrack
// 0x0000
struct FTTEventTrack : public FTTTrackBase
{

};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0000
struct FTimeStretchCurveInstance
{

};

// ScriptStruct Engine.TimeStretchCurve
// 0x0000
struct FTimeStretchCurve
{

};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0000
struct FTimeStretchCurveMarker
{

};

// ScriptStruct Engine.TouchInputControl
// 0x0000
struct FTouchInputControl
{

};

// ScriptStruct Engine.HardwareCursorReference
// 0x0000
struct FHardwareCursorReference
{

};

// ScriptStruct Engine.VirtualTextureLayer
// 0x0000
struct FVirtualTextureLayer
{

};

// ScriptStruct Engine.VoiceSettings
// 0x0000
struct FVoiceSettings
{

};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x0000
struct FStreamingLevelsToConsider
{

};

// ScriptStruct Engine.LevelStreamingWrapper
// 0x0000
struct FLevelStreamingWrapper
{

};

// ScriptStruct Engine.LevelCollection
// 0x0000
struct FLevelCollection
{

};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0000
struct FEndPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0000
struct FStartPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.LevelViewportInfo
// 0x0000
struct FLevelViewportInfo
{

};

// ScriptStruct Engine.WorldPSCPool
// 0x0000
struct FWorldPSCPool
{

};

// ScriptStruct Engine.PSCPool
// 0x0000
struct FPSCPool
{

};

// ScriptStruct Engine.PSCPoolElem
// 0x0000
struct FPSCPoolElem
{

};

// ScriptStruct Engine.BroadphaseSettings
// 0x0000
struct FBroadphaseSettings
{

};

// ScriptStruct Engine.HierarchicalSimplification
// 0x0000
struct FHierarchicalSimplification
{

};

// ScriptStruct Engine.NetViewer
// 0x0000
struct FNetViewer
{

};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0000
struct FLightmassWorldInfoSettings
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
