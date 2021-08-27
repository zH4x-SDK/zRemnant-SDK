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

// BlueprintGeneratedClass Character_Root_Splitter.Character_Root_Splitter_C
// 0x0000
class ACharacter_Root_Splitter_C : public ACharacter_Root_Broken_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter.Character_Root_Splitter_C");
		return ptr;
	}



	void HeartbeatTimeline__FinishedFunc();
	void HeartbeatTimeline__UpdateFunc();
	void OnDead_Event_2();
	void Leech();
	void LeaveDormant();
	void EmisOff();
	void EmisOn();
	void BndEvt__Tween_K2Node_ComponentBoundEvent_0_TweenCompleteDelegate__DelegateSignature();
	void SplitterShockwave();
	void DelayedSetState();
	void SplitterHeal();
	void SFX_HeartLoop_On();
	void SFX_HeartLoop_Off();
	void OnHealStartVFX();
	void ReceiveBeginPlay();
	void GainShield();
	void SplitterEndHeal();
	void OnSplitRight();
	void DoHealPulse();
	void ExecuteUbergraph_Character_Root_Splitter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
