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

// BlueprintGeneratedClass SpawnPoint_Item.SpawnPoint_Item_C
// 0x0000
class ASpawnPoint_Item_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Item.SpawnPoint_Item_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpawnPoint_Item();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
