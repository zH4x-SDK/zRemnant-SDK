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

// BlueprintGeneratedClass MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C
// 0x0000
class AMiniMap_Tile_Support_Actor_C : public AMinimapThumbnail
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MiniMap_Tile_Support_Actor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
