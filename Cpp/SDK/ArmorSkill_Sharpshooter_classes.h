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

// BlueprintGeneratedClass ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C
// 0x0000
class UArmorSkill_Sharpshooter_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Sharpshooter.ArmorSkill_Sharpshooter_C");
		return ptr;
	}



	void ModifyDamage();
	void GetRangedDamageScalar();
	void GetTierDescription();
	void GetDescription();
	void GetWeakspotDamageMod();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_Sharpshooter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
