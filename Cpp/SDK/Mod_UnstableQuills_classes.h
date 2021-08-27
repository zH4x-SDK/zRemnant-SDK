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

// BlueprintGeneratedClass Mod_UnstableQuills.Mod_UnstableQuills_C
// 0x0000
class AMod_UnstableQuills_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_UnstableQuills.Mod_UnstableQuills_C");
		return ptr;
	}



	void GetBaseDamageScalar();
	void GetMaxDamageScalar();
	void IsActionEndable();
	void EndProjectileAction();
	void DoSecondaryAction();
	void DetonateAllAttachedProjectiles();
	void RemoveAttachedProjectileInfo();
	void GiveAttachedProjectileInfo();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void OnSecondaryActivate();
	void ServerFireProjectile();
	void OnBeginUse();
	void ExecuteUbergraph_Mod_UnstableQuills();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
