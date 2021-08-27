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

// BlueprintGeneratedClass Action_Mod_Blizzard.Action_Mod_Blizzard_C
// 0x0000
class UAction_Mod_Blizzard_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Blizzard.Action_Mod_Blizzard_C");
		return ptr;
	}



	void GetWeapon();
	void GetDamageCause();
	void OnActionStart();
	void OnDurationExpired();
	void ExecuteUbergraph_Action_Mod_Blizzard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
