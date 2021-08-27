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

// BlueprintGeneratedClass BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C
// 0x0000
class ABP_ImpactVisualization_Base_NonFireMode_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ImpactVisualization_Base_NonFireMode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
