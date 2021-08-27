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

// BlueprintGeneratedClass RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C
// 0x0000
class ARangedWeapon_Mod_WeaponMode_C : public ARemnantRangedWeaponMod_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C");
		return ptr;
	}



	void UpdateWeaponModeForceFeedback();
	void OnActivate();
	void OnAttached();
	void OnDetached();
	void OnActivateMod();
	void OnDeactivate();
	void ExecuteUbergraph_RangedWeapon_Mod_WeaponMode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
