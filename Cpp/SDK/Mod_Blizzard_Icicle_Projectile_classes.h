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

// BlueprintGeneratedClass Mod_Blizzard_Icicle_Projectile.Mod_Blizzard_Icicle_Projectile_C
// 0x0000
class AMod_Blizzard_Icicle_Projectile_C : public ABP_Projectile_Sphere_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Blizzard_Icicle_Projectile.Mod_Blizzard_Icicle_Projectile_C");
		return ptr;
	}



	void OnProjectileHit();
	void ExecuteUbergraph_Mod_Blizzard_Icicle_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
