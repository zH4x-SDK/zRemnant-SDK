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

// BlueprintGeneratedClass Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C
// 0x0000
class AMod_BreathOfTheDesert_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C");
		return ptr;
	}



	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void OnBeginUse();
	void OnEndUse();
	void OnPreviewStart();
	void ExecuteUbergraph_Mod_BreathOfTheDesert();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
