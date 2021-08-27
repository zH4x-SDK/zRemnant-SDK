﻿#pragma once

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

// BlueprintGeneratedClass Remnant_SpectatorPawn.Remnant_SpectatorPawn_C
// 0x0000
class ARemnant_SpectatorPawn_C : public ARemnantSpectatorPawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_SpectatorPawn.Remnant_SpectatorPawn_C");
		return ptr;
	}



	void ShowJoinSpectateDialog();
	void GetJoinSpectateDialog();
	void ShouldAutoSpectate();
	void GetDeathScreen();
	void ShowDeathScreen();
	void OnFinishTravel();
	void ReceiveTick();
	void OnInvalidTarget();
	void OnValidTarget();
	void ExecuteUbergraph_Remnant_SpectatorPawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif