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

// BlueprintGeneratedClass Action_Debuff_NightmareRealm.Action_Debuff_NightmareRealm_C
// 0x0000
class UAction_Debuff_NightmareRealm_C : public UAction_DOT_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_NightmareRealm.Action_Debuff_NightmareRealm_C");
		return ptr;
	}



	void SetDamageScale();
	void IncreaseDamage();
	void IsNightmareMode_();
	void GetDamageScalar();
	void SetActionLevel();
	void Check_players();
	void ShowScreenEffect();
	void ModifyDamage();
	void IncreaseDamageOnKill();
	void CanDoDamage();
	void OnActionStop();
	void OnHitTarget();
	void OnActionStart();
	void OnClearScreenEffect();
	void OnDead_Event_1();
	void ExecuteUbergraph_Action_Debuff_NightmareRealm();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
