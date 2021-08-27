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

// BlueprintGeneratedClass Mod_FrozenMist.Mod_FrozenMist_C
// 0x0000
class AMod_FrozenMist_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FrozenMist.Mod_FrozenMist_C");
		return ptr;
	}



	void GetFrozenMistCloudDuration();
	void ModifyDamage();
	void GetDamageScalar();
	void ModifyInspectInfo();
	void OnFire();
	void ExecuteUbergraph_Mod_FrozenMist();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
