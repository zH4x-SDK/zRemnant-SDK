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

// BlueprintGeneratedClass Mod_Incinerator.Mod_Incinerator_C
// 0x0000
class AMod_Incinerator_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Incinerator.Mod_Incinerator_C");
		return ptr;
	}



	void GetDotDuration();
	void GetDotDamage();
	void GetAOEDamage();
	void GetFirePuddleDamagePerSecond();
	void ModifyDamage();
	void ModifyInspectInfo();
	void OnFire();
	void OnActivateMod();
	void ExecuteUbergraph_Mod_Incinerator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
