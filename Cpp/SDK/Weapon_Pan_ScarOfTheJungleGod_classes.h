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

// BlueprintGeneratedClass Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C
// 0x0000
class AWeapon_Pan_ScarOfTheJungleGod_C : public AWeapon_Fist_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C");
		return ptr;
	}



	void IsDefaultEquipment();
	void ModifyInspectInfo();
	void OnHitTarget();
	void ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
