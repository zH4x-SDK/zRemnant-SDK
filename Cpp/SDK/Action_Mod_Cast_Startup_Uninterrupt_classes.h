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

// BlueprintGeneratedClass Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C
// 0x0000
class UAction_Mod_Cast_Startup_Uninterrupt_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C");
		return ptr;
	}



	void FilterIncomingDamage();
	void OnTick();
	void ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
