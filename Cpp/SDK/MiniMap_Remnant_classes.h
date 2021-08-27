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

// BlueprintGeneratedClass MiniMap_Remnant.MiniMap_Remnant_C
// 0x0000
class UMiniMap_Remnant_C : public UMiniMapComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Remnant.MiniMap_Remnant_C");
		return ptr;
	}



	void AddToActiveMinimap();
	void ReceiveBeginPlay();
	void ReceiveEndPlay();
	void AutoAddToMiniMap();
	void ExecuteUbergraph_MiniMap_Remnant();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
