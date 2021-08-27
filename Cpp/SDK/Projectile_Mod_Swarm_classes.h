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

// BlueprintGeneratedClass Projectile_Mod_Swarm.Projectile_Mod_Swarm_C
// 0x0000
class AProjectile_Mod_Swarm_C : public ABP_Projectile_Homing_MultiTarget_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Mod_Swarm.Projectile_Mod_Swarm_C");
		return ptr;
	}



	void OnRep_IsHome();
	void EnableVFX();
	void DisableVFX();
	void UpdateHomeStatus();
	void UpdateCollision();
	void OnRep_ReturningHome();
	void UpdateHome();
	void GoToHome();
	void UpdateTarget();
	void ValidateHit();
	void OnProjectileHit();
	void ReceiveTick();
	void HandleTargetAcceleration();
	void SetHomingTarget();
	void _StopHoming();
	void InitDumbFire();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_Mod_Swarm();
	void OnHomeStatusChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
