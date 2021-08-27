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

// BlueprintGeneratedClass ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C
// 0x0000
class UArmorSkill_ModifySingleStat_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C");
		return ptr;
	}



	void GetValue();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_ModifySingleStat();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
