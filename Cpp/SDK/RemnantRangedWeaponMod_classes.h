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

// BlueprintGeneratedClass RemnantRangedWeaponMod.RemnantRangedWeaponMod_C
// 0x0000
class ARemnantRangedWeaponMod_C : public ARemnantWeaponMod
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RemnantRangedWeaponMod.RemnantRangedWeaponMod_C");
		return ptr;
	}



	void GetLabyrinthArmorModDamageScalar();
	void GetLevelScalar();
	void GetInvokerTraitSummonDamageMod();
	void GetConcentrationTraitDurationMod();
	void GetEvocationTraitDamageMod();
	void CanUse();
	void GetWeaponDamageScalar();
	void GetSpiritScalar();
	void OnFire();
	void ExecuteUbergraph_RemnantRangedWeaponMod();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
