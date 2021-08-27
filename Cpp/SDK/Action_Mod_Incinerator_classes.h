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

// BlueprintGeneratedClass Action_Mod_Incinerator.Action_Mod_Incinerator_C
// 0x0000
class UAction_Mod_Incinerator_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Incinerator.Action_Mod_Incinerator_C");
		return ptr;
	}



	void ApplyFireDOTStacking();
	void GetWeapon();
	void GetDamageCause();
	void ReadValues();
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_Incinerator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
