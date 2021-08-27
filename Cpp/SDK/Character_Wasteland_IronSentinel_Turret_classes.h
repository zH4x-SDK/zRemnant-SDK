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

// BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C
// 0x0000
class ACharacter_Wasteland_IronSentinel_Turret_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C");
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
	void ModifyStats();
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnDead_Event_1();
	void MulticastDissolveOut();
	void DissolveOut();
	void OnPostComputeStats();
	void OnDead_Event_2();
	void NotifyHitTarget();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void MC_Explosion();
	void ExecuteUbergraph_Character_Wasteland_IronSentinel_Turret();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
