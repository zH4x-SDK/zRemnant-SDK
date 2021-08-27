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

// BlueprintGeneratedClass Action_Buff.Action_Buff_C
// 0x0000
class UAction_Buff_C : public UActionBuff
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Buff.Action_Buff_C");
		return ptr;
	}



	void GetDesiredVisual();
	void UpdateIcon();
	void OnReapplyBuff();
	void ClearVisual();
	void SetVisual();
	void GetActionCount();
	void AllowAction();
	void OnDurationTimer();
	void OnActionStart();
	void OnTakeDamage();
	void MulticastResetTimer();
	void OnActionStop();
	void OnDead_Event_1();
	void OnRevived();
	void OnLevelChanged();
	void MulticastReapplyBuff();
	void OnWorldReset();
	void ExecuteUbergraph_Action_Buff();
	void LevelChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
