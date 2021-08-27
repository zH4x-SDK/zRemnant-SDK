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

// BlueprintGeneratedClass Character_Root_Broken.Character_Root_Broken_C
// 0x0000
class ACharacter_Root_Broken_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Broken.Character_Root_Broken_C");
		return ptr;
	}



	void Spawn_Splitter();
	void InEventRegion();
	void SplitterKilled();
	void SplittersDead();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature();
	void OnEnterDown();
	void OnExitDown();
	void SFX_Sprint_On();
	void OnDead_Event_2();
	void OnSplitRight();
	void OnRegenerateLeft();
	void OnRegenerateRight();
	void OnSplitLeft();
	void OnQuestFailed();
	void IntroComplete();
	void SplitterDissolveOut();
	void SplitterSetScale();
	void ExecuteUbergraph_Character_Root_Broken();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
