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

// BlueprintGeneratedClass BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C
// 0x0000
class ABP_Mod_Banish_Footprint_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SoftDestroy();
	void SetDuration();
	void ExecuteUbergraph_BP_Mod_Banish_Footprint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
