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

// BlueprintGeneratedClass Mod_Blizzard.Mod_Blizzard_C
// 0x0000
class AMod_Blizzard_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Blizzard.Mod_Blizzard_C");
		return ptr;
	}



	void DoAction();
	void ModifyDamage();
	void ModifyInspectInfo();
	void OnBeginUse();
	void OnEndUse();
	void ExecuteUbergraph_Mod_Blizzard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
