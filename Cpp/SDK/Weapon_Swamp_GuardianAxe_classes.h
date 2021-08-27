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

// BlueprintGeneratedClass Weapon_Swamp_GuardianAxe.Weapon_Swamp_GuardianAxe_C
// 0x0000
class AWeapon_Swamp_GuardianAxe_C : public AWeapon_Hatchet_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_GuardianAxe.Weapon_Swamp_GuardianAxe_C");
		return ptr;
	}



	void ModifyInspectInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
