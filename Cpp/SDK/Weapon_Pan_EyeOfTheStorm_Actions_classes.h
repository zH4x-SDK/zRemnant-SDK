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

// BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C
// 0x0000
class UWeapon_Pan_EyeOfTheStorm_Actions_C : public UAction_List_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif