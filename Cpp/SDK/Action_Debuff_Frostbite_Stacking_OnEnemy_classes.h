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

// BlueprintGeneratedClass Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C
// 0x0000
class UAction_Debuff_Frostbite_Stacking_OnEnemy_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C");
		return ptr;
	}



	void AllowAction();
	void OnActionStart();
	void OnActionStop();
	void OnReapplyBuff();
	void SFX_Frost_Bite_Stack();
	void ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
