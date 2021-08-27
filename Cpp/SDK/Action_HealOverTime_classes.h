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

// BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C
// 0x0000
class UAction_HealOverTime_C : public UAction_Buff_DurationMod_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C");
		return ptr;
	}



	void OnActionStart();
	void OnComputeStats();
	void ExecuteUbergraph_Action_HealOverTime();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
