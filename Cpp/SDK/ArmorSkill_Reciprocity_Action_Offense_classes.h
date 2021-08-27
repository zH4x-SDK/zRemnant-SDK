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

// BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C
// 0x0000
class UArmorSkill_Reciprocity_Action_Offense_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C");
		return ptr;
	}



	void ModifyDamage();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
