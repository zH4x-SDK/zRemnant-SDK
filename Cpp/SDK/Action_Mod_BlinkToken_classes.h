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

// BlueprintGeneratedClass Action_Mod_BlinkToken.Action_Mod_BlinkToken_C
// 0x0000
class UAction_Mod_BlinkToken_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_BlinkToken.Action_Mod_BlinkToken_C");
		return ptr;
	}



	void ForceStopTeleport();
	void CanBlink();
	void FilterIncomingDamage();
	void Set_Player_State();
	void UpdateIndicator();
	void ClearIndicator();
	void SetPlayerVisibility();
	void TryFinalizeTeleport();
	void TryInitializeTeleport();
	void OnActionStart();
	void OnTick();
	void MulticastFinalizeLocation();
	void ServerFinalizeTeleport();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_BlinkToken();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
