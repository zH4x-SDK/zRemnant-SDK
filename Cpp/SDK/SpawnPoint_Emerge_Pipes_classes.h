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

// BlueprintGeneratedClass SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C
// 0x0000
class ASpawnPoint_Emerge_Pipes_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C");
		return ptr;
	}



	void GetSpawnPosition();
	void OnLoaded_A7285A1749F52692FA8C46B1C5236273();
	void ReceiveBeginPlay();
	void OnPostSpawn();
	void ExecuteUbergraph_SpawnPoint_Emerge_Pipes();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
