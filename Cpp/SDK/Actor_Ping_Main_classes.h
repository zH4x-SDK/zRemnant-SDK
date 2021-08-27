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

// BlueprintGeneratedClass Actor_Ping_Main.Actor_Ping_Main_C
// 0x0000
class AActor_Ping_Main_C : public ARemnantPingActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Actor_Ping_Main.Actor_Ping_Main_C");
		return ptr;
	}



	void OnDialogStarted();
	void ReceiveBeginPlay();
	void SetPingDetails();
	void ExecuteUbergraph_Actor_Ping_Main();
	void OnContextSet__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
