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

// BlueprintGeneratedClass Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C
// 0x0000
class AWeapon_Wasteland_WorldBreaker_C : public AWeapon_Hammer_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnHitTarget();
	void MeleeChargeAttack();
	void OnEquipped();
	void OnUnequipped();
	void OnStateChange();
	void ExecuteUbergraph_Weapon_Wasteland_WorldBreaker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
