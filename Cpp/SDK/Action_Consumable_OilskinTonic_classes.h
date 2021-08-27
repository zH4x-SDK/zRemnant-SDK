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

// BlueprintGeneratedClass Action_Consumable_OilskinTonic.Action_Consumable_OilskinTonic_C
// 0x0000
class UAction_Consumable_OilskinTonic_C : public UAction_Buff_DurationMod_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_OilskinTonic.Action_Consumable_OilskinTonic_C");
		return ptr;
	}



	void PlayFX();
	void OnActionStart();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Consumable_OilskinTonic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
