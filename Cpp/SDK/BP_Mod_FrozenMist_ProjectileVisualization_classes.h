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

// BlueprintGeneratedClass BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C
// 0x0000
class ABP_Mod_FrozenMist_ProjectileVisualization_C : public ABP_ProjectileVisualization_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C");
		return ptr;
	}



	void GetRadius();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
