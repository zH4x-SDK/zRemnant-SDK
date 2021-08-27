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

// BlueprintGeneratedClass BP_Wasteland_Sludge.BP_Wasteland_Sludge_C
// 0x0000
class ABP_Wasteland_Sludge_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wasteland_Sludge.BP_Wasteland_Sludge_C");
		return ptr;
	}



	void OnDestroy();
	void UserConstructionScript();
	void SFX_Stop();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature();
	void SFX_Start();
	void ExecuteUbergraph_BP_Wasteland_Sludge();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
