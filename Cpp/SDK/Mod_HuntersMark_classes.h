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

// BlueprintGeneratedClass Mod_HuntersMark.Mod_HuntersMark_C
// 0x0000
class AMod_HuntersMark_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_HuntersMark.Mod_HuntersMark_C");
		return ptr;
	}



	void OnActionRemoved();
	void GetCritChanceMod();
	void DoAction();
	void ModifyInspectInfo();
	void OnDetached();
	void ExecuteUbergraph_Mod_HuntersMark();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
