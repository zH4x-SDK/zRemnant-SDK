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

// BlueprintGeneratedClass BP_BlinkIndicator.BP_BlinkIndicator_C
// 0x0000
class ABP_BlinkIndicator_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlinkIndicator.BP_BlinkIndicator_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveEndPlay();
	void ExecuteUbergraph_BP_BlinkIndicator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
