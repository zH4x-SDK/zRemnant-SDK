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

// BlueprintGeneratedClass Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C
// 0x0000
class AMultispawn_Waypoint_SpawnPoint_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnPostSpawn();
	void PossessedBy();
	void StartPreSpawn();
	void ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint();
	void EventPossessedBy__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
