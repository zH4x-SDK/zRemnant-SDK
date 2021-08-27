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

// BlueprintGeneratedClass Mod_FlickerCloak.Mod_FlickerCloak_C
// 0x0000
class AMod_FlickerCloak_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FlickerCloak.Mod_FlickerCloak_C");
		return ptr;
	}



	void GetShieldHealthPctScalar();
	void DoAction();
	void GetModActiveRemainingPct();
	void ModifyInspectInfo();
	void OnBeginUse();
	void AddModPower();
	void ExecuteUbergraph_Mod_FlickerCloak();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
