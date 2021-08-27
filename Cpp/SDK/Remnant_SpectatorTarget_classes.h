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

// BlueprintGeneratedClass Remnant_SpectatorTarget.Remnant_SpectatorTarget_C
// 0x0000
class URemnant_SpectatorTarget_C : public USpectatorTargetComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_SpectatorTarget.Remnant_SpectatorTarget_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnDead_Event_1();
	void ReceiveEndPlay();
	void ExecuteUbergraph_Remnant_SpectatorTarget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
