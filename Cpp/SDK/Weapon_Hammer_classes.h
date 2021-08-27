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

// BlueprintGeneratedClass Weapon_Hammer.Weapon_Hammer_C
// 0x0000
class AWeapon_Hammer_C : public AWeapon_Melee_SkinnedBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hammer.Weapon_Hammer_C");
		return ptr;
	}



	void ModifyDamage();
	void DoHammerAOE();
	void DoChargeHammerAOE();
	void OnEquipped();
	void OnUnequipped();
	void OnStateChange();
	void NotifyHitTarget();
	void ExecuteUbergraph_Weapon_Hammer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
