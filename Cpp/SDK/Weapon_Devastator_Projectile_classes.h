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

// BlueprintGeneratedClass Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C
// 0x0000
class AWeapon_Devastator_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C");
		return ptr;
	}



	void IsSprayHit();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Devastator_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
