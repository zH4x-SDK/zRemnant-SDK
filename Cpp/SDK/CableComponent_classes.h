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

// Class CableComponent.CableActor
// 0x0000
class ACableActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}



};

// Class CableComponent.CableComponent
// 0x0000
class UCableComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}



	void SetAttachEndToComponent();
	void SetAttachEndTo();
	void GetCableParticleLocations();
	void GetAttachedComponent();
	void GetAttachedActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
