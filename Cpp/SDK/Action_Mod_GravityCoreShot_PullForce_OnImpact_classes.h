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

// BlueprintGeneratedClass Action_Mod_GravityCoreShot_PullForce_OnImpact.Action_Mod_GravityCoreShot_PullForce_OnImpact_C
// 0x0000
class UAction_Mod_GravityCoreShot_PullForce_OnImpact_C : public UAction_Mod_GravityCoreShot_PullForce_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_GravityCoreShot_PullForce_OnImpact.Action_Mod_GravityCoreShot_PullForce_OnImpact_C");
		return ptr;
	}



	void CacheValues();
	void PlayCameraShake();
	void GetEpicenterLocation();
	void OnActionStart();
	void OnActionStop();
	void EarlyEndFX();
	void SFX_Buildup();
	void SFX_Implode();
	void ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_OnImpact();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
