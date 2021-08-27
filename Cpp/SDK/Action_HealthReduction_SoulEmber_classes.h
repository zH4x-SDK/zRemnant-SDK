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

// BlueprintGeneratedClass Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C
// 0x0000
class UAction_HealthReduction_SoulEmber_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C");
		return ptr;
	}



	void CheckTag();
	void HasSoulEmber();
	void OnComputeStats();
	void OnActionStart();
	void ExecuteUbergraph_Action_HealthReduction_SoulEmber();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
