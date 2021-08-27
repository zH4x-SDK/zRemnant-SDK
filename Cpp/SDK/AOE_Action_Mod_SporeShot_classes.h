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

// BlueprintGeneratedClass AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C
// 0x0000
class UAOE_Action_Mod_SporeShot_C : public UAction_AOE_Attack_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_AOE_Action_Mod_SporeShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
