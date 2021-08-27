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

// BlueprintGeneratedClass Interactive_Door_Base.Interactive_Door_Base_C
// 0x0000
class AInteractive_Door_Base_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Door_Base.Interactive_Door_Base_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature();
	void ExecuteUbergraph_Interactive_Door_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
