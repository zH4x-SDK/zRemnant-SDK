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

// BlueprintGeneratedClass ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C
// 0x0000
class UArmorSkill_Juggernaut_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C");
		return ptr;
	}



	void GetStaggerReductionChance();
	void GetDescription();
	void FilterIncomingDamage();
	void GetTierDescription();
	void OnActionStart();
	void Timer();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_Juggernaut();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
