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

// BlueprintGeneratedClass Weapon_ComputedStats.Weapon_ComputedStats_C
// 0x0000
class UWeapon_ComputedStats_C : public UComputedStats
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_ComputedStats.Weapon_ComputedStats_C");
		return ptr;
	}



	void OnComputeDerivedStats();
	void ExecuteUbergraph_Weapon_ComputedStats();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
