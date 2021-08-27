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

// BlueprintGeneratedClass SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C
// 0x0000
class ASpawnPoint_Emerge_Ceiling_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C");
		return ptr;
	}



	void GetSpawnPosition();
	void UserConstructionScript();
	void OnLoaded_596A836F42791FF4BF25ABA79A061F6E();
	void ReceiveBeginPlay();
	void OnPostSpawn();
	void ExecuteUbergraph_SpawnPoint_Emerge_Ceiling();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
