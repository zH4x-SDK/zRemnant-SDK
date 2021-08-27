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

// BlueprintGeneratedClass BP_Decal_RandomAd.BP_Decal_RandomAd_C
// 0x0000
class ABP_Decal_RandomAd_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_RandomAd.BP_Decal_RandomAd_C");
		return ptr;
	}



	void ChooseRandomMat();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetRandomSeed();
	void ExecuteUbergraph_BP_Decal_RandomAd();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
