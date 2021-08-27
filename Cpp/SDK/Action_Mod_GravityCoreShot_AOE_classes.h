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

// BlueprintGeneratedClass Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C
// 0x0000
class UAction_Mod_GravityCoreShot_AOE_C : public UAction_AOE_ForceImpulse_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C");
		return ptr;
	}



	void GetDamage();
	void Get_Socket_Location();
	void OnActionStart();
	void PreprocessAOE();
	void ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
