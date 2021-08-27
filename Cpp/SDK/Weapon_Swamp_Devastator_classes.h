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

// BlueprintGeneratedClass Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C
// 0x0000
class AWeapon_Swamp_Devastator_C : public AWeapon_LongGun_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C");
		return ptr;
	}



	void OnRep_MagazineOn();
	void ModifyDamage();
	void OnActivated();
	void OnFire();
	void OnFireEnd();
	void OnServer_End();
	void OnServer_TurnOff();
	void ExecuteUbergraph_Weapon_Swamp_Devastator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
