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

// BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C
// 0x0000
class UBP_TutorialComponent_C : public UTutorialComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C");
		return ptr;
	}



	void IncrementCounter();
	void GetSave();
	void CheckCounter();
	void HasDragonHeart();
	void HasTwoRangedWeapons();
	void CanUseWeaponMod();
	void HasMeleeWeapon();
	void HasRangedWeapon();
	void SetCooldown();
	void CheckCooldown();
	void NotifyWounded();
	void OnWoundedState_Event_1();
	void SetupWoundedTutorial();
	void OnWoundedState_Event_2();
	void SetupReloadTutorial();
	void OnReloadTutorialTimer();
	void SetupToggleWeaponTutorial();
	void OnToggleWeaponEvent();
	void SetupAttackTutorial();
	void CheckForTarget();
	void SetupDodgeTutorial();
	void OnDodgeTutorialNotifyTakeDamage();
	void SetupTraitsTutorial();
	void OnLevelUp_Event_1();
	void SetupHealthTutorial();
	void OnHealthTutorialNotifyTakeDamage();
	void OnUsedDragonHeart();
	void ReceiveBeginPlay();
	void OnEvent_Event_1();
	void ExecuteUbergraph_BP_TutorialComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
