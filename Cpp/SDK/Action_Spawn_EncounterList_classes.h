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

// BlueprintGeneratedClass Action_Spawn_EncounterList.Action_Spawn_EncounterList_C
// 0x0000
class UAction_Spawn_EncounterList_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Spawn_EncounterList.Action_Spawn_EncounterList_C");
		return ptr;
	}



	void DestroyAllSpawns();
	void SetCooldown();
	void LockCooldown();
	void SetAggroGroup();
	void CanSpawn();
	void GetEncounterManager();
	void OnActionStart();
	void OnActionStop();
	void OnComplete_Event_1();
	void ExecuteUbergraph_Action_Spawn_EncounterList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
