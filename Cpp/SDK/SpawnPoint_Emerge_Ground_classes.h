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

// BlueprintGeneratedClass SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C
// 0x0000
class ASpawnPoint_Emerge_Ground_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpawnPoint_Emerge_Ground();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
