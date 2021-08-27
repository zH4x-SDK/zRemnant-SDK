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

// BlueprintGeneratedClass ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C
// 0x0000
class UArmorSkill_Regrowth_Action_StatsStacking_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C");
		return ptr;
	}



	void OnTakeDamage();
	void OnComputeStats();
	void OnLevelChanged();
	void OnActionStart();
	void ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
