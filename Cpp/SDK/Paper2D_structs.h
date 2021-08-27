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

// Enum Paper2D.EFlipbookCollisionMode
enum class Paper2D_EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3,

};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class Paper2D_EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2,

};

// Enum Paper2D.ETileMapProjectionMode
enum class Paper2D_ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4,

};

// Enum Paper2D.ESpritePivotMode
enum class Paper2D_ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10,

};

// Enum Paper2D.ESpritePolygonMode
enum class Paper2D_ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5,

};

// Enum Paper2D.ESpriteShapeType
enum class Paper2D_ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3,

};

// Enum Paper2D.ESpriteCollisionMode
enum class Paper2D_ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Paper2D.IntMargin
// 0x0000
struct FIntMargin
{

};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0000
struct FPaperFlipbookKeyFrame
{

};

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0000
struct FSpriteInstanceData
{

};

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0000
struct FPaperSpriteSocket
{

};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0000
struct FPaperSpriteAtlasSlot
{

};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0000
struct FPaperTerrainMaterialRule
{

};

// ScriptStruct Paper2D.PaperTileInfo
// 0x0000
struct FPaperTileInfo
{

};

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0000
struct FPaperTileSetTerrain
{

};

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0000
struct FPaperTileMetadata
{

};

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0000
struct FSpriteGeometryCollection
{

};

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0000
struct FSpriteGeometryShape
{

};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x0000
struct FSpriteDrawCallRecord
{

};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0000
struct FSpriteAssetInitParameters
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
