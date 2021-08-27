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

// BlueprintGeneratedClass Mod_GravityCoreShot.Mod_GravityCoreShot_C
// 0x0000
class AMod_GravityCoreShot_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_GravityCoreShot.Mod_GravityCoreShot_C");
		return ptr;
	}



	void GetGravityWellMultiTargetAddedDamage();
	void GetGravityWellDamage();
	void Get_Projectile_Damage();
	void ModifyInspectInfo();
	void ModifyDamage();
	void WindupForceFeedback__FinishedFunc();
	void WindupForceFeedback__UpdateFunc();
	void OnFire();
	void OnPreFireBegin();
	void OnPreFireEnd();
	void OnDetached();
	void ExecuteUbergraph_Mod_GravityCoreShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
