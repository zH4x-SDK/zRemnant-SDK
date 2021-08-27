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

// BlueprintGeneratedClass Mod_TentacleShot.Mod_TentacleShot_C
// 0x0000
class AMod_TentacleShot_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_TentacleShot.Mod_TentacleShot_C");
		return ptr;
	}



	void GetTentacleHealthScalar();
	void GetHealthPerHitScalar();
	void GetDamage();
	void GetDuration();
	void ModifyDamage();
	void ModifyInspectInfo();
	void GetHealthMax();
	void OnFire();
	void OnPreActivate();
	void ExecuteUbergraph_Mod_TentacleShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
