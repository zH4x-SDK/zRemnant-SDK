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

// BlueprintGeneratedClass Weapon_Root_Spitfire.Weapon_Root_Spitfire_C
// 0x0000
class AWeapon_Root_Spitfire_C : public AWeapon_Submachinegun_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Root_Spitfire.Weapon_Root_Spitfire_C");
		return ptr;
	}



	void OnRep_FlameActive();
	void UserConstructionScript();
	void SetFlameActive();
	void ServerSetFlameActive();
	void UpdateFlameVFX();
	void ExecuteUbergraph_Weapon_Root_Spitfire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
