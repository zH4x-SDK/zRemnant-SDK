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

// BlueprintGeneratedClass Trait_WillToLive.Trait_WillToLive_C
// 0x0000
class UTrait_WillToLive_C : public UBP_RemnantTrait_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_WillToLive.Trait_WillToLive_C");
		return ptr;
	}



	void GetWoundedHealth();
	void OnComputeStats();
	void ExecuteUbergraph_Trait_WillToLive();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
