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

// BlueprintGeneratedClass Character_Rattleweed.Character_Rattleweed_C
// 0x0000
class ACharacter_Rattleweed_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Rattleweed.Character_Rattleweed_C");
		return ptr;
	}



	void GetMinionOwner();
	void GetCauseDamageScalar();
	void MinionHasDamageTag();
	void HasSoulEmberTrinket();
	void GetSpawnTime();
	void IsValidMinion();
	void GetPunisherDamageMod();
	void ModifyDamage();
	void AddNearbyThreat();
	void InitializeNearbyThreat();
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnTimer();
	void OnDead_Event_1();
	void OnComputeStats();
	void FinishSpawning();
	void MultiDissolveEvent();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void NotifyHitTarget();
	void MC_Explosion();
	void ExecuteUbergraph_Character_Rattleweed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
