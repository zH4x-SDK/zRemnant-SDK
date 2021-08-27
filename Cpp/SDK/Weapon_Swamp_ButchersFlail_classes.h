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

// BlueprintGeneratedClass Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C
// 0x0000
class AWeapon_Swamp_ButchersFlail_C : public AWeapon_Flail_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnHitTarget();
	void ExecuteUbergraph_Weapon_Swamp_ButchersFlail();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
