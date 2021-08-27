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

// BlueprintGeneratedClass Tracer_Ruin.Tracer_Ruin_C
// 0x0000
class ATracer_Ruin_C : public ATracer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tracer_Ruin.Tracer_Ruin_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracer_Ruin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
