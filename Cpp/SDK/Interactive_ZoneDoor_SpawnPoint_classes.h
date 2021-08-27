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

// BlueprintGeneratedClass Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C
// 0x0000
class AInteractive_ZoneDoor_SpawnPoint_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_ZoneDoor_SpawnPoint.Interactive_ZoneDoor_SpawnPoint_C");
		return ptr;
	}



	void UpdateEnabled();
	void BndEvt__PawnDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__PawnDetect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void OnPreSpawn();
	void ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
