﻿#pragma once

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

// BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C
// 0x0000
class UArmorSkill_Reciprocity_Action_Defense_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C");
		return ptr;
	}



	void FilterIncomingDamage();
	void OnReapplyBuff();
	void ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
