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

// BlueprintGeneratedClass Character_Wasteland_Beckon_Minion.Character_Wasteland_Beckon_Minion_C
// 0x0000
class ACharacter_Wasteland_Beckon_Minion_C : public ACharacter_Wasteland_Skull_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_Beckon_Minion.Character_Wasteland_Beckon_Minion_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetCauseDamageScalar();
	void MinionHasDamageTag();
	void HasSoulEmberTrinket();
	void IsValidMinion();
	void GetSpawnTime();
	void GetBrutalMarkDamageMod();
	void GetArmorScalars();
	void GetPunisherDamageMod();
	void ModifyDamage();
	void MC_BuildUp();
	void OnDead_Event_1();
	void ReceiveBeginPlay();
	void MulticastDissolveOut();
	void DissolveOut();
	void OnPostComputeStats();
	void NotifyHitTarget();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void OnDead_Event_2();
	void MC_Explosion();
	void Beam_Attack();
	void ExecuteUbergraph_Character_Wasteland_Beckon_Minion();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
