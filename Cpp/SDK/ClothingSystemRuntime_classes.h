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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000
class UClothingAssetCustomData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return ptr;
	}



};

// Class ClothingSystemRuntime.ClothingAsset
// 0x0000
class UClothingAsset : public UClothingAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return ptr;
	}



};

// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return ptr;
	}



};

// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// 0x0000
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationInteractorNv");
		return ptr;
	}



	void SetAnimDriveSpringStiffness();
	void SetAnimDriveDamperStiffness();
	void EnableGravityOverride();
	void DisableGravityOverride();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
