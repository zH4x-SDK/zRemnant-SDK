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

// BlueprintGeneratedClass BP_TOD_Modifier.BP_TOD_Modifier_C
// 0x0000
class ABP_TOD_Modifier_C : public AZoneRegion
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TOD_Modifier.BP_TOD_Modifier_C");
		return ptr;
	}



	void SetColorScheme();
	void ReceiveBeginPlay();
	void OnRegionEnter();
	void Update();
	void SetLabSky();
	void SetLabSky_MC();
	void ExecuteUbergraph_BP_TOD_Modifier();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
