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

// BlueprintGeneratedClass Mod_VeryGoodBoy.Mod_VeryGoodBoy_C
// 0x0000
class AMod_VeryGoodBoy_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_VeryGoodBoy.Mod_VeryGoodBoy_C");
		return ptr;
	}



	void GetVeryGoodBoyHealthScalar();
	void DoAction();
	void GetDuration();
	void GetVeryGoodBoyDamage();
	void ModifyInspectInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
