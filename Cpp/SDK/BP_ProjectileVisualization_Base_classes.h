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

// BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C
// 0x0000
class ABP_ProjectileVisualization_Base_C : public AProjectileVisualization
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C");
		return ptr;
	}



	void PreDraw();
	void GetRadius();
	void PostDrawPath();
	void ExecuteUbergraph_BP_ProjectileVisualization_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
