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

// Class GeometryCache.GeometryCache
// 0x0000
class UGeometryCache : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheActor
// 0x0000
class AGeometryCacheActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}



	void GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheCodecBase
// 0x0000
class UGeometryCacheCodecBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0000
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecV1
// 0x0000
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheComponent
// 0x0000
class UGeometryCacheComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}



	void TickAtThisTime();
	void Stop();
	void SetStartTimeOffset();
	void SetPlaybackSpeed();
	void SetLooping();
	void SetGeometryCache();
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	void IsPlayingReversed();
	void IsPlaying();
	void IsLooping();
	void GetStartTimeOffset();
	void GetPlaybackSpeed();
	void GetPlaybackDirection();
	void GetNumberOfFrames();
	void GetDuration();
	void GetAnimationTime();
};

// Class GeometryCache.GeometryCacheTrack
// 0x0000
class UGeometryCacheTrack : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0000
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}



	void AddMeshSample();
};

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0000
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0000
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}



	void SetMesh();
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0000
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}



	void SetMesh();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
