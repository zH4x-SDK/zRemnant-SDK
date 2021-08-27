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

// BlueprintGeneratedClass Action_StaticField_AOE.Action_StaticField_AOE_C
// 0x0000
class UAction_StaticField_AOE_C : public UAction_AOE_Attack_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StaticField_AOE.Action_StaticField_AOE_C");
		return ptr;
	}



	void EvaluateCause();
	void IsValidTarget();
	void OnRep_ExplosionDelay();
	void Get_Socket_Location();
	void OnTick();
	void OnActionStart();
	void UpdateFX();
	void StopFX();
	void OnActionStop();
	void ExecuteUbergraph_Action_StaticField_AOE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
