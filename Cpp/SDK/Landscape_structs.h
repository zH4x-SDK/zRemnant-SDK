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

// Enum Landscape.ELandscapeSetupErrors
enum class Landscape_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Landscape.ELandscapeGizmoType
enum class Landscape_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Landscape.EGrassScaling
enum class Landscape_EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3,

};

// Enum Landscape.ELandscapeLODFalloff
enum class Landscape_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,

};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class Landscape_ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3,

};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class Landscape_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4,

};

// Enum Landscape.ELandscapeImportAlphamapType
enum class Landscape_ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2,

};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class Landscape_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,

};

// Enum Landscape.ELandscapeLayerBlendType
enum class Landscape_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,

};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class Landscape_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,

};

// Enum Landscape.ETerrainCoordMappingType
enum class Landscape_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.ProceduralLayer
// 0x0000
struct FProceduralLayer
{

};

// ScriptStruct Landscape.LandscapeProceduralLayerBrush
// 0x0000
struct FLandscapeProceduralLayerBrush
{

};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x0000
struct FLandscapeComponentMaterialOverride
{

};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0000
struct FWeightmapLayerAllocationInfo
{

};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0000
struct FLandscapeEditToolRenderData
{

};

// ScriptStruct Landscape.GizmoSelectData
// 0x0000
struct FGizmoSelectData
{

};

// ScriptStruct Landscape.GrassVariety
// 0x0000
struct FGrassVariety
{

};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0000
struct FLandscapeInfoLayerSettings
{

};

// ScriptStruct Landscape.ProceduralLayerData
// 0x0000
struct FProceduralLayerData
{

};

// ScriptStruct Landscape.RenderDataPerHeightmap
// 0x0000
struct FRenderDataPerHeightmap
{

};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x0000
struct FLandscapeProxyMaterialOverride
{

};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0000
struct FLandscapeImportLayerInfo
{

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0000
struct FLandscapeLayerStruct
{

};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0000
struct FLandscapeEditorLayerSettings
{

};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0000
struct FLandscapeWeightmapUsage
{

};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0000
struct FLandscapeSplineConnection
{

};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0000
struct FForeignWorldSplineData
{

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0000
struct FForeignSplineSegmentData
{

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0000
struct FForeignControlPointData
{

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0000
struct FLandscapeSplineMeshEntry
{

};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0000
struct FLandscapeSplineSegmentConnection
{

};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0000
struct FLandscapeSplineInterpPoint
{

};

// ScriptStruct Landscape.GrassInput
// 0x0000
struct FGrassInput
{

};

// ScriptStruct Landscape.LayerBlendInput
// 0x0000
struct FLayerBlendInput
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
