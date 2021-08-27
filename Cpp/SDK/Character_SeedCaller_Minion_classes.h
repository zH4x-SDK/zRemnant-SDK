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

// BlueprintGeneratedClass Character_SeedCaller_Minion.Character_SeedCaller_Minion_C
// 0x0000
class ACharacter_SeedCaller_Minion_C : public ACharacter_Root_Hollow_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_SeedCaller_Minion.Character_SeedCaller_Minion_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetCauseDamageScalar();
	void MinionHasDamageTag();
	void HasSoulEmberTrinket();
	void GetSpawnTime();
	void IsValidMinion();
	void GetBrutalMarkDamageMod();
	void GetArmorScalars();
	void GetPunisherDamageMod();
	void ModifyDamage();
	void MC_Explosion();
	void ReceiveBeginPlay();
	void OnPostComputeStats();
	void OnDead_Event_1();
	void NotifyHitTarget();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void OnDead_Event_2();
	void MC_BuildUp();
	void MulticastDissolveOut();
	void ExecuteUbergraph_Character_SeedCaller_Minion();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
