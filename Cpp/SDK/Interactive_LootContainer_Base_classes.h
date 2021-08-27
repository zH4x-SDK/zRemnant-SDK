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

// BlueprintGeneratedClass Interactive_LootContainer_Base.Interactive_LootContainer_Base_C
// 0x0000
class AInteractive_LootContainer_Base_C : public ALootContainer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_LootContainer_Base.Interactive_LootContainer_Base_C");
		return ptr;
	}



	void GetSpawnTags();
	void SpawnItems();
	void DoSpawns();
	void HasSpawnPoints();
	void SpawnSpawnPoints();
	void SpawnItem();
	void Init();
	void DropLoot();
	void OnRep_Open();
	void AnimateOpen();
	void AnimateOpened();
	void OnOpen();
	void OverrideLootTable();
	void ReceiveBeginPlay();
	void OnGenerated_Event_1();
	void ExecuteUbergraph_Interactive_LootContainer_Base();
	void OnOpened__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
