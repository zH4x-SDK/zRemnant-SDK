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

// BlueprintGeneratedClass BP_PowerSource.BP_PowerSource_C
// 0x0000
class ABP_PowerSource_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerSource.BP_PowerSource_C");
		return ptr;
	}



	void SetEnabled();
	void OnRep_Enabled();
	void ReceiveBeginPlay();
	void SetTriggerState();
	void ExecuteUbergraph_BP_PowerSource();
	void OnEnabled__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
