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

// BlueprintGeneratedClass Character_Swamp_SlimeHulk_Projectile.Character_Swamp_SlimeHulk_Projectile_C
// 0x0000
class ACharacter_Swamp_SlimeHulk_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_SlimeHulk_Projectile.Character_Swamp_SlimeHulk_Projectile_C");
		return ptr;
	}



	void FXImpact();
	void BroadcastSoftDestroy();
	void ReceiveBeginPlay();
	void OnProjectileStop();
	void OnWaterFloat();
	void BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature();
	void BndEvt__Proximity_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature();
	void OnProjectileHit();
	void ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
