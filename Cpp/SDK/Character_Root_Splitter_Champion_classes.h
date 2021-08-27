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

// BlueprintGeneratedClass Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C
// 0x0000
class ACharacter_Root_Splitter_Champion_C : public ACharacter_Root_Splitter_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C");
		return ptr;
	}



	void SplitAtThreshold();
	void ShouldDoubleUp();
	void SetNormalChampCooldown();
	void SplitterCanAttack();
	void UpdateSplittersList();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void DoChampSplit();
	void Mus_Earth_MiniBoss_Combat_Intro_SC();
	void DoChampShockwave();
	void DoChampHeal();
	void DoChampAxeThrow();
	void DoChampDash();
	void CombatEnter();
	void DoChampHealPulse();
	void Die();
	void OnDead_Event_2();
	void KillAllSplitterClones();
	void ExecuteUbergraph_Character_Root_Splitter_Champion();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
