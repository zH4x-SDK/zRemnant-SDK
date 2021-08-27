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

// BlueprintGeneratedClass Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C
// 0x0000
class AInteractive_Campfire_SpawnPoint_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C");
		return ptr;
	}



	void SetSpawnPosition();
	void SetSpawnState();
	void OnPreSpawn();
	void PossessedBy();
	void ExecuteUbergraph_Interactive_Campfire_SpawnPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
