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

// BlueprintGeneratedClass Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C
// 0x0000
class UAction_AOE_Trinket_SoulEmber_C : public UAction_AOE_ForceImpulse_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C");
		return ptr;
	}



	void ModifyDamage();
	void GetDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
