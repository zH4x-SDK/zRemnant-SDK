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

// AnimBlueprintGeneratedClass Weapon_Root_SporeLauncher_AnimsBP.Weapon_Root_SporeLauncher_AnimsBP_C
// 0x0000
class UWeapon_Root_SporeLauncher_AnimsBP_C : public UAnimInstanceGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Root_SporeLauncher_AnimsBP.Weapon_Root_SporeLauncher_AnimsBP_C");
		return ptr;
	}



	void ExecuteUbergraph_Weapon_Root_SporeLauncher_AnimsBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
