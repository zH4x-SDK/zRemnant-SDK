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

// BlueprintGeneratedClass BP_RandomStaticActor.BP_RandomStaticActor_C
// 0x0000
class ABP_RandomStaticActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomStaticActor.BP_RandomStaticActor_C");
		return ptr;
	}



	void OnLoaded_3FC1B5764FABAE80AA48148F5436F69A();
	void ReceiveBeginPlay();
	void SetRandomSeed();
	void ExecuteUbergraph_BP_RandomStaticActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
