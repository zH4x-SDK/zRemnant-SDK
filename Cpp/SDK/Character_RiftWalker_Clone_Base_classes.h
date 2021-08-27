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

// BlueprintGeneratedClass Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C
// 0x0000
class ACharacter_RiftWalker_Clone_Base_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C");
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
	void StopPostProcess();
	void SpawnPostProcess();
	void ModifyDamage();
	void CheckSoulEmberTag();
	void AddNearbyThreat();
	void InitializeNearbyThreat();
	void UserConstructionScript();
	void FinishSpawning();
	void MultiDissolveEvent();
	void OnTimer();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void OnPostComputeStats();
	void OnAOE();
	void OnSetState();
	void MC_Explosion();
	void CustomEvent_1();
	void NotifyHitTarget();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Character_RiftWalker_Clone_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
