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

// BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C
// 0x0000
class ACharacter_Wasteland_VeryGoodBoy_Minion_C : public ACharacter_Wasteland_Hound_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetSpawnTime();
	void IsValidMinion();
	void HasSoulEmberTrinket();
	void MinionHasDamageTag();
	void GetCauseDamageScalar();
	void GetFriendsForBuff();
	void GetBrutalMarkDamageMod();
	void GetArmorScalars();
	void GetPunisherDamageMod();
	void ModifyDamage();
	void MC_BuildUp();
	void MC_Explosion();
	void ReceiveBeginPlay();
	void OnOwnerComputeStats();
	void OnDead_Event_2();
	void MulticastDissolveOut();
	void DestroyMinion();
	void OnPostComputeStats();
	void NotifyHitTarget();
	void DissolveOut();
	void GoodBoyBuff();
	void OnDead_Event_1();
	void ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
