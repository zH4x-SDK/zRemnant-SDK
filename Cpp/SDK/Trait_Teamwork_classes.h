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

// BlueprintGeneratedClass Trait_Teamwork.Trait_Teamwork_C
// 0x0000
class UTrait_Teamwork_C : public UBP_RemnantTrait_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Teamwork.Trait_Teamwork_C");
		return ptr;
	}



	void QueryNearbyPlayers();
	void FilterIncomingDamage();
	void GetDamageMod();
	void ModifyInspectInfo();
	void SetNumNearbyPlayers();
	void GetTeamworkRange();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trait_Teamwork();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
