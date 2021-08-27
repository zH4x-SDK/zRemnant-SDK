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

// BlueprintGeneratedClass Trait_ArcaneStrike.Trait_ArcaneStrike_C
// 0x0000
class UTrait_ArcaneStrike_C : public UBP_RemnantTrait_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_ArcaneStrike.Trait_ArcaneStrike_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void GetMeleeModPowerMod();
	void OnHitTarget();
	void ExecuteUbergraph_Trait_ArcaneStrike();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
