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

// BlueprintGeneratedClass Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C
// 0x0000
class UAction_Deathwish_BaseBuff_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C");
		return ptr;
	}



	void GetLifeStealPercent();
	void GetSiphonerTraitLifeStealMod();
	void GetCharactersForDevotion();
	void DoDevoted();
	void HealDamage();
	void DecreaseScaling();
	void ModifyDamage();
	void OnActionStop();
	void OnTick();
	void OnHitTarget();
	void StopForCinematic();
	void OnActionStart();
	void ExecuteUbergraph_Action_Deathwish_BaseBuff();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
