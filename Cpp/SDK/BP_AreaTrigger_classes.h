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

// BlueprintGeneratedClass BP_AreaTrigger.BP_AreaTrigger_C
// 0x0000
class ABP_AreaTrigger_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AreaTrigger.BP_AreaTrigger_C");
		return ptr;
	}



	void IsTraveling();
	void GetActorTileID();
	void GetTileID();
	void GetLocalPawn();
	void DisableAll();
	void Disable();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void ReceiveTick();
	void ExecuteUbergraph_BP_AreaTrigger();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
