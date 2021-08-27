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

// BlueprintGeneratedClass Character_Tentacle.Character_Tentacle_C
// 0x0000
class ACharacter_Tentacle_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Tentacle.Character_Tentacle_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetCauseDamageScalar();
	void MinionHasDamageTag();
	void HasSoulEmberTrinket();
	void GetSpawnTime();
	void IsValidMinion();
	void GetShockDamageMod();
	void GetBrutalMarkDamageMod();
	void GetArmorScalars();
	void GetPunisherDamageMod();
	void GetDevotion();
	void DoDevoted();
	void GetCharactersForDevotion();
	void GetSiphonerTraitLifeStealMod();
	void ModifyDamage();
	void GetHealthPerHitScalar();
	void HealOwner();
	void InitializeNearbyThreat();
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnDead_Event_1();
	void FinishSpawning();
	void OnAlert();
	void CollisionOff();
	void CollisionOn();
	void OnLifetime_Expired();
	void OnCharacterDied();
	void OnPostComputeStats();
	void NotifyHitTarget();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void MC_Explosion();
	void ExecuteUbergraph_Character_Tentacle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
