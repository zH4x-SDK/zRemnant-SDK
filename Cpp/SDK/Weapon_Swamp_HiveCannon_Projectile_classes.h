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

// BlueprintGeneratedClass Weapon_Swamp_HiveCannon_Projectile.Weapon_Swamp_HiveCannon_Projectile_C
// 0x0000
class AWeapon_Swamp_HiveCannon_Projectile_C : public AProjectileSphere
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_HiveCannon_Projectile.Weapon_Swamp_HiveCannon_Projectile_C");
		return ptr;
	}



	void OnProjectileHit();
	void ExecuteUbergraph_Weapon_Swamp_HiveCannon_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
