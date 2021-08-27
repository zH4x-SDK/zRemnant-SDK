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

// BlueprintGeneratedClass Character_Base_ComputedStats.Character_Base_ComputedStats_C
// 0x0000
class UCharacter_Base_ComputedStats_C : public UComputedStats
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Base_ComputedStats.Character_Base_ComputedStats_C");
		return ptr;
	}



	void ScaleArmorStat();
	void ModifyExperience();
	void ModifyArmorAndResistance();
	void ModifyHealth();
	void ModifyDamage();
	void OnPostComputeStats();
	void ExecuteUbergraph_Character_Base_ComputedStats();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
