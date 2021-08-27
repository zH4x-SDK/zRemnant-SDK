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

// BlueprintGeneratedClass ArmorSkill_Harden.ArmorSkill_Harden_C
// 0x0000
class UArmorSkill_Harden_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Harden.ArmorSkill_Harden_C");
		return ptr;
	}



	void GetTierDescriptionLevel();
	void GetMoveSpeedMod();
	void GetBrokenMovementSpeedMod();
	void FilterIncomingDamage();
	void ResetFresnel();
	void SetFresnelTime();
	void SetMaterialValues();
	void GetNumStacks();
	void OnTimerExpired();
	void ResetTimer();
	void GetTierDescription();
	void GetDescription();
	void GetDamageReductionMod();
	void OnActionStop();
	void OnActionStart();
	void OnTick();
	void OnLevelChanged();
	void CustomOnLevelChanged();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_Harden();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
