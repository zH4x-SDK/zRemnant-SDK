﻿#pragma once

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

// BlueprintGeneratedClass Weapon_Root_Smolder.Weapon_Root_Smolder_C
// 0x0000
class AWeapon_Root_Smolder_C : public AWeapon_Sword_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Root_Smolder.Weapon_Root_Smolder_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void Set_Light_Intensity();
	void OnNotInHand();
	void OnActivated();
	void OnInHand();
	void OnHitTarget();
	void ExecuteUbergraph_Weapon_Root_Smolder();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
