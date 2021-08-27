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

// BlueprintGeneratedClass Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C
// 0x0000
class AWeapon_Swamp_PrideOfTheIskal_C : public AWeapon_HandGun_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C");
		return ptr;
	}



	void SetInactiveVFX();
	void SetActiveVFX();
	void OnFire();
	void OnActivateMod_Event_1();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
