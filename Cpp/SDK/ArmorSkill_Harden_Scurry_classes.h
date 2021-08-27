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

// BlueprintGeneratedClass ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C
// 0x0000
class UArmorSkill_Harden_Scurry_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C");
		return ptr;
	}



	void OnActionStart();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_ArmorSkill_Harden_Scurry();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
