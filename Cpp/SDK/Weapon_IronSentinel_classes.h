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

// BlueprintGeneratedClass Weapon_IronSentinel.Weapon_IronSentinel_C
// 0x0000
class AWeapon_IronSentinel_C : public AWeapon_Gun_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_IronSentinel.Weapon_IronSentinel_C");
		return ptr;
	}



	void OnComputeStats();
	void ExecuteUbergraph_Weapon_IronSentinel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
