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

// BlueprintGeneratedClass Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C
// 0x0000
class AWeapon_Pan_VoiceOfTheTempest_C : public AWeapon_Spear_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnActivated();
	void OnHitTarget();
	void OnEquipped();
	void OnUnequipped();
	void OnStateChange();
	void ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
