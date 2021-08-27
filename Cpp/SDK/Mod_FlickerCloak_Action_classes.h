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

// BlueprintGeneratedClass Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C
// 0x0000
class UMod_FlickerCloak_Action_C : public UAction_Shield_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C");
		return ptr;
	}



	void GetShieldDecay();
	void GetShieldMax();
	void OnTick();
	void ExecuteUbergraph_Mod_FlickerCloak_Action();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
