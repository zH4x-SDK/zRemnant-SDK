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

// BlueprintGeneratedClass BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C
// 0x0000
class ABP_Projectile_Homing_MultiTarget_Base_C : public ABP_Projectile_Homing_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C");
		return ptr;
	}



	void ClearTargetIndicator();
	void ReceiveEndPlay();
	void BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature();
	void OnProjectileHit();
	void ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
