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

// BlueprintGeneratedClass Action_Shield.Action_Shield_C
// 0x0000
class UAction_Shield_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Shield.Action_Shield_C");
		return ptr;
	}



	void ShieldBreak();
	void GetShieldMax();
	void OnRep_ShieldValue();
	void GetShieldPct();
	void ApplyShieldDelta();
	void PlayVFX();
	void DamageShieldMaterialAmount();
	void PlaySound();
	void SetShieldAmount();
	void FilterIncomingDamage();
	void OnActionStart();
	void OnActionStop();
	void ClientShieldHit();
	void ExecuteUbergraph_Action_Shield();
	void OnShieldEmpty__DelegateSignature();
	void OnHit__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
