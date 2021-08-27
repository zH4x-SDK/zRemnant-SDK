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

// BlueprintGeneratedClass ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C
// 0x0000
class UArmorSkill_TriggerOnHit_C : public UArmorSkill_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C");
		return ptr;
	}



	void Trigger();
	void OnTakeDamage();
	void ExecuteUbergraph_ArmorSkill_TriggerOnHit();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
