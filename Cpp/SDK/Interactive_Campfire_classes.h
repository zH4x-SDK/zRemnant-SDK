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

// BlueprintGeneratedClass Interactive_Campfire.Interactive_Campfire_C
// 0x0000
class AInteractive_Campfire_C : public AInteractive_Checkpoint_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Campfire.Interactive_Campfire_C");
		return ptr;
	}



	void ReplenishHealthOnly();
	void CanUpgrade();
	void RemoveFortifyTag();
	void OnRep_Fortified();
	void DoFortifyVisuals();
	void UpdateCampfireVisuals();
	void StateActivate();
	void StateActive();
	void ReceiveBeginPlay();
	void BeginUseCheckpoint();
	void EndUseCheckpoint();
	void OnUpgrade();
	void TransitionToMenu();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature();
	void ExecuteUbergraph_Interactive_Campfire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
