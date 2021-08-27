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

// BlueprintGeneratedClass Projectile_Mod_Banish.Projectile_Mod_Banish_C
// 0x0000
class AProjectile_Mod_Banish_C : public AProjectileSphere
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Mod_Banish.Projectile_Mod_Banish_C");
		return ptr;
	}



	void OnProjectileHit();
	void ExecuteUbergraph_Projectile_Mod_Banish();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
