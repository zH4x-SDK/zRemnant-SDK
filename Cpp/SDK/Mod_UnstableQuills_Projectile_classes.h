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

// BlueprintGeneratedClass Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C
// 0x0000
class AMod_UnstableQuills_Projectile_C : public ABP_Projectile_Sphere_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C");
		return ptr;
	}



	void PlayAbsorbedMaxVFX();
	void PlayBreakoffVFX();
	void GetCurrentGatheredDamage();
	void LockDamageBonus();
	void OnAttachedTookDamage();
	void PlayDestroyVFX();
	void ShouldDoQuickDissolve();
	void ReceiveTick();
	void OnProjectileHit();
	void OnProjectileStop();
	void DoDissolve();
	void ReceiveBeginPlay();
	void Destroy();
	void PlayDestroyFVXMulti();
	void OnNotifyTakeDamage_Event_1();
	void PlayBreakOffVFXMulti();
	void PlayAbsorbedMaxVFXMulti();
	void ExecuteUbergraph_Mod_UnstableQuills_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
