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

// BlueprintGeneratedClass BP_RemnantPingManager.BP_RemnantPingManager_C
// 0x0000
class UBP_RemnantPingManager_C : public URemnantPingManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantPingManager.BP_RemnantPingManager_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnCharacterPing_Event_1();
	void ExecuteUbergraph_BP_RemnantPingManager();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
