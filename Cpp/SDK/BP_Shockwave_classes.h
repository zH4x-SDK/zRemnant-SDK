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

// BlueprintGeneratedClass BP_Shockwave.BP_Shockwave_C
// 0x0000
class ABP_Shockwave_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shockwave.BP_Shockwave_C");
		return ptr;
	}



	void DoDamage();
	void DoAction();
	void Make_Scale_Vector();
	void Snap_to_Ground();
	void ScaleShockwave();
	void BndEvt__Shockwave_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Shockwave();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
