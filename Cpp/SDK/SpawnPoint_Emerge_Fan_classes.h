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

// BlueprintGeneratedClass SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C
// 0x0000
class ASpawnPoint_Emerge_Fan_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C");
		return ptr;
	}



	void GetSpawnPosition();
	void OnLoaded_4028500A413E5D0EC481B0897E462643();
	void ReceiveBeginPlay();
	void OnPostSpawn();
	void ExecuteUbergraph_SpawnPoint_Emerge_Fan();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
