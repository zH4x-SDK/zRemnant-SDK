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

// WidgetBlueprintGeneratedClass CreditsRoller.CreditsRoller_C
// 0x0000
class UCreditsRoller_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsRoller.CreditsRoller_C");
		return ptr;
	}



	void StopCredits();
	void GetNextSong();
	void BuildCredits();
	void StartCredits();
	void PlayNextSong();
	void Tick();
	void Construct();
	void ExecuteUbergraph_CreditsRoller();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
