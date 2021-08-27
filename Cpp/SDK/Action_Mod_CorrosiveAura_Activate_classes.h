﻿#pragma once

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

// BlueprintGeneratedClass Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C
// 0x0000
class UAction_Mod_CorrosiveAura_Activate_C : public UAction_Aura_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C");
		return ptr;
	}



	void UpdateOverlaps02();
	void OnActionStart();
	void OnActionStop();
	void ApplyCorrosiveStacks();
	void OnBeginOverlap();
	void ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
