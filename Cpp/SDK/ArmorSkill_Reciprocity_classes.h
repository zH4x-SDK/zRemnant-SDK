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

// BlueprintGeneratedClass ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C
// 0x0000
class UArmorSkill_Reciprocity_C : public UArmorSkill_TriggerOnHit_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C");
		return ptr;
	}



	void AllowAction();
	void OnTimerExpired();
	void ResetTimer();
	void GetDamageReductionMod();
	void RemoveLevel();
	void GetTierDescription();
	void GetDescription();
	void GetDamageScalar();
	void Trigger();
	void OnLevelChanged();
	void OnActionStop();
	void OnActionStart();
	void OnComputeStats();
	void OnTierChanged();
	void ReleaseLevel();
	void ExecuteUbergraph_ArmorSkill_Reciprocity();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
