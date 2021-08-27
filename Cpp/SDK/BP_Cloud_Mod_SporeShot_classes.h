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

// BlueprintGeneratedClass BP_Cloud_Mod_SporeShot.BP_Cloud_Mod_SporeShot_C
// 0x0000
class ABP_Cloud_Mod_SporeShot_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cloud_Mod_SporeShot.BP_Cloud_Mod_SporeShot_C");
		return ptr;
	}



	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Cloud_Mod_SporeShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
