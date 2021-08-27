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

// BlueprintGeneratedClass Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C
// 0x0000
class UMod_HuntersMark_Aura_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C");
		return ptr;
	}



	void OnActionRemoved();
	void Bind_and_add_action_id_to_map();
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Mod_HuntersMark_Aura();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
