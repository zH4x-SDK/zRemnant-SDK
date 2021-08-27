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

// BlueprintGeneratedClass Weapon_Spear.Weapon_Spear_C
// 0x0000
class AWeapon_Spear_C : public AWeapon_Melee_SkinnedBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Spear.Weapon_Spear_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnInHand();
	void OnNotInHand();
	void ExecuteUbergraph_Weapon_Spear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
