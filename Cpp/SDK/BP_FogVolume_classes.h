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

// BlueprintGeneratedClass BP_FogVolume.BP_FogVolume_C
// 0x0000
class ABP_FogVolume_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogVolume.BP_FogVolume_C");
		return ptr;
	}



	void UserConstructionScript();
	void Changeopacity();
	void UpdateFogVolumeOpacity();
	void ExecuteUbergraph_BP_FogVolume();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
