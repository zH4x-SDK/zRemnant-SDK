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

// BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C
// 0x0000
class UAction_Mod_MultiTarget_FireProjectiles_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C");
		return ptr;
	}



	void GetEndProjectileLocation();
	void FireAllProjectiles();
	void FireAndAddProjectile();
	void InitProjectile();
	void FinishFiringProjectiles();
	void GetFireDirection();
	void OrderTargets();
	void GetCurrentTarget();
	void Get_Socket_Location_from_owner();
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
