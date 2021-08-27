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

// BlueprintGeneratedClass Action_Debuff_StaticField.Action_Debuff_StaticField_C
// 0x0000
class UAction_Debuff_StaticField_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_StaticField.Action_Debuff_StaticField_C");
		return ptr;
	}



	void MarkTargetShocked();
	void GetSparkPoint();
	void UpdatePotentialTarget();
	void OnTick();
	void OnTakeDamage();
	void Trigger();
	void DoSpark();
	void OnActionStart();
	void ListenForShockDamage();
	void ExecuteUbergraph_Action_Debuff_StaticField();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
