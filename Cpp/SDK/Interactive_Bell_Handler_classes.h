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

// BlueprintGeneratedClass Interactive_Bell_Handler.Interactive_Bell_Handler_C
// 0x0000
class AInteractive_Bell_Handler_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Bell_Handler.Interactive_Bell_Handler_C");
		return ptr;
	}



	void UpdateTriggerObjects();
	void ReceiveBeginPlay();
	void OnRingBell();
	void Reset();
	void ExecuteUbergraph_Interactive_Bell_Handler();
	void OnTriggered__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
