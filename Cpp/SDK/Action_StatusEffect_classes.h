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

// BlueprintGeneratedClass Action_StatusEffect.Action_StatusEffect_C
// 0x0000
class UAction_StatusEffect_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect.Action_StatusEffect_C");
		return ptr;
	}



	void GetRemainingTime();
	void Remove_Status_Effect();
	void ApplyStatusDamage();
	void UpdateDecay();
	void GetValuePct();
	void AllowAction();
	void OnTick();
	void OnActionStart();
	void OnPostComputeStats();
	void OnValueChanged();
	void OnWorldReset();
	void ExecuteUbergraph_Action_StatusEffect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
