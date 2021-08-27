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

// BlueprintGeneratedClass Interactive_Fusebox.Interactive_Fusebox_C
// 0x0000
class AInteractive_Fusebox_C : public ABP_Inspectable_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Fusebox.Interactive_Fusebox_C");
		return ptr;
	}



	void HasFuseInFusebox();
	void CanUseItem();
	void OnRep_HasFuse();
	void UpdateTriggerObjects();
	void UpdateState();
	void UseItem();
	void DelayedUpdateTriggerObjects();
	void OnTurnOn();
	void OnTurnOff();
	void BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature();
	void OnInsertFuse();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Interactive_Fusebox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
