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

// BlueprintGeneratedClass Mod_RattleWeed.Mod_RattleWeed_C
// 0x0000
class AMod_RattleWeed_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_RattleWeed.Mod_RattleWeed_C");
		return ptr;
	}



	void GetAggroDistanceScalar();
	void GetDuration();
	void ModifyInspectInfo();
	void GetRattleweedHealthScalar();
	void OnFire();
	void OnPreActivate();
	void ExecuteUbergraph_Mod_RattleWeed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
