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

// BlueprintGeneratedClass Trait_Executioner.Trait_Executioner_C
// 0x0000
class UTrait_Executioner_C : public UBP_RemnantTrait_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Executioner.Trait_Executioner_C");
		return ptr;
	}



	void GetCritChance();
	void OnComputeStats();
	void ExecuteUbergraph_Trait_Executioner();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
