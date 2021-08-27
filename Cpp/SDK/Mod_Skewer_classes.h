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

// BlueprintGeneratedClass Mod_Skewer.Mod_Skewer_C
// 0x0000
class AMod_Skewer_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Skewer.Mod_Skewer_C");
		return ptr;
	}



	void GetDotDamage();
	void ModifyInspectInfo();
	void ModifyDamage();
	void OnFire();
	void ExecuteUbergraph_Mod_Skewer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
