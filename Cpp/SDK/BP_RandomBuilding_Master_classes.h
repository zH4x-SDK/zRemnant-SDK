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

// BlueprintGeneratedClass BP_RandomBuilding_Master.BP_RandomBuilding_Master_C
// 0x0000
class ABP_RandomBuilding_Master_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomBuilding_Master.BP_RandomBuilding_Master_C");
		return ptr;
	}



	void Set_canopy_material();
	void Destroy_Ivy();
	void Destroy_Canopy();
	void CheckRubble();
	void OnSetTileVisible_Event_1();
	void ReceiveBeginPlay();
	void SpawnShadows();
	void Delay_Canopy_Delete();
	void ExecuteUbergraph_BP_RandomBuilding_Master();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
