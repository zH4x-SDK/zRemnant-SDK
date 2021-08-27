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

// WidgetBlueprintGeneratedClass Widget_Hud_Survival.Widget_Hud_Survival_C
// 0x0000
class UWidget_Hud_Survival_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Hud_Survival.Widget_Hud_Survival_C");
		return ptr;
	}



	void NotifyBonus();
	void InitializeDetails();
	void PlayPanicSFX();
	void DetermineCountdownDeltas();
	void SetBossBorder();
	void NotifyBossesKilled();
	void DecrementRemainingTime();
	void SetExpBar();
	void SetFlashingCountdown();
	void OnDifficultyIncreased();
	void UpdatePlayerLevel();
	void GetPlayerCurrency();
	void SetDifficulty();
	void GetPlayerLevel();
	void GetPercentageOfTime();
	void GetRemainingTimeText();
	void IsPaused();
	void GetIncrementDuration();
	void GetRemainingTime();
	void Reset();
	void IncrementDifficultyUI();
	void UnpauseTimer();
	void PauseTimer();
	void Construct();
	void Tick();
	void OnLevelUp_Event_1();
	void On_Picked_up_unique();
	void OnEXPGain();
	void OnWidgetAssigned();
	void ExecuteUbergraph_Widget_Hud_Survival();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
