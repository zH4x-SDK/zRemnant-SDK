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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0000
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}



};

// Class Paper2D.PaperCharacter
// 0x0000
class APaperCharacter : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}



};

// Class Paper2D.PaperFlipbook
// 0x0000
class UPaperFlipbook : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}



	void IsValidKeyFrameIndex();
	void GetTotalDuration();
	void GetSpriteAtTime();
	void GetSpriteAtFrame();
	void GetNumKeyFrames();
	void GetNumFrames();
	void GetKeyFrameIndexAtTime();
};

// Class Paper2D.PaperFlipbookActor
// 0x0000
class APaperFlipbookActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}



};

// Class Paper2D.PaperFlipbookComponent
// 0x0000
class UPaperFlipbookComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}



	void Stop();
	void SetSpriteColor();
	void SetPlayRate();
	void SetPlaybackPositionInFrames();
	void SetPlaybackPosition();
	void SetNewTime();
	void SetLooping();
	void SetFlipbook();
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook();
	void IsReversing();
	void IsPlaying();
	void IsLooping();
	void GetPlayRate();
	void GetPlaybackPositionInFrames();
	void GetPlaybackPosition();
	void GetFlipbookLengthInFrames();
	void GetFlipbookLength();
	void GetFlipbookFramerate();
	void GetFlipbook();
};

// Class Paper2D.PaperGroupedSpriteActor
// 0x0000
class APaperGroupedSpriteActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}



};

// Class Paper2D.PaperGroupedSpriteComponent
// 0x0000
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}



	void UpdateInstanceTransform();
	void UpdateInstanceColor();
	void SortInstancesAlongAxis();
	void RemoveInstance();
	void GetInstanceTransform();
	void GetInstanceCount();
	void ClearInstances();
	void AddInstance();
};

// Class Paper2D.PaperRuntimeSettings
// 0x0000
class UPaperRuntimeSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}



};

// Class Paper2D.PaperSprite
// 0x0000
class UPaperSprite : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteActor
// 0x0000
class APaperSpriteActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteAtlas
// 0x0000
class UPaperSpriteAtlas : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}



	void MakeBrushFromSprite();
};

// Class Paper2D.PaperSpriteComponent
// 0x0000
class UPaperSpriteComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}



	void SetSpriteColor();
	void SetSprite();
	void GetSprite();
};

// Class Paper2D.PaperTerrainActor
// 0x0000
class APaperTerrainActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}



};

// Class Paper2D.PaperTerrainComponent
// 0x0000
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}



	void SetTerrainColor();
};

// Class Paper2D.PaperTerrainMaterial
// 0x0000
class UPaperTerrainMaterial : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}



};

// Class Paper2D.PaperTerrainSplineComponent
// 0x0000
class UPaperTerrainSplineComponent : public USplineComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}



};

// Class Paper2D.PaperTileLayer
// 0x0000
class UPaperTileLayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}



};

// Class Paper2D.PaperTileMap
// 0x0000
class UPaperTileMap : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}



};

// Class Paper2D.PaperTileMapActor
// 0x0000
class APaperTileMapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}



};

// Class Paper2D.PaperTileMapComponent
// 0x0000
class UPaperTileMapComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}



	void SetTileMapColor();
	void SetTileMap();
	void SetTile();
	void SetLayerColor();
	void SetLayerCollision();
	void SetDefaultCollisionThickness();
	void ResizeMap();
	void RebuildCollision();
	void OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon();
	void GetTileMapColor();
	void GetTileCornerPosition();
	void GetTileCenterPosition();
	void GetTile();
	void GetMapSize();
	void GetLayerColor();
	void CreateNewTileMap();
	void AddNewLayer();
};

// Class Paper2D.PaperTileSet
// 0x0000
class UPaperTileSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}



};

// Class Paper2D.TileMapBlueprintLibrary
// 0x0000
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}



	void MakeTile();
	void GetTileUserData();
	void GetTileTransform();
	void BreakTile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
