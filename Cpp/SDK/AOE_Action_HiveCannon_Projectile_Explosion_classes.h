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

// BlueprintGeneratedClass AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C
// 0x0000
class UAOE_Action_HiveCannon_Projectile_Explosion_C : public UAction_AOE_Attack_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C");
		return ptr;
	}



	void ModifyDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
