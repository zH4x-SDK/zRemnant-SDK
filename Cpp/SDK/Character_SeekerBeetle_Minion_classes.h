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

// BlueprintGeneratedClass Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C
// 0x0000
class ACharacter_SeekerBeetle_Minion_C : public ACharacter_Swamp_ElfQueen_Bug_Explosive_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetCauseDamageScalar();
	void MinionHasDamageTag();
	void HasSoulEmberTrinket();
	void GetSpawnTime();
	void IsValidMinion();
	void GetExplosionDamageMod();
	void GetBrutalMarkDamageMod();
	void GetArmorScalars();
	void GetPunisherDamageMod();
	void ModifyDamage();
	void CheckSoulEmberTag();
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnPostComputeStats();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void SeekerBeetleStartGlow();
	void DoExplosion();
	void OnExit();
	void OnDead_Event_2();
	void SeekerBeetleStopGlow();
	void MC_Explosion();
	void NotifyHitTarget();
	void ExecuteUbergraph_Character_SeekerBeetle_Minion();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
