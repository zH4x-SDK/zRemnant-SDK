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

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0000
class UClothingAssetBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000
class UClothingSimulationFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0000
class UClothingSimulationInteractor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}



	void PhysicsAssetUpdated();
	void ClothConfigUpdated();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
