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

// BlueprintGeneratedClass Mod_Flamethrower.Mod_Flamethrower_C
// 0x0000
class AMod_Flamethrower_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Flamethrower.Mod_Flamethrower_C");
		return ptr;
	}



	void GetFirePuddleDoTDamage();
	void GetOnFireDoTDamage();
	void ModifyInspectInfo();
	void ModifyDamage();
	void OnFire();
	void OnFireBegin();
	void OnFireEnd();
	void UpdateFlamethrowerVFX();
	void ExecuteUbergraph_Mod_Flamethrower();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
