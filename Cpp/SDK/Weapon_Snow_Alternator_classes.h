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

// BlueprintGeneratedClass Weapon_Snow_Alternator.Weapon_Snow_Alternator_C
// 0x0000
class AWeapon_Snow_Alternator_C : public AWeapon_LongGun_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Snow_Alternator.Weapon_Snow_Alternator_C");
		return ptr;
	}



	void OnFire();
	void ExecuteUbergraph_Weapon_Snow_Alternator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
