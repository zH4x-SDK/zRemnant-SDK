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

// BlueprintGeneratedClass Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C
// 0x0000
class AWeapon_Melee_SkinnedBase_C : public ARemnantMeleeWeapon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C");
		return ptr;
	}



	void GetWeaponDamageScalar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
