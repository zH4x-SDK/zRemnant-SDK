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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class AnimGraphRuntime_ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimGraphRuntime_EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5,

};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class AnimGraphRuntime_EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class AnimGraphRuntime_EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2,

};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class AnimGraphRuntime_ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2,

};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class AnimGraphRuntime_EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,

};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class AnimGraphRuntime_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,

};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class AnimGraphRuntime_EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5,

};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class AnimGraphRuntime_EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class AnimGraphRuntime_EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverType
enum class AnimGraphRuntime_EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3,

};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class AnimGraphRuntime_ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2,

};

// Enum AnimGraphRuntime.ERefPoseType
enum class AnimGraphRuntime_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum AnimGraphRuntime.ESimulationSpace
enum class AnimGraphRuntime_ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3,

};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class AnimGraphRuntime_EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3,

};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class AnimGraphRuntime_ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3,

};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class AnimGraphRuntime_ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3,

};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class AnimGraphRuntime_ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3,

};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class AnimGraphRuntime_ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0000
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x0000
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0000
struct FAnimNode_BlendListBase : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x0000
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0000
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0000
struct FAnimPhysPlanarLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0000
struct FAnimPhysSphericalLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0000
struct FAnimPhysConstraintSetup
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0000
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0000
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0000
struct FAngularRangeLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0000
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0000
struct FBlendBoneByChannelEntry
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0000
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0000
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0000
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0000
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0000
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x0000
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0000
struct FBoneSocketTarget
{

};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0000
struct FSocketReference
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0000
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x0000
struct FConstraint
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0000
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0000
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0000
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0000
struct FAnimNode_CurveSource : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0000
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0000
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x0000
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0000
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0000
struct FAnimLegIKDefinition
{

};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0000
struct FAnimLegIKData
{

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0000
struct FIKChain
{

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0000
struct FIKChainLink
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0000
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0000
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0000
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0000
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0000
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0000
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0000
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0000
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0000
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x0000
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{

};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0000
struct FRBFParams
{

};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x0000
struct FPoseDriverTarget
{

};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0000
struct FPoseDriverTransform
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0000
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0000
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0000
struct FRandomPlayerSequenceEntry
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0000
struct FAnimNode_RefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0000
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0000
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0000
struct FAnimNode_Root : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0000
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0000
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0000
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0000
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0000
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0000
struct FAnimNode_Slot : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0000
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0000
struct FSplineIKCachedBoneData
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0000
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0000
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0000
struct FRotationLimit
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0000
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0000
struct FReferenceBoneFrame
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0000
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x0000
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0000
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0000
struct FRBFEntry
{

};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0000
struct FRBFTarget : public FRBFEntry
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
