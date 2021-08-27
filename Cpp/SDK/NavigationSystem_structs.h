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

// Enum NavigationSystem.ERuntimeGenerationType
enum class NavigationSystem_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,

};

// Enum NavigationSystem.ENavCostDisplay
enum class NavigationSystem_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum NavigationSystem.ERecastPartitioning
enum class NavigationSystem_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0000
struct FNavCollisionBox
{

};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0000
struct FNavCollisionCylinder
{

};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0000
struct FSupportedAreaData
{

};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0000
struct FNavGraphNode
{

};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0000
struct FNavGraphEdge
{

};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0000
struct FNavigationFilterFlags
{

};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0000
struct FNavigationFilterArea
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
