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

// BlueprintGeneratedClass ArmorSkill_Regrowth.ArmorSkill_Regrowth_C
// 0x0000
class UArmorSkill_Regrowth_C : public UArmorSkill_ModifySingleStat_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Regrowth.ArmorSkill_Regrowth_C");
		return ptr;
	}



	void GetValue();
	void GetDamageScalar();
	void GetDescription();
	void GetHealthRegenDisplay();
	void GetTierDescription();
	void OnComputeStats();
	void OnActionStart();
	void AddStack();
	void OnActionStop();
	void ExecuteUbergraph_ArmorSkill_Regrowth();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
