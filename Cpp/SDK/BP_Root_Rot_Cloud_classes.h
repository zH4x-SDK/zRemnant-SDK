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

// BlueprintGeneratedClass BP_Root_Rot_Cloud.BP_Root_Rot_Cloud_C
// 0x0000
class ABP_Root_Rot_Cloud_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Root_Rot_Cloud.BP_Root_Rot_Cloud_C");
		return ptr;
	}



	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Root_Rot_Cloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
