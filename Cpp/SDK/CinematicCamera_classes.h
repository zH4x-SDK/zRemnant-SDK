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

// Class CinematicCamera.CineCameraComponent
// 0x0000
class UCineCameraComponent : public UCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}



	void SetLensPresetByName();
	void SetFilmbackPresetByName();
	void GetVerticalFieldOfView();
	void GetLensPresetName();
	void GetHorizontalFieldOfView();
	void GetFilmbackPresetName();
};

// Class CinematicCamera.CameraRig_Crane
// 0x0000
class ACameraRig_Crane : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}



};

// Class CinematicCamera.CameraRig_Rail
// 0x0000
class ACameraRig_Rail : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}



};

// Class CinematicCamera.CineCameraActor
// 0x0000
class ACineCameraActor : public ACameraActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}



	void GetCineCameraComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
