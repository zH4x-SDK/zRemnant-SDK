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

// BlueprintGeneratedClass Action_Mod_Vampiric.Action_Mod_Vampiric_C
// 0x0000
class UAction_Mod_Vampiric_C : public UAction_HealOverTime_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Vampiric.Action_Mod_Vampiric_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_Vampiric();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
