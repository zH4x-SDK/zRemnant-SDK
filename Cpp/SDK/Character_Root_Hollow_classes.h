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

// BlueprintGeneratedClass Character_Root_Hollow.Character_Root_Hollow_C
// 0x0000
class ACharacter_Root_Hollow_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Hollow.Character_Root_Hollow_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnTeleportOut();
	void OnTeleportIn();
	void OnShieldBreak();
	void OnFXLoopStart();
	void OnFXLoopEnd();
	void OnHollowAbsorbStart();
	void DissolveOut();
	void OnDead_Event_2();
	void ExecuteUbergraph_Character_Root_Hollow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
