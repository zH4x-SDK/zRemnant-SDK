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

// BlueprintGeneratedClass ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C
// 0x0000
class UArmorSkill_Juggernaut_Action_DisplayStacks_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C");
		return ptr;
	}



	void OnActionStart();
	void UpdateStackCount();
	void ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
