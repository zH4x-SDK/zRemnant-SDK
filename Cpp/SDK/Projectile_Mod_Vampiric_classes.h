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

// BlueprintGeneratedClass Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C
// 0x0000
class AProjectile_Mod_Vampiric_C : public ABP_Projectile_Homing_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C");
		return ptr;
	}



	void MakeAbsorbDamageInfo();
	void OnDamageDone();
	void LerpScale();
	void UpdateVariance();
	void LerpToVarianceLocation();
	void ResetVarianceLocationTarget();
	void AddVarianceLocationTarget();
	void GetRegenAndDuration();
	void GiveHealthToPlayer();
	void DetermineReachedPlayer();
	void OnAttachedActorDied();
	void AbsorbHealth();
	void StopAbsorbingAndReturnHome();
	void BeginAbsorbTimer();
	void SetAttachedActor();
	void ValidateHit();
	void GoToHome();
	void UpdateCollision();
	void OnRep_ReturningHome();
	void UpdateHome();
	void UpdateTarget();
	void ReceiveTick();
	void OnProjectileStop();
	void OnProjectileHit();
	void ReceiveBeginPlay();
	void SetHomingTarget();
	void _StopHoming();
	void PlayHealthVFX();
	void DetachAndReturnHome();
	void BugVanishes();
	void PlayLandingEffects();
	void PlayEatingVFX();
	void OnTargetTookDamage();
	void ExecuteUbergraph_Projectile_Mod_Vampiric();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
