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

// BlueprintGeneratedClass RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C
// 0x0000
class ARangedWeapon_Mod_Action_C : public ARemnantRangedWeaponMod_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C");
		return ptr;
	}



	void ModifyDamage();
	void DoAction();
	void OnActivate();
	void OnStartCustomIdle();
	void OnEndCustomIdle();
	void OnDetached();
	void DoBlowback();
	void ExecuteUbergraph_RangedWeapon_Mod_Action();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
