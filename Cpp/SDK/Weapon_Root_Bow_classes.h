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

// BlueprintGeneratedClass Weapon_Root_Bow.Weapon_Root_Bow_C
// 0x0000
class AWeapon_Root_Bow_C : public ARangedWeapon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Root_Bow.Weapon_Root_Bow_C");
		return ptr;
	}



	void OnFire();
	void ExecuteUbergraph_Weapon_Root_Bow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
