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

// BlueprintGeneratedClass BP_RandomMapActor.BP_RandomMapActor_C
// 0x0000
class ABP_RandomMapActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomMapActor.BP_RandomMapActor_C");
		return ptr;
	}



	void Init();
	void ReceiveBeginPlay();
	void SetRandomSeed();
	void ExecuteUbergraph_BP_RandomMapActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
