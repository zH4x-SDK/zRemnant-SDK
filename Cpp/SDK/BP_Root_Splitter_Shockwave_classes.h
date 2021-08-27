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

// BlueprintGeneratedClass BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C
// 0x0000
class ABP_Root_Splitter_Shockwave_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void DoRingExplosion();
	void MulticastFX();
	void ExecuteUbergraph_BP_Root_Splitter_Shockwave();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
