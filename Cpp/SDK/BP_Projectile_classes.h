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

// BlueprintGeneratedClass BP_Projectile.BP_Projectile_C
// 0x0000
class ABP_Projectile_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile.BP_Projectile_C");
		return ptr;
	}



	void GetDamageOwner();
	void DisableReplication();
	void PlayCameraShake();
	void DestroyBreakable();
	void SetCooldown();
	void ValidateCooldown();
	void DoSecondaryEffect();
	void HitActorSimulated();
	void Hit_Actor();
	void DoAction();
	void DoDamage();
	void PlayImpactEffects();
	void Impact_Effect_Client();
	void ReceiveBeginPlay();
	void BndEvt__Projectile_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature();
	void BndEvt__Projectile_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
