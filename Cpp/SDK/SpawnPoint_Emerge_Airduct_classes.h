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

// BlueprintGeneratedClass SpawnPoint_Emerge_Airduct.SpawnPoint_Emerge_Airduct_C
// 0x0000
class ASpawnPoint_Emerge_Airduct_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Airduct.SpawnPoint_Emerge_Airduct_C");
		return ptr;
	}



	void GetSpawnPosition();
	void OnLoaded_7912DF624B3FD66A00E0A0943DD8A48F();
	void ReceiveBeginPlay();
	void OnPostSpawn();
	void ExecuteUbergraph_SpawnPoint_Emerge_Airduct();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
