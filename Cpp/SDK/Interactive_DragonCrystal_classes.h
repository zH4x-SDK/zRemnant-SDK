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

// BlueprintGeneratedClass Interactive_DragonCrystal.Interactive_DragonCrystal_C
// 0x0000
class AInteractive_DragonCrystal_C : public AInteractive_Checkpoint_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_DragonCrystal.Interactive_DragonCrystal_C");
		return ptr;
	}



	void IsPlayerBaseCrystal();
	void EndGrab();
	void BeginGrab();
	void AlignToWaypoint();
	void State_Activate();
	void State_Active();
	void State_Inactive();
	void PlayBlastFX();
	void BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature();
	void OnActivate();
	void ReceiveBeginPlay();
	void BeginUseCheckpoint();
	void EndUseCheckpoint();
	void TransitionToMenu();
	void TransitionFromMenu();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature();
	void ActivateIdleVFX();
	void ExecuteUbergraph_Interactive_DragonCrystal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
