﻿#pragma once

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

// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class DatasmithContent_EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point = 0,
	EDatasmithAreaLightActorType__Spot = 1,
	EDatasmithAreaLightActorType__Rect = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX = 3,

};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class DatasmithContent_EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__None = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 5,

};

// Enum DatasmithContent.EVREDDataTableType
enum class DatasmithContent_EVREDDataTableType : uint8_t
{
	EVREDDataTableType__NotDatatable = 0,
	EVREDDataTableType__AnimClips  = 1,
	EVREDDataTableType__AnimNodes  = 2,
	EVREDDataTableType__EVREDDataTableType_MAX = 3,

};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class DatasmithContent_EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal = 1,
	EDatasmithCADStitchingTechnique__StitchingSew = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class DatasmithContent_EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors = 0,
	EDatasmithImportHierarchy__UseSingleActor = 1,
	EDatasmithImportHierarchy__UseOneBlueprint = 2,
	EDatasmithImportHierarchy__EDatasmithImportHierarchy_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportScene
enum class DatasmithContent_EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel = 0,
	EDatasmithImportScene__CurrentLevel = 1,
	EDatasmithImportScene__AssetsOnly = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class DatasmithContent_EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP = 0,
	EDatasmithImportLightmapMax__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMax__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMax__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMax__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMax__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMax__LIGHTMAP06 = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX = 7,

};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class DatasmithContent_EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP = 0,
	EDatasmithImportLightmapMin__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMin__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMin__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMin__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMin__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX = 6,

};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class DatasmithContent_EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class DatasmithContent_EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update = 0,
	EDatasmithImportActorPolicy__Full = 1,
	EDatasmithImportActorPolicy__Ignore = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX = 3,

};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class DatasmithContent_EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace = 0,
	EDatasmithImportAssetConflictPolicy__Update = 1,
	EDatasmithImportAssetConflictPolicy__Use = 2,
	EDatasmithImportAssetConflictPolicy__Ignore = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX = 4,

};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class DatasmithContent_EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current = 0,
	EDatasmithImportSearchPackagePolicy__All = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x0000
struct FDatasmithCameraLookatTrackingSettingsTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0000
struct FDatasmithPostProcessSettingsTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0000
struct FDatasmithCameraFocusSettingsTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0000
struct FDatasmithCameraLensSettingsTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0000
struct FDatasmithCameraFilmbackSettingsTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x0000
struct FDatasmithTessellationOptions
{

};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0000
struct FDatasmithImportBaseOptions
{

};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0000
struct FDatasmithStaticMeshImportOptions
{

};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0000
struct FDatasmithAssetImportOptions
{

};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0000
struct FDatasmithReimportOptions
{

};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x0000
struct FDatasmithStaticParameterSetTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0000
struct FDatasmithMeshSectionInfoMapTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0000
struct FDatasmithMeshSectionInfoTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0000
struct FDatasmithStaticMaterialTemplate
{

};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0000
struct FDatasmithMeshBuildSettingsTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
