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

// BlueprintGeneratedClass Tracer_Defiler.Tracer_Defiler_C
// 0x0000
class ATracer_Defiler_C : public ATracer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tracer_Defiler.Tracer_Defiler_C");
		return ptr;
	}



	void BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature();
	void BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature();
	void ExecuteUbergraph_Tracer_Defiler();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
