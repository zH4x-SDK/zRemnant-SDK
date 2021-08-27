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

// BlueprintGeneratedClass TPSGameState.TPSGameState_C
// 0x0000
class ATPSGameState_C : public ARemnantGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TPSGameState.TPSGameState_C");
		return ptr;
	}



	void UpdateTimePlayed();
	void ReceiveTick();
	void BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature();
	void ExecuteUbergraph_TPSGameState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
