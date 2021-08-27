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

// BlueprintGeneratedClass BP_HealthBar.BP_HealthBar_C
// 0x0000
class ABP_HealthBar_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HealthBar.BP_HealthBar_C");
		return ptr;
	}



	void GetTargetHeightAndRadius();
	void DestroyHealthBar();
	void UpdateTransform();
	void Init();
	void ReceiveTick();
	void ExecuteUbergraph_BP_HealthBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
