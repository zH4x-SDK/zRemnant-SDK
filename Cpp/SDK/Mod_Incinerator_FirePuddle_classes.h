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

// BlueprintGeneratedClass Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C
// 0x0000
class AMod_Incinerator_FirePuddle_C : public ABP_Aura_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C");
		return ptr;
	}



	void Add_Fire_Stack();
	void FX_Start();
	void FX_Stop();
	void ReceiveBeginPlay();
	void DoAction();
	void MulticastFadeOut();
	void StopAction();
	void ReceiveTick();
	void StopForCinematic();
	void ExecuteUbergraph_Mod_Incinerator_FirePuddle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
