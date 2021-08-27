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

// Class GunfireNavigation.NavSvoDebugSlaveActor
// 0x0000
class ANavSvoDebugSlaveActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavSvoDebugSlaveActor");
		return ptr;
	}



};

// Class GunfireNavigation.NavSvoDebugActor
// 0x0000
class ANavSvoDebugActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavSvoDebugActor");
		return ptr;
	}



};

// Class GunfireNavigation.NavVolumeStreamingData
// 0x0000
class UNavVolumeStreamingData : public UNavigationDataChunk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavVolumeStreamingData");
		return ptr;
	}



};

// Class GunfireNavigation.NavSvoStreamingData
// 0x0000
class UNavSvoStreamingData : public UNavVolumeStreamingData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavSvoStreamingData");
		return ptr;
	}



};

// Class GunfireNavigation.NavVolume
// 0x0000
class ANavVolume : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavVolume");
		return ptr;
	}



};

// Class GunfireNavigation.NavVolumeRenderingComponent
// 0x0000
class UNavVolumeRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireNavigation.NavVolumeRenderingComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
