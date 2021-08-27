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

// BlueprintGeneratedClass Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C
// 0x0000
class AWeapon_Wasteland_Ruin_C : public AWeapon_LongGun_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C");
		return ptr;
	}



	void OnActivated();
	void ExecuteUbergraph_Weapon_Wasteland_Ruin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
