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

// Enum AnimationCore.ETransformConstraintType
enum class AnimationCore_ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4,

};

// Enum AnimationCore.EConstraintType
enum class AnimationCore_EConstraintType : uint8_t
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.Axis
// 0x0000
struct FAxis
{

};

// ScriptStruct AnimationCore.ConstraintData
// 0x0000
struct FConstraintData
{

};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0000
struct FConstraintDescriptor
{

};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0000
struct FConstraintDescriptionEx
{

};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0000
struct FFilterOptionPerAxis
{

};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0000
struct FAimConstraintDescription : public FConstraintDescriptionEx
{

};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0000
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{

};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0000
struct FTransformConstraint
{

};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x0000
struct FConstraintDescription
{

};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0000
struct FConstraintOffset
{

};

// ScriptStruct AnimationCore.TransformFilter
// 0x0000
struct FTransformFilter
{

};

// ScriptStruct AnimationCore.EulerTransform
// 0x0000
struct FEulerTransform
{

};

// ScriptStruct AnimationCore.NodeChain
// 0x0000
struct FNodeChain
{

};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0000
struct FNodeHierarchyWithUserData
{

};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0000
struct FNodeHierarchyData
{

};

// ScriptStruct AnimationCore.NodeObject
// 0x0000
struct FNodeObject
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
