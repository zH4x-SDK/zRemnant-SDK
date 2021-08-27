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

// BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C
// 0x0000
class UArmorSkill_TreasureHunter_C : public UArmorSkill_ModifySingleStat_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C");
		return ptr;
	}



	void GetDescription();
	void GetTierDescription();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_TreasureHunter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
