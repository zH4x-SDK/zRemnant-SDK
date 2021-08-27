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

// BlueprintGeneratedClass Mod_MantleOfThorns.Mod_MantleOfThorns_C
// 0x0000
class AMod_MantleOfThorns_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_MantleOfThorns.Mod_MantleOfThorns_C");
		return ptr;
	}



	void GetDamageReduceScalar();
	void GetDamageReflectScalar();
	void ModifyInspectInfo();
	void DoAction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
