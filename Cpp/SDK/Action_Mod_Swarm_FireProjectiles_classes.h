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

// BlueprintGeneratedClass Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C
// 0x0000
class UAction_Mod_Swarm_FireProjectiles_C : public UAction_Mod_MultiTarget_FireProjectiles_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C");
		return ptr;
	}



	void DestroyVFX();
	void ProcessGroupedVFX();
	void ConditionallyFinish();
	void InitProjectile();
	void OnTick();
	void FinishFiringProjectiles();
	void OnHomeStatusChanged();
	void OnActionStop();
	void MultiPlayGroupedVFX();
	void MultiDestroyGroupedVFX();
	void ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
