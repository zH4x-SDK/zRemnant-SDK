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

// BlueprintGeneratedClass ArmorSkill_Challenger.ArmorSkill_Challenger_C
// 0x0000
class UArmorSkill_Challenger_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Challenger.ArmorSkill_Challenger_C");
		return ptr;
	}



	void DistanceCheck();
	void FilterIncomingDamage();
	void GetDamageScalar();
	void GetTierDescription();
	void GetDescription();
	void ModifyDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
