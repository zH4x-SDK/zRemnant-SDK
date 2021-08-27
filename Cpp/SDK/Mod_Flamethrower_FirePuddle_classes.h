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

// BlueprintGeneratedClass Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C
// 0x0000
class AMod_Flamethrower_FirePuddle_C : public ABP_Aura_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C");
		return ptr;
	}



	void AddFireStack();
	void DoAction();
	void StopAction();
	void MulticastFadeOut();
	void FX_Start();
	void FX_Stop();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void ExecuteUbergraph_Mod_Flamethrower_FirePuddle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
