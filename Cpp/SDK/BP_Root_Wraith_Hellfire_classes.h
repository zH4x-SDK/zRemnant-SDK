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

// BlueprintGeneratedClass BP_Root_Wraith_Hellfire.BP_Root_Wraith_Hellfire_C
// 0x0000
class ABP_Root_Wraith_Hellfire_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Root_Wraith_Hellfire.BP_Root_Wraith_Hellfire_C");
		return ptr;
	}



	void Ground_Check();
	void Ceiling_Check();
	void ReceiveBeginPlay();
	void SpawnArrow();
	void AcitvateEffects();
	void OnSpawnEffects();
	void ExecuteUbergraph_BP_Root_Wraith_Hellfire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
