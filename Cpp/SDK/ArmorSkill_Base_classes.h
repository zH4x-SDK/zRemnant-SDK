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

// BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C
// 0x0000
class UArmorSkill_Base_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C");
		return ptr;
	}



	void GetTierDescription();
	void GetSkillLevel();
	void ComputeBonus();
	void ModifyInspectInfo();
	void GetDescription();
	void ReleaseLevel();
	void AllowAction();
	void OnEquipped();
	void ExecuteUbergraph_ArmorSkill_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
