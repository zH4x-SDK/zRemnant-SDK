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

// BlueprintGeneratedClass Mod_ExplosiveShot.Mod_ExplosiveShot_C
// 0x0000
class AMod_ExplosiveShot_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_ExplosiveShot.Mod_ExplosiveShot_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void ModifyDamage();
	void OnFire();
	void ExecuteUbergraph_Mod_ExplosiveShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
