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

// BlueprintGeneratedClass Interactive_Dragon_Crystal_Survival.Interactive_Dragon_Crystal_Survival_C
// 0x0000
class AInteractive_Dragon_Crystal_Survival_C : public AInteractive_DragonCrystal_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Dragon_Crystal_Survival.Interactive_Dragon_Crystal_Survival_C");
		return ptr;
	}



	void PlayActivateVFX();
	void Animate_PP_Radius_Off__FinishedFunc();
	void Animate_PP_Radius_Off__UpdateFunc();
	void Animate_PP_On__FinishedFunc();
	void Animate_PP_On__UpdateFunc();
	void OnBeginActivation();
	void OnBeginGrab();
	void State_Active();
	void MultiDisableWaypoint();
	void ActivateIdleVFX();
	void OnActivate();
	void OnStateChange_Event_1();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Interactive_Dragon_Crystal_Survival();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
