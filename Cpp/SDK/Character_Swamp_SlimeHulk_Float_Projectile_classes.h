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

// BlueprintGeneratedClass Character_Swamp_SlimeHulk_Float_Projectile.Character_Swamp_SlimeHulk_Float_Projectile_C
// 0x0000
class ACharacter_Swamp_SlimeHulk_Float_Projectile_C : public ADamageableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_SlimeHulk_Float_Projectile.Character_Swamp_SlimeHulk_Float_Projectile_C");
		return ptr;
	}



	void Destroy();
	void PlayDestroyFX();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__EnvDetect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void PlaySpawnFX();
	void OnNotifyTakeDamage();
	void ExecuteUbergraph_Character_Swamp_SlimeHulk_Float_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
