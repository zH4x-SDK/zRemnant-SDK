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

// BlueprintGeneratedClass BP_Monster_Spawner.BP_Monster_Spawner_C
// 0x0000
class ABP_Monster_Spawner_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Monster_Spawner.BP_Monster_Spawner_C");
		return ptr;
	}



	void SetState();
	void GetEncounterManager();
	void OnNotifyAllWorldReset();
	void StartSpawns();
	void OnSummon();
	void DoSpawn();
	void StopSpawns();
	void OnTakeDamage();
	void OnDead_Event_1();
	void OnSpawned_Event_1();
	void TriggerSpawns();
	void ReceiveBeginPlay();
	void OnTargetChanged_Event_1();
	void OnWorldReset();
	void OnKilled();
	void ReceiveEndPlay();
	void OnDead_Event_2();
	void ManualCleanupSpawns();
	void ExecuteUbergraph_BP_Monster_Spawner();
	void OnReset__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
