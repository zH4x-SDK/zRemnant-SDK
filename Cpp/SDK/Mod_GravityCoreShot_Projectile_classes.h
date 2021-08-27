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

// BlueprintGeneratedClass Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C
// 0x0000
class AMod_GravityCoreShot_Projectile_C : public AProjectileSphere
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C");
		return ptr;
	}



	void FilterIncomingDamage();
	void OnProjectileHit();
	void ReceiveBeginPlay();
	void OnProjectileShot();
	void ExecuteUbergraph_Mod_GravityCoreShot_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
