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

// BlueprintGeneratedClass BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C
// 0x0000
class ABP_Teleport_LocationDreamer_C : public ASpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C");
		return ptr;
	}



	void OnTeleportFX();
	void Teleport();
	void ExecuteUbergraph_BP_Teleport_LocationDreamer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
