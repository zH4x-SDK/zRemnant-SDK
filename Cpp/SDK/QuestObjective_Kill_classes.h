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

// BlueprintGeneratedClass QuestObjective_Kill.QuestObjective_Kill_C
// 0x0000
class UQuestObjective_Kill_C : public UQuestObjective
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestObjective_Kill.QuestObjective_Kill_C");
		return ptr;
	}



	void ResetKillObjective();
	void GetRemnantQuestEntity();
	void Spawn();
	void OnSpawned_Event_1();
	void OnDestroyed_Event_1();
	void OnNotifyTakeDamage_Event_1();
	void OnZoneLoaded_Event_1();
	void SetupWorldReset();
	void OnWorldReset_Event_1();
	void OnInitializeQuest();
	void ExecuteUbergraph_QuestObjective_Kill();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
