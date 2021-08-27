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

// BlueprintGeneratedClass Weapon_Fist.Weapon_Fist_C
// 0x0000
class AWeapon_Fist_C : public AWeapon_Melee_SkinnedBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Fist.Weapon_Fist_C");
		return ptr;
	}



	void ModifyDamage();
	void IsDefaultEquipment();
	void GetLevel();
	void PostComputeCharacterStats();
	void ExecuteUbergraph_Weapon_Fist();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
