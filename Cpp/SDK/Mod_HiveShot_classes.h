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

// BlueprintGeneratedClass Mod_HiveShot.Mod_HiveShot_C
// 0x0000
class AMod_HiveShot_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_HiveShot.Mod_HiveShot_C");
		return ptr;
	}



	void GetHiveShotCloudDuration();
	void GetDotDamage();
	void ModifyInspectInfo();
	void ModifyDamage();
	void OnFire();
	void ExecuteUbergraph_Mod_HiveShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
